/*
 * XREFs of DpiFdoSetAdapterPowerState @ 0x1C00DF6A8
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C00DFFA0 (DpiFdoHandleDevicePower.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C019DCA8 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C019DE30 (DpiLdaPowerUpAdapterInChain.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DpiCorrectPowerAction @ 0x1C000EFE4 (DpiCorrectPowerAction.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00C1F3C (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00C2074 (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00C2FD0 (DpiFdoInvalidateChildRelations.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C00DFF00 (DpiDxgkDdiSetPowerState.c)
 *     DpiRequestIoPowerState @ 0x1C00E0898 (DpiRequestIoPowerState.c)
 *     MonitorAdapterPowerChange @ 0x1C00E0964 (MonitorAdapterPowerChange.c)
 *     DpiFdoDetectPostDevice @ 0x1C00E3374 (DpiFdoDetectPostDevice.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00E3564 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C01957B4 (DpiFdoRebootForSurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoSetAdapterPowerState(
        PDEVICE_OBJECT DeviceObject,
        POWER_STATE State,
        int a3,
        int a4,
        unsigned int a5)
{
  unsigned int v8; // r12d
  char *DeviceExtension; // rdi
  POWER_STATE v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ecx
  int v15; // eax
  __int64 v16; // r8
  bool v17; // zf
  DXGADAPTER *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  struct _IO_WORKITEM *WorkItem; // rbx
  GUID *PoolWithTag; // rax
  __int64 v25; // rax
  _BYTE v26[4]; // [rsp+30h] [rbp-51h] BYREF
  int v27; // [rsp+34h] [rbp-4Dh]
  PDEVICE_OBJECT v28; // [rsp+38h] [rbp-49h]
  GUID ActivityId[4]; // [rsp+40h] [rbp-41h] BYREF
  _DWORD v30[8]; // [rsp+80h] [rbp-1h] BYREF

  v27 = a3;
  memset(ActivityId, 0, sizeof(ActivityId));
  EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
  v8 = 0;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  *(_QWORD *)ActivityId[3].Data4 = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)ActivityId[1].Data4 = 10;
  v10.SystemState = *(_DWORD *)(DeviceExtension + 284);
  if ( State.SystemState <= v10.SystemState )
  {
    if ( State.SystemState < v10.SystemState )
    {
      v15 = DpiCorrectPowerAction((__int64)DeviceObject, a4, a5);
      v17 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
      v27 = v15;
      if ( v17 && *((_DWORD *)DeviceExtension + 5) == 2 )
      {
        v28 = 0LL;
        if ( (PDEVICE_OBJECT)qword_1C00570C0 == DeviceObject )
        {
          if ( dword_1C0057170 == 3 && byte_1C0057190 )
          {
            DpiAcquirePostDisplayInfoFromBgfx(&dword_1C00570D0);
            byte_1C0057190 = 0;
            v28 = DeviceObject;
          }
          if ( a4 == 5 )
          {
            if ( !byte_1C0057189
              && (int)DpiFdoDetectPostDevice(*((_QWORD *)DeviceExtension + 3), v26) >= 0
              && v26[0] != DeviceExtension[1136] )
            {
              DpiFdoRebootForSurpriseRemoval(DeviceObject, 0LL);
            }
            v18 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 461);
            if ( (!v18 || (int)DXGADAPTER::GetDriverVersion(v18) <= 1105) && byte_1C0056E95 )
            {
              if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                Template_q((__int64)v18, &EventProfilerEnter, v16, 8007);
              memset(v30, 0, sizeof(v30));
              v30[0] = 18;
              x86BiosCall(16LL, v30);
              memset(&dword_1C00570D0, 0, 0x20uLL);
              dword_1C00570E8 = -1;
              memset(&xmmword_1C00570F0, 0, 0x80uLL);
              if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                Template_q(v20, &EventProfilerExit, v21, 8007);
            }
          }
        }
        if ( *((_DWORD *)DeviceExtension + 59) == 2 )
        {
          if ( *((_QWORD *)DeviceExtension + 3) == qword_1C00570C0 )
          {
            qword_1C0057178 = (__int64)KeGetCurrentThread();
            qword_1C0057180 = (__int64)v28;
          }
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
            *((_QWORD *)DeviceExtension + 5),
            *((_QWORD *)DeviceExtension + 6),
            -1,
            (POWER_STATE)State.SystemState,
            v27);
          if ( (struct _KTHREAD *)qword_1C0057178 == KeGetCurrentThread() )
          {
            qword_1C0057180 = 0LL;
            qword_1C0057178 = 0LL;
          }
          if ( (PDEVICE_OBJECT)qword_1C00570C0 == DeviceObject && dword_1C0057170 == 3 )
          {
            memset(&dword_1C00570D0, 0, 0x20uLL);
            dword_1C00570E8 = -1;
            memset(&xmmword_1C00570F0, 0, 0x80uLL);
          }
          v8 = DpiRequestIoPowerState(DeviceObject, 2LL, v19, 0LL);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3584), 1u);
          *((POWER_STATE *)DeviceExtension + 71) = State;
          ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3584));
          KeLeaveCriticalRegion();
          if ( !DeviceExtension[481] || *((_DWORD *)DeviceExtension + 70) > 1u || DeviceExtension[482] )
          {
            DpiFdoInvalidateChildRelations((__int64)DeviceObject, 0x18u, (__int64)ActivityId);
            if ( *((_DWORD *)DeviceExtension + 71) == 1 && *((_DWORD *)DeviceExtension + 59) == 2 )
            {
              DxgkAcquireAdapterCoreSync(*((_QWORD *)DeviceExtension + 461), 2);
              MonitorAdapterPowerChange(*((DXGADAPTER **)DeviceExtension + 461));
              DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 461), 2);
            }
          }
          else
          {
            WorkItem = IoAllocateWorkItem(DeviceObject);
            if ( WorkItem )
            {
              PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6E6F6374u);
              if ( PoolWithTag )
              {
                *PoolWithTag = ActivityId[0];
                PoolWithTag[1] = ActivityId[1];
                PoolWithTag[2] = ActivityId[2];
                PoolWithTag[3] = ActivityId[3];
              }
              IoQueueWorkItemEx(WorkItem, DpiFdoInvalidateChildWorkItem, DelayedWorkQueue, PoolWithTag);
            }
            else
            {
              v25 = WdLogNewEntry5_WdLowResource(v22);
              *(_QWORD *)(v25 + 24) = -1073741670LL;
              WdLogEvent5_WdLowResource(v25);
            }
          }
        }
        else
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3584), 1u);
          *((POWER_STATE *)DeviceExtension + 71) = State;
          ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3584));
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        if ( *((_DWORD *)DeviceExtension + 59) == 2 )
          v8 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                 *((_QWORD *)DeviceExtension + 5),
                 *((_QWORD *)DeviceExtension + 6),
                 -1,
                 (POWER_STATE)State.SystemState,
                 v15);
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
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3584), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3584));
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
        }
        DpiRequestIoPowerState(DeviceObject, 1LL, v12, v13);
        v8 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
               *((_QWORD *)DeviceExtension + 5),
               *((_QWORD *)DeviceExtension + 6),
               -1,
               (POWER_STATE)State.SystemState,
               a5);
      }
      if ( v27 == 5 && (PDEVICE_OBJECT)qword_1C00570C0 == DeviceObject && dword_1C0057170 == 3 )
      {
        byte_1C0057190 = 1;
        LOBYTE(v11) = 1;
        InbvNotifyDisplayOwnershipChange(v11, DpiEnterSystemDisplay);
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
  return v8;
}
