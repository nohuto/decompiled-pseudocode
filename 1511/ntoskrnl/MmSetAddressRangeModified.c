/*
 * XREFs of MmSetAddressRangeModified @ 0x1400B9910
 * Callers:
 *     CcZeroDataInCache @ 0x140015F4C (CcZeroDataInCache.c)
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7B9C (CcPurgeAndClearCacheSection.c)
 *     CcUnpinRepinnedBcb @ 0x1401A9140 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     KiFlushViaHypervisor @ 0x1400079D0 (KiFlushViaHypervisor.c)
 *     KiIsSecureProcessFlush @ 0x1400079EC (KiIsSecureProcessFlush.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     KeInitializeAffinityEx @ 0x1400755A0 (KeInitializeAffinityEx.c)
 *     KeAddGroupAffinityEx @ 0x14009409C (KeAddGroupAffinityEx.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     KiFlushRangeTb @ 0x14011F814 (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeFlushCurrentTbOnly @ 0x1401C6F54 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeTb @ 0x1401C70D4 (KeFlushMultipleRangeTb.c)
 *     KiPrepareFlushParameters @ 0x1401C7288 (KiPrepareFlushParameters.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     VmFlushTb @ 0x14020C224 (VmFlushTb.c)
 *     ExFlushTb @ 0x140214D10 (ExFlushTb.c)
 *     HvlFlushRangeListTb @ 0x1402214A4 (HvlFlushRangeListTb.c)
 */

BOOLEAN __stdcall MmSetAddressRangeModified(PVOID Address, SIZE_T Length)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 v3; // r14
  unsigned int v4; // r13d
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int8 v8; // r15
  int *v9; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // r15d
  __int64 v13; // r14
  unsigned __int64 v14; // rdx
  unsigned int v15; // edi
  _KPROCESS *Process; // rcx
  bool IsSecureProcessFlush; // si
  _QWORD *v18; // rbx
  __int64 v19; // rsi
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int8 CurrentIrql; // bl
  KIRQL v23; // [rsp+30h] [rbp-D0h]
  _BYTE v24[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v26; // [rsp+40h] [rbp-C0h]
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v28; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v29; // [rsp+54h] [rbp-ACh]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v31; // [rsp+60h] [rbp-A0h]
  _QWORD v32[21]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 v33[88]; // [rsp+110h] [rbp+10h] BYREF

  v30 = 20LL;
  v28 = 0;
  v29 = 0;
  v31 = 0LL;
  v32[0] = 0LL;
  v26 = ((((unsigned __int64)Address + Length - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = (unsigned __int64 *)((((unsigned __int64)Address >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = (unsigned __int64)Address & 0xFFFFFFFFFFFFF000uLL;
  v23 = ExAcquireSpinLockExclusive(&dword_1402FF880);
  v4 = 1;
  do
  {
    v25 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (v25 & 1) != 0 )
    {
      v6 = 0LL;
      v7 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v25) - 0x58000000000LL;
      v8 = MiLockPageInline(v7);
      v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v7 + 40)) >> 8) & 0x3FF);
      if ( (*(_BYTE *)(v7 + 34) & 0x10) == 0 || (*(_DWORD *)(v7 + 16) & 0x400LL) == 0 )
        v6 = MiCaptureDirtyBitToPfn(v7);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v8);
      if ( v6 )
        MiReleasePageFileInfo((__int64)v9, v6, 0);
      if ( (v25 & 0x42) != 0 )
      {
        v10 = v25 & 0xFFFFFFFFFFFFFFBDuLL;
        v25 = v10;
        *v2 = v10;
        if ( (unsigned int)MiPteInShadowRange(v2) )
          MiWritePteShadow(v2, v10);
        MiInsertTbFlushEntry((__int64)&v28, v3, 1LL, 0);
      }
    }
    ++v2;
    v3 += 4096LL;
  }
  while ( (unsigned __int64)v2 <= v26 );
  v11 = HIDWORD(v30);
  v12 = HIDWORD(v30);
  v13 = HIDWORD(v30);
  if ( HIDWORD(v30) )
  {
    v14 = qword_1402FE720;
    if ( (v29 & 2) != 0 )
    {
      v15 = v28;
LABEL_22:
      if ( v15 == 1 )
        v4 = 0;
      goto LABEL_24;
    }
    v15 = v28;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[2].ActiveProcessors.Bitmap[12] )
    {
      if ( !Process->SecurePid )
      {
LABEL_20:
        v11 = HIDWORD(v30);
        goto LABEL_22;
      }
      if ( v28 != 1 )
      {
        v11 = HIDWORD(v30);
LABEL_24:
        if ( HIBYTE(v29) || v31 > v14 )
        {
          if ( (v29 & 1) != 0 )
            KeFlushCurrentTbOnly(v15, v14, v5);
          else
            KeFlushTb(v15, v4);
          HIBYTE(v29) = 0;
        }
        else if ( (v29 & 1) != 0 )
        {
          IsSecureProcessFlush = KiIsSecureProcessFlush(0LL, v15);
          if ( IsSecureProcessFlush || KiFlushViaHypervisor() )
          {
            KiPrepareFlushParameters(v15, &v27, v24);
            CurrentPrcb = KeGetCurrentPrcb();
            KeInitializeAffinityEx(v33);
            KeAddGroupAffinityEx(v33, CurrentPrcb->Group, CurrentPrcb->GroupSetMember);
            HvlFlushRangeListTb(v27, v33, v24[0], IsSecureProcessFlush, v13, v32);
          }
          else if ( (_DWORD)v13 )
          {
            v18 = v32;
            v19 = v13;
            do
            {
              KiFlushRangeTb(*v18++, v15);
              --v19;
            }
            while ( v19 );
          }
          if ( VmTbFlushEnabled )
            VmFlushTb((unsigned int)v13, v32);
          if ( ExTbFlushActive )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            ExFlushTb((unsigned int)v13, v32, v15);
            __writecr8(CurrentIrql);
          }
        }
        else
        {
          KeFlushMultipleRangeTb(v11, v32, v15, v4);
        }
        HIDWORD(v30) = 0;
        v31 = 0LL;
        goto LABEL_44;
      }
    }
    v14 = -1LL;
    goto LABEL_20;
  }
LABEL_44:
  MiUnlockWorkingSetExclusive((__int64)&dword_1402FF880, v23, v5);
  return v12 != 0;
}
