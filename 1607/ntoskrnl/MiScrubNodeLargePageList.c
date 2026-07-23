/*
 * XREFs of MiScrubNodeLargePageList @ 0x1401FBAD4
 * Callers:
 *     MiScrubNodeLargePages @ 0x140664BE4 (MiScrubNodeLargePages.c)
 * Callees:
 *     MiInsertLargePageInNodeListHelper @ 0x14001B2E0 (MiInsertLargePageInNodeListHelper.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiUnlinkNodeLargePage @ 0x140089F30 (MiUnlinkNodeLargePage.c)
 *     MiPageListCollision @ 0x14008A878 (MiPageListCollision.c)
 *     MiRemoveFaultNode @ 0x14008AF78 (MiRemoveFaultNode.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiGetLargePageWorkMapping @ 0x14013B330 (MiGetLargePageWorkMapping.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401E2170 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiScrubPage @ 0x1401FE690 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubNodeLargePageList(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned __int64 *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r12
  unsigned int v10; // r11d
  unsigned __int64 v11; // rdi
  __int64 v12; // r13
  int v13; // r14d
  _BYTE *v14; // r15
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r8
  unsigned __int64 LargePageWorkMapping; // rax
  __int64 v19; // rcx
  ULONG_PTR v20; // rax
  __int64 v21; // r8
  unsigned int v22; // r10d
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // esi
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rax
  unsigned __int64 ValidKernelPte; // rax
  unsigned __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // r11
  unsigned __int64 v35; // r10
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // r14
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int8 v41; // cl
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // edx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // r10
  unsigned __int64 v51; // r8
  ULONG_PTR v52; // rax
  unsigned __int8 v53; // [rsp+30h] [rbp-138h]
  unsigned __int8 v54; // [rsp+30h] [rbp-138h]
  unsigned __int8 v55; // [rsp+30h] [rbp-138h]
  int v56; // [rsp+38h] [rbp-130h]
  __int64 v57; // [rsp+40h] [rbp-128h]
  _QWORD *v58; // [rsp+58h] [rbp-110h]
  int v59; // [rsp+60h] [rbp-108h]
  unsigned __int8 CurrentIrql; // [rsp+68h] [rbp-100h]
  unsigned __int64 v61; // [rsp+70h] [rbp-F8h]
  unsigned __int64 v62; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v63; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v64; // [rsp+98h] [rbp-D0h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-C8h]
  __int64 v66; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-98h] BYREF
  _BYTE v68[136]; // [rsp+E0h] [rbp-88h] BYREF

  v9 = a3;
  v10 = a2;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v12 = MiLargePageSizes[a3];
  v13 = a5;
  if ( a5 )
  {
    v14 = v68;
    memset(v68, 0, 0x48uLL);
    v15 = 0LL;
    if ( (unsigned int)v9 <= 1 )
    {
      LargePageWorkMapping = MiGetLargePageWorkMapping(v9);
      v11 = LargePageWorkMapping;
      if ( !LargePageWorkMapping )
        return 1LL;
      v15 = ((LargePageWorkMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v19 = (unsigned int)(2 - v9);
      do
      {
        v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v19;
      }
      while ( v19 );
    }
    if ( !v15 )
    {
      v20 = MiReservePtes((__int64)&qword_1403278B0, (unsigned int)v12, v16);
      v15 = v20;
      if ( !v20 )
        return 1LL;
      v11 = (__int64)(v20 << 25) >> 16;
    }
    v68[69] = 1;
    v10 = a2;
    goto LABEL_12;
  }
  v14 = 0LL;
  v15 = 0LL;
LABEL_12:
  v21 = *(_QWORD *)(a1 + 48) + 2184LL * v10;
  CurrentIrql = 17;
  v62 = *a7;
  *a7 = 0LL;
  v61 = 0LL;
  v22 = a6;
  v23 = a6 + 4 * (a5 + 2 * (a4 + 2 * v9));
  v24 = (_QWORD *)(v21 + 16 * (v23 + 3));
  v58 = v24;
  v25 = *(_QWORD *)(v21 + 8 * v23 + 816);
  v57 = v25;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x100u;
  while ( 1 )
  {
    if ( !v25 || (_QWORD *)*v24 == v24 )
    {
LABEL_58:
      v26 = 1;
      goto LABEL_59;
    }
    if ( *(_DWORD *)(a9 + 4) )
    {
      v26 = 0;
      goto LABEL_59;
    }
    if ( !v13 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v27 = MiUnlinkNodeLargePage(a1, v9, v10, v22, v13, (__int64)v14);
    v28 = v27;
    if ( !v27 )
      break;
    if ( !v13 )
    {
      MiLockPageAtDpcInline(v27);
      *(_BYTE *)(v28 + 34) = *(_BYTE *)(v28 + 34) & 0xF8 | 1;
      MiInsertLargePageInNodeListHelper((__int64)(v28 + 0x58000000000LL) / 48, MiLargePageSizes[(unsigned int)v9], 1, 1);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v29 = CurrentIrql;
LABEL_24:
      __writecr8(v29);
      goto LABEL_25;
    }
    v53 = MiLockPageInline(v27);
    if ( v14[68] == 1 )
    {
      MiRemoveFaultNode((__int64)v14);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v29 = v53;
      goto LABEL_24;
    }
    *((_QWORD *)v14 + 4) = v15;
    *((_DWORD *)v14 + 16) = v9;
    *((_QWORD *)v14 + 5) = v11;
    *((_QWORD *)v14 + 6) = v11 + (v12 << 12) - 1;
    ValidKernelPte = MiMakeValidKernelPte((__int64)(v28 + 0x58000000000LL) / 48, 4, v15);
    v31 = ValidKernelPte | 0x42;
    if ( (unsigned int)v9 > 1 )
    {
      v34 = 8 * v12;
      v35 = 8 * v12 + v15;
      while ( v15 < v35 )
      {
        *(_QWORD *)v15 = v31;
        if ( MiPteInShadowRange(v15) )
          MiWritePteShadow(v36, v37);
        v31 = (v37 ^ ((v37 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL ^ v37;
        v15 += 8LL;
      }
      v15 -= v34;
    }
    else
    {
      *(_QWORD *)v15 = ValidKernelPte | 0xC2;
      if ( MiPteInShadowRange(v15) )
        MiWritePteShadow(v32, v33);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v53);
    --v57;
    v56 = 0;
    v38 = v28;
    v39 = v28 + 48 * v12;
    v64 = v39;
    v40 = v11;
    while ( 1 )
    {
      v63 = v40;
      if ( v28 >= v39 )
      {
        v45 = 0;
        goto LABEL_46;
      }
      v56 = MiScrubPage(a8, 0LL, v28, v40);
      v41 = MiLockPageInline(v38);
      v54 = v41;
      v59 = (unsigned __int8)v14[68];
      if ( v59 == 1 || v56 < 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v41);
      v28 += 48LL;
      v40 = v63 + 4096;
      v39 = v64;
    }
    MiRemoveFaultNode((__int64)v14);
    if ( !v59 )
      MiPageListCollision(v38, v42, v43, v44);
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v54);
    v45 = 1;
LABEL_46:
    if ( !v45 )
    {
      v55 = MiLockPageInline(v38);
      MiRemoveFaultNode((__int64)v14);
      if ( !v14[68] )
        MiPageListCollision(v38, v46, v47, v48);
      _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v55);
    }
    v49 = (__int64)(v28 - v38) / 48 + v61;
    v50 = v62;
    if ( v49 > v62 )
      v49 = v62;
    v61 = v49;
    *a7 = v49;
    if ( v56 < 0 )
    {
      v67 = ((__int64)(v28 + 0x58000000000LL) / 48) << 12;
      v66 = 4096LL;
      MmMarkPhysicalMemoryAsBad(&v67, &v66);
      v49 = v61;
      v50 = v62;
    }
    v13 = a5;
    if ( v49 >= v50 )
      goto LABEL_58;
    v24 = v58;
    v25 = v57;
    v10 = a2;
    v22 = a6;
    if ( (unsigned int)v9 > 1 )
    {
      MiReleasePtes((__int64)&qword_1403278B0, v15, v12);
      v52 = MiReservePtes((__int64)&qword_1403278B0, (unsigned int)v12, v51);
      v15 = v52;
      if ( !v52 )
        goto LABEL_58;
      v11 = (__int64)(v52 << 25) >> 16;
      *((_QWORD *)v14 + 4) = v52;
LABEL_25:
      v24 = v58;
      v25 = v57;
      v10 = a2;
      v22 = a6;
    }
  }
  v26 = 1;
  if ( !v13 )
    __writecr8(CurrentIrql);
LABEL_59:
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x100u;
  if ( v13 )
  {
    if ( (unsigned int)v9 <= 1 )
    {
      MiReturnSystemVa(v11, v11 + (v12 << 12), 15, 0LL);
      v15 = 0LL;
    }
    if ( v15 )
      MiReleasePtes((__int64)&qword_1403278B0, v15, v12);
  }
  return v26;
}
