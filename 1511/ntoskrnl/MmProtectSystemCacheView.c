/*
 * XREFs of MmProtectSystemCacheView @ 0x1401D57E4
 * Callers:
 *     HvpViewMapPinForFileOffset @ 0x1401AADDC (HvpViewMapPinForFileOffset.c)
 *     HvpViewMapUnpinViewOfPrimaryFile @ 0x1401AB190 (HvpViewMapUnpinViewOfPrimaryFile.c)
 *     HvpViewMapViewOfPrimaryFile @ 0x1405EB6B4 (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x1405EB7E0 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x1405EB9E4 (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiMakeProtectionMask @ 0x140062870 (MiMakeProtectionMask.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1400B946C (MI_TIGHTER_PERMISSIONS.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14011F758 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeFlushCurrentTbOnly @ 0x1401C6F54 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeTb @ 0x1401C70D4 (KeFlushMultipleRangeTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MmProtectSystemCacheView(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  int ProtectionMask; // r13d
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbx
  unsigned __int64 v14; // r15
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 ValidKernelPte; // rdi
  __int64 v18; // r8
  __int64 v19; // rbx
  int *v20; // rax
  unsigned __int64 v21; // r9
  __int64 v22; // rbx
  unsigned __int64 v23; // r8
  unsigned int v24; // ecx
  _KPROCESS *Process; // rdx
  unsigned int v26; // edx
  KIRQL v27; // [rsp+20h] [rbp-B9h]
  __int64 v28; // [rsp+28h] [rbp-B1h] BYREF
  unsigned int v29; // [rsp+30h] [rbp-A9h] BYREF
  __int16 v30; // [rsp+34h] [rbp-A5h]
  __int64 v31; // [rsp+38h] [rbp-A1h]
  unsigned __int64 v32; // [rsp+40h] [rbp-99h]
  _QWORD v33[21]; // [rsp+48h] [rbp-91h] BYREF

  if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
    return 3221225713LL;
  ProtectionMask = MiMakeProtectionMask(a3);
  v31 = 20LL;
  v29 = 0;
  v30 = 0;
  v32 = 0LL;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v33[0] = 0LL;
  v9 = v7 + 8 * (((v8 & 0xFFF) != 0) + (v8 >> 12));
  v27 = ExAcquireSpinLockExclusive(&dword_1402FF880);
  do
  {
    v10 = MI_READ_PTE_LOCK_FREE((__int64 *)v7);
    v28 = v10;
    v13 = v10;
    if ( (v10 & 1) != 0 )
    {
      if ( a3 == 2 && (v10 & 0x800) != 0 || a3 == 4 && (v10 & 0x800) == 0 )
      {
        v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v28) >> 12) & 0xFFFFFFFFFLL;
        ValidKernelPte = MiMakeValidKernelPte(v14, ProtectionMask, v7, v15);
        if ( (v13 & 0x42) != 0 )
        {
          v19 = 48 * v14 - 0x58000000000LL;
          MiLockPageAtDpcInline(v19, v16, v18);
          MiCaptureDirtyBitToPfn(v19);
          v20 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v19 + 40)) >> 8) & 0x3FF);
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v21 )
            MiReleasePageFileInfo((__int64)v20, v21, 1);
          v13 = v28;
        }
        *(_QWORD *)v7 = ValidKernelPte;
        if ( (unsigned int)MiPteInShadowRange(v7) )
          MiWritePteShadow(v7, ValidKernelPte);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || MI_TIGHTER_PERMISSIONS(v13, ValidKernelPte) )
          MiInsertTbFlushEntry((__int64)&v29, (__int64)(v7 << 25) >> 16, 1LL, 0);
      }
    }
    else
    {
      if ( a3 == 2 )
      {
        if ( (v10 & 0x100) != 0 )
          goto LABEL_26;
        v22 = v10 | 0x100;
      }
      else
      {
        if ( (v10 & 0x100) == 0 )
          goto LABEL_26;
        v22 = v10 & 0xFFFFFFFFFFFFFEFFuLL;
      }
      v28 = v22;
      *(_QWORD *)v7 = v22;
      if ( (unsigned int)MiPteInShadowRange(v7) )
        MiWritePteShadow(v7, v22);
    }
LABEL_26:
    v7 += 8LL;
  }
  while ( v7 < v9 );
  if ( !HIDWORD(v31) )
    goto LABEL_46;
  v23 = qword_1402FE720;
  if ( (v30 & 2) != 0 )
  {
    v24 = v29;
    goto LABEL_34;
  }
  v24 = v29;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[2].ActiveProcessors.Bitmap[12] )
    goto LABEL_32;
  if ( !Process->SecurePid )
  {
LABEL_34:
    v26 = 0;
    if ( v24 != 1 )
      goto LABEL_35;
    goto LABEL_36;
  }
  if ( v29 == 1 )
  {
LABEL_32:
    v23 = -1LL;
    goto LABEL_34;
  }
LABEL_35:
  v26 = 1;
LABEL_36:
  if ( HIBYTE(v30) || v32 > v23 )
  {
    if ( (v30 & 1) != 0 )
      KeFlushCurrentTbOnly(v24);
    else
      KeFlushTb(v24, v26);
    HIBYTE(v30) = 0;
  }
  else if ( (v30 & 1) != 0 )
  {
    KeFlushMultipleRangeCurrentTb(HIDWORD(v31), v33, v24);
  }
  else
  {
    KeFlushMultipleRangeTb(HIDWORD(v31), (__int64)v33, v24, v26);
  }
  HIDWORD(v31) = 0;
  v32 = 0LL;
LABEL_46:
  LOBYTE(v11) = v27;
  MiUnlockWorkingSetExclusive((__int64)&dword_1402FF880, v11, v12);
  return 0LL;
}
