/*
 * XREFs of MiInitializeSystemPageTable @ 0x14006A1F8
 * Callers:
 *     MiMakeZeroedPageTableRange @ 0x140069E70 (MiMakeZeroedPageTableRange.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMarkPageActive @ 0x14006A8A0 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x14006A908 (MiInitializePfnForOtherProcess.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetLeafVa @ 0x140225AFC (MiGetLeafVa.c)
 *     MxFillPhysicalPage @ 0x1407C76BC (MxFillPhysicalPage.c)
 */

// local variable allocation has failed, the output may be wrong!
unsigned __int64 __fastcall MiInitializeSystemPageTable(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 PteShadow; // rdi
  int v3; // ebx
  unsigned __int64 v4; // r11
  __int64 v5; // r9
  __int64 v7; // rdx
  unsigned __int64 v8; // r15
  ULONG_PTR v9; // r12
  int v10; // r14d
  __int64 v11; // rdi
  unsigned __int64 v12; // r14
  void *v13; // rax
  unsigned __int8 v14; // dl
  unsigned __int64 LeafVa; // rax
  __int64 v16; // r8
  _QWORD *v17; // r9
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // r9
  unsigned __int64 v22; // r8
  __int64 v23; // r8
  ULONG_PTR v24; // rax
  int v25; // r13d
  __int64 v26; // rdi
  unsigned __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r11
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // r10
  unsigned __int64 v36; // r9
  unsigned __int64 result; // rax
  unsigned __int8 v38[8]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v39; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v41; // [rsp+38h] [rbp-C8h]
  int v42; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v43; // [rsp+44h] [rbp-BCh]
  int v44; // [rsp+48h] [rbp-B8h]
  int v45; // [rsp+4Ch] [rbp-B4h]
  __int64 v46; // [rsp+50h] [rbp-B0h]
  __int64 v47; // [rsp+58h] [rbp-A8h]

  PteShadow = *(_QWORD *)a1;
  v3 = 0;
  v40 = a2;
  v4 = 2040LL;
  v5 = a2;
  if ( a1 + 0x90482413000LL <= 0x7F8 )
    PteShadow = MiReadPteShadow(a1, PteShadow);
  v39 = PteShadow;
  v7 = (unsigned __int128)((v5 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = (__int64)(a1 << 25) >> 16;
  v9 = (v5 + 0x58000000000LL) / 48;
  if ( v8 + 0x98000000000LL <= 0x7FFFFFFFFFLL )
  {
    v10 = 6;
    goto LABEL_18;
  }
  if ( (PteShadow & 1) == 0 )
    goto LABEL_11;
  if ( (unsigned __int64)&STACK[0x90482413028] <= v4 )
    PteShadow = MiReadPteShadow(&v39, PteShadow);
  v11 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
  if ( v11 == qword_14034F728 )
    goto LABEL_13;
  if ( v11 != qword_14034F748 )
  {
LABEL_11:
    if ( v8 >= (MmPfnDatabase & 0xFFFFFFFFFFFFF000uLL) && v8 < 48 * qword_14034EC10 - 0x57FFFFFFFD0LL )
      goto LABEL_12;
LABEL_13:
    v12 = -1LL;
    goto LABEL_14;
  }
LABEL_12:
  v12 = 0LL;
LABEL_14:
  if ( KeGetCurrentPrcb()->HyperPte )
  {
    v13 = (void *)MiMapPageInHyperSpaceWorker(v9, v38, 0x80000000LL);
    v14 = v38[0];
    memset64(v13, v12, 0x200uLL);
    MiUnmapPageInHyperSpaceWorker((__int64)v13, v14);
  }
  else
  {
    MxFillPhysicalPage(v9);
  }
  v5 = v40;
  v10 = 4;
LABEL_18:
  LeafVa = MiGetLeafVa(a1, v7, 0x98000000000LL, v5);
  if ( LeafVa + 0x70000000000LL > 0x7FFFFFFFFFLL )
  {
    if ( LeafVa <= (unsigned __int64)MmHighestUserAddress || LeafVa + 0xA8000000000LL <= 0x17FFFFFFFFFLL )
      v3 = 4;
  }
  else
  {
    v3 = v18;
    v20 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 48), v18);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 40), v18);
  }
  *v17 = 0LL;
  v21 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - v16);
  v41 = *v21;
  v22 = v41;
  if ( (unsigned __int64)(v21 + 0x12090482600LL) <= v19 )
    v22 = MiReadPteShadow(v21, v41);
  v39 = v22;
  if ( (unsigned __int64)&STACK[0x90482413028] <= v19 )
    v22 = MiReadPteShadow(&v39, v22);
  v23 = (v22 >> 12) & 0xFFFFFFFFFLL;
  v24 = v9 << 12;
  v25 = v18 & v3;
  if ( ((unsigned int)v18 & v3) != 0 )
  {
    v26 = MmProtectToPteMask[v10] ^ (v24 ^ MmProtectToPteMask[v10]) & 0xFFFFFFFFF000LL | 0x21;
    if ( a1 + 0x904C0000000LL <= 0x3FFFFFFF )
      v26 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
    if ( a1 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && a1 >= 0xFFFFF68000000000uLL
      || a1 >= 0xFFFFF6FB40000000uLL
      && a1 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || a1 >= 0xFFFFF6FB7DA00000uLL
      && a1 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
      || a1 >= 0xFFFFF6FB7DBED000uLL
      && a1 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v26 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a1, 0x98000000000LL, v23) )
      v26 |= 0x100uLL;
    v30 = v26 & 0xFFFFFFFFFFFFFEFFuLL;
    if ( ((v10 - 4) & 0xFFFFFFFD) == 0 )
      v30 |= 0x42uLL;
    v31 = v30 & 0xFFFFFFFFFFFFFF7FuLL;
  }
  else
  {
    v32 = MmProtectToPteMask[v10] ^ (v24 ^ MmProtectToPteMask[v10]) & 0xFFFFFFFFF000LL | 0x21;
    if ( a1 + 0x904C0000000LL <= 0x3FFFFFFF )
      v32 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
    if ( a1 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && a1 >= 0xFFFFF68000000000uLL
      || a1 >= 0xFFFFF6FB40000000uLL
      && a1 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || a1 >= 0xFFFFF6FB7DA00000uLL
      && a1 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
      || a1 >= 0xFFFFF6FB7DBED000uLL
      && a1 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v32 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a1, v32, v23) )
      v33 |= 0x100uLL;
    v31 = v33 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
    v39 = v31;
    if ( v8 + 0x98000000000LL > 0x7FFFFFFFFFLL )
    {
      if ( (v3 & 4) == 0 )
        goto LABEL_62;
      v31 ^= (v31 ^ ((unsigned __int64)HIBYTE(word_14034EC18) << 8)) & 0x100;
    }
    else
    {
      v31 = v33 & 0xFFFFFFFFFFFFFE3DuLL | 0x42;
    }
  }
  v39 = v31;
LABEL_62:
  if ( v10 == 6 )
  {
    v31 &= ~v29;
    v39 = v31;
  }
  if ( v28 == 0xFFFFF6FB7DBEDF68uLL && (MiFlags & 0x30) != 0 && !v25 )
  {
    if ( (v3 & 4) != 0 )
      v27 = (v41 >> 12) & 0xFFFFFFFFFLL;
    else
      v27 = PsInitialSystemProcess->DirectoryTableBase >> 12;
  }
  MiInitializePfnForOtherProcess(v9, a1, v27, 0LL);
  MiMarkPageActive(v40);
  v34 = *(_QWORD *)a1;
  v35 = 0x90482413000LL;
  v36 = 2040LL;
  if ( a1 + 0x90482413000LL <= 0x7F8 )
    LOBYTE(v34) = MiReadPteShadow(a1, *(_QWORD *)a1);
  if ( (v34 & 1) != 0 )
    LOBYTE(v3) = v3 | 8;
  result = a1 + v35;
  if ( (v3 & 8) != 0 )
  {
    _InterlockedExchange64((volatile __int64 *)a1, v31);
    if ( result <= v36 )
      MiWritePteShadow(a1, v39);
    v45 = 0;
    v46 = 0LL;
    v47 = 0LL;
    v43 = 0;
    v42 = ((unsigned __int8)v3 >> 2) & 1;
    v44 = 20;
    MiInsertTbFlushEntry(&v42, (__int64)(a1 << 25) >> 16, 1LL, 0LL);
    return MiFlushTbList(&v42);
  }
  else
  {
    *(_QWORD *)a1 = v31;
    if ( result <= v36 )
      return MiWritePteShadow(a1, v31);
  }
  return result;
}
