/*
 * XREFs of CmpCreateLinkNode @ 0x1404B0468
 * Callers:
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpUnlockAndLockKcbs @ 0x14042A760 (CmpUnlockAndLockKcbs.c)
 *     CmpCleanUpSubKeyInfo @ 0x140448E64 (CmpCleanUpSubKeyInfo.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     HvResetDirtyData @ 0x14044D6FC (HvResetDirtyData.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpCopyName @ 0x1404A1054 (CmpCopyName.c)
 *     CmpNameSize @ 0x1404A109C (CmpNameSize.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1404ADF1C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpRemoveKeyHash @ 0x14052B5B0 (CmpRemoveKeyHash.c)
 *     CmpAddSubKeyEx @ 0x1405335D0 (CmpAddSubKeyEx.c)
 *     HvMarkBaseBlockDirty @ 0x1405C267C (HvMarkBaseBlockDirty.c)
 *     DelistKeyBodyFromKCB @ 0x1406570A0 (DelistKeyBodyFromKCB.c)
 */

__int64 __fastcall CmpCreateLinkNode(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 *a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 *a8,
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
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // r9d
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rax
  int v35; // esi
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rbx
  unsigned __int16 v45; // ax
  __int64 v46; // rbx
  ULONG_PTR v47; // rcx
  _QWORD *v48; // rdi
  __int64 v49; // rax
  unsigned int v50; // edx
  unsigned int v51; // eax
  ULONG_PTR v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rbx
  ULONG_PTR v56; // rbx
  signed __int32 v57; // eax
  __int64 v58; // r8
  __int64 v59; // r9
  PVOID *v60; // r12
  _QWORD *v61; // rdi
  __int64 v62; // rbx
  __int64 v63; // rcx
  int v64; // [rsp+98h] [rbp-80h] BYREF
  int v65; // [rsp+9Ch] [rbp-7Ch] BYREF
  __int64 v66; // [rsp+A0h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-70h]
  __int64 v68; // [rsp+B0h] [rbp-68h] BYREF
  _OWORD v69[8]; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v70; // [rsp+138h] [rbp+20h]
  int v71; // [rsp+188h] [rbp+70h] BYREF
  unsigned int v72; // [rsp+190h] [rbp+78h]
  __int64 v73; // [rsp+198h] [rbp+80h]

  v73 = a3;
  v72 = a2;
  v12 = a10;
  v65 = -1;
  v64 = -1;
  v71 = -1;
  v66 = a10;
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
      v35 = -1073741790;
    }
    else if ( (v17 & 0x20000) != 0 )
    {
      v35 = -1073741772;
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
          v35 = CmpDoCreateChild(*(_QWORD *)(v16 + 48), v72, 0LL, v73, a4, a5, v16, a8, v12, 12, &a10, a12, 0LL);
          if ( v35 < 0 )
            goto LABEL_45;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 48) + 64LL) + 36LL) = a10;
          v53 = *(_QWORD *)(*(_QWORD *)(v16 + 48) + 2840LL);
          CurrentThread = KeGetCurrentThread();
          v54 = KeAbPreAcquire(v53, 0LL, 0LL, v37);
          v55 = v54;
          if ( !_interlockedbittestandreset((volatile signed __int32 *)v53, 0) )
            ExpAcquireFastMutexContended(v53, v54);
          if ( v55 )
            *(_BYTE *)(v55 + 26) |= 1u;
          *(_QWORD *)(v53 + 8) = CurrentThread;
          HvMarkBaseBlockDirty(*(_QWORD *)(v16 + 48));
          v35 = HvCheckAndUpdateHiveBackupTimeStamp(*(_QWORD *)(v16 + 48));
          v56 = *(_QWORD *)(*(_QWORD *)(v16 + 48) + 2840LL);
          *(_QWORD *)(v56 + 8) = 0LL;
          v57 = _InterlockedCompareExchange((volatile signed __int32 *)v56, 1, 0);
          if ( v57 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)v56, v57);
          KeAbPostRelease(v56);
          v20 = a10;
LABEL_10:
          if ( v35 >= 0 )
          {
            if ( !HvpMarkCellDirty(*(_QWORD *)(v16 + 48), v20, 0, 0LL) )
            {
              HvFreeCell(BugCheckParameter2, Cell, v38, v39);
              v35 = -1073741443;
LABEL_44:
              v60 = a12;
              v61 = *a12;
              *(_WORD *)(*((_QWORD *)*a12 + 1) + 4LL) |= 0x20u;
              v62 = v61[1];
              v63 = *(_QWORD *)(v62 + 32);
              *(_DWORD *)(v62 + 4) |= 0x20000u;
              CmpRemoveKeyHash(v63, v62 + 16);
              *(_QWORD *)(v62 + 24) = -1LL;
              *(_DWORD *)(v61[1] + 40LL) = -1;
              DelistKeyBodyFromKCB(v61, 1LL);
              *(_DWORD *)(*(_QWORD *)(v61[1] + 32LL) + 144LL) |= 0x40u;
              CmpDereferenceKeyControlBlockWithLock(v61[1]);
              CmpUnlockAndLockKcbs(a8, (void *)v61[1], 0LL, 0LL);
              *((_WORD *)v61 + 24) |= 4u;
              v61[1] = 0LL;
              ObDereferenceObjectDeferDelete(*v60);
              goto LABEL_24;
            }
            v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v16 + 48) + 8LL))(
                    *(_QWORD *)(v16 + 48),
                    v20,
                    &v71);
            if ( v40 )
            {
              *(_DWORD *)(v40 + 16) = Cell;
              *(_WORD *)(v40 + 2) |= 0xCu;
              (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v16 + 48) + 16LL))(*(_QWORD *)(v16 + 48), &v71);
              v43 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      Cell,
                      &v64);
              v44 = v43;
              if ( v43 )
              {
                *(_DWORD *)v43 = 682860;
                *(_DWORD *)(v43 + 16) = v72;
                v45 = CmpCopyName((_BYTE *)(v43 + 76), (const void **)a4);
                *(_WORD *)(v44 + 72) = v45;
                if ( v45 < *a4 )
                  *(_WORD *)(v44 + 2) |= 0x20u;
                *(_QWORD *)(v44 + 4) = MEMORY[0xFFFFF78000000014];
                *(_QWORD *)(v44 + 20) = 0LL;
                *(_DWORD *)(v44 + 28) = -1;
                *(_DWORD *)(v44 + 32) = -1;
                *(_DWORD *)(v44 + 36) = 0;
                *(_DWORD *)(v44 + 40) = -1;
                *(_WORD *)(v44 + 74) = 0;
                *(_QWORD *)(v44 + 36) = *(_QWORD *)(v16 + 48);
                *(_DWORD *)(v44 + 28) = a10;
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v64);
                v46 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                        BugCheckParameter2,
                        v72,
                        &v65);
                v47 = BugCheckParameter2;
                if ( !v46 )
                  goto LABEL_43;
                if ( (unsigned __int8)CmpAddSubKeyEx(BugCheckParameter2) )
                {
                  v48 = *a12;
                  CmpCleanUpSubKeyInfo(*(_QWORD *)(*((_QWORD *)*a12 + 1) + 72LL));
                  v49 = MEMORY[0xFFFFF78000000014];
                  *(_QWORD *)(v46 + 4) = MEMORY[0xFFFFF78000000014];
                  *(_QWORD *)(*(_QWORD *)(v48[1] + 72LL) + 168LL) = v49;
                  v50 = *a4;
                  if ( (unsigned __int16)*(_DWORD *)(v46 + 52) < v50 )
                  {
                    *(_WORD *)(v46 + 52) = v50;
                    *(_WORD *)(*(_QWORD *)(v48[1] + 72LL) + 176LL) = *a4;
                  }
                  v51 = *(_DWORD *)(v16 + 4);
                  if ( *(_DWORD *)(v46 + 56) < v51 )
                    *(_DWORD *)(v46 + 56) = v51;
                  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v65);
                  if ( v15 )
                    HvResetDirtyData(*(_QWORD *)(v16 + 48));
                  goto LABEL_24;
                }
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v65);
              }
            }
            v47 = BugCheckParameter2;
LABEL_43:
            HvFreeCell(v47, Cell, v41, v42);
            v35 = -1073741670;
            goto LABEL_44;
          }
LABEL_45:
          HvFreeCell(BugCheckParameter2, Cell, v36, v37);
          goto LABEL_24;
        }
        v21 = *(_QWORD *)(v16 + 48);
        LODWORD(a10) = *(_DWORD *)(v16 + 40);
        v15 = *(_DWORD *)(v21 + 88) == 0;
        if ( !HvpMarkCellDirty(v21, v20, 0, 0LL) )
        {
          HvFreeCell(BugCheckParameter2, Cell, v22, v23);
          v35 = -1073741443;
          goto LABEL_24;
        }
        v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v16 + 48) + 8LL))(
                *(_QWORD *)(v16 + 48),
                v20,
                &v71);
        if ( v24 )
        {
          *(_DWORD *)(v24 + 16) = Cell;
          *(_WORD *)(v24 + 2) |= 0xCu;
          (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v16 + 48) + 16LL))(*(_QWORD *)(v16 + 48), &v71);
          LOBYTE(v25) = a5;
          v26 = *(_OWORD *)(v16 + 16);
          v69[0] = *(_OWORD *)v16;
          v27 = *(_OWORD *)(v16 + 32);
          v28 = *(_QWORD *)(v16 + 128);
          v69[1] = v26;
          v29 = *(_OWORD *)(v16 + 48);
          v69[2] = v27;
          v30 = *(_OWORD *)(v16 + 64);
          v69[3] = v29;
          v31 = *(_OWORD *)(v16 + 80);
          v69[4] = v30;
          v32 = *(_OWORD *)(v16 + 96);
          v69[5] = v31;
          v33 = *(_OWORD *)(v16 + 112);
          v69[6] = v32;
          v69[7] = v33;
          v70 = v28;
          v34 = *(_QWORD *)(v16 + 48);
          LODWORD(v69[0]) &= ~1u;
          v68 = v34;
          v35 = CmpDoOpen(
                  (unsigned int)&v68,
                  v20,
                  v73,
                  v25,
                  a6,
                  (__int64)v69,
                  2,
                  (__int64)a8,
                  a9,
                  (__int64)&v66,
                  (__int64)a4,
                  *(_QWORD *)(v16 + 64),
                  0LL,
                  (__int64)a12,
                  0LL,
                  0LL,
                  0LL);
          goto LABEL_10;
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v64);
        HvFreeCell(BugCheckParameter2, Cell, v58, v59);
      }
      v35 = -1073741670;
    }
LABEL_24:
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v16 + 48) + 2848LL));
    ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
    return (unsigned int)v35;
  }
  return 3221225485LL;
}
