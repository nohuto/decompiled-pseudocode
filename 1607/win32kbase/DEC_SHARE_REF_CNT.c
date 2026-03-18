/*
 * XREFs of DEC_SHARE_REF_CNT @ 0x1C0029DA0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0027340 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032CE0 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreDCSelectPen @ 0x1C0059450 (GreDCSelectPen.c)
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@SAXPEAX@Z @ 0x1C00BD100 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@SAXPEA.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@SAXPEAX@Z @ 0x1C00BD150 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@SAXP.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00BF1E4 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00BF6C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00C0210 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00C02E0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x1C00C4E50 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CC9CC (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C002AF70 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C06FC (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall DEC_SHARE_REF_CNT(unsigned int *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx
  int *v4; // rdi
  unsigned int v5; // esi
  int v6; // edx
  GdiHandleManager *DeferredContext; // rdi
  unsigned int v8; // eax
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned int v11; // r9d
  signed int v12; // edx
  __int64 v13; // r8
  _DWORD *v14; // rdx
  unsigned int v15; // ebx
  GdiHandleEntryDirectory *v16; // rcx
  unsigned __int8 v17; // r9
  struct GdiHandleEntryTable *v18; // rdx
  unsigned __int64 v19; // r8
  unsigned int v21; // edx
  __int64 v22; // [rsp+20h] [rbp-38h] BYREF
  int v23; // [rsp+28h] [rbp-30h]
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF
  struct GdiHandleEntryTable *v25; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v3 = *a1;
  v22 = 0LL;
  v23 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v22, (unsigned __int16)v1 | (v3 >> 8) & 0xFF0000, 0, 0);
  if ( !v23 )
    return 0LL;
  v4 = (int *)v22;
  if ( !v22 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v22);
    return 0LL;
  }
  if ( *(_BYTE *)(v22 + 14) == 5 && HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) && gpentHmgrAltStacks )
  {
    v21 = (unsigned __int16)*a1 | (*a1 >> 8) & 0xFF0000;
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v21 | (v21 >> 8) & 0xFF0000);
  }
  v5 = a1[2];
  a1[2] = v5 - 1;
  v6 = *v4;
  DeferredContext = (GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext;
  v8 = GdiHandleManager::DecodeIndex((GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext, v6 & 0xFFFFFF);
  v9 = *((_QWORD *)DeferredContext + 2);
  v10 = v8;
  v11 = *(_DWORD *)(v9 + 2056);
  if ( v8 >= v11 + ((*(unsigned __int16 *)(v9 + 2) - 1) << 16) )
    goto LABEL_21;
  if ( v8 >= v11 )
  {
    v12 = ((v8 - v11) >> 16) + 1;
    if ( (v8 - v11) >> 16 == -2 )
    {
LABEL_21:
      v14 = 0LL;
      goto LABEL_11;
    }
  }
  else
  {
    v12 = 0;
  }
  v13 = *(_QWORD *)(v9 + 8LL * v12 + 8);
  if ( v12 )
    v10 = v8 - ((v12 - 1) << 16) - v11;
  if ( (unsigned int)v10 >= *(_DWORD *)(v13 + 20) )
    goto LABEL_21;
  v14 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
LABEL_11:
  v15 = GdiHandleManager::DecodeIndex(DeferredContext, (unsigned __int16)*v14 | (*v14 >> 8) & 0xFF0000);
  GdiHandleManager::DecodeIndex(DeferredContext, v15);
  v16 = (GdiHandleEntryDirectory *)*((_QWORD *)DeferredContext + 2);
  v25 = 0LL;
  v24 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v16, v15, &v25, &v24) )
  {
    v17 = v24;
    v18 = v25;
    v19 = (unsigned __int64)v24 >> 8;
    *(_DWORD *)(*(_QWORD *)v25 + 24LL * v24 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(*(_QWORD *)(**((_QWORD **)v18 + 3) + 8 * v19) + 16LL * v17, 0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v5;
}
