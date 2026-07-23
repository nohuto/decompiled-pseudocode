/*
 * XREFs of CmpUndoDeleteKeyForTransEx @ 0x14060DE14
 * Callers:
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000AA14 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x14010BEB0 (CmpTransEnlistUowInKcb.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpDereferenceSecurityNode @ 0x1401B63F8 (CmpDereferenceSecurityNode.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpLockIXLockExclusive @ 0x1403FBAD4 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1403FBBB4 (CmpLockIXLockIntent.c)
 *     CmpLockHiveFlusherShared @ 0x1403FC424 (CmpLockHiveFlusherShared.c)
 *     CmLockHiveSecurityExclusive @ 0x1403FC434 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x1403FC47C (CmUnlockHiveSecurity.c)
 *     CmpUnlockHiveFlusher @ 0x1403FC4C8 (CmpUnlockHiveFlusher.c)
 *     CmpRundownUnitOfWork @ 0x1403FC77C (CmpRundownUnitOfWork.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FCE20 (CmpFindSecurityCellCacheIndex.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmListGetPrevElement @ 0x1404A77D0 (CmListGetPrevElement.c)
 *     CmpAllocateUnitOfWork @ 0x1404C1A54 (CmpAllocateUnitOfWork.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14060277C (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpUndoDeleteKeyForTransEx(ULONG_PTR BugCheckParameter3, __int64 a2, void *a3)
{
  __int64 v3; // r9
  __int64 v5; // rdi
  void *v6; // r12
  __int64 *v7; // r13
  __int64 v8; // r9
  __int64 PrevElement; // r14
  __int64 v10; // rax
  unsigned int v11; // r10d
  unsigned int v12; // r15d
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 *PoolWithTag; // rax
  _DWORD *v19; // r12
  int SecurityDescriptorNode; // edi
  __int64 *v21; // rsi
  _QWORD *v22; // rax
  __int64 v23; // rax
  unsigned int v24; // edi
  __int64 v25; // rcx
  _QWORD *UnitOfWork; // rsi
  __int64 v27; // rax
  ULONG_PTR v28; // rdx
  ULONG_PTR v29; // rcx
  unsigned int v30; // r12d
  __int64 v31; // rax
  ULONG_PTR v32; // rdx
  __int64 v33; // rax
  PVOID *v34; // rsi
  __int64 v35; // r14
  __int64 v36; // [rsp+40h] [rbp-38h]
  _DWORD v37[2]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v38[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v39; // [rsp+58h] [rbp-20h]
  __int64 v40; // [rsp+60h] [rbp-18h]
  ULONG_PTR v41; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v42; // [rsp+C8h] [rbp+50h]
  void *v43; // [rsp+D0h] [rbp+58h]
  __int64 v44; // [rsp+D8h] [rbp+60h] BYREF

  v43 = a3;
  v42 = a2;
  v3 = *(_QWORD *)(BugCheckParameter3 + 64);
  v36 = 0LL;
  v37[0] = -1;
  v5 = a2;
  v37[1] = 0;
  v38[0] = -1;
  v38[1] = 0;
  v6 = a3;
  LODWORD(v41) = -1;
  v7 = 0LL;
  v44 = 0LL;
  PrevElement = CmListGetPrevElement(v3 + 200, &v44);
  if ( !PrevElement )
    return 3221225524LL;
  do
  {
    if ( *(_DWORD *)(PrevElement + 68) == 3 && *(_QWORD *)(PrevElement + 88) == BugCheckParameter3 )
      break;
    PrevElement = CmListGetPrevElement(v8 + 200, &v44);
  }
  while ( PrevElement );
  if ( !PrevElement )
    return 3221225524LL;
  v44 = 0LL;
  v10 = CmListGetPrevElement(BugCheckParameter3 + 200, &v44);
  v39 = v10;
  if ( !v10 || *(_DWORD *)(v10 + 68) != 2 )
    return 3221225524LL;
  if ( *(_QWORD *)(BugCheckParameter3 + 280) == v5 )
  {
    v12 = *(_DWORD *)(BugCheckParameter3 + 272);
    v13 = *(_DWORD *)(BugCheckParameter3 + 276);
  }
  else
  {
    v14 = *(unsigned int *)(BugCheckParameter3 + 32);
    v15 = *(_QWORD *)(BugCheckParameter3 + 24);
    v44 = v11;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v15 + 8))(v15, v14, &v44);
    if ( !v16 )
      return 3221225626LL;
    v12 = *(_DWORD *)(v16 + 36);
    v13 = *(_DWORD *)(v16 + 40);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(BugCheckParameter3 + 24) + 16LL))(
      *(_QWORD *)(BugCheckParameter3 + 24),
      &v44);
  }
  if ( !v12 )
  {
LABEL_25:
    UnitOfWork = CmpAllocateUnitOfWork();
    if ( UnitOfWork )
    {
      CmpLockHiveFlusherShared(*(_QWORD *)(BugCheckParameter3 + 24));
      CmLockHiveSecurityExclusive(*(_QWORD *)(BugCheckParameter3 + 24));
      CmpTransEnlistUowInKcb(UnitOfWork, BugCheckParameter3);
      SecurityDescriptorNode = CmpTransEnlistUowInCmTrans(UnitOfWork, v5);
      if ( SecurityDescriptorNode >= 0 )
      {
        if ( CmpLockIXLockExclusive(BugCheckParameter3 + 240, UnitOfWork, 0)
          && CmpLockIXLockExclusive(BugCheckParameter3 + 256, UnitOfWork, 1) )
        {
          *((_DWORD *)UnitOfWork + 22) = -1;
          *((_DWORD *)UnitOfWork + 17) = 9;
          *((_BYTE *)UnitOfWork + 92) = 0;
          v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(BugCheckParameter3 + 24) + 8LL))(
                  *(_QWORD *)(BugCheckParameter3 + 24),
                  *(unsigned int *)(BugCheckParameter3 + 32),
                  v38);
          v28 = *(unsigned int *)(BugCheckParameter3 + 32);
          v29 = *(_QWORD *)(BugCheckParameter3 + 24);
          v40 = v27;
          SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(v29, v28, v27, 1u, v6, 1, (unsigned int *)&v41);
          if ( SecurityDescriptorNode < 0 )
          {
            v30 = v41;
          }
          else
          {
            if ( !CmpFindSecurityCellCacheIndex(*(_QWORD *)(BugCheckParameter3 + 24), v41, (unsigned int *)&v44) )
              KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, (unsigned int)v41);
            v30 = -1;
            v31 = v39;
            *((_DWORD *)UnitOfWork + 22) = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 24) + 3056LL)
                                                       + 16LL * (unsigned int)v44
                                                       + 8);
            *((_BYTE *)UnitOfWork + 92) = 1;
            UnitOfWork = 0LL;
            *(_DWORD *)(PrevElement + 68) = 13;
            *(_DWORD *)(v31 + 68) = 14;
            if ( *(_QWORD *)(BugCheckParameter3 + 280) )
            {
              v32 = *(unsigned int *)(BugCheckParameter3 + 276);
              if ( (_DWORD)v32 != -1 )
                HvFreeCell(*(_QWORD *)(BugCheckParameter3 + 24), v32);
            }
            v33 = v42;
            *(_DWORD *)(BugCheckParameter3 + 272) = 0;
            *(_DWORD *)(BugCheckParameter3 + 276) = -1;
            *(_QWORD *)(BugCheckParameter3 + 280) = v33;
          }
          if ( v30 != -1 )
            CmpDereferenceSecurityNode(*(_QWORD *)(BugCheckParameter3 + 24), v30);
          if ( v40 )
            (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(BugCheckParameter3 + 24) + 16LL))(
              *(_QWORD *)(BugCheckParameter3 + 24),
              v38);
        }
        else
        {
          SecurityDescriptorNode = -1072103423;
        }
      }
      CmUnlockHiveSecurity(*(_QWORD *)(BugCheckParameter3 + 24));
      CmpUnlockHiveFlusher(*(_QWORD *)(BugCheckParameter3 + 24));
      if ( UnitOfWork )
      {
        CmpRundownUnitOfWork(UnitOfWork);
        ExFreePoolWithTag(UnitOfWork, 0x77554D43u);
      }
      goto LABEL_45;
    }
LABEL_30:
    SecurityDescriptorNode = -1073741670;
LABEL_45:
    v19 = (_DWORD *)v36;
    goto LABEL_46;
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * v12, 0x37344D43u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 8LL * v12);
  v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(BugCheckParameter3 + 24) + 8LL))(
          *(_QWORD *)(BugCheckParameter3 + 24),
          v13,
          v37);
  v19 = (_DWORD *)v36;
  if ( v36 )
  {
    LODWORD(v44) = 0;
    v21 = v7;
    while ( 1 )
    {
      v22 = CmpAllocateUnitOfWork();
      *v21 = (__int64)v22;
      if ( !v22 )
        goto LABEL_30;
      CmpTransEnlistUowInKcb(v22, BugCheckParameter3);
      SecurityDescriptorNode = CmpTransEnlistUowInCmTrans((_QWORD *)*v21, v42);
      if ( SecurityDescriptorNode < 0 )
        goto LABEL_45;
      if ( !CmpLockIXLockIntent((unsigned int *)(BugCheckParameter3 + 240), *v21)
        || !CmpLockIXLockExclusive(BugCheckParameter3 + 256, (_QWORD *)*v21, 1) )
      {
        SecurityDescriptorNode = -1072103423;
        goto LABEL_45;
      }
      v23 = *v21;
      LODWORD(v44) = v44 + 1;
      v24 = v44;
      *(_DWORD *)(v23 + 68) = 6;
      v25 = *v21++;
      LODWORD(v23) = *v19++;
      *(_DWORD *)(v25 + 88) = v23;
      if ( v24 >= v12 )
      {
        (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(BugCheckParameter3 + 24) + 16LL))(
          *(_QWORD *)(BugCheckParameter3 + 24),
          v37);
        v5 = v42;
        v6 = v43;
        v36 = 0LL;
        goto LABEL_25;
      }
    }
  }
  SecurityDescriptorNode = -1073741670;
LABEL_46:
  if ( v7 )
  {
    if ( SecurityDescriptorNode < 0 && v12 )
    {
      v34 = (PVOID *)v7;
      v35 = v12;
      do
      {
        if ( *v34 )
        {
          CmpRundownUnitOfWork(*v34);
          ExFreePoolWithTag(*v34, 0x77554D43u);
        }
        ++v34;
        --v35;
      }
      while ( v35 );
    }
    ExFreePoolWithTag(v7, 0x37344D43u);
  }
  if ( v19 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(BugCheckParameter3 + 24) + 16LL))(
      *(_QWORD *)(BugCheckParameter3 + 24),
      v37);
  return (unsigned int)SecurityDescriptorNode;
}
