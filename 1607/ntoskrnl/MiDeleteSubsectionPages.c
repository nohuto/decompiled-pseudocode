/*
 * XREFs of MiDeleteSubsectionPages @ 0x1400617F0
 * Callers:
 *     MiDeleteSegmentPages @ 0x14008F7E0 (MiDeleteSegmentPages.c)
 *     MiExtendSection @ 0x140504D14 (MiExtendSection.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiDeleteClusterSection @ 0x1400218E0 (MiDeleteClusterSection.c)
 *     MiDecrementSubsectionViewCount @ 0x1400223E0 (MiDecrementSubsectionViewCount.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiDereferenceControlAreaPfnList @ 0x14008F3D0 (MiDereferenceControlAreaPfnList.c)
 *     MiFreeLargePageMemory @ 0x1400900D0 (MiFreeLargePageMemory.c)
 *     MiInvalidateCollidedIos @ 0x1400B0704 (MiInvalidateCollidedIos.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteSubsectionPages(__int64 *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r12
  struct _KEVENT *v4; // rax
  __int64 v5; // r10
  char *v6; // r14
  __int64 *v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdi
  int v10; // ebp
  __int64 v11; // rcx
  unsigned __int8 v12; // dl
  __int64 v13; // r15
  int v14; // esi
  unsigned __int64 v15; // rbx
  char *v16; // r13
  __int64 v17; // rax
  ULONG_PTR v18; // r11
  unsigned __int64 v19; // rax
  __int64 v20; // r10
  int v21; // r11d
  ULONG_PTR v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r11
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  ULONG_PTR v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r13
  int v35; // eax
  unsigned __int64 v36; // rdi
  _QWORD *PrototypePteDirect; // rax
  int v38; // edx
  __int64 v39; // rbx
  unsigned __int16 v40; // ax
  int v41; // r15d
  char v42; // al
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // rbx
  _QWORD *v50; // [rsp+30h] [rbp-C8h]
  __int64 v51; // [rsp+38h] [rbp-C0h]
  __int64 v52; // [rsp+40h] [rbp-B8h]
  int v53; // [rsp+48h] [rbp-B0h] BYREF
  int v54; // [rsp+4Ch] [rbp-ACh] BYREF
  __int64 v55; // [rsp+50h] [rbp-A8h] BYREF
  struct _KEVENT *v56; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v57; // [rsp+60h] [rbp-98h] BYREF
  char *v58; // [rsp+68h] [rbp-90h]
  __int64 v59; // [rsp+70h] [rbp-88h] BYREF
  __int64 v60; // [rsp+78h] [rbp-80h]
  __int64 v61; // [rsp+80h] [rbp-78h]
  char *v62; // [rsp+88h] [rbp-70h]
  __int64 v63; // [rsp+90h] [rbp-68h]
  unsigned __int64 v64; // [rsp+98h] [rbp-60h]
  struct _KEVENT *v65; // [rsp+A0h] [rbp-58h]
  unsigned __int8 v68; // [rsp+110h] [rbp+18h] BYREF
  int v69; // [rsp+118h] [rbp+20h]

  v63 = *a1;
  v3 = a2;
  v4 = (struct _KEVENT *)MiPartitionIdToPointer(*(_WORD *)(v63 + 60) & 0x3FF, a2, a3, v63);
  v6 = *(char **)(v5 + 8);
  v8 = *v7;
  v9 = -1LL;
  v10 = *((_DWORD *)v7 + 14);
  v11 = 0LL;
  v65 = v4;
  v12 = 17;
  v13 = 0LL;
  v14 = *(_DWORD *)(v8 + 12);
  v64 = v7[8] & 0xFFFFFFFFFFFFFFF0uLL;
  v51 = 0LL;
  v52 = 0LL;
  v68 = 17;
  v69 = v10;
  v58 = v6;
  if ( !v6 )
    goto LABEL_92;
  v15 = (unsigned __int64)v6;
  v50 = v6;
  v16 = &v6[8 * *(unsigned int *)(v5 + 44)];
  v62 = v16;
  if ( v6 >= v16 )
    goto LABEL_92;
  while ( 2 )
  {
    if ( (v15 & 0xFFF) != 0 )
    {
      if ( v12 != 17 )
        goto LABEL_12;
    }
    else if ( v12 != 17 )
    {
      MiUnlockProtoPoolPage(v11, v12);
      if ( (v14 & 0x1000) != 0 )
      {
        *v3 += 512 - MiFreeLargePageMemory(v9 & 0xFFFFFFFFFFFFFE00uLL, 1LL, 0LL);
        v9 = -1LL;
      }
    }
    v52 = MiLockProtoPoolPage(v15, &v68);
    if ( !v52 )
    {
      do
      {
        MmAccessFault(2uLL, v15, 0, 0LL);
        v52 = MiLockProtoPoolPage(v15, &v68);
      }
      while ( !v52 );
      LOBYTE(v10) = v69;
    }
    while ( 1 )
    {
LABEL_12:
      v17 = MI_READ_PTE_LOCK_FREE(v15);
      v55 = v17;
      if ( (v17 & 1) != 0 )
      {
        v19 = MI_GET_PAGE_FRAME_FROM_PTE(&v55);
        goto LABEL_18;
      }
      if ( (v17 & 0x400) != 0 || (v17 & 0x800) == 0 )
        break;
      if ( (unsigned int)MiInvalidPteConforms(v17) )
      {
        v19 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v55);
LABEL_18:
        if ( v19 <= qword_140326AD0
          && (!MmPhysicalMemoryBlock || (*(_QWORD *)(48 * v19 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0) )
        {
          v22 = v20 + 48 * v19;
          v53 = v21;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v53);
            while ( (*(_QWORD *)(v22 + 24) & 0x8000000000000000uLL) != 0 );
          }
          v23 = MI_READ_PTE_LOCK_FREE(v15);
          if ( v23 == v55 )
            goto LABEL_27;
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
    v22 = v18;
LABEL_27:
    v24 = MI_READ_PTE_LOCK_FREE(v15);
    v59 = v24;
    if ( (v24 & 1) != 0 )
    {
      v26 = MI_GET_PAGE_FRAME_FROM_PTE(&v59);
      v27 = *(_QWORD *)(v22 + 16);
      *(_QWORD *)v15 = v27;
      v9 = v26;
      if ( (unsigned int)MiPteInShadowRange(v15, v27) )
        MiWritePteShadow(v29, v28);
      *(_QWORD *)(v22 + 24) |= 0x4000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_85;
    }
    if ( (v24 & 0x400) != 0 )
      goto LABEL_85;
    if ( (v24 & 0x800) != 0 )
    {
      v9 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v59);
      v61 = v9;
      if ( (*(_DWORD *)(v22 + 16) & 0x400LL) != 0
        && (*(_DWORD *)(v63 + 56) & 0x20) == 0
        && (*(_BYTE *)(v22 + 34) & 0x18) != 0 )
      {
        ++v51;
      }
      if ( !v64
        && (v9 & 0xF) == 0
        && (__int64)((unsigned __int64)&v16[-v15] & 0xFFFFFFFFFFFFFFF8uLL) >= 128
        && ((4096 - (v15 & 0xFFF)) & 0xFFFFFFF8) >= 0x80
        && (unsigned int)MiDeleteClusterSection(v22, v15, v30, v31) == 1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v15 += 128LL;
        goto LABEL_86;
      }
      v32 = MI_READ_PTE_LOCK_FREE(v15);
      if ( (*(_QWORD *)(v22 + 8) | 0x8000000000000000uLL) != v15 )
        KeBugCheckEx(0x1Au, 0x402uLL, v15, v32, *(_QWORD *)(v22 + 8));
      v33 = 0LL;
      v34 = *(_QWORD *)(v22 + 40) & 0xFFFFFFFFFLL;
      v35 = *(_DWORD *)(v22 + 16);
      v36 = 0LL;
      v56 = 0LL;
      if ( (v35 & 0x400) != 0 )
      {
        PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v22 + 16));
        MiDereferenceControlAreaPfnList(*PrototypePteDirect, PrototypePteDirect, (unsigned int)(v38 + 1));
        v39 = MiTransferSoftwarePte(*(_QWORD *)(v22 + 16), 0LL, 0LL, 0LL);
        v33 = 0LL;
      }
      else
      {
        v39 = 0LL;
      }
      v60 = 0LL;
      if ( *(_WORD *)(v22 + 32) )
      {
        *(_QWORD *)(v22 + 24) |= 0x4000000000000000uLL;
        v42 = *(_BYTE *)(v22 + 34);
        if ( (v42 & 0x20) != 0 && (v42 & 8) == 0 )
        {
          v43 = *(_QWORD *)v22 - 32LL;
          if ( *(_QWORD *)(v43 + 16) == v43 + 16 )
            v43 = 0LL;
          v60 = v43;
        }
        v41 = 3;
      }
      else
      {
        MiUnlinkPageFromList(v22);
        if ( (*(_DWORD *)(v22 + 16) & 0x400LL) == 0 )
        {
          v33 = *(_QWORD *)(v22 + 16);
          if ( (v33 & 4) != 0 || (LOBYTE(v33) = (unsigned __int8)v33 >> 1, (v33 & 1) != 0) )
            v36 = MI_READ_PTE_LOCK_FREE(v22 + 16);
          v40 = ((unsigned int)HIDWORD(*(_QWORD *)(v22 + 40)) >> 8) & 0x3FF;
          if ( v40 == 1023 )
          {
            v41 = 4;
            v56 = (struct _KEVENT *)MiSystemPartition;
            goto LABEL_62;
          }
          v56 = *(struct _KEVENT **)(qword_140327038 + 8LL * v40);
        }
        v41 = 4;
      }
LABEL_62:
      *v50 = v39;
      if ( (unsigned int)MiPteInShadowRange(v50, v33) )
        MiWritePteShadow(v44, v39);
      if ( v41 == 4 )
        MiInsertPageInFreeOrZeroedList((__int64)(v22 + 0x58000000000LL) / 48);
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v45 = 48 * v34 - 0x58000000000LL;
      v54 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v54);
          while ( (*(_QWORD *)(v45 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) );
        LOBYTE(v10) = v69;
      }
      if ( (*(_BYTE *)(v45 + 34) & 7) != 6 )
        KeBugCheckEx(
          0x4Eu,
          0x99uLL,
          48 * v34 / 48,
          *(_BYTE *)(v45 + 34) & 7,
          *(_QWORD *)(v45 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      v46 = *(_QWORD *)(v45 + 24);
      *(_QWORD *)(v45 + 24) = v46 ^ (((v46 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v46) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v46 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiPfnShareCountIsZero(48 * v34 - 0x58000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v60 )
        MiInvalidateCollidedIos(v60);
      if ( v36 )
        MiReleasePageFileInfo(v56, v36, 1);
      v3 = a2;
      v15 = (unsigned __int64)v50;
      v9 = v61;
      v16 = v62;
      if ( v41 == 3 )
        ++*a2;
    }
    else
    {
      v57 = v24;
      if ( (v24 & 4) != 0 || (v24 & 2) != 0 )
        v47 = MI_READ_PTE_LOCK_FREE(&v57);
      else
        v47 = v25;
      v57 = v47;
      if ( v47 )
        MiReleasePageFileInfo(v65, v47, 0);
    }
LABEL_85:
    v15 += 8LL;
LABEL_86:
    v12 = v68;
    v50 = (_QWORD *)v15;
    if ( v15 < (unsigned __int64)v16 )
    {
      v11 = v52;
      continue;
    }
    break;
  }
  if ( v68 != 17 )
  {
    MiUnlockProtoPoolPage(v52, v68);
    if ( (v14 & 0x1000) != 0 )
      *v3 += 512 - MiFreeLargePageMemory(v9 & 0xFFFFFFFFFFFFFE00uLL, 1LL, 0LL);
  }
  v6 = v58;
  v13 = v51;
  v5 = (__int64)a1;
LABEL_92:
  if ( (v10 & 0x80u) != 0 && (v10 & 0x20) == 0 )
  {
    v48 = MiDecrementSubsectionViewCount(v5, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v48 )
      MiReturnSubsectionCharges(v48);
  }
  return v13;
}
