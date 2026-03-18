/*
 * XREFs of HmgShareLock @ 0x1C0029670
 * Callers:
 *     GreMarkUndeletableDC @ 0x1C00207F0 (GreMarkUndeletableDC.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00272DC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0032B30 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0034760 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetDCOrg @ 0x1C0035760 (GreSetDCOrg.c)
 *     GreGetBounds @ 0x1C0039760 (GreGetBounds.c)
 *     DestroyCacheDC @ 0x1C005A3A0 (DestroyCacheDC.c)
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 *     GreMarkDCUnreadable @ 0x1C0082754 (GreMarkDCUnreadable.c)
 *     GreMarkDeletableDC @ 0x1C0082C20 (GreMarkDeletableDC.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0085A6C (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CC8E4 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CC9CC (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCAE0 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCBE8 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCCC4 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCDA8 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 *     bInitICM @ 0x1C0156614 (bInitICM.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgShareLock(unsigned int a1, char a2)
{
  signed int v3; // ebp
  __int16 v4; // ebx^2
  __int64 v5; // r14
  int *v6; // rsi
  _QWORD *v7; // r14
  unsigned int v8; // edi
  __int64 v9; // rcx
  unsigned int v10; // r9d
  signed int v11; // edx
  __int64 v12; // r8
  int v13; // edi
  PVOID DeferredContext; // rsi
  unsigned int v15; // edi
  __int64 v16; // rcx
  unsigned int v17; // r8d
  signed int v18; // edx
  __int64 v19; // r9
  _DWORD *v20; // rdx
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // r10
  unsigned int v27; // ebx
  unsigned int v28; // edi
  unsigned __int16 *v29; // [rsp+20h] [rbp-38h] BYREF
  int v30; // [rsp+28h] [rbp-30h]

  v3 = 0;
  v4 = HIWORD(a1);
  v29 = 0LL;
  v30 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v29, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0);
  if ( v30 )
  {
    v6 = (int *)v29;
    if ( !v29 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v29);
      return v5;
    }
    if ( *((_BYTE *)v29 + 14) != a2 || v29[6] != v4 )
    {
LABEL_16:
      v13 = *v6;
      DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
      v15 = v13 & 0xFFFFFF;
      if ( v15 >= 0x10000 )
      {
        if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                      (unsigned __int16)v15,
                                      1)
               + 13) == HIWORD(v15) )
            v15 = (unsigned __int16)v15;
        }
        else
        {
          v15 = (unsigned __int16)v15;
        }
      }
      v16 = *((_QWORD *)DeferredContext + 2);
      v17 = *(_DWORD *)(v16 + 2056);
      if ( v15 >= v17 + ((*(unsigned __int16 *)(v16 + 2) - 1) << 16) )
        goto LABEL_40;
      if ( v15 >= v17 )
      {
        v18 = ((v15 - v17) >> 16) + 1;
        if ( (v15 - v17) >> 16 == -2 )
          goto LABEL_40;
      }
      else
      {
        v18 = 0;
      }
      v19 = *(_QWORD *)(v16 + 8LL * v18 + 8);
      if ( v18 )
        v15 = v15 - ((v18 - 1) << 16) - v17;
      if ( v15 < *(_DWORD *)(v19 + 20) )
      {
        v20 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v15 >> 8))
                         + 16LL * (unsigned __int8)v15
                         + 8);
LABEL_26:
        v21 = (unsigned __int16)*v20;
        v22 = v21 | (*v20 >> 8) & 0xFF0000u;
        if ( (unsigned int)v22 >= 0x10000 )
        {
          if ( *(_DWORD *)DeferredContext > 0x10000u )
          {
            v28 = (unsigned __int16)v21;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)DeferredContext + 2),
                                        (unsigned __int16)v21,
                                        1)
                 + 13) == WORD1(v22) )
              v22 = v28;
          }
          else
          {
            v22 = (unsigned __int16)v21;
          }
          if ( (unsigned int)v22 >= 0x10000 && *(_DWORD *)DeferredContext > 0x10000u )
            GdiHandleEntryDirectory::GetEntry(
              *((GdiHandleEntryDirectory **)DeferredContext + 2),
              (unsigned __int16)v22,
              1);
        }
        v23 = *((_QWORD *)DeferredContext + 2);
        v24 = *(_DWORD *)(v23 + 2056);
        if ( (unsigned int)v22 < v24 + ((*(unsigned __int16 *)(v23 + 2) - 1) << 16) )
        {
          if ( (unsigned int)v22 < v24
            || (v3 = (((unsigned int)v22 - v24) >> 16) + 1, ((unsigned int)v22 - v24) >> 16 != -2) )
          {
            v25 = *(_QWORD *)(v23 + 8LL * v3 + 8);
            if ( v3 )
              v22 = (_DWORD)v22 - ((v3 - 1) << 16) - v24;
            *(_DWORD *)(*(_QWORD *)v25 + 24 * v22 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * ((unsigned __int64)(unsigned int)v22 >> 8))
            + 16LL * (unsigned __int8)v22,
              0LL);
            KeLeaveCriticalRegion();
          }
        }
        KeLeaveCriticalRegion();
        return v5;
      }
LABEL_40:
      v20 = 0LL;
      goto LABEL_26;
    }
    v7 = WPP_MAIN_CB.Dpc.DeferredContext;
    v8 = *(_DWORD *)v29 & 0xFFFFFF;
    if ( v8 >= 0x10000 )
    {
      if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
      {
        v27 = *v29;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                    v27,
                                    1)
             + 13) == HIWORD(v8) )
          v8 = v27;
      }
      else
      {
        v8 = *v29;
      }
    }
    v9 = v7[2];
    v10 = *(_DWORD *)(v9 + 2056);
    if ( v8 >= v10 + ((*(unsigned __int16 *)(v9 + 2) - 1) << 16) )
      goto LABEL_38;
    if ( v8 >= v10 )
    {
      v11 = ((v8 - v10) >> 16) + 1;
      if ( (v8 - v10) >> 16 == -2 )
        goto LABEL_38;
    }
    else
    {
      v11 = 0;
    }
    v12 = *(_QWORD *)(v9 + 8LL * v11 + 8);
    if ( v11 )
      v8 = v8 - ((v11 - 1) << 16) - v10;
    if ( v8 < *(_DWORD *)(v12 + 20) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                     + 16LL * (unsigned __int8)v8
                     + 8);
LABEL_15:
      ++*(_DWORD *)(v5 + 8);
      goto LABEL_16;
    }
LABEL_38:
    v5 = 0LL;
    goto LABEL_15;
  }
  return 0LL;
}
