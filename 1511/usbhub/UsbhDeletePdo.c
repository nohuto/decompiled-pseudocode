/*
 * XREFs of UsbhDeletePdo @ 0x1C0053954
 * Callers:
 *     UsbhWaitConnect @ 0x1C001A510 (UsbhWaitConnect.c)
 *     UsbhRequestPortSuspend @ 0x1C001CF30 (UsbhRequestPortSuspend.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004479C (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C0044908 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C0044A84 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0044C14 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C0044EB4 (Usbh_Disconnect_PdoEvent.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C0044FA4 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C00450F4 (Usbh_PdoRemove_PdoEvent.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003A04 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C000B5F4 (UsbhEtwLogDeviceInformation.c)
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C000D0D4 (SET_PDO_HWPNPSTATE.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C000E0A0 (UsbhDisableTimerObject.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000FDC0 (UsbhSshSetPortsBusyState.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     UsbhDisconnectPdoFromHub @ 0x1C003B5D4 (UsbhDisconnectPdoFromHub.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D418 (WPP_RECORDER_SF_q.c)
 *     UsbhBillboardCleanup @ 0x1C005358C (UsbhBillboardCleanup.c)
 *     UsbhDeleteOrphanPdo @ 0x1C00537EC (UsbhDeleteOrphanPdo.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C0054E24 (UsbhRemoveAndDeletePdo.c)
 *     UsbhResetPortData @ 0x1C0054F54 (UsbhResetPortData.c)
 */

void __fastcall UsbhDeletePdo(__int64 a1, struct _DEVICE_OBJECT *a2, int a3, int a4, __int64 a5)
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
  _DWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // r8
  _QWORD *v37; // r8

  v9 = 0LL;
  v10 = 0;
  Log(a1, 256, 1682981967, (__int64)a2, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v14 )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      v14 + 1,
      v14 + 25,
      (__int64)&WPP_028cdac27fb3dffc4d89443566e788cd_Traceguids,
      a2);
  v16 = PdoExt((__int64)a2, v11, v12, v13);
  if ( a1 )
  {
    FdoExt(a1, v15, v17, v18);
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
      UsbhEtwLogDeviceInformation((__int64)v16, &USBHUB_ETW_EVENT_DEVICE_REMOVE, 0);
    v19 = v16 + 328;
    if ( *((_QWORD *)v16 + 164) || *((_QWORD *)v16 + 165) )
    {
      v20 = *(_QWORD *)v19;
      v21 = (_QWORD *)*((_QWORD *)v16 + 165);
      if ( *(_DWORD **)(*(_QWORD *)v19 + 8LL) != v19 || (_DWORD *)*v21 != v19 )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      *(_QWORD *)v19 = 0LL;
      *((_QWORD *)v16 + 165) = 0LL;
    }
    if ( (v16[354] & 8) != 0 )
    {
      UsbhResetPortData(a1, a2, v9);
      v10 = 1;
    }
    SET_PDO_HWPNPSTATE((__int64)a2, 6, a4);
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a5 + 132));
    if ( v10 )
      UsbhSshSetPortsBusyState(a1, *((_WORD *)v16 + 710), 1LL, 0LL);
    if ( a1 )
      UsbhDisableTimerObject(a1, (__int64)(v16 + 424), v22, v23);
    KeWaitForSingleObject(v16 + 322, Executive, 0, 0, 0LL);
    if ( *((_QWORD *)v16 + 300) )
      UsbhBillboardCleanup(a2, v24, v25, v26);
    v27 = (void *)*((_QWORD *)v16 + 142);
    if ( v27 )
    {
      ExFreePoolWithTag(v27, 0);
      *((_QWORD *)v16 + 142) = 0LL;
    }
    v28 = (void *)*((_QWORD *)v16 + 279);
    if ( v28 )
    {
      ExFreePoolWithTag(v28, 0);
      *((_QWORD *)v16 + 279) = 0LL;
    }
    v29 = (void *)*((_QWORD *)v16 + 352);
    if ( v29 )
    {
      ExFreePoolWithTag(v29, 0);
      *((_QWORD *)v16 + 352) = 0LL;
    }
    v30 = (void *)*((_QWORD *)v16 + 298);
    if ( v30 )
    {
      ExFreePoolWithTag(v30, 0);
      *((_QWORD *)v16 + 298) = 0LL;
    }
    v31 = (void *)*((_QWORD *)v16 + 299);
    if ( v31 )
    {
      ExFreePoolWithTag(v31, 0);
      *((_QWORD *)v16 + 299) = 0LL;
    }
    v32 = (void *)*((_QWORD *)v16 + 313);
    if ( v32 )
    {
      ExFreePoolWithTag(v32, 0);
      *((_QWORD *)v16 + 313) = 0LL;
    }
    v33 = (void *)*((_QWORD *)v16 + 106);
    if ( v33 )
    {
      ExFreePoolWithTag(v33, 0);
      *((_QWORD *)v16 + 106) = 0LL;
    }
    UsbhUnlinkPdoDeviceHandle(a1, (__int64)a2, 2017740855, 1);
    Log(a1, 256, 1682457649, (__int64)a2, 0LL);
    v36 = (unsigned int)v16[354];
    if ( (v36 & 1) != 0 )
    {
      UsbhDecPdoIoCount((ULONG_PTR)a2, (ULONG_PTR)a2, v36, v35);
      KeWaitForSingleObject(v16 + 308, Executive, 0, 0, 0LL);
    }
    v37 = (_QWORD *)*((_QWORD *)v16 + 107);
    if ( v37 )
    {
      UsbhDecHubBusy(a1, v34, v37, v35);
      *((_QWORD *)v16 + 107) = 0LL;
    }
    if ( (v16[354] & 2) != 0 )
      UsbhDisconnectPdoFromHub((__int64)a2, v34, (__int64)v37, v35);
    v16[354] = 16;
    UsbhRemoveAndDeletePdo(a2);
  }
}
