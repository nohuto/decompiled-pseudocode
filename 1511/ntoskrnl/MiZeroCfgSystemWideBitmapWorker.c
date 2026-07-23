/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x1400E94FC (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiLockLeafPage @ 0x1400A2340 (MiLockLeafPage.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MiLocatePagefileSubsection @ 0x1400D5B70 (MiLocatePagefileSubsection.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     MI_SET_PAGING_FILE_INFO @ 0x1400F5214 (MI_SET_PAGING_FILE_INFO.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     KeZeroSinglePage @ 0x140157440 (KeZeroSinglePage.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiZeroCfgSystemWideBitmapWorker(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rbx
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r15
  unsigned __int64 v9; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // r8
  unsigned __int64 v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // r13
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rax
  char *v23; // rax
  char *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r9
  ULONG_PTR v29; // r15
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r12
  bool v36; // zf
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // rbx
  size_t v40; // r8
  void *v41; // rcx
  __int64 v42; // rdx
  ULONG_PTR v43; // r9
  unsigned __int64 v44; // r10
  volatile signed __int32 *v45; // r8
  unsigned int v46; // eax
  int v47; // r15d
  unsigned __int64 v48; // rdx
  __int64 v49; // rbx
  unsigned __int64 v50; // [rsp+30h] [rbp-59h]
  __int64 v51; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v52; // [rsp+40h] [rbp-49h]
  unsigned __int64 v53; // [rsp+48h] [rbp-41h]
  unsigned __int64 v54; // [rsp+50h] [rbp-39h]
  __int64 v55; // [rsp+58h] [rbp-31h]
  __int64 v56; // [rsp+60h] [rbp-29h]
  unsigned __int64 v57; // [rsp+68h] [rbp-21h] BYREF
  unsigned __int64 v58; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int64 v59; // [rsp+78h] [rbp-11h] BYREF
  __int64 v60; // [rsp+80h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int8 v62; // [rsp+F0h] [rbp+67h] BYREF
  size_t Size; // [rsp+F8h] [rbp+6Fh]
  unsigned int v64; // [rsp+100h] [rbp+77h]
  int v65; // [rsp+108h] [rbp+7Fh]

  v3 = a3 >> 3;
  v4 = a2 >> 3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = (a2 >> 3) & 0xFFF;
  v64 = (a2 >> 3) & 0xFFF;
  LODWORD(Size) = ((_WORD)v3 + (unsigned __int16)(a2 >> 3)) & 0xFFF;
  v59 = ((a2 >> 3) + v3 - 1) >> 12;
  v7 = MiLocatePagefileSubsection(a1, &v59);
  v56 = v7;
  v57 = v4 >> 12;
  v8 = *(_QWORD *)(v7 + 8);
  v60 = 8 * v59;
  v9 = 8 * v59 + v8;
  result = MiLocatePagefileSubsection(a1, &v57);
  v11 = result;
  if ( *(_QWORD *)(result + 8) )
  {
    result = v57;
  }
  else
  {
    do
    {
      if ( v11 == v7 )
        return result;
      v11 = *(_QWORD *)(v11 + 16);
      result = 0LL;
      v57 = 0LL;
    }
    while ( !*(_QWORD *)(v11 + 8) );
  }
  v12 = *(_QWORD *)(v11 + 8);
  v13 = v12 + 8 * result;
  if ( v11 == v7 )
    v14 = v9;
  else
    v14 = v12 + 8LL * *(unsigned int *)(v11 + 44);
  v15 = Size;
  v16 = 0LL;
  v17 = 0LL;
  v50 = v14;
  result = 0LL;
  v62 = 17;
  v53 = 0LL;
  v52 = 0LL;
  if ( (_DWORD)v6 )
    result = v13;
  v18 = 0LL;
  v54 = result;
  if ( (_DWORD)Size )
    v18 = v9;
  v55 = v18;
  while ( 1 )
  {
    if ( v13 < v14 )
      goto LABEL_25;
    if ( v11 == v7 )
      goto LABEL_92;
    v11 = *(_QWORD *)(v11 + 16);
    if ( !*(_QWORD *)(v11 + 8) )
      break;
LABEL_19:
    v13 = *(_QWORD *)(v11 + 8);
    if ( v11 == v7 )
    {
      v19 = *(_QWORD *)(v7 + 8) + v60;
      if ( v15 )
        v18 = *(_QWORD *)(v7 + 8) + v60;
      v55 = v18;
    }
    else
    {
      v19 = v13 + 8LL * *(unsigned int *)(v11 + 44);
    }
    v50 = v19;
LABEL_25:
    if ( (v17 & 0xFFFFFFFFFFFFF000uLL) != (v13 & 0xFFFFFFFFFFFFF000uLL) && v17 )
    {
      MiUnlockProtoPoolPage(v16, v62);
      v17 = 0LL;
      v52 = 0LL;
      goto LABEL_29;
    }
    if ( v16 )
    {
LABEL_32:
      v20 = MiLockLeafPage(v13, 0LL);
      result = MI_READ_PTE_LOCK_FREE(v13);
      v58 = result;
      v21 = result;
      if ( (result & 1) != 0 )
      {
        v22 = MI_READ_PTE_LOCK_FREE(&v58);
        v23 = (char *)MiMapPageInHyperSpaceWorker((v22 >> 12) & 0xFFFFFFFFFLL, 0LL, 0x80000000LL);
        v24 = v23;
        if ( v13 == v54 )
        {
          memset(&v23[v64], 0, 4096 - v64);
        }
        else if ( v13 == v18 )
        {
          memset(v23, 0, (unsigned int)Size);
        }
        else
        {
          KeZeroSinglePage(v23);
        }
        LOBYTE(v25) = 17;
        MiUnmapPageInHyperSpaceWorker(v24, v25, 0x80000000LL);
        v26 = MiCaptureDirtyBitToPfn(v20);
        result = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v26 )
        {
          v27 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v20 + 40)) >> 8) & 0x3FF);
          result = MiReleasePageFileInfo(v27, v28, 1LL);
        }
        goto LABEL_91;
      }
      if ( (result & 0x400) != 0 )
        goto LABEL_91;
      if ( (result & 0x800) != 0 )
      {
        v29 = (result >> 12) & 0xFFFFFFFFFLL;
        v30 = 0LL;
        if ( *(_WORD *)(v20 + 32) )
          goto LABEL_79;
        if ( v13 != v54 && v13 != v18 )
        {
          if ( !(unsigned int)MiUnlinkPageFromList(v20, 0) )
            goto LABEL_46;
          v31 = MiCapturePageFileInfoInline(v20 + 16, 0LL, 0LL);
          v32 = *(_QWORD *)(v20 + 16);
          v30 = v31;
          if ( (v32 & 0x1000) != 0 )
          {
            MI_SET_PAGING_FILE_INFO(
              (unsigned int)&v51,
              v20 + 16,
              *(_QWORD *)&MiSystemPartition[2 * ((v32 >> 1) & 0xF) + 1432],
              HIDWORD(v32),
              2);
            v33 = v51;
          }
          else
          {
            v33 = 32 * ((v32 >> 5) & 0x1F);
            v51 = v33;
            if ( (v32 & 1) == 0 && (v32 & 0xC00) == 0 && (v32 & 0x3000) == 0 && HIDWORD(v32) == 1 )
            {
              v33 = (unsigned int)v33 | 0x100000000LL;
              v51 = v33;
            }
          }
          v34 = *(_QWORD *)(v20 + 40) & 0xFFFFFFFFFLL;
          *(_QWORD *)v13 = v33;
          v35 = 48 * v34 - 0x58000000000LL;
          if ( (unsigned int)MiPteInShadowRange(v13) )
            MiWritePteShadow(v13, v33);
          MiLockNestedPageAtDpcInline(v35);
          MiDecrementShareCount(v35);
          _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiInsertPageInFreeOrZeroedList(v29, 2uLL);
          goto LABEL_78;
        }
        v36 = (*(_BYTE *)(v20 + 34) & 0x10) == 0;
        v65 = 0;
        if ( !v36 )
        {
          v37 = qword_140300B80;
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(qword_140300B80 + 32), &LockHandle);
LABEL_61:
          v38 = MiMapPageInHyperSpaceWorker(v29, 0LL, 0x80000000LL);
          v39 = v38;
          if ( v13 == v54 )
          {
            v40 = 4096 - v64;
            v41 = (void *)(v38 + v64);
          }
          else
          {
            v40 = (unsigned int)Size;
            v41 = (void *)v38;
          }
          memset(v41, 0, v40);
          LOBYTE(v42) = 17;
          MiUnmapPageInHyperSpaceWorker(v39, v42, 0x80000000LL);
          if ( dword_1402FEC90 == 1 )
          {
            v43 = v29 & 0x1F;
            LOBYTE(v44) = 1;
            v45 = (volatile signed __int32 *)stru_1402FECA8.Buffer + (v29 >> 5);
            if ( v43 + 1 <= 0x20 )
            {
              v46 = 1 << v43;
              goto LABEL_73;
            }
            if ( (v29 & 0x1F) == 0 )
              goto LABEL_72;
            v47 = v29 & 0x1F;
            _InterlockedOr(v45++, ((1 << (32 - v47)) - 1) << v43);
            v44 = 1LL - (unsigned int)(32 - v47);
            if ( v44 >= 0x20 )
            {
              v48 = v44 >> 5;
              v44 += -32LL * (v44 >> 5);
              do
              {
                *v45++ = -1;
                --v48;
              }
              while ( v48 );
            }
            if ( v44 )
            {
LABEL_72:
              v46 = (1 << v44) - 1;
LABEL_73:
              _InterlockedOr(v45, v46);
            }
          }
          if ( v37 )
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          if ( v65 == 1 )
            MiInsertPageInList(v20, 8u);
LABEL_78:
          v18 = v55;
LABEL_79:
          result = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v30 )
            result = MiReleasePageFileInfo(MiSystemPartition, v30, 1LL);
          goto LABEL_91;
        }
        v65 = 1;
        if ( (unsigned int)MiUnlinkPageFromList(v20, 0) )
        {
          v30 = MiCaptureDirtyBitToPfn(v20);
          v37 = 0LL;
          goto LABEL_61;
        }
LABEL_46:
        MiDiscardTransitionPte(v20);
        result = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v7 = v56;
        v13 += 8LL;
        v14 = v50;
        v16 = v53;
        v17 = v52;
        v15 = Size;
      }
      else
      {
        if ( result && v13 != v54 && v13 != v18 )
        {
          if ( (result & 0x1000) != 0 )
          {
            MI_SET_PAGING_FILE_INFO(
              (unsigned int)&v51,
              (unsigned int)&v58,
              *(_QWORD *)&MiSystemPartition[2 * ((result >> 1) & 0xF) + 1432],
              HIDWORD(result),
              2);
            v49 = v51;
          }
          else
          {
            v49 = 32 * ((result >> 5) & 0x1F);
            v51 = v49;
            if ( (result & 0x2000) == 0 && HIDWORD(result) == 1 )
            {
              v49 = (unsigned int)v49 | 0x100000000LL;
              v51 = v49;
            }
          }
          MiReleasePageFileSpace(MiSystemPartition, v21, 0LL);
          *(_QWORD *)v13 = v49;
          result = MiPteInShadowRange(v13);
          if ( (_DWORD)result )
            result = MiWritePteShadow(v13, v49);
        }
LABEL_91:
        v7 = v56;
        v13 += 8LL;
        v14 = v50;
        v16 = v53;
        v17 = v52;
        v15 = Size;
      }
    }
    else
    {
LABEL_29:
      result = MiLockProtoPoolPage(v13, &v62);
      v53 = result;
      v16 = result;
      if ( result )
      {
        v52 = v13;
        goto LABEL_32;
      }
      v14 = v50;
      v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v15 = Size;
    }
  }
  while ( v11 != v7 )
  {
    v11 = *(_QWORD *)(v11 + 16);
    if ( *(_QWORD *)(v11 + 8) )
      goto LABEL_19;
  }
LABEL_92:
  if ( v16 )
    return MiUnlockProtoPoolPage(v16, v62);
  return result;
}
