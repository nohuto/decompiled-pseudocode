/*
 * XREFs of MiRevertValidPte @ 0x14005D150
 * Callers:
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400BB050 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiRotatedToFrameBuffer @ 0x14001EE20 (MiRotatedToFrameBuffer.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiGetPagePrivilege @ 0x140070730 (MiGetPagePrivilege.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCompressTbFlushList @ 0x1400D92A0 (MiCompressTbFlushList.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400EF48C (MiCaptureWriteWatchDirtyBit.c)
 *     MiMarkPfnVerified @ 0x1400FE088 (MiMarkPfnVerified.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

char __fastcall MiRevertValidPte(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r13
  unsigned __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // r12
  __int64 v13; // rsi
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  signed __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // r14
  unsigned int v21; // r8d
  __int64 v22; // r11
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r10
  char v25; // dl
  __int64 v26; // r9
  __int64 v27; // r9
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  bool v31; // zf
  unsigned __int64 v34; // [rsp+68h] [rbp+10h] BYREF
  int v35; // [rsp+70h] [rbp+18h] BYREF

  v5 = a1;
  v6 = (__int64)(a2 << 25) >> 16;
  v10 = MI_READ_PTE_LOCK_FREE(a2);
  v11 = (v10 >> 4) & 1;
  if ( v11 || (v10 & 8) == 0 )
  {
    if ( v11 )
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
  v12 = 0LL;
  if ( MI_IS_PFN(a4) )
  {
    v13 = 48 * a4 - 0x58000000000LL;
    if ( (MiFlags & 0x40000) != 0 && (a3 & 2) != 0 )
    {
      MiLockPageAtDpcInline(48 * a4 - 0x58000000000LL);
      if ( !(unsigned int)MiGetPagePrivilege(48 * a4 - 0x58000000000LL, 1LL, 0LL) )
        MiMarkPfnVerified(48 * a4 - 0x58000000000LL, 7LL);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    v13 = 0LL;
  }
  v34 = MmProtectToPteMask[a3] & 0xFFFFFFFFFFFFFF7FuLL | (((16 * (a4 & 0xFFFFFFFFFLL)) | HIBYTE(word_1402FE760) & 1) << 8) | 0x25;
  v14 = v34;
  do
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)&v34,
            v14 ^ (v14 ^ (((v10 >> 52) & 0x7FF | 0x80000000) << 52)) & 0x7FF0000000000000LL,
            v14);
  }
  while ( v15 != v14 );
  if ( v13 || (a3 & 4) == 0 )
  {
    v16 = v34;
  }
  else
  {
    v16 = v34 | 0x42;
    v34 |= 0x42uLL;
  }
  *(_QWORD *)a2 = v16;
  if ( (unsigned int)MiPteInShadowRange(a2) )
  {
    MiWritePteShadow(a2, v16);
    v16 = v34;
  }
  LOBYTE(v17) = MiFlags;
  if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
    || (v16 & 0x40) == 0 && (v10 & 0x40) != 0
    || (v16 & 2) == 0 && (v10 & 2) != 0
    || v16 < 0 && (v10 & 0x8000000000000000uLL) == 0 )
  {
    v18 = a5;
    v19 = 1LL;
    v20 = v6;
    v21 = *(_DWORD *)(a5 + 12);
    if ( v21 )
    {
      v22 = a5 + 8LL * (v21 - 1);
      v17 = *(_QWORD *)(v22 + 24);
      if ( (v17 & 0x800) == 0 )
      {
        v23 = *(_QWORD *)(v22 + 24) & 0x7FFLL;
        v24 = v23 + 1;
        if ( (v17 & 0xFFFFFFFFFFFFF000uLL) + ((v23 + 1) << 12) == v6 && v24 > v23 && v24 <= 0x7FF )
        {
          ++*(_QWORD *)(a5 + 16);
          *(_QWORD *)(v22 + 24) = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(v17 + 1)) & 0x7FF;
LABEL_39:
          v5 = a1;
          goto LABEL_40;
        }
      }
      v27 = a5 + 8LL * (v21 - 1);
      v17 = *(_QWORD *)(v27 + 24);
      if ( (v17 & 0x800) == 0 && (v17 & 0xFFFFFFFFFFFFF000uLL) == v6 + 4096 )
      {
        v28 = *(_QWORD *)(v27 + 24) & 0x7FFLL;
        if ( v28 + 1 >= v28 && v28 + 1 <= 0x7FF )
        {
          v29 = 4096LL;
          if ( (v17 & 0x800) != 0 )
            v29 = 0x200000LL;
          ++*(_QWORD *)(a5 + 16);
          v17 -= v29;
          *(_QWORD *)(v27 + 24) = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(v17 + 1)) & 0x7FF;
          goto LABEL_39;
        }
      }
    }
    if ( v21 >= *(_DWORD *)(a5 + 8) )
    {
      *(_BYTE *)(a5 + 5) = 1;
      goto LABEL_39;
    }
    while ( 1 )
    {
      v30 = 2048LL;
      if ( (unsigned __int64)(v19 - 1) <= 0x7FF )
        v30 = v19;
      v19 -= v30;
      v17 = v20 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v30 - 1) & 0x7FF;
      v20 += v30 << 12;
      *(_QWORD *)(v18 + 8LL * (unsigned int)(*(_DWORD *)(v18 + 12))++ + 24) = v17;
      LODWORD(v17) = *(_DWORD *)(v18 + 12);
      *(_QWORD *)(v18 + 16) += v30;
      if ( (_DWORD)v17 == *(_DWORD *)(v18 + 8) )
      {
        qsort((void *)(v18 + 24), (unsigned int)v17, 8uLL, MiTbFlushSort);
        MiCompressTbFlushList(v18);
        LODWORD(v17) = *(_DWORD *)(v18 + 8);
        if ( *(_DWORD *)(v18 + 12) == (_DWORD)v17 )
          break;
      }
      if ( !v19 )
        goto LABEL_39;
    }
    v31 = v19 == 0;
    v5 = a1;
    if ( !v31 )
    {
      v17 = *(unsigned int *)(v18 + 12);
      *(_QWORD *)(v18 + 16) = v17;
      *(_BYTE *)(v18 + 5) = 1;
    }
  }
LABEL_40:
  if ( (v10 & 0x42) != 0 )
  {
    if ( v13 && ((*(_BYTE *)(v5 + 48) & 7) != 6 || MiRotatedToFrameBuffer(a2)) )
    {
      v35 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v35);
        while ( (*(_QWORD *)(v13 + 24) & 0x8000000000000000uLL) != 0 );
      }
      v25 = *(_BYTE *)(v13 + 34);
      v26 = 0LL;
      if ( (v25 & 0x10) == 0 )
      {
        if ( (*(_DWORD *)(v13 + 16) & 0x400LL) == 0 && (v25 & 8) == 0 )
          v26 = MiCapturePageFileInfoInline(v13 + 16, 1LL, 0LL);
        *(_BYTE *)(v13 + 34) |= 0x10u;
        if ( v26 )
          v12 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v13 + 40)) >> 8) & 0x3FF);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v26 )
        MiReleasePageFileInfo(v12, v26, 1LL);
    }
    LOBYTE(v17) = *(_DWORD *)(v5 + 48) & 7;
    if ( (_BYTE)v17 == 4 )
      LOBYTE(v17) = MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, v6);
  }
  return v17;
}
