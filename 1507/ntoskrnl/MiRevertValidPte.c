/*
 * XREFs of MiRevertValidPte @ 0x140091390
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140031070 (MiSetReadOnlyOnSectionView.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiCompressTbFlushList @ 0x14007B750 (MiCompressTbFlushList.c)
 *     MiRotatedToFrameBuffer @ 0x140080948 (MiRotatedToFrameBuffer.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1401228AC (MiCaptureWriteWatchDirtyBit.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiWriteValidPteVolatile @ 0x140226110 (MiWriteValidPteVolatile.c)
 */

char __fastcall MiRevertValidPte(__int64 a1, unsigned __int64 *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 PteShadow; // rbx
  unsigned int v7; // r11d
  __int64 v8; // r13
  unsigned __int64 v10; // rsi
  __int64 v11; // rbp
  char v12; // r11
  __int16 *v13; // r12
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int64 v18; // r15
  unsigned int v19; // r8d
  __int64 v20; // r11
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r10
  unsigned int v24; // ebx
  __int64 v25; // r9
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  bool v29; // zf
  char v30; // cl
  unsigned __int64 v31; // r9
  __int64 *v32; // r11
  __int64 v33; // r10
  __int64 v34; // r9
  unsigned __int64 v37; // [rsp+68h] [rbp+10h] BYREF

  PteShadow = *a2;
  v7 = a3;
  v8 = (__int64)((_QWORD)a2 << 25) >> 16;
  v10 = (unsigned __int64)(a2 + 0x12090482600LL);
  v11 = a1;
  if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a2, *a2);
  if ( byte_14034EBA8 != 1 )
  {
    if ( (PteShadow & 0x18) != 0x10 )
      goto LABEL_6;
LABEL_10:
    if ( (v7 & 0x18) != 0x18 )
      v7 |= 0x18u;
    goto LABEL_14;
  }
  if ( (PteShadow & 0x10) != 0 )
    goto LABEL_7;
  if ( (PteShadow & 8) != 0 )
    goto LABEL_10;
LABEL_6:
  if ( (PteShadow & 0x10) != 0 )
  {
LABEL_7:
    if ( (v7 & 0x18) != 8 )
      v7 = v7 & 0xFFFFFFE7 | 8;
    goto LABEL_14;
  }
  if ( (v7 & 0x18) != 0 )
    v7 &= 0xFFFFFFE7;
LABEL_14:
  v37 = MmProtectToPteMask[v7] & 0xFFFFFFFFFFFFFF7FuLL | (((16 * (a4 & 0xFFFFFFFFFLL)) | HIBYTE(word_14034EC18) & 1) << 8) | 0x25;
  MiWriteValidPteVolatile(&v37, (PteShadow >> 52) & 0x7FF | 0x80000000);
  v13 = 0LL;
  if ( (unsigned int)MI_IS_PFN(a4) )
  {
    v14 = 48 * a4 - 0x58000000000LL;
LABEL_16:
    v15 = v37;
    goto LABEL_17;
  }
  v14 = 0LL;
  if ( (v12 & 4) == 0 )
    goto LABEL_16;
  v15 = v37 | 0x42;
  v37 |= 0x42uLL;
LABEL_17:
  *a2 = v15;
  if ( v10 <= 0x7F8 )
  {
    MiWritePteShadow(a2, v15);
    v15 = v37;
  }
  if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
    || (v15 & 0x40) == 0 && (PteShadow & 0x40) != 0
    || (v15 & 2) == 0 && (PteShadow & 2) != 0
    || (v15 & 0x8000000000000000uLL) != 0 && (PteShadow & 0x8000000000000000uLL) == 0 )
  {
    v16 = a5;
    v17 = 1LL;
    v18 = v8;
    v19 = *(_DWORD *)(a5 + 12);
    if ( v19 )
    {
      v20 = a5 + 8LL * (v19 - 1);
      v21 = *(_QWORD *)(v20 + 24);
      if ( (v21 & 0x800) == 0 )
      {
        v22 = *(_QWORD *)(v20 + 24) & 0x7FFLL;
        v23 = v22 + 1;
        if ( (v21 & 0xFFFFFFFFFFFFF000uLL) + ((v22 + 1) << 12) == v8 && v23 > v22 && v23 <= 0x7FF )
        {
          v15 = ((unsigned __int16)v21 ^ (unsigned __int16)(v21 + 1)) & 0x7FF ^ v21;
          ++*(_QWORD *)(a5 + 16);
          *(_QWORD *)(v20 + 24) = v15;
LABEL_33:
          v11 = a1;
          goto LABEL_34;
        }
      }
      v25 = a5 + 8LL * (v19 - 1);
      v15 = *(_QWORD *)(v25 + 24);
      if ( (v15 & 0x800) == 0 && (v15 & 0xFFFFFFFFFFFFF000uLL) == v8 + 4096 )
      {
        v26 = *(_QWORD *)(v25 + 24) & 0x7FFLL;
        if ( v26 + 1 >= v26 && v26 + 1 <= 0x7FF )
        {
          v27 = 4096LL;
          if ( (v15 & 0x800) != 0 )
            v27 = 0x200000LL;
          v15 = ((unsigned __int16)(v15 - v27) ^ (unsigned __int16)(v15 - v27 + 1)) & 0x7FF ^ (v15 - v27);
          ++*(_QWORD *)(a5 + 16);
          *(_QWORD *)(v25 + 24) = v15;
          goto LABEL_33;
        }
      }
    }
    if ( v19 >= *(_DWORD *)(a5 + 8) )
    {
      *(_BYTE *)(a5 + 5) = 1;
      goto LABEL_33;
    }
    while ( 1 )
    {
      v28 = 2048LL;
      if ( (unsigned __int64)(v17 - 1) <= 0x7FF )
        v28 = v17;
      v17 -= v28;
      v15 = v18 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v28 - 1) & 0x7FF;
      v18 += v28 << 12;
      *(_QWORD *)(v16 + 8LL * (unsigned int)(*(_DWORD *)(v16 + 12))++ + 24) = v15;
      LODWORD(v15) = *(_DWORD *)(v16 + 12);
      *(_QWORD *)(v16 + 16) += v28;
      if ( (_DWORD)v15 == *(_DWORD *)(v16 + 8) )
      {
        qsort((void *)(v16 + 24), (unsigned int)v15, 8uLL, MiTbFlushSort);
        MiCompressTbFlushList(v16);
        LODWORD(v15) = *(_DWORD *)(v16 + 8);
        if ( *(_DWORD *)(v16 + 12) == (_DWORD)v15 )
          break;
      }
      if ( !v17 )
        goto LABEL_33;
    }
    v29 = v17 == 0;
    v11 = a1;
    if ( !v29 )
    {
      v15 = *(unsigned int *)(v16 + 12);
      *(_QWORD *)(v16 + 16) = v15;
      *(_BYTE *)(v16 + 5) = 1;
    }
  }
LABEL_34:
  if ( (PteShadow & 0x42) != 0 )
  {
    if ( v14 && ((*(_BYTE *)(v11 + 48) & 7) != 6 || MiRotatedToFrameBuffer(a2)) )
    {
      v24 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v24);
        }
        while ( (*(_QWORD *)(v14 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
      }
      v30 = *(_BYTE *)(v14 + 34);
      v31 = 0LL;
      if ( (v30 & 0x10) == 0 )
      {
        v32 = (__int64 *)(v14 + 16);
        if ( (*(_DWORD *)(v14 + 16) & 0x400LL) == 0 && (v30 & 8) == 0 )
        {
          v33 = *v32;
          if ( (*v32 & 4) != 0 )
          {
            v34 = *v32;
            if ( (unsigned __int64)(v14 + 0x90482413010LL) <= 0x7F8 )
              v34 = MiReadPteShadow(v14 + 16, *v32);
            *v32 = v33 & 0xFFFFFFFFFFFFFFFBuLL;
            v31 = v34 & 0xFFFFFFFFFFFFFFFDuLL;
          }
        }
        *(_BYTE *)(v14 + 34) |= 0x10u;
        if ( v31 )
          v13 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v14 + 40)) >> 8) & 0x3FF);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v31 )
        MiReleasePageFileInfo(v13, v31, 1LL);
    }
    LOBYTE(v15) = *(_DWORD *)(v11 + 48) & 7;
    if ( (_BYTE)v15 == 4 )
      LOBYTE(v15) = MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, v8);
  }
  return v15;
}
