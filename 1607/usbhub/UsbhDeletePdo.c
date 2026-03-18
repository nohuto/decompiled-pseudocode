/*
 * XREFs of UsbhDeletePdo @ 0x1C0053F84
 * Callers:
 *     UsbhWaitConnect @ 0x1C0015F20 (UsbhWaitConnect.c)
 *     UsbhRequestPortSuspend @ 0x1C0025DD4 (UsbhRequestPortSuspend.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C0044ADC (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C0044C48 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C0044DC4 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0044F54 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C00451F4 (Usbh_Disconnect_PdoEvent.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C00452E4 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0045434 (Usbh_PdoRemove_PdoEvent.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003C04 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     UsbhDecHubBusy @ 0x1C000D2D0 (UsbhDecHubBusy.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhSshSetPortsBusyState @ 0x1C00197A0 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C001A150 (SET_PDO_HWPNPSTATE.c)
 *     UsbhDisableTimerObject @ 0x1C001C6C0 (UsbhDisableTimerObject.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C001DC1C (UsbhEtwLogDeviceInformation.c)
 *     UsbhDisconnectPdoFromHub @ 0x1C003B9F0 (UsbhDisconnectPdoFromHub.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D738 (WPP_RECORDER_SF_q.c)
 *     UsbhBillboardCleanup @ 0x1C0053BBC (UsbhBillboardCleanup.c)
 *     UsbhDeleteOrphanPdo @ 0x1C0053E1C (UsbhDeleteOrphanPdo.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C0055454 (UsbhRemoveAndDeletePdo.c)
 *     UsbhResetPortData @ 0x1C0055584 (UsbhResetPortData.c)
 */

void __fastcall UsbhDeletePdo(
        struct _DEVICE_OBJECT *a1,
        struct _DEVICE_OBJECT *a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v9; // r15
  char v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r10d
  __int64 v15; // rdx
  _DWORD *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r9
  _DWORD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // r8
  _QWORD *v38; // r8

  v9 = 0LL;
  v10 = 0;
  Log((__int64)a1, 256, 1682981967, (__int64)a2, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v14 )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      v14 + 1,
      v14 + 25,
      (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids,
      a2);
  v16 = PdoExt((__int64)a2, v11, v12, v13);
  if ( a1 )
  {
    FdoExt((__int64)a1, v15, v17, v18);
    v9 = a5 + 132;
  }
  else
  {
    UsbhDeleteOrphanPdo((ULONG_PTR)a2, v15, v17, v18);
  }
  if ( a3 == 6 )
  {
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a5 + 132));
  }
  else
  {
    if ( a3 != 1 )
      UsbhEtwLogDeviceInformation((__int64)v16, &USBHUB_ETW_EVENT_DEVICE_REMOVE, 0LL, v19);
    v20 = v16 + 328;
    if ( *((_QWORD *)v16 + 164) || *((_QWORD *)v16 + 165) )
    {
      v21 = *(_QWORD *)v20;
      v22 = (_QWORD *)*((_QWORD *)v16 + 165);
      if ( *(_DWORD **)(*(_QWORD *)v20 + 8LL) != v20 || (_DWORD *)*v22 != v20 )
        __fastfail(3u);
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      *(_QWORD *)v20 = 0LL;
      *((_QWORD *)v16 + 165) = 0LL;
    }
    if ( (v16[354] & 8) != 0 )
    {
      UsbhResetPortData(a1, a2, v9);
      v10 = 1;
    }
    SET_PDO_HWPNPSTATE((__int64)a2, 6LL, a4, v19);
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a5 + 132));
    if ( v10 )
      UsbhSshSetPortsBusyState(a1, *((_WORD *)v16 + 710), 1LL, 0LL);
    if ( a1 )
      UsbhDisableTimerObject((__int64)a1, (__int64)(v16 + 424), v23, v24);
    KeWaitForSingleObject(v16 + 322, Executive, 0, 0, 0LL);
    if ( *((_QWORD *)v16 + 300) )
      UsbhBillboardCleanup(a2, v25, v26, v27);
    v28 = (void *)*((_QWORD *)v16 + 142);
    if ( v28 )
    {
      ExFreePoolWithTag(v28, 0);
      *((_QWORD *)v16 + 142) = 0LL;
    }
    v29 = (void *)*((_QWORD *)v16 + 279);
    if ( v29 )
    {
      ExFreePoolWithTag(v29, 0);
      *((_QWORD *)v16 + 279) = 0LL;
    }
    v30 = (void *)*((_QWORD *)v16 + 352);
    if ( v30 )
    {
      ExFreePoolWithTag(v30, 0);
      *((_QWORD *)v16 + 352) = 0LL;
    }
    v31 = (void *)*((_QWORD *)v16 + 298);
    if ( v31 )
    {
      ExFreePoolWithTag(v31, 0);
      *((_QWORD *)v16 + 298) = 0LL;
    }
    v32 = (void *)*((_QWORD *)v16 + 299);
    if ( v32 )
    {
      ExFreePoolWithTag(v32, 0);
      *((_QWORD *)v16 + 299) = 0LL;
    }
    v33 = (void *)*((_QWORD *)v16 + 313);
    if ( v33 )
    {
      ExFreePoolWithTag(v33, 0);
      *((_QWORD *)v16 + 313) = 0LL;
    }
    v34 = (void *)*((_QWORD *)v16 + 106);
    if ( v34 )
    {
      ExFreePoolWithTag(v34, 0);
      *((_QWORD *)v16 + 106) = 0LL;
    }
    UsbhUnlinkPdoDeviceHandle((__int64)a1, (__int64)a2, 2017740855, 1);
    Log((__int64)a1, 256, 1682457649, (__int64)a2, 0LL);
    v37 = (unsigned int)v16[354];
    if ( (v37 & 1) != 0 )
    {
      UsbhDecPdoIoCount((ULONG_PTR)a2, (ULONG_PTR)a2, v37, v36);
      KeWaitForSingleObject(v16 + 308, Executive, 0, 0, 0LL);
    }
    v38 = (_QWORD *)*((_QWORD *)v16 + 107);
    if ( v38 )
    {
      UsbhDecHubBusy((__int64)a1, v35, v38, v36);
      *((_QWORD *)v16 + 107) = 0LL;
    }
    if ( (v16[354] & 2) != 0 )
      UsbhDisconnectPdoFromHub((__int64)a2, v35, (__int64)v38, v36);
    v16[354] = 16;
    UsbhRemoveAndDeletePdo(a2);
  }
}
