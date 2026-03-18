/*
 * XREFs of MiCopyPage @ 0x140058ED0
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x140004A08 (MiDuplicateCloneLeaf.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiReplaceTransitionPage @ 0x140059C70 (MiReplaceTransitionPage.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiCopyHeaderIfResident @ 0x1400E0408 (MiCopyHeaderIfResident.c)
 *     MiTradeActivePage @ 0x1400FCE2C (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x14011FF4C (MiSwapStackPageNoDpc.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiGetPteFromCopyList @ 0x140059330 (MiGetPteFromCopyList.c)
 *     MiGetPagePrivilege @ 0x1400597B0 (MiGetPagePrivilege.c)
 *     MiCreatePteCopyList @ 0x1400597DC (MiCreatePteCopyList.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiClearPfnImageVerified @ 0x1400E6680 (MiClearPfnImageVerified.c)
 *     HvlFlushTbAllPartitions @ 0x1400E6968 (HvlFlushTbAllPartitions.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140186CC0 (KeCopyPage.c)
 *     KeCopyPrivilegedPage @ 0x1401FF210 (KeCopyPrivilegedPage.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, int *a3, char a4)
{
  __int64 v4; // r12
  int v5; // eax
  __int64 v6; // r13
  char v9; // bl
  int v10; // r15d
  int PagePrivilege; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  _BOOL8 v14; // rdx
  int *v15; // rax
  __int64 v16; // rdx
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 HyperPte; // rbx
  unsigned __int64 v19; // rdx
  __int64 PteFromCopyList; // rbx
  unsigned int v22; // [rsp+30h] [rbp-D0h]
  __int128 v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 v28; // [rsp+68h] [rbp-98h]
  char v29; // [rsp+69h] [rbp-97h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  __int128 v31; // [rsp+80h] [rbp-80h] BYREF
  int v32; // [rsp+90h] [rbp-70h] BYREF
  __int16 v33; // [rsp+94h] [rbp-6Ch]
  __int64 v34; // [rsp+98h] [rbp-68h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]

  v4 = 48 * a2 - 0x58000000000LL;
  v5 = 0;
  v6 = 48 * a1 - 0x58000000000LL;
  v9 = 0;
  v10 = -1073741823;
  if ( (a4 & 4) != 0 )
    v5 = 4;
  v22 = v5;
  PagePrivilege = MiGetPagePrivilege(v4, a4 & 4);
  v12 = HIWORD(MiFlags);
  v13 = 0x8000000000000000uLL;
  if ( PagePrivilege != 1 )
  {
    if ( (a4 & 2) == 0 )
      v9 = 4;
LABEL_17:
    if ( (v9 & 2) == 0 )
      goto LABEL_28;
    goto LABEL_18;
  }
  if ( (a4 & 0x12) != 0 )
  {
    v9 = 2;
  }
  else if ( (MiFlags & 0x30000) != 0 && (a4 & 8) == 0 )
  {
    if ( (BYTE2(MiFlags) & 3u) <= 1 )
    {
      if ( (*(_QWORD *)(v4 + 40) & 0x200000000000000LL) == 0
        && (unsigned __int64)((__int64)((*(_QWORD *)(v4 + 8) | 0x8000000000000000uLL) << 25) >> 16) >= 0xFFFF800000000000uLL )
      {
        v9 = 2;
      }
    }
    else
    {
      v9 = 2;
    }
  }
  if ( (v9 & 2) == 0 )
  {
    v9 |= 4u;
    goto LABEL_17;
  }
LABEL_18:
  *((_QWORD *)&v25 + 1) = 0LL;
  v14 = (a4 & 2) != 0;
  if ( (BYTE2(MiFlags) & 3) == 3 )
  {
    ++dword_14034EBC8;
    LOBYTE(v12) = BYTE2(MiFlags) & 3;
    HvlFlushTbAllPartitions(v12, v14, 2LL, 0x8000000000000000uLL);
    KeFlushTb(3, 2);
    LOBYTE(v14) = (a4 & 2) != 0;
  }
  if ( (MiFlags & 0x80000) != 0 )
  {
    if ( (a4 & 2) != 0 )
    {
      v25 = v31;
    }
    else
    {
      *(_QWORD *)&v25 = (__int64)((*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) << 25) >> 16;
      if ( (unsigned __int64)v25 < 0xFFFF800000000000uLL )
        *((_QWORD *)&v25 + 1) = KeGetCurrentThread()->ApcState.Process->SecurePid;
      else
        *((_QWORD *)&v25 + 1) = 0LL;
    }
  }
  v10 = KeCopyPrivilegedPage(a1, (unsigned int)&v25, a2, (unsigned int)&v31, v14);
  if ( v10 < 0 && (BYTE2(MiFlags) & 3) != 2 )
    KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, 0LL);
LABEL_28:
  LOBYTE(v15) = (*(_QWORD *)(v4 + 40) >> 54) & 7;
  if ( (_BYTE)v15 == 3 )
  {
    if ( (a4 & 2) != 0 )
      LOBYTE(v15) = MiClearPfnImageVerified(v4, v22);
    if ( (v9 & 4) == 0 )
    {
      LOBYTE(v15) = (*(_QWORD *)(v6 + 40) >> 54) & 7;
      if ( (_BYTE)v15 != 3 )
        LOBYTE(v15) = MiMarkPfnVerified(v6, v22);
    }
  }
  if ( v10 < 0 )
  {
    v16 = *(unsigned __int8 *)(v4 + 34) >> 6;
    if ( *(unsigned __int8 *)(v6 + 34) >> 6 != (_DWORD)v16 )
      MiChangePageAttribute(v6, v16, 0LL);
    if ( !a3 )
    {
      if ( (a4 & 1) != 0 )
        v9 |= 1u;
      a3 = &v26;
      if ( (v9 & 1) == 0 || (MiCreatePteCopyList(2LL, 2LL, &v26, v13), !v27) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
        if ( 64 - (HyperPte & 0xFFF) > 2 )
        {
          v19 = (HyperPte & 0xFFFFFFFFFFFFF000uLL) + ((HyperPte & 0xFFF) << 12);
        }
        else
        {
          v34 = 20LL;
          HyperPte &= 0xFFFFFFFFFFFFF000uLL;
          v32 = 0;
          v33 = 0;
          v35 = 0LL;
          v36 = 0LL;
          MiInsertTbFlushEntry(&v32, HyperPte, 64LL, 0LL);
          LOBYTE(v33) = v33 | 1;
          MiFlushTbList(&v32);
          v19 = HyperPte;
        }
        v26 = 0;
        v27 = 2;
        KeGetCurrentPrcb()->HyperPte = (void *)(HyperPte + 2);
        v28 = CurrentIrql;
        v29 = 1;
        v30 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    PteFromCopyList = MiGetPteFromCopyList(a3, a1, a2);
    KeCopyPage(PteFromCopyList << 25 >> 16, (PteFromCopyList << 25 >> 16) + 4096);
    *(_QWORD *)PteFromCopyList = 0LL;
    if ( (unsigned __int64)(PteFromCopyList + 0x90482413000LL) <= 0x7F8 )
      MiWritePteShadow(PteFromCopyList, 0LL);
    *(_QWORD *)(PteFromCopyList + 8) = 0LL;
    if ( (unsigned __int64)(PteFromCopyList + 0x90482413008LL) <= 0x7F8 )
      MiWritePteShadow(PteFromCopyList + 8, 0LL);
    v15 = &v26;
    if ( a3 == &v26 )
    {
      LOBYTE(v15) = *((_BYTE *)a3 + 8);
      if ( (_BYTE)v15 == 17 )
        LOBYTE(v15) = MiReleasePtes(&qword_14034FC70, *((_QWORD *)a3 + 2), 2LL);
      else
        __writecr8((unsigned __int8)v15);
    }
  }
  return (char)v15;
}
