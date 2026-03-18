/*
 * XREFs of MiInitializeSystemPageTable @ 0x140017F70
 * Callers:
 *     MiMakeZeroedPageTableRange @ 0x140017CAC (MiMakeZeroedPageTableRange.c)
 * Callees:
 *     MiMarkPageActive @ 0x140018440 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140018484 (MiInitializePfnForOtherProcess.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401D1940 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiGetLeafVa @ 0x1401DFF14 (MiGetLeafVa.c)
 *     MxFillPhysicalPage @ 0x140748414 (MxFillPhysicalPage.c)
 */

__int64 __fastcall MiInitializeSystemPageTable(unsigned __int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r14
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  ULONG_PTR v7; // rdi
  unsigned int v8; // r15d
  unsigned __int64 v9; // r14
  void *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 LeafVa; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r12
  unsigned __int64 v18; // r14
  __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 result; // rax
  char v25[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+28h] [rbp-D8h] BYREF
  ULONG_PTR v27; // [rsp+30h] [rbp-D0h]
  int v28; // [rsp+38h] [rbp-C8h]
  _QWORD *v29; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v30; // [rsp+48h] [rbp-B8h]
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v32; // [rsp+54h] [rbp-ACh]
  int v33; // [rsp+58h] [rbp-A8h]
  int v34; // [rsp+5Ch] [rbp-A4h]
  __int64 v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]

  v2 = a2;
  v29 = a2;
  v4 = 0;
  v5 = MI_READ_PTE_LOCK_FREE(a1);
  v26 = v5;
  v6 = (__int64)(a1 << 25) >> 16;
  v7 = (__int64)(v2 + 0xB000000000LL) / 48;
  v30 = v6;
  v27 = v7;
  if ( v6 + 0x98000000000LL > 0x7FFFFFFFFFLL )
  {
    if ( (v5 & 1) != 0 )
    {
      v9 = *(_QWORD *)v6;
    }
    else if ( v6 < (MmPfnDatabase & 0xFFFFFFFFFFFFF000uLL) || v6 >= 48 * qword_1402FE758 - 0x57FFFFFFFD0LL )
    {
      v9 = -1LL;
    }
    else
    {
      v9 = 0LL;
    }
    if ( KeGetCurrentPrcb()->HyperPte )
    {
      v10 = (void *)MiMapPageInHyperSpaceWorker(v7, v25, 0x80000000LL);
      LOBYTE(v11) = v25[0];
      memset64(v10, v9, 0x200uLL);
      MiUnmapPageInHyperSpaceWorker(v10, v11, 0x80000000LL);
      v7 = v27;
    }
    else
    {
      MxFillPhysicalPage(v7);
    }
    v2 = v29;
    v8 = 4;
  }
  else
  {
    v8 = 6;
  }
  LeafVa = MiGetLeafVa(a1);
  if ( LeafVa + 0x70000000000LL > 0x7FFFFFFFFFLL )
  {
    if ( LeafVa <= (unsigned __int64)MmHighestUserAddress || LeafVa + 0xA8000000000LL <= 0x17FFFFFFFFFLL )
      v4 = 4;
  }
  else
  {
    v4 = 1;
    v14 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 48), 1uLL);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 40), 1uLL);
  }
  *v2 = 0LL;
  v15 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - v13;
  v26 = MI_READ_PTE_LOCK_FREE(v15);
  v16 = MI_GET_PAGE_FRAME_FROM_PTE(&v26);
  v17 = qword_140381310;
  v18 = v16;
  v28 = v4 & 1;
  if ( (v4 & 1) != 0 )
  {
    v19 = MmProtectToPteMask[v8] ^ ((v27 << 12) ^ MmProtectToPteMask[v8]) & 0xFFFFFFFFF000LL | 0x21;
    if ( a1 + 0x904C0000000LL <= 0x3FFFFFFF )
      v19 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
    if ( a1 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && a1 >= 0xFFFFF68000000000uLL
      || a1 >= 0xFFFFF6FB40000000uLL
      && a1 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || a1 >= 0xFFFFF6FB7DA00000uLL
      && a1 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
      || a1 >= 0xFFFFF6FB7DBED000uLL
      && a1 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v19 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a1) )
      v19 |= 0x100uLL;
    v20 = v19 & 0xFFFFFFFFFFFFFEFFuLL;
    if ( ((v8 - 4) & 0xFFFFFFFD) == 0 )
      v20 |= 0x42uLL;
    v21 = v20 & 0xFFFFFFFFFFFFFF7FuLL;
  }
  else
  {
    v21 = MiMakeValidKernelPte(v7, v8, a1) | 0x42;
    v26 = v21;
    if ( v30 + 0x98000000000LL > 0x7FFFFFFFFFLL )
    {
      if ( (v4 & 4) == 0 )
        goto LABEL_40;
      v21 ^= ((unsigned __int16)v21 ^ (unsigned __int16)(HIBYTE(word_1402FE760) << 8)) & 0x100;
    }
    else
    {
      v21 &= ~0x100uLL;
    }
  }
  v26 = v21;
LABEL_40:
  if ( v8 == 6 )
  {
    v21 &= ~v17;
    v26 = v21;
  }
  if ( v15 == 0xFFFFF6FB7DBEDF68uLL && (MiFlags & 0x30) != 0 && !v28 )
  {
    if ( (v4 & 4) != 0 )
      v18 = MI_GET_PAGE_FRAME_FROM_PTE(0xFFFFF6FB7DBEDF68uLL);
    else
      v18 = PsInitialSystemProcess->DirectoryTableBase >> 12;
  }
  MiInitializePfnForOtherProcess(v27, a1, v18, 0LL);
  MiMarkPageActive(v29);
  if ( (MI_READ_PTE_LOCK_FREE(a1) & 1) != 0 )
    v4 |= 8u;
  if ( (v4 & 8) != 0 )
  {
    MI_INTERLOCKED_EXCHANGE_PTE(a1, v21);
    v34 = 0;
    v35 = 0LL;
    v36 = 0LL;
    v32 = 0;
    v31 = (v4 >> 2) & 1;
    v33 = 20;
    MiInsertTbFlushEntry(&v31, v30, 1LL, 0LL);
    return MiFlushTbList(&v31, v22, v23);
  }
  else
  {
    *(_QWORD *)a1 = v21;
    result = MiPteInShadowRange(a1);
    if ( (_DWORD)result )
      return MiWritePteShadow(a1, v21);
  }
  return result;
}
