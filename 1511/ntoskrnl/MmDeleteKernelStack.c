/*
 * XREFs of MmDeleteKernelStack @ 0x14002CF40
 * Callers:
 *     MiAdjustCachedStacks @ 0x140013890 (MiAdjustCachedStacks.c)
 *     PspDeleteKernelStack @ 0x14002BFEC (PspDeleteKernelStack.c)
 *     KeInitThread @ 0x14039C2C0 (KeInitThread.c)
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     KeUserModeCallback @ 0x1403F17A0 (KeUserModeCallback.c)
 *     KeFreeCalloutStack @ 0x1404C5FF4 (KeFreeCalloutStack.c)
 *     KeAllocateCalloutStackEx @ 0x140509188 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiDeleteKernelStack @ 0x1400E1C30 (MiDeleteKernelStack.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogKernelStackEvent @ 0x1401DE3D4 (MiLogKernelStackEvent.c)
 */

PSLIST_ENTRY __fastcall MmDeleteKernelStack(unsigned __int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  bool v4; // zf
  __int64 v5; // rdx
  __int64 v6; // r15
  int v7; // esi
  unsigned int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int8 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r13
  _SLIST_HEADER *v16; // rcx
  __int64 v17; // r14
  int v18; // esi
  int v19; // ebp
  __int64 v20; // rdi
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  PSLIST_ENTRY result; // rax
  __int64 i; // [rsp+20h] [rbp-88h]
  unsigned __int8 CurrentIrql; // [rsp+28h] [rbp-80h]
  __int64 v29; // [rsp+30h] [rbp-78h] BYREF
  _SLIST_ENTRY *v30; // [rsp+38h] [rbp-70h]
  __int64 v31; // [rsp+40h] [rbp-68h]
  __int64 v32; // [rsp+48h] [rbp-60h]
  PSLIST_HEADER ListHead; // [rsp+50h] [rbp-58h]
  int v34; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v35; // [rsp+B8h] [rbp+10h]
  __int64 v36; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+20h] BYREF

  v35 = a2;
  v2 = a2;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a2 & 4) != 0 )
  {
    v4 = (a2 & 1) == 0;
    v5 = 18LL;
    if ( v4 )
      v5 = (unsigned __int8)byte_1402FF138;
    MiLogKernelStackEvent(a1 - (unsigned int)((_DWORD)v5 << 12), v5, 0LL);
  }
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v31 = v6;
  if ( (v2 & 1) == 0 )
  {
    v29 = MI_READ_PTE_LOCK_FREE(v6);
    v7 = 0;
    v8 = (unsigned __int8)HIBYTE(*(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v29) - 0x57FFFFFFFD8LL)) >> 2;
    if ( (v2 & 8) != 0 )
    {
      v36 = MI_READ_PTE_LOCK_FREE(v6);
      v9 = v36;
      v10 = MI_GET_PFN_FROM_PTE(&v36);
      v11 = MiLockPageInline(v10);
      if ( v9 != MI_READ_PTE_LOCK_FREE(v6) )
      {
        do
        {
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v11);
          v36 = MI_READ_PTE_LOCK_FREE(v6);
          v12 = v36;
          v10 = MI_GET_PFN_FROM_PTE(&v36);
          v11 = MiLockPageInline(v10);
        }
        while ( v12 != MI_READ_PTE_LOCK_FREE(v6) );
      }
      v13 = *(_QWORD *)v10;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v11);
      if ( v13 == -5 )
        v7 = 1;
    }
    v14 = 13LL * v8;
    v15 = v7;
    v32 = v14;
    for ( i = v7; ; i = 0LL )
    {
      v16 = &qword_1402FE6C0[2 * v14 + 7 + 2 * v15];
      ListHead = v16;
      if ( LOWORD(v16->Alignment) < SLODWORD(v16[1].Alignment) )
      {
        v17 = v6 << 25 >> 16;
        v30 = (_SLIST_ENTRY *)v17;
        *(_QWORD *)(v17 + 0xFE0) = v17 ^ qword_1402FF6C0;
        if ( v15 == 1 )
          return RtlpInterlockedPushEntrySList(v16, (PSLIST_ENTRY)(v17 + 4080));
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v18 = -1;
        v19 = 1;
        v20 = v6 - 8LL * (unsigned __int8)byte_1402FF138;
        v21 = v20 + 8LL * ((unsigned int)(unsigned __int8)byte_1402FF138 + 1);
        v22 = v20 + 8;
        if ( v22 >= v21 )
          goto LABEL_33;
        do
        {
          v37 = MI_READ_PTE_LOCK_FREE(v22);
          if ( (v37 & 1) != 0 )
          {
            v23 = MI_GET_PFN_FROM_PTE(&v37);
            v34 = 0;
            v24 = v23;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v34);
              while ( (*(_QWORD *)(v24 + 24) & 0x8000000000000000uLL) != 0 );
            }
            v25 = MI_READ_PTE_LOCK_FREE(v22);
            if ( v37 == v25 )
            {
              if ( v18 == -1 )
              {
                v18 = (unsigned __int8)HIBYTE(*(_QWORD *)(v24 + 40)) >> 2;
              }
              else if ( v18 != (unsigned __int8)HIBYTE(*(_QWORD *)(v24 + 40)) >> 2 )
              {
                v19 = 0;
              }
              *(_QWORD *)v24 = 0LL;
              v22 += 8LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            v22 += 8LL;
          }
        }
        while ( v22 < v21 );
        v17 = (__int64)v30;
        v6 = v31;
        v15 = i;
        if ( v19 == 1 )
        {
LABEL_33:
          RtlpInterlockedPushEntrySList(ListHead, (PSLIST_ENTRY)(v17 + 4080));
          result = (PSLIST_ENTRY)CurrentIrql;
          __writecr8(CurrentIrql);
          return result;
        }
        __writecr8(CurrentIrql);
      }
      if ( v15 != 1 )
        break;
      v14 = v32;
      v15 = 0LL;
    }
    v2 = v35;
  }
  return (PSLIST_ENTRY)MiDeleteKernelStack(v6, v2);
}
