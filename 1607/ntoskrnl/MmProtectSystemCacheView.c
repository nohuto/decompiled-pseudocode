/*
 * XREFs of MmProtectSystemCacheView @ 0x1401E6CF0
 * Callers:
 *     HvpViewMapPinForFileOffset @ 0x1401B67AC (HvpViewMapPinForFileOffset.c)
 *     HvpViewMapUnpinViewOfPrimaryFile @ 0x1401B6B60 (HvpViewMapUnpinViewOfPrimaryFile.c)
 *     HvpViewMapViewOfPrimaryFile @ 0x14061020C (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x140610338 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x14061053C (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiSystemCacheVaControlArea @ 0x1400189B0 (MiSystemCacheVaControlArea.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiMakeProtectionMask @ 0x14002B880 (MiMakeProtectionMask.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KxFlushNonGlobalTb @ 0x140030810 (KxFlushNonGlobalTb.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KxSetTimeStampBusy @ 0x14009CEA8 (KxSetTimeStampBusy.c)
 *     KeFlushMultipleRangeTb @ 0x1400B3B64 (KeFlushMultipleRangeTb.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1400FC498 (MI_TIGHTER_PERMISSIONS.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14012FD08 (KeFlushMultipleRangeCurrentTb.c)
 *     KxFlushEntireTb @ 0x14013D56C (KxFlushEntireTb.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1401C15B4 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1401C1988 (HvlpSlowFlushAddressSpaceTb.c)
 *     VslFlushSecureAddressSpace @ 0x1401C28B8 (VslFlushSecureAddressSpace.c)
 *     KeFlushCurrentTbOnly @ 0x1401D5EF0 (KeFlushCurrentTbOnly.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     VmpFlushTb @ 0x140223DB0 (VmpFlushTb.c)
 *     ExFlushTb @ 0x14022E938 (ExFlushTb.c)
 */

__int64 __fastcall MmProtectSystemCacheView(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  int ProtectionMask; // r13d
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r12
  char *AnyMultiplexedVm; // rax
  LONG *SharedVm; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned __int64 v16; // r14
  __int64 v17; // rdx
  unsigned __int64 ValidKernelPte; // rdi
  __int64 v19; // rbx
  struct _KEVENT *v20; // rax
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  char v25; // r8
  unsigned __int64 v26; // r9
  int v27; // ecx
  _KPROCESS *Process; // rdx
  unsigned int v29; // edx
  char v30; // r8
  unsigned int v31; // edi
  char v32; // bl
  unsigned __int64 v33; // r9
  unsigned __int8 CurrentIrql; // si
  __int64 v35; // r9
  volatile LONG *v36; // rcx
  unsigned __int8 v37; // bl
  KIRQL v38; // [rsp+20h] [rbp-E0h]
  __int64 v39; // [rsp+28h] [rbp-D8h] BYREF
  int *v40; // [rsp+30h] [rbp-D0h]
  int v41; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v42; // [rsp+44h] [rbp-BCh]
  __int64 v43; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v44; // [rsp+50h] [rbp-B0h]
  _QWORD v45[21]; // [rsp+58h] [rbp-A8h] BYREF

  if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
    return 3221225713LL;
  v43 = 20LL;
  ProtectionMask = MiMakeProtectionMask(a3);
  v41 = 0;
  v42 = 0;
  v44 = 0LL;
  v45[0] = 0LL;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = v7 + 8 * (((v8 & 0xFFF) != 0) + (v8 >> 12));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v38 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v12 = MiSystemCacheVaControlArea(a1);
  v40 = MiPartitionIdToPointer(*(_WORD *)(v12 + 60) & 0x3FF) + 1648;
  do
  {
    v13 = MI_READ_PTE_LOCK_FREE(v7);
    v39 = v13;
    v15 = v13;
    if ( (v13 & 1) != 0 )
    {
      if ( a3 == 2 && (v13 & 0x800) != 0 || a3 == 4 && (v13 & 0x800) == 0 )
      {
        v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v39) >> 12) & 0xFFFFFFFFFLL;
        ValidKernelPte = MiMakeValidKernelPte(v16, ProtectionMask, v7);
        if ( (v15 & 0x42) != 0 )
        {
          v19 = 48 * v16 - 0x58000000000LL;
          MiLockPageAtDpcInline(v19);
          MiCaptureDirtyBitToPfn(v19);
          v20 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v19 + 40)) >> 8) & 0x3FF);
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v21 )
            MiReleasePageFileInfo(v20, v21, 1);
          v15 = v39;
        }
        *(_QWORD *)v7 = ValidKernelPte;
        if ( (unsigned int)MiPteInShadowRange(v7, v17) )
          MiWritePteShadow(v22, ValidKernelPte);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || MI_TIGHTER_PERMISSIONS(v15, ValidKernelPte) )
          MiInsertTbFlushEntry((__int64)&v41, (__int64)(v7 << 25) >> 16, 1LL, 0);
      }
    }
    else
    {
      if ( a3 == 2 )
      {
        if ( (v13 & 8) != 0 )
          goto LABEL_26;
        v23 = v13 | 8;
      }
      else
      {
        if ( (v13 & 8) == 0 )
          goto LABEL_26;
        v23 = v13 & 0xFFFFFFFFFFFFFFF7uLL;
      }
      v39 = v23;
      *(_QWORD *)v7 = v23;
      if ( (unsigned int)MiPteInShadowRange(v7, v14) )
        MiWritePteShadow(v24, v23);
    }
LABEL_26:
    v7 += 8LL;
  }
  while ( v7 < v9 );
  if ( !HIDWORD(v43) )
    goto LABEL_84;
  v25 = v42;
  v26 = qword_140326A58;
  if ( (v42 & 2) != 0 )
  {
    v27 = v41;
  }
  else
  {
    v27 = v41;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].ActiveProcessors.Bitmap[14] )
      goto LABEL_38;
    if ( Process->SecurePid )
    {
      if ( v41 != 1 )
      {
        v25 = v42;
        goto LABEL_33;
      }
LABEL_38:
      v26 = -1LL;
    }
    v25 = v42;
  }
  if ( v27 == 1 )
    v29 = 0;
  else
LABEL_33:
    v29 = ((v25 & 4) != 0) + 1;
  if ( HIBYTE(v42) || v44 > v26 )
  {
    if ( (v25 & 1) != 0 )
    {
      KeFlushCurrentTbOnly(v27);
LABEL_82:
      HIBYTE(v42) = 0;
      goto LABEL_83;
    }
    v30 = HvlEnlightenments;
    v31 = v27;
    if ( (HvlEnlightenments & 6) != 0 )
    {
      if ( (HvlEnlightenments & 2) != 0 )
        goto LABEL_50;
      v27 = v41;
      if ( (unsigned int)KeNumberProcessors_0 > 1 )
      {
        v30 = HvlEnlightenments;
LABEL_50:
        if ( KiKvaShadow )
        {
          if ( !v27 || v27 == 2 )
          {
            v32 = 0;
            goto LABEL_62;
          }
        }
        else if ( v27 )
        {
          if ( v27 == 1 )
          {
            v32 = 0;
            v30 = HvlEnlightenments;
            v33 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
          }
          else
          {
            if ( v27 != 2 )
              goto LABEL_61;
            v33 = 0LL;
            v32 = 0;
          }
LABEL_58:
          if ( v30 >= 0 )
            HvlpSlowFlushAddressSpaceTb(v33, 0LL, v32);
          else
            HvlpFastFlushAddressSpaceTb(v33, 0LL, v32, v33);
          goto LABEL_74;
        }
LABEL_61:
        v32 = 1;
LABEL_62:
        v33 = 0LL;
        if ( (unsigned int)(v27 - 1) > 1 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
          {
            if ( (HvlEnlightenments & 0x80u) == 0 )
              HvlpSlowFlushAddressSpaceTb(0LL, 0LL, v32);
            else
              HvlpFastFlushAddressSpaceTb(0LL, 0LL, v32, v35);
            _InterlockedIncrement(&KiTbFlushTimeStamp);
          }
          __writecr8(CurrentIrql);
          goto LABEL_74;
        }
        goto LABEL_58;
      }
    }
    if ( KiKvaShadow )
    {
      if ( v27 && v27 != 2 )
      {
LABEL_73:
        KxFlushEntireTb(v29);
        goto LABEL_74;
      }
    }
    else if ( !v27 || v27 > 2 )
    {
      goto LABEL_73;
    }
    KxFlushNonGlobalTb(v29);
LABEL_74:
    if ( v31 == 1 && KeGetCurrentThread()->ApcState.Process->SecurePid )
      VslFlushSecureAddressSpace();
    if ( VmTbFlushEnabled )
    {
      v36 = (volatile LONG *)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[14];
      if ( v36 )
        VmpFlushTb(v36);
    }
    if ( ExTbFlushActive )
    {
      v37 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ExFlushTb(0LL, 0LL, v31);
      __writecr8(v37);
    }
    goto LABEL_82;
  }
  if ( (v25 & 1) != 0 )
    KeFlushMultipleRangeCurrentTb(HIDWORD(v43), v45, v27);
  else
    KeFlushMultipleRangeTb(HIDWORD(v43), (__int64)v45, v27, v29);
LABEL_83:
  LOBYTE(v42) = v42 & 0xFB;
  HIDWORD(v43) = 0;
  v44 = 0LL;
LABEL_84:
  LOBYTE(v14) = v38;
  MiUnlockWorkingSetExclusive((__int64)v40, v14);
  return 0LL;
}
