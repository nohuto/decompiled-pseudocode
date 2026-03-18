/*
 * XREFs of HmgDecrementShareReferenceCount @ 0x1C0029BC0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0026A8C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0026AD8 (--1SURFREF@@QEAA@XZ.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0027280 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002731C (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C00285B0 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0028D68 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002D064 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C002D1E0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0031D40 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0033330 (--1SURFMEM@@QEAA@XZ.c)
 *     GreSetBitmapOwnerEx @ 0x1C00346C8 (GreSetBitmapOwnerEx.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0034760 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetDCOrg @ 0x1C0035760 (GreSetDCOrg.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0039260 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     GreGetBounds @ 0x1C0039760 (GreGetBounds.c)
 *     bDeleteSurface @ 0x1C003A320 (bDeleteSurface.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0047300 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C005B574 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C005B5A0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C005B8D8 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C005CB90 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C005CFA8 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0069C90 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C006B240 (vDynamicConvertNewSurfaceDCs.c)
 *     EngUnlockSurface @ 0x1C0074B90 (EngUnlockSurface.c)
 *     EngLockSurface @ 0x1C0075140 (EngLockSurface.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00BEB00 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00C6F48 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C00CA750 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C06FC (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall HmgDecrementShareReferenceCount(unsigned int *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx
  signed int v4; // ebx
  _DWORD *v5; // rdi
  unsigned int v6; // r14d
  PVOID DeferredContext; // rbp
  unsigned int v8; // esi
  __int64 v9; // rcx
  unsigned int v10; // r8d
  signed int v11; // edx
  __int64 v12; // r9
  _DWORD *v13; // rdx
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // r10
  unsigned int v20; // edx
  unsigned int v21; // edi
  unsigned int v22; // edi
  __int64 v23; // [rsp+20h] [rbp-38h] BYREF
  int v24; // [rsp+28h] [rbp-30h]

  v1 = *a1;
  v3 = *a1;
  v4 = 0;
  v23 = 0LL;
  v24 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v23, (unsigned __int16)v1 | (v3 >> 8) & 0xFF0000, 0, 0);
  if ( !v24 )
    return 0LL;
  v5 = (_DWORD *)v23;
  if ( !v23 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v23);
    return 0LL;
  }
  if ( *(_BYTE *)(v23 + 14) == 5 && HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) && gpentHmgrAltStacks )
  {
    v20 = (unsigned __int16)*a1 | (*a1 >> 8) & 0xFF0000;
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v20 | (v20 >> 8) & 0xFF0000);
  }
  v6 = a1[2];
  a1[2] = v6 - 1;
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v8 = *v5 & 0xFFFFFF;
  if ( v8 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      v21 = *(unsigned __int16 *)v5;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v8,
                                  1)
           + 13) == HIWORD(v8) )
        v8 = v21;
    }
    else
    {
      v8 = *(unsigned __int16 *)v5;
    }
  }
  v9 = *((_QWORD *)DeferredContext + 2);
  v10 = *(_DWORD *)(v9 + 2056);
  if ( v8 >= v10 + ((*(unsigned __int16 *)(v9 + 2) - 1) << 16) )
    goto LABEL_34;
  if ( v8 >= v10 )
  {
    v11 = ((v8 - v10) >> 16) + 1;
    if ( (v8 - v10) >> 16 == -2 )
    {
LABEL_34:
      v13 = 0LL;
      goto LABEL_14;
    }
  }
  else
  {
    v11 = 0;
  }
  v12 = *(_QWORD *)(v9 + 8LL * v11 + 8);
  if ( v11 )
    v8 = v8 - ((v11 - 1) << 16) - v10;
  if ( v8 >= *(_DWORD *)(v12 + 20) )
    goto LABEL_34;
  v13 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                   + 16LL * (unsigned __int8)v8
                   + 8);
LABEL_14:
  v14 = (unsigned __int16)*v13;
  v15 = v14 | (*v13 >> 8) & 0xFF0000u;
  if ( (unsigned int)v15 >= 0x10000 )
  {
    if ( *(_DWORD *)DeferredContext > 0x10000u )
    {
      v22 = (unsigned __int16)v14;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)DeferredContext + 2),
                                  (unsigned __int16)v14,
                                  1)
           + 13) == WORD1(v15) )
        v15 = v22;
    }
    else
    {
      v15 = (unsigned __int16)v14;
    }
    if ( (unsigned int)v15 >= 0x10000 && *(_DWORD *)DeferredContext > 0x10000u )
      GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)DeferredContext + 2), (unsigned __int16)v15, 1);
  }
  v16 = *((_QWORD *)DeferredContext + 2);
  v17 = *(_DWORD *)(v16 + 2056);
  if ( (unsigned int)v15 < v17 + ((*(unsigned __int16 *)(v16 + 2) - 1) << 16) )
  {
    if ( (unsigned int)v15 < v17 || (v4 = (((unsigned int)v15 - v17) >> 16) + 1, ((unsigned int)v15 - v17) >> 16 != -2) )
    {
      v18 = *(_QWORD *)(v16 + 8LL * v4 + 8);
      if ( v4 )
        v15 = (_DWORD)v15 - ((v4 - 1) << 16) - v17;
      *(_DWORD *)(*(_QWORD *)v18 + 24 * v15 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)(unsigned int)v15 >> 8))
      + 16LL * (unsigned __int8)v15,
        0LL);
      KeLeaveCriticalRegion();
    }
  }
  KeLeaveCriticalRegion();
  return v6;
}
