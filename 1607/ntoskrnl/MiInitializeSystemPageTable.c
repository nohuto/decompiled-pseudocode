/*
 * XREFs of MiInitializeSystemPageTable @ 0x140020B3C
 * Callers:
 *     MiMakeZeroedPageTableRange @ 0x140020848 (MiMakeZeroedPageTableRange.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMarkPageActive @ 0x140021054 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140021288 (MiInitializePfnForOtherProcess.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401E1924 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetLeafVa @ 0x1401F2468 (MiGetLeafVa.c)
 *     MxFillPhysicalPage @ 0x140798170 (MxFillPhysicalPage.c)
 */

__int64 __fastcall MiInitializeSystemPageTable(unsigned __int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  int v4; // ebx
  __int64 v5; // rax
  unsigned __int64 v6; // r15
  unsigned int v7; // r13d
  unsigned __int64 v8; // r14
  ULONG_PTR v9; // rcx
  void *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 LeafVa; // rdx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  unsigned __int64 v17; // r14
  int v18; // r10d
  __int64 v19; // rdi
  __int64 v20; // r11
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 result; // rax
  __int64 v25; // rcx
  char v26[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+28h] [rbp-D8h] BYREF
  int v28; // [rsp+30h] [rbp-D0h]
  __int64 v29; // [rsp+38h] [rbp-C8h]
  __int64 v30; // [rsp+40h] [rbp-C0h]
  _QWORD *v31; // [rsp+48h] [rbp-B8h]
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v33; // [rsp+54h] [rbp-ACh]
  int v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+5Ch] [rbp-A4h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h]

  v2 = a2;
  v31 = a2;
  v4 = 0;
  v5 = MI_READ_PTE_LOCK_FREE(a1);
  v27 = v5;
  v30 = (__int64)(v2 + 0xB000000000LL) / 48;
  v6 = (__int64)(a1 << 25) >> 16;
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( (v5 & 1) != 0 )
    {
      v8 = *(_QWORD *)v6;
    }
    else if ( v6 < (MmPfnDatabase & 0xFFFFFFFFFFFFF000uLL) || v6 >= 48 * qword_140326AD0 - 0x57FFFFFFFD0LL )
    {
      v8 = -1LL;
    }
    else
    {
      v8 = 0LL;
    }
    v9 = (__int64)(v2 + 0xB000000000LL) / 48;
    if ( KeGetCurrentPrcb()->HyperPte )
    {
      v10 = (void *)MiMapPageInHyperSpaceWorker(v9, v26, 0x80000000LL);
      LOBYTE(v11) = v26[0];
      memset64(v10, v8, 0x200uLL);
      MiUnmapPageInHyperSpaceWorker((__int64)v10, v11);
      v2 = v31;
    }
    else
    {
      MxFillPhysicalPage(v9);
    }
    v7 = 4;
  }
  else
  {
    v7 = 6;
  }
  LeafVa = MiGetLeafVa(a1);
  if ( LeafVa < qword_140326950 || LeafVa >= qword_140326950 + 0x8000000000LL )
  {
    if ( LeafVa <= 0x7FFFFFFEFFFFLL
      || LeafVa >= qword_140327FD0 && LeafVa <= qword_140326D38
      || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= v14 )
    {
      v4 = 4;
    }
  }
  else
  {
    v4 = v13;
    v15 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 48), v13);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 40), v13);
  }
  *v2 = 0LL;
  v27 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v17 = MI_GET_PAGE_FRAME_FROM_PTE(&v27);
  v29 = qword_1403A9350;
  v28 = v18 & v4;
  if ( (v18 & v4) == 0 )
  {
    v22 = MiMakeValidKernelPte(v16, v7, a1) | 0x42;
    v27 = v22;
    if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( (v4 & 4) == 0 )
      {
LABEL_47:
        v20 = v29;
        goto LABEL_48;
      }
      v22 ^= ((unsigned __int16)v22 ^ (unsigned __int16)(HIBYTE(word_140326AE8) << 8)) & 0x100;
    }
    else
    {
      v22 &= ~0x100uLL;
    }
    v27 = v22;
    goto LABEL_47;
  }
  v19 = MmProtectToPteMask[v7] ^ ((v16 << 12) ^ MmProtectToPteMask[v7]) & 0xFFFFFFFFF000LL | 0x21;
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
    v19 &= ~qword_1403A9350 & 0x7FFFFFFFFFFFFFFFLL;
  if ( a1 <= 0xFFFFF6BFFFFFFF78uLL && a1 >= 0xFFFFF68000000000uLL
    || a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB5FFFFFF8uLL
    || a1 >= 0xFFFFF6FB7DA00000uLL && a1 <= 0xFFFFF6FB7DAFFFF8uLL
    || a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v19 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a1) )
    v19 |= 0x100uLL;
  v21 = v19 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( ((v7 - 4) & 0xFFFFFFFD) == 0 )
    v21 |= 0x42uLL;
  v22 = v21 & 0xFFFFFFFFFFFFFF7FuLL;
  v27 = v22;
LABEL_48:
  if ( v7 == 6 )
  {
    v22 &= ~v20;
    v27 = v22;
  }
  if ( ((a1 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL && (MiFlags & 0x30) != 0 && !v28 )
  {
    if ( (v4 & 4) != 0 )
      v17 = MI_GET_PAGE_FRAME_FROM_PTE(0xFFFFF6FB7DBEDF68uLL);
    else
      v17 = PsInitialSystemProcess->DirectoryTableBase >> 12;
  }
  MiInitializePfnForOtherProcess(v30, a1, v17, 0LL);
  MiMarkPageActive(v31);
  if ( (MI_READ_PTE_LOCK_FREE(a1) & 1) != 0 )
    LOBYTE(v4) = v4 | 8;
  if ( (v4 & 8) != 0 )
  {
    MI_INTERLOCKED_EXCHANGE_PTE(a1, v22);
    v35 = 0;
    v33 = 0;
    v36 = 0LL;
    v37 = 0LL;
    v34 = 20;
    v32 = ((unsigned __int8)v4 >> 2) & 1;
    MiInsertTbFlushEntry(&v32, (__int64)(a1 << 25) >> 16, 1LL);
    return MiFlushTbList(&v32);
  }
  else
  {
    *(_QWORD *)a1 = v22;
    result = MiPteInShadowRange(a1, v23);
    if ( (_DWORD)result )
      return MiWritePteShadow(v25, v22);
  }
  return result;
}
