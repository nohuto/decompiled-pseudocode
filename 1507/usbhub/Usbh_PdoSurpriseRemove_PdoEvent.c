/*
 * XREFs of Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C00451F0
 * Callers:
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C00547D0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003A04 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001DFFC (UsbhAcquirePdoStateLock.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C001E760 (SET_PDO_HWPNPSTATE.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021180 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetPdoPowerState @ 0x1C0021280 (UsbhSetPdoPowerState.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00212F0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x1C0022014 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0029084 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C004125C (UsbhPCE_SoftDisconnect.c)
 *     UsbhFindListPdo @ 0x1C00431B8 (UsbhFindListPdo.c)
 *     UsbhOnPdoAbsentList @ 0x1C0043E7C (UsbhOnPdoAbsentList.c)
 *     UsbhOnPdoRemovedList @ 0x1C0043EB0 (UsbhOnPdoRemovedList.c)
 */

void __fastcall Usbh_PdoSurpriseRemove_PdoEvent(
        struct _DEVICE_OBJECT *a1,
        struct _DEVICE_OBJECT *a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rbx
  int v12; // r9d
  unsigned int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rax
  __int64 v19; // r9
  unsigned int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // r14
  _QWORD *v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _DWORD *v29; // rax
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rbx
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 PortData; // rax
  struct _KEVENT *v49; // rbx

  v7 = PdoExt((__int64)a2, (__int64)a2, a3, a4);
  v11 = FdoExt((__int64)a1, v8, v9, v10);
  Log((__int64)a1, 2, 1884509473, 0LL, a3);
  v13 = v12 + 1;
  UsbhAcquirePdoStateLock(v14, a3, v12 + 1);
  v18 = PdoExt((__int64)a2, v15, v16, v17);
  if ( v18[281] != 3 )
  {
    v20 = v18[281] - 3 - v13;
    if ( v20 )
    {
      if ( v20 == v13 )
      {
        SET_PDO_HWPNPSTATE((__int64)a2, 5LL, v13, v19);
        if ( !UsbhOnPdoAbsentList(*((_QWORD *)v7 + 147), (__int64)a2, v21, v22) )
        {
          v23 = v7 + 328;
          v24 = (_QWORD *)*((_QWORD *)v11 + 606);
          *v23 = v11 + 1210;
          v23[1] = v24;
          if ( (_DWORD *)*v24 != v11 + 1210 )
            __fastfail(3u);
          *v24 = v23;
          *((_QWORD *)v11 + 606) = v23;
        }
      }
      *(_DWORD *)(a3 + 136) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(a3 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
      return;
    }
    Log((__int64)a1, 4, 1936879666, (__int64)a2, 4LL);
    v25 = *((_QWORD *)v7 + 147);
    v29 = FdoExt(v25, v26, v27, v28);
    if ( UsbhFindListPdo(v25, (__int64)a2, (_QWORD *)v29 + 601, v30)
      || UsbhOnPdoRemovedList(*((_QWORD *)v7 + 147), (__int64)a2, v31, v32) )
    {
      if ( UsbhOnPdoRemovedList(*((_QWORD *)v7 + 147), (__int64)a2, v31, v32) )
      {
        v33 = 4LL;
        v34 = 18LL;
LABEL_17:
        SET_PDO_HWPNPSTATE((__int64)a2, v33, v34, v32);
        *(_DWORD *)(a3 + 136) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        *(_DWORD *)(a3 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
        UsbhUnlinkPdoDeviceHandle((__int64)a1, (__int64)a2, 2017740850, v13);
        Log((__int64)a1, 4, 1682457650, (__int64)a2, 0LL);
        return;
      }
      v35 = v7 + 328;
      v36 = *((_QWORD *)v7 + 164);
      v37 = (_QWORD *)*((_QWORD *)v7 + 165);
      if ( *(_DWORD **)(v36 + 8) != v7 + 328 || (_QWORD *)*v37 != v35 )
        __fastfail(3u);
      *v37 = v36;
      *(_QWORD *)(v36 + 8) = v37;
      *v35 = 0LL;
      *((_QWORD *)v7 + 165) = 0LL;
    }
    v34 = v13;
    v33 = 5LL;
    goto LABEL_17;
  }
  *(_DWORD *)(a3 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(a3 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
  if ( PdoExt((__int64)a2, v38, v39, v40)[197] != v13 )
  {
    v41 = (_QWORD *)UsbhIncHubBusy(a1, a3, (__int64)a2, 1381200755LL, v13);
    UsbhSyncResumeDeviceInternal(*((_QWORD *)v7 + 147), a3, a2, v42);
    UsbhDecHubBusy((__int64)a1, v43, v41, v44);
    UsbhAcquireFdoPwrLock((__int64)a1, a3, 136LL, 1835356755LL);
    UsbhSetPdoPowerState(a3, (__int64)a2, v45, v13, 14);
    UsbhReleaseFdoPwrLock((__int64)a1, a3, v46, v47);
  }
  UsbhPdoAbortAllDevicePipes((__int64)a1, (__int64)a2);
  PortData = UsbhGetPortData((__int64)a1, *((_WORD *)v7 + 710));
  if ( PortData )
  {
    v49 = (struct _KEVENT *)(PortData + 520);
    KeWaitForSingleObject((PVOID)(PortData + 520), Executive, 0, 0, 0LL);
    UsbhPCE_SoftDisconnect(a1, *((_WORD *)v7 + 710), a3);
    KeSetEvent(v49, 0, 0);
  }
}
