/*
 * XREFs of CmpUndoDeleteKeyForTransEx @ 0x140663E6C
 * Callers:
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpLockIXLockExclusive @ 0x140447FF0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140448044 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1404482CC (CmpRundownUnitOfWork.c)
 *     CmListGetPrevElement @ 0x140448C64 (CmListGetPrevElement.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404CC7A0 (CmpFindSecurityCellCacheIndex.c)
 *     CmUnlockHiveSecurity @ 0x1404EC89C (CmUnlockHiveSecurity.c)
 *     CmpAllocateUnitOfWork @ 0x1404F3314 (CmpAllocateUnitOfWork.c)
 *     LOCK_TRANSACTION_LIST @ 0x140557838 (LOCK_TRANSACTION_LIST.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x14055789C (UNLOCK_TRANSACTION_LIST.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140659810 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmLockHiveSecurityExclusive @ 0x14065D89C (CmLockHiveSecurityExclusive.c)
 *     CmpLockHiveFlusherShared @ 0x14065D9B4 (CmpLockHiveFlusherShared.c)
 *     CmpUnlockHiveFlusher @ 0x14065DB04 (CmpUnlockHiveFlusher.c)
 */

__int64 __fastcall CmpUndoDeleteKeyForTransEx(ULONG_PTR BugCheckParameter3, __int64 a2, void *a3)
{
  __int64 v3; // r9
  __int64 v5; // rdi
  __int64 *v6; // r13
  __int64 v7; // r9
  __int64 PrevElement; // r14
  ULONG_PTR v9; // r15
  __int64 v10; // rax
  int v11; // r10d
  unsigned int v12; // r12d
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 *PoolWithTag; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int SecurityDescriptorNode; // edi
  __int64 v24; // rsi
  __int64 *v25; // rdi
  _QWORD *UnitOfWork; // rax
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  int *v35; // rdx
  int v36; // eax
  __int64 v37; // rcx
  _QWORD *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r15
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rax
  PVOID *v55; // rsi
  __int64 v56; // r14
  __int64 v57; // [rsp+40h] [rbp-38h] BYREF
  int v58; // [rsp+48h] [rbp-30h] BYREF
  __int64 v59; // [rsp+50h] [rbp-28h]
  int *v60; // [rsp+58h] [rbp-20h]
  __int64 v61; // [rsp+60h] [rbp-18h]
  ULONG_PTR v62; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v63; // [rsp+C8h] [rbp+50h]
  void *Src; // [rsp+D0h] [rbp+58h]
  int v65; // [rsp+D8h] [rbp+60h] BYREF

  Src = a3;
  v63 = a2;
  v3 = *(_QWORD *)(BugCheckParameter3 + 72);
  v59 = 0LL;
  v65 = -1;
  v5 = a2;
  v58 = -1;
  LODWORD(v62) = -1;
  v57 = 0LL;
  v6 = 0LL;
  PrevElement = CmListGetPrevElement(v3 + 200, &v57);
  if ( !PrevElement )
    return 3221225524LL;
  do
  {
    if ( *(_DWORD *)(PrevElement + 68) == 3 && *(_QWORD *)(PrevElement + 80) == BugCheckParameter3 )
      break;
    PrevElement = CmListGetPrevElement(v7 + 200, &v57);
  }
  while ( PrevElement );
  if ( !PrevElement )
    return 3221225524LL;
  v9 = BugCheckParameter3 + 200;
  v57 = 0LL;
  v10 = CmListGetPrevElement(BugCheckParameter3 + 200, &v57);
  v61 = v10;
  if ( !v10 || *(_DWORD *)(v10 + 68) != 2 )
    return 3221225524LL;
  if ( *(_QWORD *)(BugCheckParameter3 + 280) == v5 )
  {
    v12 = *(_DWORD *)(BugCheckParameter3 + 272);
    v13 = *(_DWORD *)(BugCheckParameter3 + 276);
  }
  else
  {
    v14 = *(unsigned int *)(BugCheckParameter3 + 40);
    v15 = *(_QWORD *)(BugCheckParameter3 + 32);
    LODWORD(v57) = v11;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v15 + 8))(v15, v14, &v57);
    if ( !v16 )
      return 3221225626LL;
    v12 = *(_DWORD *)(v16 + 36);
    v13 = *(_DWORD *)(v16 + 40);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(BugCheckParameter3 + 32) + 16LL))(
      *(_QWORD *)(BugCheckParameter3 + 32),
      &v57);
  }
  if ( v12 )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * v12, 0x37344D43u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v12);
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(BugCheckParameter3 + 32) + 8LL))(
              *(_QWORD *)(BugCheckParameter3 + 32),
              v13,
              &v65);
      v59 = v19;
      if ( v19 )
      {
        LODWORD(v57) = 0;
        v24 = v63;
        v25 = v6;
        v60 = (int *)v19;
        while ( 1 )
        {
          UnitOfWork = CmpAllocateUnitOfWork();
          *v25 = (__int64)UnitOfWork;
          if ( !UnitOfWork )
            break;
          v27 = *(_QWORD **)(BugCheckParameter3 + 208);
          v28 = UnitOfWork + 4;
          *v28 = v9;
          v28[1] = v27;
          if ( *v27 != v9 )
            __fastfail(3u);
          *v27 = v28;
          *(_QWORD *)(BugCheckParameter3 + 208) = v28;
          CmpReferenceKeyControlBlock(BugCheckParameter3);
          *(_QWORD *)(*v25 + 48) = BugCheckParameter3;
          LOCK_TRANSACTION_LIST(v30, v29, v31, v32);
          v33 = (_QWORD *)*v25;
          v34 = *(_QWORD **)(v24 + 24);
          *v33 = v24 + 16;
          v33[1] = v34;
          if ( *v34 != v24 + 16 )
            __fastfail(3u);
          *v34 = v33;
          *(_QWORD *)(v24 + 24) = v33;
          UNLOCK_TRANSACTION_LIST();
          *(_QWORD *)(*v25 + 56) = v24;
          if ( !CmpLockIXLockIntent((unsigned int *)(BugCheckParameter3 + 240), *v25)
            || !CmpLockIXLockExclusive(BugCheckParameter3 + 256, (_QWORD *)*v25, 1) )
          {
            SecurityDescriptorNode = -1072103423;
            goto LABEL_47;
          }
          v35 = v60;
          *(_DWORD *)(*v25 + 68) = 6;
          v36 = *v35;
          v37 = *v25++;
          v60 = v35 + 1;
          *(_DWORD *)(v37 + 80) = v36;
          LODWORD(v57) = v57 + 1;
          if ( (unsigned int)v57 >= v12 )
          {
            (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(BugCheckParameter3 + 32) + 16LL))(
              *(_QWORD *)(BugCheckParameter3 + 32),
              &v65);
            v59 = 0LL;
            v5 = v63;
            goto LABEL_26;
          }
        }
      }
      goto LABEL_16;
    }
    return 3221225626LL;
  }
LABEL_26:
  v38 = CmpAllocateUnitOfWork();
  if ( v38 )
  {
    CmpLockHiveFlusherShared(*(_QWORD *)(BugCheckParameter3 + 32));
    CmLockHiveSecurityExclusive(*(_QWORD *)(BugCheckParameter3 + 32), v39, v40, v41);
    v42 = *(_QWORD **)(BugCheckParameter3 + 208);
    v43 = v38 + 4;
    v38[4] = v9;
    v38[5] = v42;
    if ( *v42 != v9 )
      __fastfail(3u);
    *v42 = v43;
    *(_QWORD *)(BugCheckParameter3 + 208) = v43;
    CmpReferenceKeyControlBlock(BugCheckParameter3);
    v38[6] = BugCheckParameter3;
    LOCK_TRANSACTION_LIST(v45, v44, v46, v47);
    v48 = *(_QWORD **)(v5 + 24);
    *v38 = v5 + 16;
    v38[1] = v48;
    if ( *v48 != v5 + 16 )
      __fastfail(3u);
    *v48 = v38;
    *(_QWORD *)(v5 + 24) = v38;
    UNLOCK_TRANSACTION_LIST();
    v38[7] = v5;
    if ( CmpLockIXLockExclusive(BugCheckParameter3 + 240, v38, 0)
      && CmpLockIXLockExclusive(BugCheckParameter3 + 256, v38, 1) )
    {
      *((_DWORD *)v38 + 20) = -1;
      *((_DWORD *)v38 + 17) = 9;
      *((_BYTE *)v38 + 84) = 0;
      v50 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(BugCheckParameter3 + 32) + 8LL))(
              *(_QWORD *)(BugCheckParameter3 + 32),
              *(unsigned int *)(BugCheckParameter3 + 40),
              &v58);
      SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                                 *(_QWORD *)(BugCheckParameter3 + 32),
                                 *(unsigned int *)(BugCheckParameter3 + 40),
                                 v50,
                                 1u,
                                 Src,
                                 1,
                                 (unsigned int *)&v62);
      if ( SecurityDescriptorNode >= 0 )
      {
        if ( !CmpFindSecurityCellCacheIndex(*(_QWORD *)(BugCheckParameter3 + 32), v62, (unsigned int *)&v57) )
          KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, (unsigned int)v62);
        v49 = 2LL * (unsigned int)v57;
        v53 = v61;
        *((_DWORD *)v38 + 20) = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 32) + 3056LL)
                                            + 16LL * (unsigned int)v57
                                            + 8);
        *((_BYTE *)v38 + 84) = 1;
        v38 = 0LL;
        *(_DWORD *)(PrevElement + 68) = 13;
        *(_DWORD *)(v53 + 68) = 14;
        if ( *(_QWORD *)(BugCheckParameter3 + 280) )
        {
          v49 = *(unsigned int *)(BugCheckParameter3 + 276);
          if ( (_DWORD)v49 != -1 )
            HvFreeCell(*(_QWORD *)(BugCheckParameter3 + 32), v49, v51, v52);
        }
        v54 = v63;
        *(_DWORD *)(BugCheckParameter3 + 272) = 0;
        *(_DWORD *)(BugCheckParameter3 + 276) = -1;
        *(_QWORD *)(BugCheckParameter3 + 280) = v54;
      }
      if ( v50 )
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(BugCheckParameter3 + 32) + 16LL))(
          *(_QWORD *)(BugCheckParameter3 + 32),
          &v58);
    }
    else
    {
      SecurityDescriptorNode = -1072103423;
    }
    CmUnlockHiveSecurity(*(_QWORD *)(BugCheckParameter3 + 32), v49);
    CmpUnlockHiveFlusher(*(_QWORD *)(BugCheckParameter3 + 32));
    if ( v38 )
    {
      CmpRundownUnitOfWork(v38, v20, v21, v22);
      ExFreePoolWithTag(v38, 0x77554D43u);
    }
    goto LABEL_47;
  }
LABEL_16:
  SecurityDescriptorNode = -1073741670;
LABEL_47:
  if ( v6 )
  {
    if ( SecurityDescriptorNode < 0 && v12 )
    {
      v55 = (PVOID *)v6;
      v56 = v12;
      do
      {
        if ( *v55 )
        {
          CmpRundownUnitOfWork(*v55, v20, v21, v22);
          ExFreePoolWithTag(*v55, 0x77554D43u);
        }
        ++v55;
        --v56;
      }
      while ( v56 );
    }
    ExFreePoolWithTag(v6, 0x37344D43u);
  }
  if ( v59 )
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(BugCheckParameter3 + 32) + 16LL))(
      *(_QWORD *)(BugCheckParameter3 + 32),
      &v65);
  return (unsigned int)SecurityDescriptorNode;
}
