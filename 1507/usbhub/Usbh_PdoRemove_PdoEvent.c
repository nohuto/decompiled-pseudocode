/*
 * XREFs of Usbh_PdoRemove_PdoEvent @ 0x1C0044FC4
 * Callers:
 *     UsbhPdoPnp_RemoveDevice @ 0x1C00544B0 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0018360 (UsbhSshSetPortsBusyState.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001DFFC (UsbhAcquirePdoStateLock.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C001E760 (SET_PDO_HWPNPSTATE.c)
 *     UsbhDisablePort @ 0x1C004310C (UsbhDisablePort.c)
 *     UsbhOnPdoAbsentList @ 0x1C0043E7C (UsbhOnPdoAbsentList.c)
 *     UsbhSetPdo_FailIo @ 0x1C0044404 (UsbhSetPdo_FailIo.c)
 *     UsbhDeletePdo @ 0x1C0053984 (UsbhDeletePdo.c)
 *     UsbhDeleteUxdSettings @ 0x1C005675C (UsbhDeleteUxdSettings.c)
 */

void __fastcall Usbh_PdoRemove_PdoEvent(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  __int64 PortData; // r15
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  struct _DEVICE_OBJECT *v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // rsi
  unsigned int v21; // edi
  unsigned int v22; // edi
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax

  PortData = 0LL;
  Log((__int64)a1, 2, 1884441942, 0LL, a3);
  UsbhAcquirePdoStateLock(v7, a3, 6);
  v12 = PdoExt(a2, v8, v9, v10)[281];
  if ( !a1 )
  {
    v15 = v12;
    v16 = 0LL;
LABEL_12:
    UsbhDeletePdo(v16, a2, v15);
    return;
  }
  v17 = PdoExt(a2, v11, v13, v14);
  v20 = v17;
  v21 = v12 - 3;
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        if ( UsbhOnPdoAbsentList(*((_QWORD *)v17 + 147), a2, v18, v19) )
        {
          v23 = v20 + 328;
          v24 = *((_QWORD *)v20 + 164);
          v25 = (_QWORD *)*((_QWORD *)v20 + 165);
          if ( *(_DWORD **)(v24 + 8) != v20 + 328 || (_QWORD *)*v25 != v23 )
            __fastfail(3u);
          *v25 = v24;
          *(_QWORD *)(v24 + 8) = v25;
          *v23 = 0LL;
          *((_QWORD *)v20 + 165) = 0LL;
        }
        v15 = 5LL;
        v16 = a1;
        goto LABEL_12;
      }
    }
    else
    {
      SET_PDO_HWPNPSTATE(a2, 4LL, 6LL, v19);
    }
    *(_DWORD *)(a3 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a3 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
    return;
  }
  if ( (v17[356] & 0x2000) != 0 )
    PortData = UsbhGetPortData((__int64)a1, *((_WORD *)v17 + 710));
  SET_PDO_HWPNPSTATE(a2, 3LL, 6LL, v19);
  *(_DWORD *)(a3 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(a3 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
  UsbhDeleteUxdSettings(a1, a2, 1LL);
  if ( PortData )
  {
    UsbhSetPdo_FailIo(a2, v26, v27, v28);
    KeWaitForSingleObject(v20 + 714, Executive, 0, 0, 0LL);
    v29 = v20[353];
    if ( (v29 & 0x8000000) == 0 )
    {
      v20[353] = v29 | 0x8000000;
      UsbhDisablePort((__int64)a1, PortData);
      UsbhSshSetPortsBusyState(a1, *((_WORD *)v20 + 710), 1LL, 0LL);
    }
    KeSetEvent((PRKEVENT)v20 + 119, 0, 0);
  }
}
