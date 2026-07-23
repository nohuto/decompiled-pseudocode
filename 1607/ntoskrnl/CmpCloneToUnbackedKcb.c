/*
 * XREFs of CmpCloneToUnbackedKcb @ 0x1401B4730
 * Callers:
 *     CmpPrepareDiscardReplacePost @ 0x14060BEC4 (CmpPrepareDiscardReplacePost.c)
 * Callees:
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140403838 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140435CE0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpAllocateKeyControlBlock @ 0x1404362E0 (CmpAllocateKeyControlBlock.c)
 *     CmpFreeKeyControlBlock @ 0x140436470 (CmpFreeKeyControlBlock.c)
 *     CmpInitializeIXLock @ 0x140581D28 (CmpInitializeIXLock.c)
 *     InitializeKCBKeyBodyList @ 0x1405FFA7C (InitializeKCBKeyBodyList.c)
 */

__int64 __fastcall CmpCloneToUnbackedKcb(__int64 a1, _QWORD *a2)
{
  __int64 KeyControlBlock; // rax
  _DWORD *v5; // rbx
  unsigned int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  unsigned int *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // rcx

  KeyControlBlock = CmpAllocateKeyControlBlock();
  v5 = (_DWORD *)KeyControlBlock;
  if ( !KeyControlBlock )
    return (unsigned int)-1073741670;
  InitializeKCBKeyBodyList(KeyControlBlock);
  v7 = *(_DWORD *)(a1 + 4) ^ v5[1];
  *v5 = 1;
  v5[1] ^= v7 & 0x100000;
  *((_QWORD *)v5 + 3) = *(_QWORD *)(a1 + 24);
  v5[8] = -1;
  v8 = *(_DWORD *)(a1 + 8);
  *((_QWORD *)v5 + 5) = 0LL;
  v5[2] = v8;
  *((_QWORD *)v5 + 26) = v5 + 50;
  *((_QWORD *)v5 + 25) = v5 + 50;
  *((_QWORD *)v5 + 28) = v5 + 54;
  *((_QWORD *)v5 + 27) = v5 + 54;
  *((_QWORD *)v5 + 29) = 0LL;
  CmpInitializeIXLock(v5 + 60);
  CmpInitializeIXLock(v5 + 64);
  v5[68] = 0;
  *((_QWORD *)v5 + 35) = 0LL;
  v5[69] = v9;
  v10 = *(unsigned int **)(a1 + 72);
  if ( (*v10 & 0xFFFFFFFE) == 0xFFFFFFFE )
    goto LABEL_4;
  *((_QWORD *)v5 + 9) = v10;
  *v10 = *v10 & 1 ^ ((*v10 & 0xFFFFFFFE) + 2);
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 )
  {
LABEL_8:
    v12 = *((_QWORD *)v5 + 3);
    v5[1] ^= (*(_DWORD *)(a1 + 4) ^ v5[1]) & 0x7FE00000;
    if ( *(_BYTE *)(v12 + 4112) == 1 )
      *((_WORD *)v5 + 2) |= 0x20u;
    *a2 = v5;
    v5 = 0LL;
    v6 = 0;
    goto LABEL_11;
  }
  *((_BYTE *)v5 + 57) = ((*(_BYTE *)(v11 + 57) - 1) & 0xFD) == 0;
  if ( (unsigned __int8)CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(a1 + 64)) )
  {
    *((_QWORD *)v5 + 8) = *(_QWORD *)(a1 + 64);
    goto LABEL_8;
  }
LABEL_4:
  v6 = -1073741670;
LABEL_11:
  if ( v5 )
  {
    v13 = (void *)*((_QWORD *)v5 + 9);
    if ( v13 )
    {
      CmpDereferenceNameControlBlockWithLock(v13);
      *((_QWORD *)v5 + 9) = 0LL;
    }
    v5[1] |= 0x80000u;
    CmpFreeKeyControlBlock(v5);
  }
  return v6;
}
