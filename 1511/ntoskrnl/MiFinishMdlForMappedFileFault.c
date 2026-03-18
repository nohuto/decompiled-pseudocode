/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x1400AB060
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     MiEndingOffsetWithLock @ 0x14007C7F0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiObtainProtoReference @ 0x1400AB334 (MiObtainProtoReference.c)
 *     MiReferenceControlAreaPfn @ 0x1400AB390 (MiReferenceControlAreaPfn.c)
 *     MiFlowThroughInsertNode @ 0x1400F2B80 (MiFlowThroughInsertNode.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 *v5; // r15
  __int64 v8; // rdi
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rdi
  __int64 v15; // r14
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rax
  char v18; // cl
  char v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int16 result; // ax
  unsigned __int64 v24; // rcx
  char v25; // dl
  unsigned int v26; // [rsp+60h] [rbp+18h]

  v5 = *(__int64 **)(a1 + 200);
  v8 = (unsigned int)a3;
  v26 = *(_DWORD *)(a1 + 180);
  v10 = *v5;
  MiReferenceControlAreaPfn(*v5, v5, a3);
  v11 = *(_QWORD *)(a1 + 160);
  MiObtainProtoReference(v11, 0LL);
  MiLockPageAtDpcInline(v11, v12, v13);
  *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + v8)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v14 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 304) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( a4 )
    MiFlowThroughInsertNode(a1, a4);
  v15 = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(a1 + 168) = MI_READ_PTE_LOCK_FREE(v15);
  v16 = MiStartingOffset(v5, v14, a5);
  v17 = MiEndingOffsetWithLock(v5);
  v18 = *(_BYTE *)(a1 + 191);
  if ( (v18 & 1) != 0 )
  {
    v19 = 1;
    *(_BYTE *)(a1 + 191) = v18 & 0xFE;
  }
  else
  {
    v19 = 0;
  }
  if ( (*(_DWORD *)(v10 + 56) & 0x20) != 0 && v16 + v26 > v17 )
    *(_BYTE *)(a1 + 191) |= 1u;
  if ( (a2 & 1) != 0 && (v24 = a2 & 0xFFFFFFFFFFFFFFFEuLL, v25 = *(_BYTE *)(a2 & 0xFFFFFFFFFFFFFFFEuLL), v25 == 1)
    || (a2 & 1) != 0 && (v24 = a2 & 0xFFFFFFFFFFFFFFFEuLL, v25 = *(_BYTE *)(a2 & 0xFFFFFFFFFFFFFFFEuLL), v25 == 2) )
  {
    if ( v24 && v25 != 2 )
      *(_BYTE *)(a1 + 189) |= 4u;
  }
  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
    *(_BYTE *)(a1 + 189) |= 0x40u;
  *(_DWORD *)(a1 + 296) = v21;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_WORD *)(a1 + 266) = 0;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_DWORD *)(a1 + 300) = 0;
  *(_WORD *)(a1 + 264) = 8 * ((((unsigned __int64)(unsigned int)v21 + 4095) >> 12) + 6);
  MiLockPageAtDpcInline(v11, v20, v21);
  *(_BYTE *)(v11 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v11);
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v22 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)(v15 - v14) >> 3) + 304) - 0x58000000000LL;
  result = *(_WORD *)(a1 + 266) | 0x42;
  *(_WORD *)(a1 + 266) = result;
  if ( !v19 )
  {
    result |= 0x4000u;
    *(_WORD *)(a1 + 266) = result;
  }
  *(_QWORD *)(a1 + 200) = v10;
  *(_QWORD *)(a1 + 96) = v16;
  *(_QWORD *)(a1 + 232) = v14;
  *(_QWORD *)(a1 + 240) = v22;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
