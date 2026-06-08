/*
 * XREFs of PepDevicePowerControlCallback @ 0x1C00052D0
 * Callers:
 *     <none>
 * Callees:
 *     PepUpdateIdleState @ 0x1C000419C (PepUpdateIdleState.c)
 *     PepUpdatePlatformState @ 0x1C0004278 (PepUpdatePlatformState.c)
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     PepGetParkingPageInfo @ 0x1C001C738 (PepGetParkingPageInfo.c)
 */

NTSTATUS __fastcall PepDevicePowerControlCallback(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  struct _IO_WORKITEM *WorkItem; // rax
  NTSTATUS result; // eax
  ULONG v10; // ecx
  struct _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+28h] [rbp-18h]
  int v13; // [rsp+30h] [rbp-10h]

  *a7 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_PPM_PERF_CONSTRAINT_CHANGE )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    if ( !WorkItem )
      return -1073741670;
    IoQueueWorkItem(WorkItem, PepUpdatePerformanceConstraint, CriticalWorkQueue, WorkItem);
    return 0;
  }
  if ( *(_QWORD *)a2 != PEP_PPM_POWER_CONTROL_QUERY_PARKING_PAGE || *(_QWORD *)(a2 + 8) != 0xF3DF4B6734ACAAABuLL )
  {
    if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_VETO.Data1
      && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_PROCESSOR_IDLE_VETO.Data4 )
    {
      if ( a4 < 0xC )
        return -1073741789;
      if ( *(_QWORD *)(a1 + 1088) && *(_QWORD *)(a1 + 648) )
      {
        v10 = *(_DWORD *)(a1 + 56);
        ProcNumber[1] = 0;
        ProcNumber[0] = (struct _PROCESSOR_NUMBER)42;
        v12 = 0LL;
        v13 = 0;
        result = KeGetProcessorNumberFromIndex(v10, &ProcNumber[1]);
        if ( result >= 0 )
        {
          v12 = *a3;
          LOBYTE(v13) = *((_BYTE *)a3 + 8);
          return ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_1C00095C0)(ProcNumber);
        }
        return result;
      }
    }
    else
    {
      if ( *(_QWORD *)a2 != *(_QWORD *)&GUID_PLATFORM_IDLE_VETO.Data1
        || *(_QWORD *)(a2 + 8) != *(_QWORD *)GUID_PLATFORM_IDLE_VETO.Data4 )
      {
        if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_UPDATE.Data1
          && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_PROCESSOR_IDLE_UPDATE.Data4 )
        {
          if ( a4 >= 0xC )
            return PepUpdateIdleState(a1, (unsigned int *)a3);
        }
        else
        {
          if ( *(_QWORD *)a2 != *(_QWORD *)&GUID_PLATFORM_IDLE_UPDATE.Data1
            || *(_QWORD *)(a2 + 8) != *(_QWORD *)GUID_PLATFORM_IDLE_UPDATE.Data4 )
          {
            return -1073741637;
          }
          if ( a4 >= 0xC )
            return PepUpdatePlatformState(a1, (unsigned int *)a3);
        }
        return -1073741789;
      }
      if ( a4 < 0xC )
        return -1073741789;
      if ( Src || qword_1C0009878 )
      {
        *(_QWORD *)&ProcNumber[0].Group = 0LL;
        v12 = 0LL;
        ProcNumber[1] = *(struct _PROCESSOR_NUMBER *)a3;
        LODWORD(v12) = *((_DWORD *)a3 + 1);
        BYTE4(v12) = *((_BYTE *)a3 + 8);
        ProcNumber[0] = (struct _PROCESSOR_NUMBER)42;
        return ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_1C00095C8)(ProcNumber);
      }
    }
    return -1073741637;
  }
  if ( a6 < 0x10 )
  {
    *a7 = 16LL;
    return -1073741670;
  }
  result = PepGetParkingPageInfo(a1, a5);
  if ( result < 0 )
    *a7 = 0LL;
  return result;
}
