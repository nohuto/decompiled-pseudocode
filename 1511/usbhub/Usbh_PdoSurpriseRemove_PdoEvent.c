/*
 * XREFs of Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045320
 * Callers:
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0054750 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003A04 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhAcquirePdoStateLock @ 0x1C000947C (UsbhAcquirePdoStateLock.c)
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     UsbhSetPdoPowerState @ 0x1C000D064 (UsbhSetPdoPowerState.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C000D0D4 (SET_PDO_HWPNPSTATE.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x1C001FBE8 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0020500 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0020600 (UsbhAcquireFdoPwrLock.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0028044 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C0041478 (UsbhPCE_SoftDisconnect.c)
 *     UsbhFindListPdo @ 0x1C00433D8 (UsbhFindListPdo.c)
 *     UsbhOnPdoAbsentList @ 0x1C0043FAC (UsbhOnPdoAbsentList.c)
 *     UsbhOnPdoRemovedList @ 0x1C0043FE0 (UsbhOnPdoRemovedList.c)
 */

void __fastcall Usbh_PdoSurpriseRemove_PdoEvent(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rbx
  int v12; // r9d
  int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rax
  int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // r14
  _QWORD *v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  _DWORD *v28; // rax
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // edx
  int v33; // r8d
  _QWORD *v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rbx
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 PortData; // rax
  struct _KEVENT *v48; // rbx

  v7 = PdoExt((__int64)a2, (__int64)a2, a3, a4);
  v11 = FdoExt(a1, v8, v9, v10);
  Log(a1, 2, 1884509473, 0LL, a3);
  v13 = v12 + 1;
  UsbhAcquirePdoStateLock(v14, a3, v12 + 1);
  v18 = PdoExt((__int64)a2, v15, v16, v17);
  if ( v18[281] != 3 )
  {
    v19 = v18[281] - 3 - v13;
    if ( v19 )
    {
      if ( v19 == v13 )
      {
        SET_PDO_HWPNPSTATE((__int64)a2, 5, v13);
        if ( !UsbhOnPdoAbsentList(*((_QWORD *)v7 + 147), (__int64)a2, v20, v21) )
        {
          v22 = v7 + 328;
          v23 = (_QWORD *)*((_QWORD *)v11 + 606);
          *v22 = v11 + 1210;
          v22[1] = v23;
          if ( (_DWORD *)*v23 != v11 + 1210 )
            __fastfail(3u);
          *v23 = v22;
          *((_QWORD *)v11 + 606) = v22;
        }
      }
      *(_DWORD *)(a3 + 136) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(a3 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
      return;
    }
    Log(a1, 4, 1936879666, (__int64)a2, 4LL);
    v24 = *((_QWORD *)v7 + 147);
    v28 = FdoExt(v24, v25, v26, v27);
    if ( UsbhFindListPdo(v24, (__int64)a2, (_QWORD *)v28 + 601, v29)
      || UsbhOnPdoRemovedList(*((_QWORD *)v7 + 147), (__int64)a2, v30, v31) )
    {
      if ( UsbhOnPdoRemovedList(*((_QWORD *)v7 + 147), (__int64)a2, v30, v31) )
      {
        v32 = 4;
        v33 = 18;
LABEL_17:
        SET_PDO_HWPNPSTATE((__int64)a2, v32, v33);
        *(_DWORD *)(a3 + 136) = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        *(_DWORD *)(a3 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
        UsbhUnlinkPdoDeviceHandle(a1, (__int64)a2, 2017740850, v13);
        Log(a1, 4, 1682457650, (__int64)a2, 0LL);
        return;
      }
      v34 = v7 + 328;
      v35 = *((_QWORD *)v7 + 164);
      v36 = (_QWORD *)*((_QWORD *)v7 + 165);
      if ( *(_DWORD **)(v35 + 8) != v7 + 328 || (_QWORD *)*v36 != v34 )
        __fastfail(3u);
      *v36 = v35;
      *(_QWORD *)(v35 + 8) = v36;
      *v34 = 0LL;
      *((_QWORD *)v7 + 165) = 0LL;
    }
    v33 = v13;
    v32 = 5;
    goto LABEL_17;
  }
  *(_DWORD *)(a3 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(a3 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
  if ( PdoExt((__int64)a2, v37, v38, v39)[197] != v13 )
  {
    v40 = (_QWORD *)UsbhIncHubBusy(a1, a3, (__int64)a2, 1381200755LL, v13);
    UsbhSyncResumeDeviceInternal(*((_QWORD *)v7 + 147), a3, a2, v41);
    UsbhDecHubBusy(a1, v42, v40, v43);
    UsbhAcquireFdoPwrLock(a1, a3, 136LL, 1835356755LL);
    UsbhSetPdoPowerState(a3, (__int64)a2, v44, v13, 14);
    UsbhReleaseFdoPwrLock(a1, a3, v45, v46);
  }
  UsbhPdoAbortAllDevicePipes(a1, (__int64)a2);
  PortData = UsbhGetPortData(a1, *((_WORD *)v7 + 710));
  if ( PortData )
  {
    v48 = (struct _KEVENT *)(PortData + 520);
    KeWaitForSingleObject((PVOID)(PortData + 520), Executive, 0, 0, 0LL);
    UsbhPCE_SoftDisconnect(a1, *((_WORD *)v7 + 710), a3);
    KeSetEvent(v48, 0, 0);
  }
}
