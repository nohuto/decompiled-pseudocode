/*
 * XREFs of DpiFdoSetAdapterPowerState @ 0x1C00C9E50
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C00CA970 (DpiFdoHandleDevicePower.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C0174260 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C0174430 (DpiLdaPowerUpAdapterInChain.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DpiCorrectPowerAction @ 0x1C000D540 (DpiCorrectPowerAction.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00A9F00 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA040 (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00AA5F0 (DpiFdoInvalidateChildRelations.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C00CA7C8 (DpiDxgkDdiSetPowerState.c)
 *     DpiRequestIoPowerState @ 0x1C00CB040 (DpiRequestIoPowerState.c)
 *     MonitorAdapterPowerChange @ 0x1C00CB10C (MonitorAdapterPowerChange.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00CFC00 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoDetectPostDevice @ 0x1C00D00D0 (DpiFdoDetectPostDevice.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C016CAA0 (DpiFdoRebootForSurpriseRemoval.c)
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
  int v14; // eax
  __int64 v15; // r8
  bool v16; // zf
  DXGADAPTER *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  _BYTE v27[4]; // [rsp+30h] [rbp-68h] BYREF
  int v28; // [rsp+34h] [rbp-64h]
  PDEVICE_OBJECT v29; // [rsp+38h] [rbp-60h]
  _DWORD v30[8]; // [rsp+40h] [rbp-58h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v6 = 0;
  v28 = a3;
  v8 = a3;
  v11.SystemState = *(_DWORD *)(DeviceExtension + 284);
  if ( State.SystemState <= v11.SystemState )
  {
    if ( State.SystemState < v11.SystemState )
    {
      v14 = DpiCorrectPowerAction((__int64)DeviceObject, a4, a5);
      v16 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
      v28 = v14;
      if ( v16 && *((_DWORD *)DeviceExtension + 5) == 2 )
      {
        v29 = 0LL;
        if ( (PDEVICE_OBJECT)qword_1C0046F00 == DeviceObject )
        {
          if ( dword_1C0046FB0 == 3 && byte_1C0046FD0 )
          {
            DpiAcquirePostDisplayInfoFromBgfx(&dword_1C0046F10);
            byte_1C0046FD0 = 0;
            v29 = DeviceObject;
          }
          if ( a4 == 5 )
          {
            if ( !byte_1C0046FC9
              && (int)DpiFdoDetectPostDevice(*((_QWORD *)DeviceExtension + 3), v27) >= 0
              && v27[0] != DeviceExtension[1088] )
            {
              DpiFdoRebootForSurpriseRemoval(DeviceObject, 0LL);
            }
            v17 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 318);
            if ( (!v17 || (int)DXGADAPTER::GetDriverVersion(v17) <= 1105) && byte_1C0046CD5 )
            {
              if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
                Template_q((__int64)v17, &EventProfilerEnter, v15, 8007);
              memset(v30, 0, sizeof(v30));
              v30[0] = 18;
              x86BiosCall(16LL, v30);
              memset(&dword_1C0046F10, 0, 0x20uLL);
              dword_1C0046F28 = -1;
              memset(&xmmword_1C0046F30, 0, 0x80uLL);
              if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
                Template_q(v18, &EventProfilerExit, v19, 8007);
            }
          }
        }
        if ( *((_DWORD *)DeviceExtension + 59) == 2 )
        {
          qword_1C0046FB8 = (__int64)KeGetCurrentThread();
          qword_1C0046FC0 = (__int64)v29;
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
            *((_QWORD *)DeviceExtension + 5),
            *((_QWORD *)DeviceExtension + 6),
            -1,
            (POWER_STATE)State.SystemState,
            v28);
          qword_1C0046FC0 = 0LL;
          qword_1C0046FB8 = 0LL;
          if ( (PDEVICE_OBJECT)qword_1C0046F00 == DeviceObject && dword_1C0046FB0 == 3 )
          {
            memset(&dword_1C0046F10, 0, 0x20uLL);
            dword_1C0046F28 = -1;
            memset(&xmmword_1C0046F30, 0, 0x80uLL);
          }
          v6 = DpiRequestIoPowerState(DeviceObject, 2LL, 0LL, 0LL);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 2440), 1u);
          *((POWER_STATE *)DeviceExtension + 71) = State;
          ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 2440));
          KeLeaveCriticalRegion();
          if ( !DeviceExtension[481] || *((_DWORD *)DeviceExtension + 70) > 1u || DeviceExtension[482] )
          {
            DpiFdoInvalidateChildRelations((__int64)DeviceObject, 0x18u);
            if ( *((_DWORD *)DeviceExtension + 71) == 1 && *((_DWORD *)DeviceExtension + 59) == 2 )
            {
              DxgkAcquireAdapterCoreSync(*((_QWORD *)DeviceExtension + 318), 2);
              MonitorAdapterPowerChange(*((DXGADAPTER **)DeviceExtension + 318));
              DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 318), 2);
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
              v25 = (_QWORD *)WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
              v25[3] = DpiFdoSetAdapterPowerState;
              v25[4] = IoAllocateWorkItem;
              v25[5] = -1073741670LL;
              WdLogEvent5_WdLowResource(v25);
            }
          }
        }
        else
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 2440), 1u);
          *((POWER_STATE *)DeviceExtension + 71) = State;
          ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 2440));
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
                 v14);
        *((POWER_STATE *)DeviceExtension + 71) = State;
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
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 2440), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 2440));
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
          v8 = v28;
        }
        DpiRequestIoPowerState(DeviceObject, 1LL, 0LL, v13);
        v6 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
               *((_QWORD *)DeviceExtension + 5),
               *((_QWORD *)DeviceExtension + 6),
               -1,
               (POWER_STATE)State.SystemState,
               a5);
      }
      if ( v8 == 5 && (PDEVICE_OBJECT)qword_1C0046F00 == DeviceObject && dword_1C0046FB0 == 3 )
      {
        byte_1C0046FD0 = 1;
        LOBYTE(v12) = 1;
        InbvNotifyDisplayOwnershipChange(v12, DpiEnterSystemDisplay);
      }
    }
    else
    {
      *((POWER_STATE *)DeviceExtension + 71) = State;
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
