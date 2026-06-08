/*
 * XREFs of PepDevicePowerControlCallback @ 0x1C0004F10
 * Callers:
 *     <none>
 * Callees:
 *     PepUpdateIdleState @ 0x1C0003DDC (PepUpdateIdleState.c)
 *     PepUpdatePlatformState @ 0x1C0003EB8 (PepUpdatePlatformState.c)
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     PepUpdatePerformanceConstraint @ 0x1C001C2FC (PepUpdatePerformanceConstraint.c)
 *     PepGetParkingPageInfo @ 0x1C001C7A4 (PepGetParkingPageInfo.c)
 */

NTSTATUS __fastcall PepDevicePowerControlCallback(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  NTSTATUS result; // eax
  ULONG v9; // ecx
  struct _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+28h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-10h]

  *a7 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_PPM_PERF_CONSTRAINT_CHANGE )
    return PepUpdatePerformanceConstraint(a1, a2, a5);
  if ( *(_QWORD *)a2 == PEP_PPM_POWER_CONTROL_QUERY_PARKING_PAGE && *(_QWORD *)(a2 + 8) == 0xF3DF4B6734ACAAABuLL )
  {
    if ( a6 >= 0x10 )
    {
      result = PepGetParkingPageInfo(a1, a5);
      if ( result < 0 )
        *a7 = 0LL;
    }
    else
    {
      *a7 = 16LL;
      return -1073741670;
    }
    return result;
  }
  if ( *(_QWORD *)a2 != *(_QWORD *)&GUID_PROCESSOR_IDLE_VETO.Data1
    || *(_QWORD *)(a2 + 8) != *(_QWORD *)GUID_PROCESSOR_IDLE_VETO.Data4 )
  {
    if ( *(_QWORD *)a2 != *(_QWORD *)&GUID_PLATFORM_IDLE_VETO.Data1
      || *(_QWORD *)(a2 + 8) != *(_QWORD *)GUID_PLATFORM_IDLE_VETO.Data4 )
    {
      if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_UPDATE.Data1
        && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_PROCESSOR_IDLE_UPDATE.Data4 )
      {
        if ( a4 >= 0xC )
          return PepUpdateIdleState(a1, a3);
      }
      else
      {
        if ( *(_QWORD *)a2 != *(_QWORD *)&GUID_PLATFORM_IDLE_UPDATE.Data1
          || *(_QWORD *)(a2 + 8) != *(_QWORD *)GUID_PLATFORM_IDLE_UPDATE.Data4 )
        {
          return -1073741637;
        }
        if ( a4 >= 0xC )
          return PepUpdatePlatformState(a1, a3);
      }
      return -1073741789;
    }
    if ( a4 < 0xC )
      return -1073741789;
    if ( Src || qword_1C0009888 )
    {
      *(_QWORD *)&ProcNumber[0].Group = 0LL;
      v11 = 0LL;
      ProcNumber[1] = (struct _PROCESSOR_NUMBER)*a3;
      LODWORD(v11) = a3[1];
      BYTE4(v11) = *((_BYTE *)a3 + 8);
      ProcNumber[0] = (struct _PROCESSOR_NUMBER)42;
      return ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_1C00095D8)(ProcNumber);
    }
    return -1073741637;
  }
  if ( a4 < 0xC )
    return -1073741789;
  if ( !*(_QWORD *)(a1 + 1080) || !*(_QWORD *)(a1 + 640) )
    return -1073741637;
  v9 = *(_DWORD *)(a1 + 56);
  ProcNumber[1] = 0;
  ProcNumber[0] = (struct _PROCESSOR_NUMBER)42;
  v11 = 0LL;
  v12 = 0;
  result = KeGetProcessorNumberFromIndex(v9, &ProcNumber[1]);
  if ( result >= 0 )
  {
    v11 = *(_QWORD *)a3;
    LOBYTE(v12) = *((_BYTE *)a3 + 8);
    return ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_1C00095D0)(ProcNumber);
  }
  return result;
}
