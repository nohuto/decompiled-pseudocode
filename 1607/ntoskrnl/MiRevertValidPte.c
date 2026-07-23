/*
 * XREFs of MiRevertValidPte @ 0x1400DF690
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000C9C0 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1400DEEE0 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400A8CE8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiRotatedToFrameBuffer @ 0x1400BBC90 (MiRotatedToFrameBuffer.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiGetPagePrivilege @ 0x1400E15D0 (MiGetPagePrivilege.c)
 *     MiMarkPfnVerified @ 0x140108054 (MiMarkPfnVerified.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiRevertValidPte(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r9
  int v12; // eax
  __int64 v13; // r9
  struct _KEVENT *v14; // r12
  __int64 v15; // rdi
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  signed __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // dl
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // [rsp+68h] [rbp+10h] BYREF
  int v24; // [rsp+70h] [rbp+18h] BYREF

  v9 = a2 << 25 >> 16;
  v10 = MI_READ_PTE_LOCK_FREE(a2);
  v12 = (v10 >> 4) & 1;
  if ( v12 || (v10 & 8) == 0 )
  {
    if ( v12 )
    {
      if ( (a3 & 0x18) != 8 )
        a3 = a3 & 0xFFFFFFE7 | 8;
    }
    else if ( (a3 & 0x18) != 0 )
    {
      a3 &= 0xFFFFFFE7;
    }
  }
  else if ( (a3 & 0x18) != 0x18 )
  {
    a3 |= 0x18u;
  }
  v14 = 0LL;
  if ( MiIsPfnInline(v11) )
  {
    v15 = 48 * v13 - 0x58000000000LL;
    if ( (MiFlags & 0x10000) != 0 && (a3 & 2) != 0 )
    {
      MiLockPageAtDpcInline(48 * v13 - 0x58000000000LL);
      if ( !(unsigned int)MiGetPagePrivilege(v15, 1LL, 0LL) )
        MiMarkPfnVerified(v15, 7LL);
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    v15 = 0LL;
  }
  v23 = MmProtectToPteMask[a3] & 0xFFFFFFFFFFFFFF7FuLL | (((16 * (a4 & 0xFFFFFFFFFLL)) | HIBYTE(word_140326AE8) & 1) << 8) | 0x25;
  v16 = v23;
  do
  {
    v17 = v16;
    v16 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)&v23,
            v16 ^ (v16 ^ (((v10 >> 52) & 0x7FF | 0x80000000) << 52)) & 0x7FF0000000000000LL,
            v16);
  }
  while ( v17 != v16 );
  if ( v15 || (a3 & 4) == 0 )
  {
    v18 = v23;
  }
  else
  {
    v18 = v23 | 0x42;
    v23 |= 0x42uLL;
  }
  *(_QWORD *)a2 = v18;
  if ( (unsigned int)MiPteInShadowRange(a2, v18) )
  {
    MiWritePteShadow(v20, v19);
    v19 = v23;
  }
  if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
    || (v19 & 0x40) == 0 && (v10 & 0x40) != 0
    || (v19 & 2) == 0 && (v10 & 2) != 0
    || (v19 & 0x8000000000000000uLL) != 0 && (v10 & 0x8000000000000000uLL) == 0 )
  {
    MiInsertTbFlushEntry(a5, v9, 1LL, 0);
  }
  if ( (v10 & 0x42) != 0 )
  {
    if ( v15 && ((*(_BYTE *)(a1 + 48) & 7) != 6 || MiRotatedToFrameBuffer(a2)) )
    {
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v24);
        while ( (*(_QWORD *)(v15 + 24) & 0x8000000000000000uLL) != 0 );
      }
      v21 = *(_BYTE *)(v15 + 34);
      v22 = 0LL;
      if ( (v21 & 0x10) == 0 )
      {
        if ( (*(_DWORD *)(v15 + 16) & 0x400LL) == 0 && (v21 & 8) == 0 )
          v22 = MiCapturePageFileInfoInline((_QWORD *)(v15 + 16), 1, 0);
        *(_BYTE *)(v15 + 34) |= 0x10u;
        if ( v22 )
          v14 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v15 + 40)) >> 8) & 0x3FF);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v22 )
        MiReleasePageFileInfo(v14, v22, 1);
    }
    if ( (*(_DWORD *)(a1 + 48) & 7) == 4 )
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, v9, a1);
  }
}
