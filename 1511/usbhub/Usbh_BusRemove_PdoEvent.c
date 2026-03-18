/*
 * XREFs of Usbh_BusRemove_PdoEvent @ 0x1C0044C14
 * Callers:
 *     Usbh_BS_BusPause @ 0x1C0021994 (Usbh_BS_BusPause.c)
 *     Usbh_BS_BusStop @ 0x1C0021CE4 (Usbh_BS_BusStop.c)
 * Callees:
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0002DFC (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhAcquirePdoStateLock @ 0x1C000947C (UsbhAcquirePdoStateLock.c)
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSetPdo_FailIo @ 0x1C0044534 (UsbhSetPdo_FailIo.c)
 *     UsbhDeletePdo @ 0x1C0053954 (UsbhDeletePdo.c)
 */

void __fastcall Usbh_BusRemove_PdoEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // r15
  __int64 v8; // rcx
  __int64 **v9; // r14
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rax
  __int64 v18; // rcx
  __int64 **v19; // r14
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int16 v30; // r14
  unsigned __int16 i; // bx
  __int64 PortData; // rax
  __int64 v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  _DWORD *v37; // rax
  __int64 v38; // rcx

  Log(a1, 2, 1716736630, 0LL, a2);
  v7 = FdoExt(a1, v4, v5, v6);
  UsbhAcquirePdoStateLock(v8, a2, 11);
  if ( (v7[640] & 0x40000000) != 0 )
    UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  Log(a1, 2, 1718374961, 0LL, a2);
  v9 = (__int64 **)(v7 + 1206);
  while ( *v9 != (__int64 *)v9 )
  {
    v10 = *v9;
    v11 = **v9;
    if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v11 + 8) != v10 )
      __fastfail(3u);
    v12 = v10 - 164;
    *v9 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v9;
    Log(a1, 4, 1718374962, (__int64)v12, 0LL);
    v13 = v12[105];
    v12[164] = 0LL;
    v12[165] = 0LL;
    v17 = PdoExt(v13, v14, v15, v16);
    UsbhDeletePdo(a1, v12[105], (unsigned int)v17[281]);
    UsbhAcquirePdoStateLock(v18, a2, 11);
  }
  v19 = (__int64 **)(v7 + 1210);
  while ( *v19 != (__int64 *)v19 )
  {
    v20 = *v19;
    v21 = **v19;
    if ( (__int64 **)(*v19)[1] != v19 || *(__int64 **)(v21 + 8) != v20 )
      __fastfail(3u);
    v22 = (__int64)(v20 - 164);
    *v19 = (__int64 *)v21;
    *(_QWORD *)(v21 + 8) = v19;
    Log(a1, 4, 1346650466, v22, 0LL);
    v23 = *(_QWORD *)(v22 + 840);
    *(_QWORD *)(v22 + 1312) = 0LL;
    *(_QWORD *)(v22 + 1320) = 0LL;
    PdoExt(v23, v24, v25, v26);
    *(_DWORD *)(v22 + 1412) |= 0x40000u;
  }
  Log(a1, 2, 1718374963, 0LL, a2);
  v30 = v29 + 1;
  for ( i = v29 + 1; (v7[640] & 0x400000) != 0 && i <= *((unsigned __int8 *)FdoExt(a1, v27, v28, v29) + 2938); i += v30 )
  {
    PortData = UsbhGetPortData(a1, i);
    if ( PortData )
    {
      v33 = *(_QWORD *)(PortData + 392);
      Log(a1, 4, 2018526259, v33, 0LL);
      if ( v33 )
      {
        UsbhSetPdo_FailIo(v33, v27, v28, v29);
        v37 = PdoExt(v33, v34, v35, v36);
        UsbhDeletePdo(a1, v33, (unsigned int)v37[281]);
        UsbhAcquirePdoStateLock(v38, a2, 11);
      }
    }
  }
  *(_DWORD *)(a2 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
}
