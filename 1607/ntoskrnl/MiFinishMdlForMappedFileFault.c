/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x140022E20
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiEndingOffsetWithLock @ 0x1400230E0 (MiEndingOffsetWithLock.c)
 *     MiObtainProtoReference @ 0x1400231D8 (MiObtainProtoReference.c)
 *     MiReferenceControlAreaPfn @ 0x140023264 (MiReferenceControlAreaPfn.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiFlowThroughInsertNode @ 0x1400B24E8 (MiFlowThroughInsertNode.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  _QWORD *v5; // r14
  __int64 v8; // rdi
  __int64 v10; // rbp
  __int64 v11; // r13
  unsigned __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  char v16; // cl
  unsigned __int64 v17; // rdx
  char v18; // r14
  __int64 v19; // r8
  unsigned int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int16 result; // ax
  unsigned __int64 v24; // rcx
  unsigned int v25; // [rsp+60h] [rbp+18h]

  v5 = *(_QWORD **)(a1 + 200);
  v8 = a3;
  v25 = *(_DWORD *)(a1 + 180);
  v10 = *v5;
  MiReferenceControlAreaPfn(*v5, v5);
  v11 = *(_QWORD *)(a1 + 160);
  MiObtainProtoReference(v11, 0LL);
  MiLockPageAtDpcInline(v11);
  *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + v8)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v12 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 304) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( a4 )
    MiFlowThroughInsertNode(a1, a4);
  v13 = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(a1 + 168) = MI_READ_PTE_LOCK_FREE(v13);
  v14 = MiStartingOffset(v5, v12, a5);
  v15 = MiEndingOffsetWithLock(v5);
  v16 = *(_BYTE *)(a1 + 191);
  v17 = v15;
  if ( (v16 & 1) != 0 )
  {
    v18 = 1;
    *(_BYTE *)(a1 + 191) = v16 & 0xFE;
  }
  else
  {
    v18 = 0;
  }
  if ( (*(_DWORD *)(v10 + 56) & 0x20) != 0 )
  {
    v19 = v25;
    if ( v14 + (unsigned __int64)v25 > v15 )
    {
      v19 = ((_DWORD)v15 - (_DWORD)v14 + 511) & 0xFFFFFE00;
      *(_BYTE *)(a1 + 191) |= 1u;
    }
  }
  else
  {
    v19 = v25;
  }
  if ( (a2 & 1) != 0
    && (v24 = a2 & 0xFFFFFFFFFFFFFFFEuLL, v17 = *(unsigned __int8 *)(a2 & 0xFFFFFFFFFFFFFFFEuLL), (_BYTE)v17 == 1)
    || (a2 & 1) != 0
    && (v24 = a2 & 0xFFFFFFFFFFFFFFFEuLL, v17 = *(unsigned __int8 *)(a2 & 0xFFFFFFFFFFFFFFFEuLL), (_BYTE)v17 == 2) )
  {
    if ( v24 && (_BYTE)v17 != 2 )
      *(_BYTE *)(a1 + 189) |= 4u;
  }
  if ( (int)PsGetIoPriorityThread(KeGetCurrentThread(), v17, v19) < 2 )
    *(_BYTE *)(a1 + 189) |= 0x40u;
  v21 = v20;
  *(_DWORD *)(a1 + 296) = v20;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_WORD *)(a1 + 266) = 0;
  *(_QWORD *)(a1 + 288) = 0LL;
  LOBYTE(v21) = 17;
  *(_DWORD *)(a1 + 300) = 0;
  *(_WORD *)(a1 + 264) = 8 * ((((unsigned __int64)v20 + 4095) >> 12) + 6);
  MiUnlockProtoPoolPage(v11, v21);
  v22 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)(v13 - v12) >> 3) + 304) - 0x58000000000LL;
  result = *(_WORD *)(a1 + 266) | 0x42;
  *(_WORD *)(a1 + 266) = result;
  if ( !v18 )
  {
    result |= 0x4000u;
    *(_WORD *)(a1 + 266) = result;
  }
  *(_QWORD *)(a1 + 232) = v12;
  *(_QWORD *)(a1 + 200) = v10;
  *(_QWORD *)(a1 + 96) = v14;
  *(_QWORD *)(a1 + 240) = v22;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
