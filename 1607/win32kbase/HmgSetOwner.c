/*
 * XREFs of HmgSetOwner @ 0x1C0035D00
 * Callers:
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C002F220 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetBitmapOwnerEx @ 0x1C00346C8 (GreSetBitmapOwnerEx.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreSetRegionOwner @ 0x1C00578B0 (GreSetRegionOwner.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0059CA0 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C005B918 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreMakeBitmapNonStock @ 0x1C005C1E0 (GreMakeBitmapNonStock.c)
 *     GreSetPaletteOwner @ 0x1C005CF80 (GreSetPaletteOwner.c)
 *     bInitPALOBJ @ 0x1C0156360 (bInitPALOBJ.c)
 *     bInitICM @ 0x1C0156614 (bInitICM.c)
 *     bInitBMOBJ @ 0x1C0156878 (bInitBMOBJ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C002AF70 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C002B250 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0036468 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCount @ 0x1C0036580 (HmgIncProcessHandleCount.c)
 *     ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C00365F4 (-RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     HmgIsGarbageCollectibleType @ 0x1C00C09DC (HmgIsGarbageCollectibleType.c)
 *     Template_pqz @ 0x1C00CC378 (Template_pqz.c)
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

__int64 __fastcall HmgSetOwner(__int64 a1, int a2, unsigned __int8 a3)
{
  signed int v3; // ebp
  unsigned int v4; // esi
  unsigned __int64 v5; // r15
  struct _ERESOURCE *v6; // rbx
  __int64 v7; // rdi
  _QWORD *DeferredContext; // r14
  unsigned int v9; // esi
  __int64 v10; // rbx
  unsigned int v11; // edx
  signed int v12; // ecx
  __int64 v13; // rbx
  char v14; // r14
  __int64 v15; // r13
  _QWORD *v16; // rax
  __int64 v17; // rcx
  PVOID v18; // rsi
  __int64 v19; // r9
  unsigned int v20; // edx
  __int64 v21; // r9
  unsigned __int16 *v22; // r14
  bool v23; // zf
  int v24; // eax
  unsigned __int8 v25; // r12
  unsigned int v26; // edi
  unsigned int v27; // ebx
  __int64 v28; // r8
  unsigned int v29; // edx
  signed int v30; // ecx
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v34; // rcx
  BOOL v35; // edx
  unsigned int v36; // ebx
  char v37; // cl
  GdiHandleEntryDirectory **v38; // rbx
  unsigned int v39; // eax
  struct _BASEOBJECT *v40; // rdx
  struct HOBJ__ **v41; // rax
  __int16 v42; // ax
  unsigned int v43; // edi
  unsigned int v44; // ebx
  __int64 v45; // r8
  unsigned int v46; // edx
  signed int v47; // ecx
  __int64 v48; // r9
  _DWORD *v49; // rdx
  int v50; // eax
  __int64 v51; // rdi
  unsigned int v52; // ebx
  __int64 v53; // rdx
  unsigned int v54; // ecx
  __int64 v55; // r10
  __int64 v56; // rcx
  struct GdiHandleEntryTable *v58; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v59; // [rsp+38h] [rbp-70h]
  _BYTE v60[8]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int16 *v61; // [rsp+48h] [rbp-60h] BYREF
  int v62; // [rsp+50h] [rbp-58h]
  int v63; // [rsp+54h] [rbp-54h]
  __int64 v64; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v65; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v66; // [rsp+C0h] [rbp+18h]

  v66 = a3;
  v64 = a1;
  v3 = 0;
  v4 = a1;
  LODWORD(v5) = a2;
  v65 = 0;
  if ( a2 == -2147483646 )
    v5 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v6 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
    LODWORD(v6) = (_DWORD)ghsemHmgr;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((unsigned int)L"ghsemHmgr", a2, a3, (_DWORD)v6, 16, (__int64)L"ghsemHmgr");
  v61 = 0LL;
  v7 = (unsigned __int16)v4 | (v4 >> 8) & 0xFF0000;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v60);
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v62 = 1;
  v9 = v7;
  if ( (unsigned int)v7 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v7,
                                  1)
           + 13) == WORD1(v7) )
        v9 = (unsigned __int16)v7;
    }
    else
    {
      v9 = (unsigned __int16)v7;
    }
  }
  v10 = DeferredContext[2];
  v11 = *(_DWORD *)(v10 + 2056);
  if ( v9 >= v11 + ((*(unsigned __int16 *)(v10 + 2) - 1) << 16) )
    goto LABEL_113;
  if ( v9 >= v11 )
  {
    v12 = ((v9 - v11) >> 16) + 1;
    if ( (v9 - v11) >> 16 == -2 )
    {
LABEL_113:
      KeLeaveCriticalRegion();
      goto LABEL_114;
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
    goto LABEL_113;
  v15 = 16LL * (unsigned __int8)v9;
  v16 = *(_QWORD **)(v13 + 24);
  v59 = 8 * ((unsigned __int64)v9 >> 8);
  v58 = (struct GdiHandleEntryTable *)(v15 + *(_QWORD *)(*v16 + v59));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v58, 0LL);
  if ( v9 < *(_DWORD *)(v13 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + v59) + v15 + 8) )
  {
    v17 = 3LL * v9;
    v14 = 1;
    *(_DWORD *)(*(_QWORD *)v13 + 24LL * v9 + 8) |= 1u;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v58, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v14 )
    goto LABEL_113;
  v18 = WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (unsigned int)v7 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      v17 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                   *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                   (unsigned __int16)v7,
                                   1)
            + 13);
      if ( (_DWORD)v17 == WORD1(v7) )
        v7 = (unsigned __int16)v7;
    }
    else
    {
      v7 = (unsigned __int16)v7;
    }
  }
  v19 = *((_QWORD *)v18 + 2);
  v20 = *(_DWORD *)(v19 + 2056);
  if ( (unsigned int)v7 >= v20 + ((*(unsigned __int16 *)(v19 + 2) - 1) << 16) )
    goto LABEL_39;
  if ( (unsigned int)v7 >= v20 )
  {
    v17 = (((unsigned int)v7 - v20) >> 16) + 1;
    if ( ((unsigned int)v7 - v20) >> 16 != -2 )
      goto LABEL_34;
LABEL_39:
    v22 = 0LL;
    goto LABEL_40;
  }
  v17 = 0LL;
LABEL_34:
  v21 = *(_QWORD *)(v19 + 8LL * (int)v17 + 8);
  if ( (_DWORD)v17 )
    v7 = (_DWORD)v7 - (((_DWORD)v17 - 1) << 16) - v20;
  v22 = 0LL;
  if ( (unsigned int)v7 < *(_DWORD *)(v21 + 20) )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)(unsigned int)v7 >> 8))
                    + 16LL * (unsigned __int8)v7
                    + 8);
    if ( v17 )
    {
      v17 = 3 * v7;
      v22 = (unsigned __int16 *)(*(_QWORD *)v21 + 24 * v7);
    }
  }
LABEL_40:
  v61 = v22;
  _m_prefetchw(v22 + 4);
  v23 = (*((_BYTE *)v22 + 15) & 0x20) == 0;
  v63 = *((_DWORD *)v22 + 2);
  if ( v23 )
  {
    v24 = v62;
  }
  else
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v61);
    v24 = v62;
    if ( !v62 )
      goto LABEL_114;
    v22 = v61;
    v18 = WPP_MAIN_CB.Dpc.DeferredContext;
  }
  if ( v22 )
  {
    v25 = v66;
    if ( *((_BYTE *)v22 + 14) != v66 || v22[6] != WORD1(v64) )
      goto LABEL_85;
    v26 = *(_DWORD *)v22 & 0xFFFFFF;
    if ( v26 >= 0x10000 )
    {
      if ( *(_DWORD *)v18 > 0x10000u )
      {
        v27 = *v22;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v18 + 2), v27, 1) + 13) == HIWORD(v26) )
          v26 = v27;
      }
      else
      {
        v26 = *v22;
      }
    }
    v28 = *((_QWORD *)v18 + 2);
    v29 = *(_DWORD *)(v28 + 2056);
    if ( v26 >= v29 + ((*(unsigned __int16 *)(v28 + 2) - 1) << 16) )
      goto LABEL_60;
    if ( v26 >= v29 )
    {
      v30 = ((v26 - v29) >> 16) + 1;
      if ( (v26 - v29) >> 16 == -2 )
        goto LABEL_60;
    }
    else
    {
      v30 = 0;
    }
    v31 = *(_QWORD *)(v28 + 8LL * v30 + 8);
    if ( v30 )
      v26 = v26 - ((v30 - 1) << 16) - v29;
    if ( v26 < *(_DWORD *)(v31 + 20) )
    {
      v32 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v31 + 24) + 8 * ((unsigned __int64)v26 >> 8))
                      + 16LL * (unsigned __int8)v26
                      + 8);
      goto LABEL_61;
    }
LABEL_60:
    v32 = 0LL;
LABEL_61:
    ThreadWin32Thread = PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && *(_QWORD *)ThreadWin32Thread )
    {
      v34 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 72LL);
      v35 = 0;
      if ( v34 )
        v35 = v5 != 0;
    }
    else
    {
      v34 = 0LL;
      v35 = 0;
    }
    if ( !*(_WORD *)(v32 + 12) || *(struct _KTHREAD **)(v32 + 16) == KeGetCurrentThread() || v35 )
    {
      v22 = v61;
      v65 = 1;
      v36 = *((_DWORD *)v61 + 2) & 0xFFFFFFFE;
      if ( v35 )
        LODWORD(v5) = *(_DWORD *)(v34 + 8);
      if ( v36 != (_DWORD)v5 )
      {
        v65 = HmgIncProcessHandleCount((unsigned int)v5);
        if ( v65 )
        {
          HmgDecProcessHandleCount(v36);
          v37 = v5 ^ *((_DWORD *)v22 + 2);
          v58 = 0LL;
          LODWORD(v64) = 0;
          *((_DWORD *)v22 + 2) = v5 ^ v37 & 1;
          v38 = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
          v39 = GdiHandleManager::DecodeIndex(
                  (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                  *(_DWORD *)v22 & 0xFFFFFF);
          v41 = GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v38[2], v39, &v58, (unsigned int *)&v64)
              ? (struct HOBJ__ **)GdiHandleEntryTable::GetEntryObject(v58, v64)
              : 0LL;
          RECHMGRCREATE(*v41, v40);
          if ( (_DWORD)v5
            && (_DWORD)v5 != -2147483630
            && (unsigned int)HmgIsGarbageCollectibleType(v25)
            && (*(_WORD *)(v32 + 12) || *(_DWORD *)(v32 + 8)) )
          {
            v42 = *(_WORD *)(v32 + 14);
            if ( (v42 & 0x4000) == 0 )
              *(_WORD *)(v32 + 14) = v42 | 0x4000;
          }
        }
      }
    }
    else
    {
      v22 = v61;
    }
    v18 = WPP_MAIN_CB.Dpc.DeferredContext;
LABEL_85:
    v43 = *(_DWORD *)v22 & 0xFFFFFF;
    if ( v43 >= 0x10000 )
    {
      if ( *(_DWORD *)v18 > 0x10000u )
      {
        v44 = *v22;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v18 + 2), v44, 1) + 13) == HIWORD(v43) )
          v43 = v44;
      }
      else
      {
        v43 = *v22;
      }
    }
    v45 = *((_QWORD *)v18 + 2);
    v46 = *(_DWORD *)(v45 + 2056);
    if ( v43 >= v46 + ((*(unsigned __int16 *)(v45 + 2) - 1) << 16) )
      goto LABEL_98;
    if ( v43 >= v46 )
    {
      v47 = ((v43 - v46) >> 16) + 1;
      if ( (v43 - v46) >> 16 == -2 )
        goto LABEL_98;
    }
    else
    {
      v47 = 0;
    }
    v48 = *(_QWORD *)(v45 + 8LL * v47 + 8);
    if ( v47 )
      v43 = v43 - ((v47 - 1) << 16) - v46;
    if ( v43 < *(_DWORD *)(v48 + 20) )
    {
      v49 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v48 + 24) + 8 * ((unsigned __int64)v43 >> 8))
                       + 16LL * (unsigned __int8)v43
                       + 8);
LABEL_99:
      v50 = (unsigned __int16)*v49;
      v51 = v50 | (*v49 >> 8) & 0xFF0000u;
      if ( (unsigned int)v51 >= 0x10000 )
      {
        if ( *(_DWORD *)v18 > 0x10000u )
        {
          v52 = (unsigned __int16)v50;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)v18 + 2),
                                      (unsigned __int16)v50,
                                      1)
               + 13) == WORD1(v51) )
            v51 = v52;
        }
        else
        {
          v51 = (unsigned __int16)v50;
        }
        if ( (unsigned int)v51 >= 0x10000 && *(_DWORD *)v18 > 0x10000u )
          GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v18 + 2), (unsigned __int16)v51, 1);
      }
      v53 = *((_QWORD *)v18 + 2);
      v54 = *(_DWORD *)(v53 + 2056);
      if ( (unsigned int)v51 < v54 + ((*(unsigned __int16 *)(v53 + 2) - 1) << 16) )
      {
        if ( (unsigned int)v51 < v54
          || (v3 = (((unsigned int)v51 - v54) >> 16) + 1, ((unsigned int)v51 - v54) >> 16 != -2) )
        {
          v55 = *(_QWORD *)(v53 + 8LL * v3 + 8);
          if ( v3 )
            v51 = (_DWORD)v51 - ((v3 - 1) << 16) - v54;
          *(_DWORD *)(*(_QWORD *)v55 + 24 * v51 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v55 + 24) + 8 * ((unsigned __int64)(unsigned int)v51 >> 8))
          + 16LL * (unsigned __int8)v51,
            0LL);
          KeLeaveCriticalRegion();
        }
      }
      goto LABEL_113;
    }
LABEL_98:
    v49 = 0LL;
    goto LABEL_99;
  }
  if ( v24 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v61);
LABEL_114:
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v17, &LockRelease);
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v56);
  }
  return v65;
}
