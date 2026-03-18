/*
 * XREFs of HmgLockEx @ 0x1C002A600
 * Callers:
 *     HmgLock @ 0x1C00294B0 (HmgLock.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0059F94 (-vCleanupRegions@@YAXK@Z.c)
 *     GreMakeBitmapNonStock @ 0x1C005C1E0 (GreMakeBitmapNonStock.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C006BFF8 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     GreLockRegion @ 0x1C0081140 (GreLockRegion.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00BD350 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     EngDeleteDriverObj @ 0x1C00CBCF0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C00CBE10 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C00CBE70 (EngUnlockDriverObj.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgLockEx(unsigned int a1, char a2, int a3)
{
  __int16 v3; // r12d^2
  signed int v4; // ebp
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  _QWORD *DeferredContext; // r15
  unsigned int v9; // r14d
  __int64 v10; // rdi
  unsigned int v11; // edx
  signed int v12; // ecx
  __int64 v13; // rdi
  char v14; // r15
  GdiHandleEntryDirectory **v15; // r15
  unsigned int v16; // eax
  GdiHandleEntryDirectory *v17; // r9
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  signed int v20; // edx
  __int64 v21; // r9
  unsigned __int16 *v22; // r14
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v28; // edi
  GdiHandleEntryDirectory *v29; // rcx
  unsigned int v30; // r8d
  signed int v31; // edx
  __int64 v32; // r9
  __int16 v33; // ax
  unsigned int v34; // edi
  GdiHandleEntryDirectory *v35; // rcx
  unsigned int v36; // r8d
  signed int v37; // edx
  __int64 v38; // r9
  _DWORD *v39; // rdx
  unsigned int v40; // eax
  unsigned int v41; // edi
  GdiHandleEntryDirectory *v42; // rcx
  unsigned int v43; // edx
  __int64 v44; // r10
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  unsigned __int64 v47; // [rsp+20h] [rbp-78h]
  int v48; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 *v49; // [rsp+38h] [rbp-60h] BYREF
  int v50; // [rsp+40h] [rbp-58h]
  int v51; // [rsp+44h] [rbp-54h]
  __int64 v52; // [rsp+A0h] [rbp+8h]
  __int64 v55; // [rsp+B8h] [rbp+20h]

  v3 = HIWORD(a1);
  v4 = 0;
  v49 = 0LL;
  v5 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  v6 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v48);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    v55 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  else
    v55 = 0LL;
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v9 = v5;
  v50 = 1;
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v5,
                                  1)
           + 13) == HIWORD(v5) )
        v9 = (unsigned __int16)v5;
    }
    else
    {
      v9 = (unsigned __int16)v5;
    }
  }
  v10 = DeferredContext[2];
  v11 = *(_DWORD *)(v10 + 2056);
  if ( v9 >= v11 + ((*(unsigned __int16 *)(v10 + 2) - 1) << 16) )
    goto LABEL_66;
  if ( v9 >= v11 )
  {
    v12 = ((v9 - v11) >> 16) + 1;
    if ( (v9 - v11) >> 16 == -2 )
    {
LABEL_66:
      KeLeaveCriticalRegion();
      return v6;
    }
  }
  else
  {
    v12 = 0;
  }
  v13 = *(_QWORD *)(v10 + 8LL * v12 + 8);
  if ( v12 )
    v9 = v9 - ((v12 - 1) << 16) - v11;
  v14 = 0;
  if ( v9 >= *(_DWORD *)(v13 + 20) )
    goto LABEL_66;
  v47 = 8 * ((unsigned __int64)v9 >> 8);
  v52 = 16LL * (unsigned __int8)v9 + *(_QWORD *)(**(_QWORD **)(v13 + 24) + v47);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v52, 0LL);
  if ( v9 < *(_DWORD *)(v13 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + v47) + 16LL * (unsigned __int8)v9 + 8) )
  {
    v14 = 1;
    *(_DWORD *)(*(_QWORD *)v13 + 24LL * v9 + 8) |= 1u;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v52, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v14 )
    goto LABEL_66;
  v15 = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  v16 = GdiHandleManager::DecodeIndex((GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext, v5);
  v17 = v15[2];
  v18 = v16;
  v19 = *((_DWORD *)v17 + 514);
  if ( v16 >= v19 + ((*((unsigned __int16 *)v17 + 1) - 1) << 16) )
    goto LABEL_77;
  if ( v16 >= v19 )
  {
    v20 = ((v16 - v19) >> 16) + 1;
    if ( (v16 - v19) >> 16 != -2 )
      goto LABEL_20;
LABEL_77:
    v22 = 0LL;
    goto LABEL_25;
  }
  v20 = 0;
LABEL_20:
  v21 = *((_QWORD *)v17 + v20 + 1);
  if ( v20 )
    v18 = v16 - ((v20 - 1) << 16) - v19;
  v22 = 0LL;
  if ( v18 < *(_DWORD *)(v21 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)v18 >> 8))
                 + 16LL * (unsigned __int8)v18
                 + 8) )
  {
    v22 = (unsigned __int16 *)(*(_QWORD *)v21 + 24LL * v18);
  }
LABEL_25:
  v49 = v22;
  _m_prefetchw(v22 + 4);
  v23 = *((_DWORD *)v22 + 2);
  v51 = v23;
  if ( a3
    || ((v24 = v23 & 0xFFFFFFFE, v24 == (v48 & 0xFFFFFFFC)) || !v24 || v55 && v24 == *(_DWORD *)(v55 + 8))
    && (*((_BYTE *)v22 + 15) & 0x20) == 0 )
  {
    v25 = v50;
  }
  else
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v49);
    v25 = v50;
    if ( !v50 )
      return v6;
    v22 = v49;
    v15 = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  }
  if ( v22 )
  {
    if ( *((_BYTE *)v22 + 14) != a2 || v22[6] != v3 || a3 && (*((_BYTE *)v22 + 15) & 0x20) == 0 )
      goto LABEL_50;
    CurrentThread = KeGetCurrentThread();
    v22 = v49;
    v15 = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
    v28 = *(_DWORD *)v49 & 0xFFFFFF;
    if ( v28 >= 0x10000 )
    {
      if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
      {
        v45 = *v49;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                    v45,
                                    1)
             + 13) == HIWORD(v28) )
          v28 = v45;
      }
      else
      {
        v28 = *v49;
      }
    }
    v29 = v15[2];
    v30 = *((_DWORD *)v29 + 514);
    if ( v28 < v30 + ((*((unsigned __int16 *)v29 + 1) - 1) << 16) )
    {
      if ( v28 < v30 )
      {
        v31 = 0;
LABEL_44:
        v32 = *((_QWORD *)v29 + v31 + 1);
        if ( v31 )
          v28 = v28 - ((v31 - 1) << 16) - v30;
        if ( v28 < *(_DWORD *)(v32 + 20) )
          v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v32 + 24) + 8 * ((unsigned __int64)v28 >> 8))
                         + 16LL * (unsigned __int8)v28
                         + 8);
        goto LABEL_48;
      }
      v31 = ((v28 - v30) >> 16) + 1;
      if ( (v28 - v30) >> 16 != -2 )
        goto LABEL_44;
    }
LABEL_48:
    v33 = *(_WORD *)(v6 + 12);
    if ( !v33 || *(struct _KTHREAD **)(v6 + 16) == CurrentThread )
    {
      *(_QWORD *)(v6 + 16) = CurrentThread;
      *(_WORD *)(v6 + 12) = v33 + 1;
      v15 = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
    }
    else
    {
      v6 = 0LL;
    }
LABEL_50:
    v34 = *(_DWORD *)v22 & 0xFFFFFF;
    if ( v34 >= 0x10000 )
    {
      if ( *(_DWORD *)v15 > 0x10000u )
      {
        v46 = *v22;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(v15[2], v46, 1) + 13) == HIWORD(v34) )
          v34 = v46;
      }
      else
      {
        v34 = *v22;
      }
    }
    v35 = v15[2];
    v36 = *((_DWORD *)v35 + 514);
    if ( v34 >= v36 + ((*((unsigned __int16 *)v35 + 1) - 1) << 16) )
      goto LABEL_93;
    if ( v34 >= v36 )
    {
      v37 = ((v34 - v36) >> 16) + 1;
      if ( (v34 - v36) >> 16 == -2 )
        goto LABEL_93;
    }
    else
    {
      v37 = 0;
    }
    v38 = *((_QWORD *)v35 + v37 + 1);
    if ( v37 )
      v34 = v34 - ((v37 - 1) << 16) - v36;
    if ( v34 < *(_DWORD *)(v38 + 20) )
    {
      v39 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v38 + 24) + 8 * ((unsigned __int64)v34 >> 8))
                       + 16LL * (unsigned __int8)v34
                       + 8);
      goto LABEL_60;
    }
LABEL_93:
    v39 = 0LL;
LABEL_60:
    v40 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v15, (unsigned __int16)*v39 | (*v39 >> 8) & 0xFF0000);
    v41 = v40;
    if ( v40 >= 0x10000 && *(_DWORD *)v15 > 0x10000u )
      GdiHandleEntryDirectory::GetEntry(v15[2], (unsigned __int16)v40, 1);
    v42 = v15[2];
    v43 = *((_DWORD *)v42 + 514);
    if ( v41 < v43 + ((*((unsigned __int16 *)v42 + 1) - 1) << 16) )
    {
      if ( v41 < v43 || (v4 = ((v41 - v43) >> 16) + 1, (v41 - v43) >> 16 != -2) )
      {
        v44 = *((_QWORD *)v42 + v4 + 1);
        if ( v4 )
          v41 = v41 - ((v4 - 1) << 16) - v43;
        *(_DWORD *)(*(_QWORD *)v44 + 24LL * v41 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v44 + 24) + 8 * ((unsigned __int64)v41 >> 8)) + 16LL * (unsigned __int8)v41,
          0LL);
        KeLeaveCriticalRegion();
      }
    }
    goto LABEL_66;
  }
  if ( v25 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v49);
  return v6;
}
