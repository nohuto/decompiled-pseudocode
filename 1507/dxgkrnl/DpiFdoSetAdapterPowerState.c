/*
 * XREFs of DpiFdoSetAdapterPowerState @ 0x1C00BBD90
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C00BC6D0 (DpiFdoHandleDevicePower.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C016FA30 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C016FC00 (DpiLdaPowerUpAdapterInChain.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DpiCorrectPowerAction @ 0x1C000CA90 (DpiCorrectPowerAction.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0061DC0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0061F00 (DxgkAcquireAdapterCoreSync.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C00BC528 (DpiDxgkDdiSetPowerState.c)
 *     DpiRequestIoPowerState @ 0x1C00BC9E0 (DpiRequestIoPowerState.c)
 *     MonitorAdapterPowerChange @ 0x1C00BCAAC (MonitorAdapterPowerChange.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00C4A50 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoDetectPostDevice @ 0x1C00DBAF0 (DpiFdoDetectPostDevice.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00DBCF0 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C0168370 (DpiFdoRebootForSurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoSetAdapterPowerState(
        PDEVICE_OBJECT DeviceObject,
        POWER_STATE State,
        int a3,
        int a4,
        unsigned int a5)
{
  char *DeviceExtension; // rdi
  unsigned int v6; // r12d
  int v8; // r13d
  POWER_STATE v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ecx
  int v15; // eax
  __int64 v16; // r8
  bool v17; // zf
  DXGADAPTER *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _BYTE v24[4]; // [rsp+30h] [rbp-68h] BYREF
  int v25; // [rsp+34h] [rbp-64h]
  PDEVICE_OBJECT v26; // [rsp+38h] [rbp-60h]
  _DWORD v27[8]; // [rsp+40h] [rbp-58h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v6 = 0;
  v25 = a3;
  v8 = a3;
  v11.SystemState = *(_DWORD *)(DeviceExtension + 248);
  if ( State.SystemState <= v11.SystemState )
  {
    if ( State.SystemState < v11.SystemState )
    {
      v15 = DpiCorrectPowerAction((__int64)DeviceObject, a4, a5);
      v17 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
      v25 = v15;
      if ( v17 && *((_DWORD *)DeviceExtension + 5) == 2 )
      {
        v26 = 0LL;
        if ( (PDEVICE_OBJECT)qword_1C0046E80 == DeviceObject )
        {
          if ( dword_1C0046F30 == 3 && byte_1C0046F50 )
          {
            DpiAcquirePostDisplayInfoFromBgfx(&dword_1C0046E90);
            byte_1C0046F50 = 0;
            v26 = DeviceObject;
          }
          if ( a4 == 5 )
          {
            if ( !byte_1C0046F49
              && (int)DpiFdoDetectPostDevice(*((_QWORD *)DeviceExtension + 3), v24) >= 0
              && v24[0] != DeviceExtension[1056] )
            {
              DpiFdoRebootForSurpriseRemoval(DeviceObject, 0LL);
            }
            v18 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 313);
            if ( (!v18 || (int)DXGADAPTER::GetDriverVersion(v18) <= 1105) && byte_1C0046C55 )
            {
              if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
                Template_q((__int64)v18, &EventProfilerEnter, v16, 8007);
              memset(v27, 0, sizeof(v27));
              v27[0] = 18;
              x86BiosCall(16LL, v27);
              memset(&dword_1C0046E90, 0, 0x20uLL);
              dword_1C0046EA8 = -1;
              memset(&xmmword_1C0046EB0, 0, 0x80uLL);
              if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
                Template_q(v19, &EventProfilerExit, v20, 8007);
            }
          }
        }
        if ( *((_DWORD *)DeviceExtension + 59) == 2 )
        {
          qword_1C0046F38 = (__int64)KeGetCurrentThread();
          qword_1C0046F40 = (__int64)v26;
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
            *((_QWORD *)DeviceExtension + 5),
            *((_QWORD *)DeviceExtension + 6),
            -1,
            (POWER_STATE)State.SystemState,
            v25);
          qword_1C0046F40 = 0LL;
          qword_1C0046F38 = 0LL;
          if ( (PDEVICE_OBJECT)qword_1C0046E80 == DeviceObject && dword_1C0046F30 == 3 )
          {
            memset(&dword_1C0046E90, 0, 0x20uLL);
            dword_1C0046EA8 = -1;
            memset(&xmmword_1C0046EB0, 0, 0x80uLL);
          }
          v6 = DpiRequestIoPowerState(DeviceObject, 2LL, 0LL, 0LL);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 2400), 1u);
          *((POWER_STATE *)DeviceExtension + 62) = State;
          ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 2400));
          KeLeaveCriticalRegion();
          if ( !DeviceExtension[449] || *((_DWORD *)DeviceExtension + 61) > 1u || DeviceExtension[450] )
          {
            DpiFdoInvalidateChildRelations(DeviceObject, 24LL);
            if ( *((_DWORD *)DeviceExtension + 62) == 1 && *((_DWORD *)DeviceExtension + 59) == 2 )
            {
              DxgkAcquireAdapterCoreSync(*((_QWORD *)DeviceExtension + 313), 2);
              MonitorAdapterPowerChange(*((DXGADAPTER **)DeviceExtension + 313));
              DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 313));
            }
          }
          else
          {
            WorkItem = IoAllocateWorkItem(DeviceObject);
            if ( WorkItem )
            {
              IoQueueWorkItemEx(WorkItem, DpiFdoInvalidateChildWorkItem, DelayedWorkQueue, 0LL);
            }
            else
            {
              v23 = (_QWORD *)WdLogNewEntry5_WdLowResource(v22);
              v23[3] = DpiFdoSetAdapterPowerState;
              v23[4] = IoAllocateWorkItem;
              v23[5] = -1073741670LL;
              WdLogEvent5_WdLowResource(v23);
            }
          }
        }
        else
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 2400), 1u);
          *((POWER_STATE *)DeviceExtension + 62) = State;
          ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 2400));
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        if ( *((_DWORD *)DeviceExtension + 59) == 2 )
          v6 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                 *((_QWORD *)DeviceExtension + 5),
                 *((_QWORD *)DeviceExtension + 6),
                 -1,
                 (POWER_STATE)State.SystemState,
                 v15);
        *((POWER_STATE *)DeviceExtension + 62) = State;
      }
      PoSetPowerState(DeviceObject, DevicePowerState, State);
    }
  }
  else
  {
    PoSetPowerState(DeviceObject, DevicePowerState, State);
    if ( *((_QWORD *)DeviceExtension + 2) == 0x274727044LL )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 2400), 1u);
      *((POWER_STATE *)DeviceExtension + 62) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 2400));
      KeLeaveCriticalRegion();
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      {
        if ( a5 == 2 )
        {
          v13 = 8;
        }
        else if ( a5 == 3 )
        {
          v13 = 16;
        }
        else
        {
          v13 = 0;
          if ( a5 - 4 <= 2 )
            v13 = 32;
          v8 = v25;
        }
        DpiRequestIoPowerState(DeviceObject, 1LL, 0LL, v13);
        v6 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
               *((_QWORD *)DeviceExtension + 5),
               *((_QWORD *)DeviceExtension + 6),
               -1,
               (POWER_STATE)State.SystemState,
               a5);
      }
      if ( v8 == 5 && (PDEVICE_OBJECT)qword_1C0046E80 == DeviceObject && dword_1C0046F30 == 3 )
      {
        byte_1C0046F50 = 1;
        LOBYTE(v12) = 1;
        InbvNotifyDisplayOwnershipChange(v12, DpiEnterSystemDisplay);
      }
    }
    else
    {
      *((POWER_STATE *)DeviceExtension + 62) = State;
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
        return (unsigned int)((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                               *((_QWORD *)DeviceExtension + 5),
                               *((_QWORD *)DeviceExtension + 6),
                               -1,
                               (POWER_STATE)State.SystemState,
                               a5);
    }
  }
  return v6;
}
