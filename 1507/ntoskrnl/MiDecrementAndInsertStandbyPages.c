/*
 * XREFs of MiDecrementAndInsertStandbyPages @ 0x140102820
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiInsertAndUnlockStandbyPages @ 0x1400553B0 (MiInsertAndUnlockStandbyPages.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiDecrementAndInsertStandbyPages(_QWORD *a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v3; // r13d
  unsigned __int8 v4; // al
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  _QWORD *v7; // r13
  __int64 v8; // r9
  char v9; // al
  __int64 v10; // r9
  unsigned int v11; // ebp
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r8
  int v15; // edx
  unsigned __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  _KPROCESS *Process; // rcx
  __int64 v25; // rdi
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 TransitionPte; // rax
  __int64 v32; // r10
  unsigned __int64 v33; // r9
  struct _KPRCB *v34; // rax
  _QWORD *v35; // rdi
  unsigned __int64 v36; // rbp
  unsigned int v37; // esi
  __int64 v39; // [rsp+28h] [rbp-120h] BYREF
  unsigned int v40; // [rsp+30h] [rbp-118h]
  _QWORD *v41; // [rsp+38h] [rbp-110h]
  int v42; // [rsp+40h] [rbp-108h] BYREF
  __int16 v43; // [rsp+44h] [rbp-104h]
  __int64 v44; // [rsp+48h] [rbp-100h]
  __int64 v45; // [rsp+50h] [rbp-F8h]
  __int64 v46; // [rsp+58h] [rbp-F0h]

  v3 = a2;
  v40 = a2;
  v4 = a3;
  v5 = 0LL;
  v41 = a1;
  v6 = a2;
  if ( a2 )
  {
    v7 = v41;
    do
    {
      v8 = v7[v5];
      v9 = *(_BYTE *)(v8 + 34);
      *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v8 + 32) = 0;
      *(_BYTE *)(v8 + 34) = v9 & 0xF8 | 2;
      v11 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v8 + 16);
      v14 = v13 & *(_QWORD *)(v10 + 40);
      v15 = 4;
      v16 = *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL;
      v17 = *(unsigned __int8 *)(48 * v14 - 0x58000000000LL + 34) >> 6;
      if ( !v17 || v17 == 3 )
      {
        v15 = 12;
      }
      else if ( v17 == 2 )
      {
        v15 = 28;
      }
      v18 = v14 << 12;
      v19 = MmProtectToPteMask[v15] ^ (v18 ^ MmProtectToPteMask[v15]) & 0xFFFFFFFFF000LL | 0x21;
      if ( HIBYTE(word_14034EC18) )
        v19 = MmProtectToPteMask[v15] ^ (v18 ^ MmProtectToPteMask[v15]) & 0xFFFFFFFFF000LL | 0x121;
      v20 = v19 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = v20 | 0x42;
      v23 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
          + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
      Process = (_KPROCESS *)(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      *(_QWORD *)&Process->Header.Lock = v22;
      if ( (unsigned __int64)Process + v12 <= 0x7F8 )
      {
        MiWritePteShadow(Process, v22);
        v12 = 0x90482413000LL;
        v13 = 0xFFFFFFFFFLL;
      }
      v25 = (v16 >> 3) & 0x1FF;
      v26 = *(_QWORD *)(v23 + 8 * v25);
      v27 = v23 + 8 * v25;
      if ( v27 + v12 <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v22)
        && (v26 & 1) != 0
        && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v22 = *(_QWORD *)&Process[2].ProcessLock;
        if ( v22 )
        {
          v28 = *(_QWORD *)(v22 + 8 * ((v27 >> 3) & 0x1FF));
          if ( (v28 & 0x20) != 0 )
            v26 |= 0x20uLL;
          if ( (v28 & 0x42) != 0 )
            v26 |= 0x42uLL;
        }
      }
      v39 = v26;
      if ( (unsigned __int64)&STACK[0x90482413028] <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v22)
        && (v26 & 1) != 0
        && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
      {
        v29 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 8 * (((unsigned __int64)&v39 >> 3) & 0x1FF));
          if ( (v30 & 0x20) != 0 )
            v26 |= 0x20uLL;
          if ( (v30 & 0x42) != 0 )
            v26 |= 0x42uLL;
        }
      }
      TransitionPte = MiMakeTransitionPte(v13 & (v26 >> 12), v11);
      v39 = TransitionPte;
      *(_QWORD *)v27 = TransitionPte;
      if ( v33 <= 0x7F8 )
      {
        MiWritePteShadow(v27, TransitionPte);
        v32 = 0x12090482600LL;
      }
      v34 = KeGetCurrentPrcb();
      v35 = (_QWORD *)((((v27 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v36 = (unsigned __int64)v34->HyperPte & 0xFFFFFFFFFFFFF000uLL;
      v37 = ((__int64)v34->HyperPte & 0xFFF) + 1;
      *v35 = 0LL;
      if ( (unsigned __int64)&v35[v32] <= 0x7F8 )
        MiWritePteShadow(v35, 0LL);
      if ( v37 == 64 )
      {
        v44 = 20LL;
        v42 = 0;
        v43 = 1;
        v45 = 0LL;
        v46 = 0LL;
        MiInsertTbFlushEntry((__int64)&v42, v36, 64LL, 0);
        MiFlushTbList((__int64)&v42);
        KeGetCurrentPrcb()->HyperPte = (void *)v36;
      }
      else
      {
        KeGetCurrentPrcb()->HyperPte = (void *)(v36 | v37);
      }
      ++v5;
    }
    while ( v5 < v6 );
    v3 = v40;
    a1 = v41;
    v4 = a3;
  }
  MiInsertAndUnlockStandbyPages(0LL, a1, v3, v4);
}
