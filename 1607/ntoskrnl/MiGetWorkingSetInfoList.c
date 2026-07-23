/*
 * XREFs of MiGetWorkingSetInfoList @ 0x1400B5870
 * Callers:
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MiVaToPfn @ 0x140081B60 (MiVaToPfn.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiGetPfnProtection @ 0x1400B6940 (MiGetPfnProtection.c)
 *     MiQueryPfn @ 0x1400B69B8 (MiQueryPfn.c)
 *     MiLockProtoPage @ 0x1400B6A2C (MiLockProtoPage.c)
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     MiRotatedToFrameBuffer @ 0x1400BBC90 (MiRotatedToFrameBuffer.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(unsigned __int64 Src, unsigned __int64 a2, ULONG_PTR a3, int a4)
{
  unsigned __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // r12
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v10; // rdi
  ULONG_PTR *MappedSystemVa; // rbx
  ULONG_PTR v12; // r10
  char *v13; // r13
  __int64 v14; // r9
  KIRQL v15; // si
  __int64 v16; // r15
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  ULONG_PTR v19; // rbx
  unsigned __int64 v20; // rdx
  LONG *SharedVm; // rax
  LONG *v22; // rax
  unsigned int v23; // ebx
  int v24; // edi
  int v25; // r8d
  __int64 *v26; // rdx
  ULONG_PTR v27; // r12
  __int64 v28; // rcx
  __int64 v29; // r9
  LONG *v30; // rax
  LONG *v31; // rbx
  unsigned __int64 v32; // r15
  unsigned int v33; // r14d
  char *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r10
  __int64 v37; // rbx
  unsigned __int64 v38; // rax
  __int64 v39; // r10
  char v40; // r11
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r10
  __int64 ProtoPteAddress; // rdx
  __int64 PrototypePteDirect; // rbx
  __int64 v48; // r10
  unsigned __int64 v49; // rdi
  int v50; // r14d
  unsigned __int64 v51; // rax
  __int64 v52; // rsi
  int v53; // edx
  int v54; // eax
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rsi
  char PfnPriority; // al
  unsigned __int64 v59; // r9
  __int64 v60; // r10
  __int64 v61; // r11
  char v62; // dl
  unsigned __int64 v63; // rdi
  _QWORD *v64; // r8
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rdi
  unsigned __int64 Wsle; // rax
  int PfnProtection; // eax
  char v70; // r11
  bool v71; // zf
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // r8
  __int64 v75; // r10
  __int64 v76; // r10
  __int64 v77; // r9
  ULONG_PTR *v78; // rbx
  LONG *v79; // rax
  KIRQL v80; // dl
  PMDL v81; // rdi
  KIRQL v82; // [rsp+30h] [rbp-248h]
  unsigned __int64 v83; // [rsp+38h] [rbp-240h]
  struct _KTHREAD *v84; // [rsp+40h] [rbp-238h]
  __int64 v85; // [rsp+48h] [rbp-230h]
  __int64 v86; // [rsp+50h] [rbp-228h]
  __int64 v87; // [rsp+60h] [rbp-218h] BYREF
  unsigned int v88; // [rsp+68h] [rbp-210h] BYREF
  int v89; // [rsp+6Ch] [rbp-20Ch]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-208h]
  ULONG_PTR *v91; // [rsp+78h] [rbp-200h]
  char v92[8]; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v93; // [rsp+88h] [rbp-1F0h]
  PVOID P; // [rsp+90h] [rbp-1E8h]
  int v95; // [rsp+98h] [rbp-1E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-1D8h]
  PMDL MemoryDescriptorList; // [rsp+A8h] [rbp-1D0h]
  unsigned __int64 v98; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 *v99; // [rsp+B8h] [rbp-1C0h] BYREF
  void *v100; // [rsp+C0h] [rbp-1B8h]
  unsigned __int64 v101; // [rsp+C8h] [rbp-1B0h]
  _DWORD v102[36]; // [rsp+D0h] [rbp-1A8h] BYREF
  char v103[48]; // [rsp+160h] [rbp-118h] BYREF
  char v104; // [rsp+190h] [rbp-E8h] BYREF
  __int64 v105; // [rsp+1A0h] [rbp-D8h] BYREF
  _BYTE Srca[128]; // [rsp+1B0h] [rbp-C8h] BYREF

  v95 = a4;
  BugCheckParameter1 = a3;
  v100 = (void *)Src;
  if ( a2 > 0xFFFFFFFF )
    return 3221225990LL;
  v7 = a2 >> 4;
  v83 = a2 >> 4;
  if ( !(a2 >> 4) )
    return 3221225476LL;
  if ( (a4 & 3) == 3 || (a4 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v84 = CurrentThread;
  if ( v7 <= 8 )
  {
    memmove(Srca, (const void *)Src, 16 * v7);
    MemoryDescriptorList = 0LL;
    MappedSystemVa = (ULONG_PTR *)Srca;
    v91 = (ULONG_PTR *)Srca;
  }
  else
  {
    PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                   NonPagedPoolNx,
                                   8 * (((a2 & 0xFFF) != 0) + (a2 >> 12)) + 56,
                                   0x20206D4Du);
    v10 = PoolWithTag;
    MemoryDescriptorList = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag->Next = 0LL;
    PoolWithTag->Size = 8 * ((((Src & 0xFFF) + a2 + 4095) >> 12) + 6);
    PoolWithTag->MdlFlags = 0;
    PoolWithTag->StartVa = (PVOID)(Src & 0xFFFFFFFFFFFFF000uLL);
    PoolWithTag->ByteOffset = Src & 0xFFF;
    PoolWithTag->ByteCount = a2;
    MmProbeAndLockPages(PoolWithTag, CurrentThread->PreviousMode, IoWriteAccess);
    if ( (v10->MdlFlags & 5) != 0 )
      MappedSystemVa = (ULONG_PTR *)v10->MappedSystemVa;
    else
      MappedSystemVa = (ULONG_PTR *)MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0x40000010u);
    v91 = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      MmUnlockPages(v10);
      ExFreePoolWithTag(v10, 0);
      return 3221225626LL;
    }
  }
  v12 = BugCheckParameter1;
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v89 = 0;
  }
  else
  {
    KiStackAttachProcess(BugCheckParameter1);
    v89 = 1;
    v12 = BugCheckParameter1;
  }
  v13 = 0LL;
  v14 = v12 + 1280;
  v86 = v12 + 1280;
  v15 = 17;
  v82 = 17;
  v16 = 0LL;
  v85 = 0LL;
  v88 = 0;
  v17 = v83;
  while ( 1 )
  {
    v18 = 0LL;
    v93 = 0LL;
    v19 = *MappedSystemVa;
    BugCheckParameter2 = v19;
    if ( v19 > 0x7FFFFFFEFFFFLL )
      goto LABEL_169;
    v20 = v19 >> 12;
    P = (PVOID)(v19 >> 12);
    if ( v13 == (char *)v102 )
    {
      if ( v15 != 17 )
      {
        SharedVm = MiGetSharedVm(v14);
        ExReleaseSpinLockShared(SharedVm, v15);
        v15 = 17;
        v82 = 17;
      }
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v12 = BugCheckParameter1;
    }
    else if ( v13 )
    {
      if ( v20 >= (*((unsigned int *)v13 + 6) | ((unsigned __int64)(unsigned __int8)v13[32] << 32))
        && v20 <= (*((unsigned int *)v13 + 7) | ((unsigned __int64)(unsigned __int8)v13[33] << 32)) )
      {
        goto LABEL_45;
      }
      if ( v16 )
      {
        MiLockProtoPage(0LL);
        v16 = 0LL;
        v85 = 0LL;
        v14 = v86;
      }
      if ( v15 != 17 )
      {
        v22 = MiGetSharedVm(v14);
        ExReleaseSpinLockShared(v22, v15);
        v15 = 17;
        v82 = 17;
      }
      MiUnlockAndDereferenceVad(v13);
      v12 = BugCheckParameter1;
    }
    if ( ((v19 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 || (v19 & 0x7FFFFFFFF000LL) == qword_1403269D8 && qword_1403269D8)
      && (*(_DWORD *)(v12 + 1740) & 1) == 0 )
    {
      v13 = (char *)v102;
      memset(v102, 0, 0x88uLL);
      v102[12] &= 0xFFFFFFF8;
      --CurrentThread->SpecialApcDisable;
    }
    else
    {
      v13 = (char *)MiObtainReferencedVad(v19, &v88);
      if ( !v13 )
      {
        v23 = v88;
        if ( v88 == -1073741558 )
          goto LABEL_171;
        goto LABEL_168;
      }
    }
    v14 = v86;
LABEL_45:
    v24 = *((_DWORD *)v13 + 12);
    if ( (v24 & 7) == 1 )
    {
      v18 = (16LL * (MmProtectToValue[(unsigned __int8)v24 >> 3] & 0x7FF)) | 0x400001;
      goto LABEL_168;
    }
    v25 = 2;
    v105 = ((v19 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v26 = &v105;
    do
    {
      --v25;
      --v26;
      *v26 = (((unsigned __int64)v26[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    while ( v25 );
    v27 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v15 == 17 )
    {
      v28 = v14;
      goto LABEL_58;
    }
    if ( ((((v19 >> 9) & 0xF8) + 8) & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(v14) )
      goto LABEL_55;
    if ( KeShouldYieldProcessor() )
    {
      v29 = v86;
LABEL_55:
      v30 = MiGetSharedVm(v29);
      ExReleaseSpinLockShared(v30, v15);
      if ( v16 )
      {
        MiLockProtoPage(0LL);
        v85 = 0LL;
      }
      v28 = v86;
LABEL_58:
      v31 = MiGetSharedVm(v28);
      v82 = ExAcquireSpinLockShared(v31);
      if ( v31[1] )
        _InterlockedExchange(v31 + 1, 0);
    }
    while ( 2 )
    {
      while ( 2 )
      {
        v32 = -1LL;
        v18 = 0LL;
        v93 = 0LL;
        v33 = 0;
        v34 = &v104;
        while ( 1 )
        {
          v35 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)v34);
          v37 = v35;
          v87 = v35;
          if ( !v35 )
            goto LABEL_86;
          if ( (v35 & 1) != 0 && (v35 & 0x80u) != 0LL )
          {
            v32 = MiVaToPfn(BugCheckParameter2);
            goto LABEL_77;
          }
          v38 = MI_READ_PTE_LOCK_FREE(v36);
          v98 = v38;
          if ( (v38 & 1) == 0 )
            break;
LABEL_70:
          ++v33;
          v34 += 8;
          if ( v33 >= 3 )
            goto LABEL_77;
        }
        v41 = (v38 >> 11) & 1;
        if ( !(_DWORD)v41 && !(unsigned int)MiGetPagingFileOffset(&v98) )
          goto LABEL_77;
        if ( (v95 & 1) == 0 )
        {
          if ( (v95 & 2) == 0 )
            goto LABEL_77;
          MiMakeSystemAddressValid(v39 << 25 >> 16, 0LL, 0, v82, v40);
          goto LABEL_70;
        }
        if ( v41 )
          v18 = 6291456LL;
        else
          v18 = 10485760LL;
        v93 = v18;
LABEL_77:
        if ( v32 != -1LL )
        {
          v49 = v18 | 0x800001;
          LOWORD(v37) = 0;
          v87 = 0LL;
          goto LABEL_123;
        }
        if ( v33 < 3 )
          goto LABEL_166;
        v42 = MI_READ_PTE_LOCK_FREE(v27);
        v37 = v42;
        v87 = v42;
        if ( (v42 & 1) != 0 )
        {
          v49 = v18 | 1;
          v50 = *((_DWORD *)v13 + 12);
          if ( (v13[48] & 7) == 6 )
          {
            v51 = MI_GET_PAGE_FRAME_FROM_PTE(&v87);
            v52 = 48 * v51 - 0x58000000000LL;
            if ( MiIsPfnInline(v51) && (*(_BYTE *)(v52 + 35) & 0x40) != 0 )
              v49 |= 0x80000000uLL;
            if ( (unsigned int)MiRotatedToFrameBuffer(v27) )
            {
              v53 = 1;
              if ( (v37 & 0x800) != 0 )
                v53 = 4;
              v54 = (unsigned __int8)v50 >> 6;
              if ( v54 == 3 && (v50 & 0x38) != 0 )
              {
                v53 |= 0x18u;
              }
              else if ( v54 == 1 )
              {
                v53 |= 8u;
              }
            }
            else
            {
              v49 = v49 & 0xFFFFFFFFF8C0FFFFuLL | ((((MiGetPfnPriority(v52) & 7) << 8) | ((unsigned __int8)HIBYTE(*(_QWORD *)(v52 + 40)) >> 2)) << 16);
              v53 = (*(_DWORD *)(v52 + 16) >> 5) & 0x1F;
              if ( *(__int64 *)(v52 + 8) >= 0 )
              {
                v55 = v49 | 0x8000;
                LOBYTE(v56) = 7;
                if ( (*(_QWORD *)(v52 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
                  v56 = *(_QWORD *)(v52 + 24) & 0x3FFFFFFFFFFFFFFFLL;
                v49 = ((unsigned __int8)v55 ^ (unsigned __int8)(2 * v56)) & 0xE ^ (unsigned __int64)v55;
                v53 = MmMakeProtectNotWriteCopy[v53];
              }
            }
            v18 = ((unsigned __int16)v49 ^ (unsigned __int16)(16 * MmProtectToValue[v53])) & 0x7FF0 ^ v49;
            goto LABEL_166;
          }
          v32 = MI_GET_PAGE_FRAME_FROM_PTE(&v87);
LABEL_123:
          v57 = 48 * v32 - 0x58000000000LL;
          PfnPriority = MiGetPfnPriority(v57);
          v63 = v49 & 0xFFFFFFFFF8C07FFFuLL | ((v62 & 1 | (2 * (((unsigned __int64)(PfnPriority & 7) << 8) | (v59 >> 58)))) << 15);
          if ( (*(_BYTE *)(v57 + 35) & 0x40) != 0 )
            v63 |= 0x80000000uLL;
          if ( (v63 & 0x800000) == 0 )
          {
            if ( ((v59 >> 54) & 7) != 1 )
            {
              Wsle = MiLocateWsle(BugCheckParameter2, v86, *(_QWORD *)v57);
              if ( Wsle < *(_QWORD *)(qword_140327FD0 + 276841240) )
                v63 |= 0x400000uLL;
              if ( (*(_QWORD *)(v57 + 40) & 0x200000000000000LL) == 0 )
              {
                v18 = v63 & 0xFFFFFFFFFFFF8001uLL | (16LL
                                                   * (MmProtectToValue[(*(_DWORD *)(v57 + 16) >> 5) & 0x1F] & 0x7FF));
                goto LABEL_166;
              }
              PfnProtection = MiGetPfnProtection(
                                48 * v32 - 0x58000000000LL,
                                *(_QWORD *)(qword_140327FD0 + 276841312)
                              + Wsle * *(unsigned int *)(qword_140327FD0 + 276841264));
              v18 = v63 & 0xFFFFFFFFFFFF8001uLL | (2 * (v70 & 7 | (8LL * (MmProtectToValue[PfnProtection] & 0x7FF))));
              if ( v13 == (char *)v102 )
              {
                v18 |= 0x40000000uLL;
                goto LABEL_166;
              }
              if ( (*((_DWORD *)v13 + 12) & 0x8000) == 0 )
              {
                v16 = v85;
                CurrentThread = v84;
                v71 = MiGetProtoPteAddress((__int64)v13, (__int64)P, 1, &v99) == (*(_QWORD *)(v57 + 8) | 0x8000000000000000uLL);
                v17 = v83;
                if ( v71 )
                  v18 |= 0x40000000uLL;
                goto LABEL_169;
              }
LABEL_166:
              v16 = v85;
              goto LABEL_167;
            }
            if ( !v60 )
            {
              v64 = (_QWORD *)qword_140326AD8;
              if ( !qword_140326AD8 )
                goto LABEL_137;
              v65 = (v57 - v61) / 48;
              v101 = v65;
              do
              {
                v66 = v64[3];
                if ( v65 < v66 )
                {
                  v64 = (_QWORD *)*v64;
                }
                else
                {
                  if ( v65 - v66 < v64[4] )
                    break;
                  v64 = (_QWORD *)v64[1];
                }
              }
              while ( v64 );
              if ( v64 )
              {
                v67 = ((unsigned __int16)v63 ^ (unsigned __int16)(16
                                                                * MmProtectToValue[(*(_DWORD *)(v57 + 16) >> 5) & 0x1F])) & 0x7FF0 ^ v63;
              }
              else
              {
LABEL_137:
                if ( (v37 & 4) != 0 )
                {
                  if ( (v37 & 0x800) != 0 )
                    v67 = v63 & 0xFFFFFFFFFFFF800FuLL | 0x40;
                  else
                    v67 = v63 & 0xFFFFFFFFFFFF800FuLL | 0x20;
                }
                else
                {
                  v67 = v63 & 0xFFFFFFFFFFFF800FuLL | 0x10;
                }
              }
              v18 = v67 | 0x400000;
              goto LABEL_166;
            }
          }
          v18 = v63 & 0xFFFFFFFFFFFF800FuLL | (16
                                             * (MmProtectToValue[(*((_DWORD *)v13 + 12) >> 3) & 0x1F] & 0x7FF | 0x40000LL));
          v16 = v85;
          CurrentThread = v84;
          if ( v60 )
          {
            LOBYTE(v72) = 7;
            if ( (*(_QWORD *)(v57 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
              v72 = *(_QWORD *)(v57 + 24) & 0x3FFFFFFFFFFFFFFFLL;
            v18 = v18 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v72 & 7 | 0x20000000));
          }
LABEL_168:
          v17 = v83;
          goto LABEL_169;
        }
        if ( (v42 & 0x400) == 0 )
        {
          if ( (v42 & 0x800) != 0 )
          {
            v45 = MiLockTransitionLeafPage(v27);
            if ( !v45 )
              continue;
            MiQueryPfn((v45 + 0x58000000000LL) / 48, v92, v43, v44);
            _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v18 = v93;
            goto LABEL_166;
          }
          if ( (unsigned int)MiGetPagingFileOffset(&v87) )
          {
            v18 = v18 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
            goto LABEL_166;
          }
          if ( v37 )
            goto LABEL_166;
LABEL_86:
          if ( v13 == (char *)v102 || (*((_DWORD *)v13 + 12) & 0x8000) != 0 )
            goto LABEL_166;
        }
        break;
      }
      if ( v13 == (char *)v102 )
      {
        ProtoPteAddress = qword_1403269D0;
        if ( (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
          ProtoPteAddress = qword_1403269C8;
        PrototypePteDirect = ProtoPteAddress;
      }
      else if ( (*((_DWORD *)v13 + 12) & 0x8000) != 0
             || (ProtoPteAddress = MiGetProtoPteAddress((__int64)v13, (__int64)P, 1, &v99), v37)
             && !(unsigned int)MiIsPrototypePteVadLookup(v37) )
      {
        PrototypePteDirect = MiGetPrototypePteDirect(v37);
      }
      else
      {
        PrototypePteDirect = ProtoPteAddress;
      }
      if ( !PrototypePteDirect )
        goto LABEL_166;
      v18 |= 0x8000uLL;
      v93 = v18;
      if ( PrototypePteDirect == ProtoPteAddress )
      {
        v18 |= 0x40000000uLL;
        v93 = v18;
      }
      v16 = v85;
      if ( ((v85 ^ PrototypePteDirect) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        v85 = MiLockProtoPage(PrototypePteDirect);
        continue;
      }
      break;
    }
    MiLockLeafPage(PrototypePteDirect, 0);
    v73 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
    v87 = v73;
    if ( v75 )
    {
      MiQueryPfn((v75 + 0x58000000000LL) / 48, v92, v74, v73);
      _InterlockedAnd64((volatile signed __int64 *)(v76 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v18 = v93;
LABEL_167:
      CurrentThread = v84;
      goto LABEL_168;
    }
    if ( (v73 & 0x400) != 0 || (v73 & 0x800) != 0 || !(unsigned int)MiInvalidPteConforms(v73) )
      goto LABEL_167;
    CurrentThread = v84;
    v71 = (unsigned int)MiGetPagingFileOffset(&v87) == 0;
    v17 = v83;
    if ( v71 )
    {
      if ( !v77 )
        v18 = 0LL;
    }
    else
    {
      v18 = v18 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
    }
LABEL_169:
    v78 = v91;
    v91[1] = v18;
    MappedSystemVa = v78 + 2;
    v91 = MappedSystemVa;
    v83 = --v17;
    v12 = BugCheckParameter1;
    if ( !v17 )
      break;
    v15 = v82;
    v14 = v86;
  }
  v23 = 0;
LABEL_171:
  if ( v82 != 17 )
  {
    v79 = MiGetSharedVm(v86);
    ExReleaseSpinLockShared(v79, v80);
  }
  if ( v16 )
    MiLockProtoPage(0LL);
  if ( v13 )
  {
    if ( v13 == (char *)v102 )
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    else
      MiUnlockAndDereferenceVad(v13);
  }
  if ( v89 == 1 )
    KiUnstackDetachProcess(v103, 0LL);
  v81 = MemoryDescriptorList;
  if ( MemoryDescriptorList )
  {
    MmUnlockPages(MemoryDescriptorList);
    ExFreePoolWithTag(v81, 0);
  }
  else
  {
    memmove(v100, Srca, ((char *)v91 - Srca) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v23;
}
