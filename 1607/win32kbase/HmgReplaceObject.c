/*
 * XREFs of HmgReplaceObject @ 0x1C0036E20
 * Callers:
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0036900 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002A400 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?_IsEntryInUse@GdiHandleEntryTable@@AEAA_NI@Z @ 0x1C002B1B0 (-_IsEntryInUse@GdiHandleEntryTable@@AEAA_NI@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryTable@@QEAA_NI_N@Z @ 0x1C002B280 (-AcquireEntryLock@GdiHandleEntryTable@@QEAA_NI_N@Z.c)
 */

__int64 __fastcall HmgReplaceObject(__int64 *a1, __int128 *a2)
{
  unsigned int v3; // edi
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v6; // rbp
  _QWORD *DeferredContext; // rbx
  unsigned int v8; // r15d
  unsigned int v9; // eax
  __int64 v10; // r9
  unsigned int v11; // edx
  unsigned int v12; // r8d
  signed int v13; // ecx
  _QWORD *v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // r9d
  unsigned int v18; // edx
  signed int v19; // ecx
  __int64 v20; // rsi
  unsigned int v21; // r9d
  _QWORD *v22; // r10
  unsigned int v23; // eax
  __int16 v24; // dx
  __int128 v25; // xmm0
  __int16 v26; // r8
  __int64 v27; // rax
  _QWORD *v28; // rbp
  unsigned int v29; // edi
  __int64 v30; // r8
  unsigned int v31; // edx
  signed int v32; // ecx
  __int64 v33; // r9
  int v34; // edi
  PVOID v35; // rsi
  unsigned int v36; // edi
  __int64 v37; // r8
  unsigned int v38; // edx
  signed int v39; // ecx
  __int64 v40; // r9
  _DWORD *v41; // rdx
  int v42; // eax
  __int64 v43; // rdi
  unsigned int v44; // ebx
  __int64 v45; // r8
  unsigned int v46; // edx
  signed int v47; // ecx
  __int64 v48; // r10
  __int64 v50; // [rsp+20h] [rbp-58h] BYREF
  int v51; // [rsp+28h] [rbp-50h]
  int v52; // [rsp+2Ch] [rbp-4Ch]
  __int128 v53; // [rsp+38h] [rbp-40h]
  __int64 v54; // [rsp+48h] [rbp-30h]
  int v55; // [rsp+80h] [rbp+8h] BYREF

  v3 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
  v50 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v55);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    v6 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  else
    v6 = 0LL;
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v8 = 1;
  v51 = 1;
  v9 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext, v3);
  v10 = DeferredContext[2];
  v11 = v9;
  v12 = *(_DWORD *)(v10 + 2056);
  if ( v9 >= v12 + ((*(unsigned __int16 *)(v10 + 2) - 1) << 16) )
    goto LABEL_72;
  if ( v9 < v12 )
  {
    v13 = 0;
    goto LABEL_9;
  }
  v13 = ((v9 - v12) >> 16) + 1;
  if ( (v9 - v12) >> 16 == -2 )
  {
LABEL_72:
    v51 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_73;
  }
LABEL_9:
  if ( v13 )
    v11 = v9 - ((v13 - 1) << 16) - v12;
  if ( !GdiHandleEntryTable::AcquireEntryLock(*(GdiHandleEntryTable **)(v10 + 8LL * v13 + 8), v11, 0) )
    goto LABEL_72;
  v14 = WPP_MAIN_CB.Dpc.DeferredContext;
  v15 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext, v3);
  v16 = v14[2];
  v17 = v15;
  v18 = *(_DWORD *)(v16 + 2056);
  if ( v15 >= v18 + ((*(unsigned __int16 *)(v16 + 2) - 1) << 16) )
    goto LABEL_20;
  if ( v15 >= v18 )
  {
    v19 = ((v15 - v18) >> 16) + 1;
    if ( (v15 - v18) >> 16 != -2 )
      goto LABEL_16;
LABEL_20:
    v20 = 0LL;
    goto LABEL_21;
  }
  v19 = 0;
LABEL_16:
  if ( v19 )
    v17 = v15 - ((v19 - 1) << 16) - v18;
  v20 = 0LL;
  if ( GdiHandleEntryTable::_IsEntryInUse(*(GdiHandleEntryTable **)(v16 + 8LL * v19 + 8), v17) )
    v20 = *v22 + 24LL * v21;
LABEL_21:
  v50 = v20;
  _m_prefetchw((const void *)(v20 + 8));
  v52 = *(_DWORD *)(v20 + 8);
  v23 = v52 & 0xFFFFFFFE;
  if ( (v52 & 0xFFFFFFFE) != (v55 & 0xFFFFFFFC) && v23 && (!v6 || v23 != *(_DWORD *)(v6 + 8))
    || (*(_BYTE *)(v20 + 15) & 0x20) != 0 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v50);
    if ( !v51 )
    {
LABEL_73:
      v8 = 0;
      goto LABEL_74;
    }
    v20 = v50;
  }
  if ( !v20 )
    goto LABEL_73;
  v24 = *((_WORD *)a1 + 7);
  v25 = *a2;
  v26 = *((_WORD *)a2 + 7);
  v54 = *((_QWORD *)a2 + 2);
  *((_WORD *)a2 + 7) = v24 & 0x4000 | v26 & 0x8000;
  v27 = *a1;
  *((_WORD *)a1 + 7) = v24 & 0x8000 | v26 & 0x4000;
  *(_QWORD *)a2 = v27;
  *((_WORD *)a2 + 6) = *((_WORD *)a1 + 6);
  *((_DWORD *)a2 + 2) = *((_DWORD *)a1 + 2);
  *((_QWORD *)a2 + 2) = a1[2];
  v28 = WPP_MAIN_CB.Dpc.DeferredContext;
  v29 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
  v53 = v25;
  if ( v29 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v29,
                                  1)
           + 13) == HIWORD(v29) )
        v29 = (unsigned __int16)v29;
    }
    else
    {
      v29 = (unsigned __int16)v29;
    }
  }
  v30 = v28[2];
  v31 = *(_DWORD *)(v30 + 2056);
  if ( v29 < v31 + ((*(unsigned __int16 *)(v30 + 2) - 1) << 16) )
  {
    if ( v29 >= v31 )
    {
      v32 = ((v29 - v31) >> 16) + 1;
      if ( (v29 - v31) >> 16 == -2 )
        goto LABEL_42;
    }
    else
    {
      v32 = 0;
    }
    v33 = *(_QWORD *)(v30 + 8LL * v32 + 8);
    if ( v32 )
      v29 = v29 - ((v32 - 1) << 16) - v31;
    if ( v29 < *(_DWORD *)(v33 + 20) )
      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v29 >> 8))
                + 16LL * (unsigned __int8)v29
                + 8) = a2;
  }
LABEL_42:
  *a1 = v53;
  *((_WORD *)a1 + 6) = WORD6(v53);
  *((_DWORD *)a1 + 2) = DWORD2(v53);
  a1[2] = v54;
  v34 = *(_DWORD *)v20;
  v35 = WPP_MAIN_CB.Dpc.DeferredContext;
  v36 = v34 & 0xFFFFFF;
  if ( v36 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v36,
                                  1)
           + 13) == HIWORD(v36) )
        v36 = (unsigned __int16)v36;
    }
    else
    {
      v36 = (unsigned __int16)v36;
    }
  }
  v37 = *((_QWORD *)v35 + 2);
  v38 = *(_DWORD *)(v37 + 2056);
  if ( v36 >= v38 + ((*(unsigned __int16 *)(v37 + 2) - 1) << 16) )
    goto LABEL_55;
  if ( v36 >= v38 )
  {
    v39 = ((v36 - v38) >> 16) + 1;
    if ( (v36 - v38) >> 16 == -2 )
      goto LABEL_55;
  }
  else
  {
    v39 = 0;
  }
  v40 = *(_QWORD *)(v37 + 8LL * v39 + 8);
  if ( v39 )
    v36 = v36 - ((v39 - 1) << 16) - v38;
  if ( v36 < *(_DWORD *)(v40 + 20) )
  {
    v41 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * ((unsigned __int64)v36 >> 8))
                     + 16LL * (unsigned __int8)v36
                     + 8);
    goto LABEL_56;
  }
LABEL_55:
  v41 = 0LL;
LABEL_56:
  v42 = (unsigned __int16)*v41;
  v43 = v42 | (*v41 >> 8) & 0xFF0000u;
  if ( (unsigned int)v43 >= 0x10000 )
  {
    if ( *(_DWORD *)v35 > 0x10000u )
    {
      v44 = (unsigned __int16)v42;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)v35 + 2),
                                  (unsigned __int16)v42,
                                  1)
           + 13) == WORD1(v43) )
        v43 = v44;
    }
    else
    {
      v43 = (unsigned __int16)v42;
    }
    if ( (unsigned int)v43 >= 0x10000 && *(_DWORD *)v35 > 0x10000u )
      GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v35 + 2), (unsigned __int16)v43, 1);
  }
  v45 = *((_QWORD *)v35 + 2);
  v46 = *(_DWORD *)(v45 + 2056);
  if ( (unsigned int)v43 >= v46 + ((*(unsigned __int16 *)(v45 + 2) - 1) << 16) )
    goto LABEL_71;
  if ( (unsigned int)v43 < v46 )
  {
    v47 = 0;
LABEL_68:
    v48 = *(_QWORD *)(v45 + 8LL * v47 + 8);
    if ( v47 )
      v43 = (_DWORD)v43 - ((v47 - 1) << 16) - v46;
    *(_DWORD *)(*(_QWORD *)v48 + 24 * v43 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v48 + 24) + 8 * ((unsigned __int64)(unsigned int)v43 >> 8))
    + 16LL * (unsigned __int8)v43,
      0LL);
    KeLeaveCriticalRegion();
    goto LABEL_71;
  }
  v47 = (((unsigned int)v43 - v46) >> 16) + 1;
  if ( ((unsigned int)v43 - v46) >> 16 != -2 )
    goto LABEL_68;
LABEL_71:
  v51 = 0;
  v50 = 0LL;
  KeLeaveCriticalRegion();
LABEL_74:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v50);
  return v8;
}
