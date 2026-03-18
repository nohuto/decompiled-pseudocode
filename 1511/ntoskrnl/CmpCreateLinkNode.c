/*
 * XREFs of CmpCreateLinkNode @ 0x1403CDCDC
 * Callers:
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14001B460 (ObDereferenceObjectDeferDelete.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     HvResetDirtyData @ 0x1403D0520 (HvResetDirtyData.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1403D169C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpAddSubKeyEx @ 0x1403D7E1C (CmpAddSubKeyEx.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403DF288 (CmpCleanUpSubKeyInfo.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmpUnlockAndLockKcbs @ 0x1403E065C (CmpUnlockAndLockKcbs.c)
 *     CmpNameSize @ 0x1403F4458 (CmpNameSize.c)
 *     CmpCopyName @ 0x1403F45B4 (CmpCopyName.c)
 *     HvAllocateCell @ 0x1403F45FC (HvAllocateCell.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmpRemoveKeyHash @ 0x1404B48FC (CmpRemoveKeyHash.c)
 *     HvMarkBaseBlockDirty @ 0x1404C1D94 (HvMarkBaseBlockDirty.c)
 *     DelistKeyBodyFromKCB @ 0x1405E137C (DelistKeyBodyFromKCB.c)
 */

__int64 __fastcall CmpCreateLinkNode(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 *a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        PVOID *a12)
{
  __int64 v12; // rsi
  bool v15; // r13
  __int64 v16; // r15
  int v17; // eax
  unsigned __int16 v18; // ax
  unsigned int Cell; // edi
  unsigned int v20; // ebx
  ULONG_PTR v21; // rcx
  __int64 v22; // rax
  int v23; // r9d
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v32; // rax
  int Child; // esi
  __int64 v34; // rax
  _DWORD *v35; // rax
  _DWORD *v36; // rbx
  unsigned __int16 v37; // ax
  __int64 v38; // rbx
  ULONG_PTR v39; // rcx
  _QWORD *v40; // rdi
  __int64 v41; // rax
  unsigned int v42; // edx
  unsigned int v43; // eax
  PVOID *v45; // r12
  _QWORD *v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // rcx
  int v49; // [rsp+98h] [rbp-80h] BYREF
  int v50; // [rsp+9Ch] [rbp-7Ch] BYREF
  __int64 v51; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-70h] BYREF
  _OWORD v53[8]; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v54; // [rsp+138h] [rbp+20h]
  int v55; // [rsp+188h] [rbp+70h] BYREF
  unsigned int v56; // [rsp+190h] [rbp+78h]
  __int64 v57; // [rsp+198h] [rbp+80h]

  v57 = a3;
  v56 = a2;
  v12 = a10;
  v50 = -1;
  v49 = -1;
  v55 = -1;
  v51 = a10;
  if ( BugCheckParameter2 != CmpMasterHive )
    return 3221225506LL;
  if ( !a11 )
  {
    v15 = 0;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
    v16 = a7;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)(a7 + 48) + 2848LL), 1u);
    v17 = *(_DWORD *)(v12 + 4);
    if ( (v17 & 0x80u) != 0 )
    {
      Child = -1073741790;
    }
    else if ( (v17 & 0x20000) != 0 )
    {
      Child = -1073741772;
    }
    else
    {
      v18 = CmpNameSize(a4);
      Cell = HvAllocateCell(BugCheckParameter2, (unsigned int)v18 + 76, 0LL, 0LL, 0LL);
      if ( Cell != -1 )
      {
        v20 = *(_DWORD *)(v16 + 40);
        if ( v20 == -1 )
        {
          Child = CmpDoCreateChild(
                    *(_QWORD *)(v16 + 48),
                    (__int64)a4,
                    a5,
                    v16,
                    a8,
                    v12,
                    12,
                    (__int64)&a10,
                    (__int64)a12,
                    0LL);
          if ( Child < 0 )
            goto LABEL_39;
          v20 = a10;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 48) + 64LL) + 36LL) = a10;
          ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(v16 + 48) + 2840LL));
          HvMarkBaseBlockDirty(*(_QWORD *)(v16 + 48));
          Child = HvCheckAndUpdateHiveBackupTimeStamp(*(_QWORD *)(v16 + 48));
          ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(v16 + 48) + 2840LL));
LABEL_10:
          if ( Child >= 0 )
          {
            if ( !(unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v16 + 48), v20) )
            {
              HvFreeCell(BugCheckParameter2, Cell);
              Child = -1073741443;
LABEL_38:
              v45 = a12;
              v46 = *a12;
              *(_WORD *)(*((_QWORD *)*a12 + 1) + 4LL) |= 0x20u;
              v47 = v46[1];
              v48 = *(_QWORD *)(v47 + 32);
              *(_DWORD *)(v47 + 4) |= 0x20000u;
              CmpRemoveKeyHash(v48, v47 + 16);
              *(_QWORD *)(v47 + 24) = -1LL;
              *(_DWORD *)(v46[1] + 40LL) = -1;
              DelistKeyBodyFromKCB(v46, 1LL);
              *(_DWORD *)(*(_QWORD *)(v46[1] + 32LL) + 144LL) |= 0x40u;
              CmpDereferenceKeyControlBlockWithLock(v46[1]);
              CmpUnlockAndLockKcbs(a8, v46[1], 0LL, 0LL);
              *((_WORD *)v46 + 24) |= 4u;
              v46[1] = 0LL;
              ObDereferenceObjectDeferDelete(*v45);
              goto LABEL_24;
            }
            v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v16 + 48) + 8LL))(
                    *(_QWORD *)(v16 + 48),
                    v20,
                    &v55);
            if ( v34 )
            {
              *(_DWORD *)(v34 + 16) = Cell;
              *(_WORD *)(v34 + 2) |= 0xCu;
              (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v16 + 48) + 16LL))(*(_QWORD *)(v16 + 48), &v55);
              v35 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                                BugCheckParameter2,
                                Cell,
                                &v49);
              v36 = v35;
              if ( v35 )
              {
                *v35 = 682860;
                v35[4] = v56;
                v37 = CmpCopyName(v35 + 19, a4);
                *((_WORD *)v36 + 36) = v37;
                if ( v37 < *a4 )
                  *((_WORD *)v36 + 1) |= 0x20u;
                *(_QWORD *)(v36 + 1) = MEMORY[0xFFFFF78000000014];
                *(_QWORD *)(v36 + 5) = 0LL;
                v36[7] = -1;
                v36[8] = -1;
                v36[9] = 0;
                v36[10] = -1;
                *((_WORD *)v36 + 37) = 0;
                *(_QWORD *)(v36 + 9) = *(_QWORD *)(v16 + 48);
                v36[7] = a10;
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v49);
                v38 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                        BugCheckParameter2,
                        v56,
                        &v50);
                v39 = BugCheckParameter2;
                if ( !v38 )
                  goto LABEL_37;
                if ( (unsigned __int8)CmpAddSubKeyEx(BugCheckParameter2) )
                {
                  v40 = *a12;
                  CmpCleanUpSubKeyInfo(*(_QWORD *)(*((_QWORD *)*a12 + 1) + 72LL));
                  v41 = MEMORY[0xFFFFF78000000014];
                  *(_QWORD *)(v38 + 4) = MEMORY[0xFFFFF78000000014];
                  *(_QWORD *)(*(_QWORD *)(v40[1] + 72LL) + 168LL) = v41;
                  v42 = *a4;
                  if ( (unsigned __int16)*(_DWORD *)(v38 + 52) < v42 )
                  {
                    *(_WORD *)(v38 + 52) = v42;
                    *(_WORD *)(*(_QWORD *)(v40[1] + 72LL) + 176LL) = *a4;
                  }
                  v43 = *(_DWORD *)(v16 + 4);
                  if ( *(_DWORD *)(v38 + 56) < v43 )
                    *(_DWORD *)(v38 + 56) = v43;
                  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v50);
                  if ( v15 )
                    HvResetDirtyData(*(_QWORD *)(v16 + 48));
                  goto LABEL_24;
                }
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v50);
              }
            }
            v39 = BugCheckParameter2;
LABEL_37:
            HvFreeCell(v39, Cell);
            Child = -1073741670;
            goto LABEL_38;
          }
LABEL_39:
          HvFreeCell(BugCheckParameter2, Cell);
          goto LABEL_24;
        }
        v21 = *(_QWORD *)(v16 + 48);
        LODWORD(a10) = *(_DWORD *)(v16 + 40);
        v15 = *(_DWORD *)(v21 + 88) == 0;
        if ( !(unsigned __int8)HvpMarkCellDirty(v21, v20) )
        {
          HvFreeCell(BugCheckParameter2, Cell);
          Child = -1073741443;
          goto LABEL_24;
        }
        v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v16 + 48) + 8LL))(
                *(_QWORD *)(v16 + 48),
                v20,
                &v55);
        if ( v22 )
        {
          *(_DWORD *)(v22 + 16) = Cell;
          *(_WORD *)(v22 + 2) |= 0xCu;
          (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v16 + 48) + 16LL))(*(_QWORD *)(v16 + 48), &v55);
          LOBYTE(v23) = a5;
          v24 = *(_OWORD *)(v16 + 16);
          v53[0] = *(_OWORD *)v16;
          v25 = *(_OWORD *)(v16 + 32);
          v26 = *(_QWORD *)(v16 + 128);
          v53[1] = v24;
          v27 = *(_OWORD *)(v16 + 48);
          v53[2] = v25;
          v28 = *(_OWORD *)(v16 + 64);
          v53[3] = v27;
          v29 = *(_OWORD *)(v16 + 80);
          v53[4] = v28;
          v30 = *(_OWORD *)(v16 + 96);
          v53[5] = v29;
          v31 = *(_OWORD *)(v16 + 112);
          v53[6] = v30;
          v53[7] = v31;
          v54 = v26;
          v32 = *(_QWORD *)(v16 + 48);
          LODWORD(v53[0]) &= ~1u;
          v52 = v32;
          Child = CmpDoOpen(
                    (unsigned int)&v52,
                    v20,
                    v57,
                    v23,
                    a6,
                    (__int64)v53,
                    2,
                    a8,
                    a9,
                    (__int64)&v51,
                    (__int64)a4,
                    *(_QWORD *)(v16 + 64),
                    0LL,
                    (__int64)a12,
                    0LL,
                    0LL,
                    0LL);
          goto LABEL_10;
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v49);
        HvFreeCell(BugCheckParameter2, Cell);
      }
      Child = -1073741670;
    }
LABEL_24:
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v16 + 48) + 2848LL));
    ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
    return (unsigned int)Child;
  }
  return 3221225485LL;
}
