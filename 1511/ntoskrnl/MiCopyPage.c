/*
 * XREFs of MiCopyPage @ 0x1400701E0
 * Callers:
 *     MiTradeActivePage @ 0x140007470 (MiTradeActivePage.c)
 *     MiCopyHeaderIfResident @ 0x14000E7B8 (MiCopyHeaderIfResident.c)
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiReplaceTransitionPage @ 0x1400714A0 (MiReplaceTransitionPage.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiSwapStackPageNoDpc @ 0x1400D8BB0 (MiSwapStackPageNoDpc.c)
 *     MiDuplicateCloneLeaf @ 0x1400F3798 (MiDuplicateCloneLeaf.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
 *     MiFillPerSessionProtos @ 0x14062C154 (MiFillPerSessionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MiAllocateHyperSpace @ 0x14001242C (MiAllocateHyperSpace.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiGetPagePrivilege @ 0x140070730 (MiGetPagePrivilege.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MiClearPfnImageVerified @ 0x1400B5370 (MiClearPfnImageVerified.c)
 *     HvlFlushTbAllPartitions @ 0x1400E8120 (HvlFlushTbAllPartitions.c)
 *     MiMarkPfnVerified @ 0x1400FE088 (MiMarkPfnVerified.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140157550 (KeCopyPage.c)
 *     KeCopyPrivilegedPage @ 0x1401C32B8 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x1401C3384 (KeSetPagePrivilege.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, unsigned int *a3, unsigned __int8 a4)
{
  __int64 v4; // rbx
  int v5; // r12d
  int v6; // eax
  int v9; // esi
  __int64 PagePrivilege; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  char v15; // bl
  int v16; // r13d
  int v17; // eax
  int *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // ebx
  bool v22; // zf
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 HyperSpace; // rax
  int v25; // ebx
  unsigned int v26; // ecx
  __int64 v27; // rdx
  _KPROCESS *v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rsi
  char v31; // al
  unsigned __int64 v32; // rbx
  __int64 v33; // r9
  int v34; // r12d
  char v35; // cl
  unsigned __int64 ValidKernelPte; // rax
  unsigned __int64 v37; // rbx
  __int64 v39; // [rsp+30h] [rbp-D0h]
  unsigned int v41; // [rsp+40h] [rbp-C0h]
  int v43; // [rsp+50h] [rbp-B0h] BYREF
  int v44; // [rsp+54h] [rbp-ACh]
  __int16 v45; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h]
  __int128 v48; // [rsp+70h] [rbp-90h] BYREF
  __int128 v49; // [rsp+80h] [rbp-80h] BYREF
  int v50; // [rsp+90h] [rbp-70h] BYREF
  __int16 v51; // [rsp+94h] [rbp-6Ch]
  __int64 v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]

  v4 = 48 * a2 - 0x58000000000LL;
  v47 = v4;
  v5 = 4;
  v39 = 48 * a1 - 0x58000000000LL;
  v6 = 0;
  if ( (a4 & 4) != 0 )
    v6 = 4;
  v41 = v6;
  v9 = -1073741823;
  PagePrivilege = (unsigned int)MiGetPagePrivilege(v4, a4 & 4, &v49);
  v13 = 2LL;
  v14 = MiFlags;
  if ( (_DWORD)PagePrivilege )
  {
    if ( (a4 & 0x12) != 0 )
    {
      v15 = 2;
    }
    else if ( (MiFlags & 0x10000) == 0
           || (a4 & 8) != 0
           || (PagePrivilege & 1) == 0
           || (v12 = 0x200000000000000LL, (*(_QWORD *)(v4 + 40) & 0x200000000000000LL) != 0) )
    {
      if ( (MiFlags & 0x40000) != 0 && (a4 & 8) == 0 && (PagePrivilege & 2) != 0 )
        v15 = 2;
      else
        v15 = 4;
    }
    else
    {
      v15 = 2;
    }
  }
  else
  {
    v11 = a4;
    v15 = 0;
    LOBYTE(v11) = a4 & 2;
    if ( (a4 & 2) == 0 )
      v15 = 4;
  }
  v16 = 1;
  if ( (v15 & 2) != 0 )
  {
    *((_QWORD *)&v48 + 1) = 0LL;
    if ( (MiFlags & 0x40000) != 0 )
    {
      ++dword_1402FE710;
      HvlFlushTbAllPartitions(v11, PagePrivilege, v12);
      KeFlushTb(3u, 2u);
      v14 = MiFlags;
    }
    if ( (v14 & 0x80000) != 0 )
    {
      if ( (a4 & 2) != 0 )
      {
        v48 = v49;
      }
      else
      {
        *(_QWORD *)&v48 = (__int64)(*(_QWORD *)(v39 + 8) << 25) >> 16;
        if ( (unsigned __int64)v48 < 0xFFFF800000000000uLL )
        {
          v15 |= 8u;
          *((_QWORD *)&v48 + 1) = KeGetCurrentThread()->ApcState.Process->SecurePid;
        }
        else
        {
          *((_QWORD *)&v48 + 1) = 0LL;
        }
      }
    }
    v17 = KeCopyPrivilegedPage(a1, (unsigned int)&v48, a2, (unsigned int)&v49, (a4 & 2) != 0);
    v9 = v17;
    if ( v17 == -1073741819 )
    {
      if ( (v15 & 8) != 0 )
        v15 |= 4u;
    }
    else if ( v17 >= 0 )
    {
LABEL_32:
      if ( (MiFlags & 0x40000) != 0 )
      {
        v5 = 4;
        if ( (a4 & 2) == 0 && (*(_QWORD *)(v39 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
        {
          v9 = KeSetPagePrivilege(a1, &v48, 4LL);
          if ( v9 < 0 )
            KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
        }
      }
      else
      {
        v5 = 4;
      }
      goto LABEL_38;
    }
    if ( (v15 & 4) == 0 )
      KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, v17);
    goto LABEL_32;
  }
LABEL_38:
  LOBYTE(v18) = (*(_QWORD *)(v47 + 40) >> 54) & 7;
  if ( (_BYTE)v18 != 3 )
  {
LABEL_44:
    v19 = v39;
    goto LABEL_45;
  }
  if ( (a4 & 2) != 0 )
    LOBYTE(v18) = MiClearPfnImageVerified(v47, v41);
  v19 = v39;
  if ( (v15 & 4) == 0 )
  {
    LOBYTE(v18) = (*(_QWORD *)(v39 + 40) >> 54) & 7;
    if ( (_BYTE)v18 != 3 )
    {
      LOBYTE(v18) = MiMarkPfnVerified(v39, v41);
      goto LABEL_44;
    }
  }
LABEL_45:
  if ( v9 < 0 )
  {
    v20 = *(unsigned __int8 *)(v47 + 34) >> 6;
    if ( *(unsigned __int8 *)(v19 + 34) >> 6 != (_DWORD)v20 )
      MiChangePageAttribute(v19, v20, 0LL);
    if ( !a3 )
    {
      if ( (a4 & 1) != 0 )
        v15 |= 1u;
      a3 = (unsigned int *)&v43;
      if ( (v15 & 1) == 0 )
        goto LABEL_57;
      v21 = 2;
      v43 = 0;
      v44 = 2;
      v45 = 17;
      while ( 1 )
      {
        v46 = MiReservePtes((__int64)&qword_1402FF7B0, v21, v12);
        if ( v46 )
          break;
        v22 = v21 == 2;
        v21 -= 2;
        v44 = v21;
        if ( v22 )
          goto LABEL_57;
      }
      if ( !v21 )
      {
LABEL_57:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        LOBYTE(v45) = CurrentIrql;
        v43 = 0;
        v44 = 2;
        HyperSpace = MiAllocateHyperSpace(2uLL);
        HIBYTE(v45) = 1;
        v46 = ((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    v25 = 2;
    v26 = *a3;
    if ( a2 == -1LL )
      v25 = 1;
    if ( v26 + v25 > a3[1] )
    {
      v27 = (__int64)(*((_QWORD *)a3 + 2) << 25) >> 16;
      v52 = 20LL;
      v50 = 0;
      v51 = 0;
      v53 = 0LL;
      v54 = 0LL;
      MiInsertTbFlushEntry((__int64)&v50, v27, v26, 0);
      MiFlushTbList((__int64)&v50, v28);
      *a3 = 0;
    }
    v29 = *a3;
    v30 = *((_QWORD *)a3 + 2) + 8 * v29;
    *a3 = v29 + v25;
    v31 = *(_BYTE *)(v39 + 34) >> 6;
    if ( v31 )
    {
      if ( v31 == 2 )
        v5 = 28;
    }
    else
    {
      v5 = 12;
    }
    v32 = MiMakeValidKernelPte(a1, v5, v30, v13) | 0x42;
    *(_QWORD *)v30 = v32;
    v34 = MiPteInShadowRange(v30);
    if ( v34 )
      MiWritePteShadow(v30, v32);
    if ( a2 != -1LL )
    {
      v35 = *(_BYTE *)(v47 + 34) >> 6;
      if ( v35 )
      {
        if ( v35 == 2 )
          v16 = 25;
      }
      else
      {
        v16 = 9;
      }
      ValidKernelPte = MiMakeValidKernelPte(a2, v16, v30, v33);
      *(_QWORD *)(v30 + 8) = ValidKernelPte;
      v37 = ValidKernelPte;
      if ( (unsigned int)MiPteInShadowRange(v30 + 8) )
        MiWritePteShadow(v30 + 8, v37);
    }
    KeCopyPage((__int64)(v30 << 25) >> 16, ((__int64)(v30 << 25) >> 16) + 4096);
    *(_QWORD *)v30 = 0LL;
    if ( v34 )
      MiWritePteShadow(v30, 0LL);
    *(_QWORD *)(v30 + 8) = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v30 + 8) )
      MiWritePteShadow(v30 + 8, 0LL);
    v18 = &v43;
    if ( a3 == (unsigned int *)&v43 )
    {
      LOBYTE(v18) = *((_BYTE *)a3 + 8);
      if ( (_BYTE)v18 == 17 )
        LOBYTE(v18) = MiReleasePtes((__int64)&qword_1402FF7B0, *((_QWORD **)a3 + 2), 2u);
      else
        __writecr8((unsigned __int8)v18);
    }
  }
  return (char)v18;
}
