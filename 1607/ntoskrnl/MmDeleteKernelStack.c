/*
 * XREFs of MmDeleteKernelStack @ 0x1400EF9D0
 * Callers:
 *     MiAdjustCachedStacks @ 0x1400BCA34 (MiAdjustCachedStacks.c)
 *     PspDeleteKernelStack @ 0x1400EEA74 (PspDeleteKernelStack.c)
 *     KeInitThread @ 0x1403C8E74 (KeInitThread.c)
 *     KeUserModeCallback @ 0x1404F9110 (KeUserModeCallback.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 *     KeFreeCalloutStack @ 0x140533370 (KeFreeCalloutStack.c)
 *     KeAllocateCalloutStackEx @ 0x140541C24 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x14064F124 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiDeleteKernelStack @ 0x14009FEC0 (MiDeleteKernelStack.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x1401EECBC (MiLogKernelStackEvent.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MmDeleteKernelStack(unsigned __int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbp
  unsigned int v5; // edi
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // r10
  int v13; // esi
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdi
  unsigned __int8 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r13
  _SLIST_HEADER *v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rax
  int v27; // esi
  int v28; // r15d
  __int64 v29; // rdi
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // r9d
  __int64 v35; // rbx
  int v36; // [rsp+60h] [rbp+0h] BYREF

  v4 = (_DWORD *)((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL);
  v5 = a2;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a2 & 4) != 0 )
  {
    v7 = (a2 & 1) == 0;
    v8 = 18LL;
    if ( v7 )
      v8 = (unsigned __int8)byte_140327580;
    MiLogKernelStackEvent(a1 - (unsigned int)((_DWORD)v8 << 12), v8, 0LL);
  }
  v9 = (a1 >> 9) & 0x7FFFFFFFF8LL;
  v10 = v9 - 0x98000000008LL;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v9 - 0x98000000008LL;
  if ( (v5 & 1) == 0 )
  {
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = MI_READ_PTE_LOCK_FREE(v9 - 0x98000000008LL);
    v11 = MI_GET_PAGE_FRAME_FROM_PTE(v4 + 10);
    a4 = 0LL;
    v13 = 0;
    v14 = (unsigned __int8)HIBYTE(*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL)) >> 2;
    a3 = 1LL;
    if ( (v5 & 8) != 0 )
    {
      v15 = MI_READ_PTE_LOCK_FREE(v9 - 0x98000000008LL);
      *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v15;
      v16 = v15;
      v17 = MI_GET_PFN_FROM_PTE(v4 + 2);
      MiLockPageInline(v17);
      if ( v16 != MI_READ_PTE_LOCK_FREE(v10) )
      {
        do
        {
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v18);
          v19 = MI_READ_PTE_LOCK_FREE(v10);
          *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v19;
          v20 = v19;
          v17 = MI_GET_PFN_FROM_PTE(v4 + 2);
          MiLockPageInline(v17);
        }
        while ( v20 != MI_READ_PTE_LOCK_FREE(v10) );
      }
      v21 = *(_QWORD *)v17;
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v18);
      v12 = 0xFFFFF68000000000uLL;
      a3 = 1LL;
      if ( v21 == -5 )
        v13 = 1;
      a4 = 0LL;
    }
    v22 = 13LL * v14;
    v23 = v13;
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v22;
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v13;
    while ( 1 )
    {
      v24 = &qword_1403269F0[2 * v22 + 7 + 2 * v23];
      *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v24;
      if ( LOWORD(v24->Alignment) < SLODWORD(v24[1].Alignment) )
      {
        v25 = (__int64)((v10 << 25) - (v12 << 25)) >> 16;
        v26 = v25 ^ qword_1403277C0;
        *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v25;
        *(_QWORD *)(v25 + 4064) = v26;
        if ( v23 == 1 )
        {
          RtlpInterlockedPushEntrySList(v24, (PSLIST_ENTRY)(v25 + 4080));
          return;
        }
        *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = KeGetCurrentIrql();
        __writecr8(2uLL);
        v27 = -1;
        v28 = 1;
        v29 = v10 - 8LL * (unsigned __int8)byte_140327580;
        v30 = v29 + 8LL * ((unsigned int)(unsigned __int8)byte_140327580 + 1);
        v31 = v29 + 8;
        if ( v31 >= v30 )
          goto LABEL_34;
        do
        {
          v32 = MI_READ_PTE_LOCK_FREE(v31);
          *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v32;
          if ( (v32 & 1) != 0 )
          {
            v33 = MI_GET_PFN_FROM_PTE(v4 + 4);
            *v4 = v34;
            v35 = v33;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx((_DWORD *)((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL));
              while ( (*(_QWORD *)(v35 + 24) & 0x8000000000000000uLL) != 0 );
            }
            if ( *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) == MI_READ_PTE_LOCK_FREE(v31) )
            {
              if ( v27 == -1 )
              {
                v27 = (unsigned __int8)HIBYTE(*(_QWORD *)(v35 + 40)) >> 2;
              }
              else if ( v27 != (unsigned __int8)HIBYTE(*(_QWORD *)(v35 + 40)) >> 2 )
              {
                v28 = a4;
              }
              *(_QWORD *)v35 = a4;
              v31 += 8LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            v31 += 8LL;
          }
        }
        while ( v31 < v30 );
        v25 = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        v23 = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        if ( v28 == 1 )
        {
LABEL_34:
          RtlpInterlockedPushEntrySList(
            *(PSLIST_HEADER *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
            (PSLIST_ENTRY)(v25 + 4080));
          __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
          return;
        }
        __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
        v10 = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
      }
      if ( v23 != 1 )
        break;
      v22 = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      v23 = a4;
      *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = a4;
      a3 = 1LL;
      v12 = 0xFFFFF68000000000uLL;
    }
    v5 = a2;
  }
  MiDeleteKernelStack(v10, v5, a3, a4);
}
