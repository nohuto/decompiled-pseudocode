/*
 * XREFs of MiGetWorkingSetInfoList @ 0x14007A1C0
 * Callers:
 *     MmQueryVirtualMemory @ 0x1404B4DD0 (MmQueryVirtualMemory.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x14007B130 (MiWorkingSetInfoCheckPageTable.c)
 *     MiGetPfnProtection @ 0x14007B518 (MiGetPfnProtection.c)
 *     MiLockProtoPage @ 0x14007B590 (MiLockProtoPage.c)
 *     MiRotatedToFrameBuffer @ 0x140080948 (MiRotatedToFrameBuffer.c)
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiQueryPfn @ 0x140224C30 (MiQueryPfn.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v8; // r14
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v10; // rcx
  ULONG_PTR *MappedSystemVa; // r8
  ULONG_PTR v12; // r14
  _DWORD *v13; // r13
  unsigned __int8 CurrentIrql; // r12
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // r9
  unsigned __int64 v18; // rdi
  ULONG_PTR v19; // rbx
  unsigned __int64 v20; // rdx
  __int16 v21; // ax
  volatile signed __int32 *v22; // rcx
  int v23; // edi
  int v24; // edx
  __int64 *v25; // rcx
  __int64 *v26; // r15
  _DWORD *v27; // rdx
  signed __int32 v28; // eax
  volatile signed __int32 *v29; // rbx
  unsigned __int8 v30; // di
  signed __int32 v31; // eax
  unsigned __int64 *v32; // r14
  unsigned int v33; // edi
  __int64 **v34; // rsi
  __int64 *v35; // r10
  __int64 PteShadow; // rbx
  unsigned __int64 v37; // rax
  __int64 v38; // r11
  __int64 v39; // rax
  char v40; // al
  __int64 v41; // rdx
  ULONG_PTR PrototypePteDirect; // rbx
  __int64 v43; // r10
  unsigned __int64 v44; // rdi
  int v45; // r14d
  unsigned __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rsi
  int v49; // edx
  int v50; // eax
  char v51; // al
  char v52; // al
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rcx
  ULONG_PTR v56; // r14
  __int64 v57; // rsi
  unsigned __int64 v58; // rdx
  __int64 v59; // r9
  unsigned __int64 v60; // rdi
  char v61; // r8
  char v62; // al
  unsigned __int64 v63; // rdi
  unsigned __int64 v64; // rdi
  unsigned __int64 Wsle; // rax
  __int64 v66; // rbx
  __int64 ProtoPteAddress; // rax
  bool v68; // zf
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // r10
  __int64 v72; // r9
  __int64 v73; // r10
  __int64 v74; // r9
  __int64 v75; // r11
  char v76; // al
  __int16 v77; // ax
  ULONG_PTR *v78; // [rsp+30h] [rbp-188h]
  unsigned __int64 v79; // [rsp+38h] [rbp-180h]
  struct _KTHREAD *v81; // [rsp+48h] [rbp-170h]
  __int64 v82; // [rsp+50h] [rbp-168h]
  unsigned __int64 v83; // [rsp+58h] [rbp-160h] BYREF
  char v84[8]; // [rsp+60h] [rbp-158h] BYREF
  unsigned __int64 v85; // [rsp+68h] [rbp-150h]
  KPROCESSOR_MODE PreviousMode; // [rsp+70h] [rbp-148h]
  int v87; // [rsp+74h] [rbp-144h]
  int v88; // [rsp+78h] [rbp-140h] BYREF
  PMDL MemoryDescriptorList; // [rsp+80h] [rbp-138h]
  ULONG_PTR v90; // [rsp+88h] [rbp-130h]
  unsigned int v91; // [rsp+90h] [rbp-128h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-120h]
  _BYTE v93[16]; // [rsp+A0h] [rbp-118h] BYREF
  _DWORD v94[36]; // [rsp+B0h] [rbp-108h] BYREF
  _BYTE v95[48]; // [rsp+140h] [rbp-78h] BYREF
  char v96; // [rsp+170h] [rbp-48h] BYREF
  __int64 v97; // [rsp+180h] [rbp-38h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+0h]

  v91 = a4;
  if ( a2 > 0xFFFFFFFF )
    return 3221225990LL;
  v79 = a2 >> 4;
  if ( !(a2 >> 4) )
    return 3221225476LL;
  if ( (a4 & 3) == 3 || (a4 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                 NonPagedPoolNx,
                                 8 * (((a2 & 0xFFF) != 0) + (a2 >> 12)) + 56,
                                 0x20206D4Du);
  v8 = PoolWithTag;
  MemoryDescriptorList = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * ((((a1 & 0xFFF) + a2 + 4095) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = a1 & 0xFFF;
  PoolWithTag->ByteCount = a2;
  CurrentThread = KeGetCurrentThread();
  v81 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  MmProbeAndLockPages(PoolWithTag, PreviousMode, IoWriteAccess);
  if ( (v8->MdlFlags & 5) != 0 )
    MappedSystemVa = (ULONG_PTR *)v8->MappedSystemVa;
  else
    MappedSystemVa = (ULONG_PTR *)MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000010u);
  v78 = MappedSystemVa;
  if ( !MappedSystemVa )
  {
    MmUnlockPages(v8);
    ExFreePoolWithTag(v8, 0);
    return 3221225626LL;
  }
  v12 = a3;
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)a3 )
  {
    v87 = 0;
  }
  else
  {
    KiStackAttachProcess(a3);
    v87 = 1;
    MappedSystemVa = v78;
  }
  v13 = 0LL;
  CurrentIrql = 17;
  v15 = 0LL;
  v82 = 0LL;
  v88 = 0;
  v16 = v79;
  while ( 1 )
  {
    v17 = 0x7FFFFFFFF8LL;
    v18 = 0LL;
    v85 = 0LL;
    v19 = *MappedSystemVa;
    BugCheckParameter2 = v19;
    if ( v19 > (unsigned __int64)MmHighestUserAddress )
      goto LABEL_186;
    v20 = v19 >> 12;
    v90 = v19 >> 12;
    if ( v13 == v94 )
    {
      if ( CurrentIrql != 17 )
      {
        v10 = v12 + 1272;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)v10, 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)v10);
          v18 = v85;
        }
        __writecr8(CurrentIrql);
        CurrentIrql = 17;
      }
      v21 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v21;
      if ( !v21
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v10);
      }
    }
    else if ( v13 )
    {
      if ( v20 >= ((unsigned int)v13[6] | ((unsigned __int64)*((unsigned __int8 *)v13 + 32) << 32)) )
      {
        v10 = (unsigned int)v13[7] | ((unsigned __int64)*((unsigned __int8 *)v13 + 33) << 32);
        if ( v20 <= v10 )
          goto LABEL_48;
      }
      if ( v15 )
      {
        MiLockProtoPage(0LL);
        v15 = 0LL;
        v82 = 0LL;
      }
      if ( CurrentIrql != 17 )
      {
        v22 = (volatile signed __int32 *)(v12 + 1272);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v22, retaddr);
        }
        else
        {
          _InterlockedAnd(v22, 0xBFFFFFFF);
          _InterlockedDecrement(v22);
          v18 = v85;
        }
        __writecr8(CurrentIrql);
        CurrentIrql = 17;
      }
      MiUnlockAndDereferenceVad(v13);
    }
    if ( (v19 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000 || (*(_DWORD *)(v12 + 1716) & 1) != 0 )
      break;
    v13 = v94;
    memset(v94, 0, 0x88uLL);
    v94[12] &= 0xFFFFFFF8;
    --CurrentThread->SpecialApcDisable;
LABEL_47:
    v17 = 0x7FFFFFFFF8LL;
    MappedSystemVa = v78;
LABEL_48:
    v23 = v13[12];
    if ( (v23 & 7) == 1 )
    {
      v18 = (16LL * (MmProtectToValue[(unsigned __int8)v23 >> 3] & 0x7FF)) | 0x400001;
      v85 = v18;
      goto LABEL_185;
    }
    v24 = 2;
    v97 = ((v19 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v25 = &v97;
    do
    {
      --v24;
      --v25;
      *v25 = (((unsigned __int64)v25[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    while ( v24 );
    v26 = (__int64 *)(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( CurrentIrql == 17 )
    {
      v27 = (_DWORD *)(v12 + 1272);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v12 + 1272);
      }
      else
      {
        _m_prefetchw(v27);
        v28 = *v27 & 0x7FFFFFFF;
        v10 = (unsigned int)(v28 + 1);
        if ( v28 != _InterlockedCompareExchange(v27, v10, v28) )
          ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)(v12 + 1272));
      }
    }
    else if ( ((((v19 >> 9) & 0xF8) + 8) & 0x78) == 0 && (*(_DWORD *)(v12 + 1272) & 0x40000000) != 0
           || KeShouldYieldProcessor() )
    {
      v29 = (volatile signed __int32 *)(v12 + 1272);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12 + 1272, retaddr);
      }
      else
      {
        _InterlockedAnd(v29, 0xBFFFFFFF);
        _InterlockedDecrement(v29);
      }
      __writecr8(CurrentIrql);
      if ( v15 )
      {
        MiLockProtoPage(0LL);
        v82 = 0LL;
      }
      v30 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v12 + 1272);
      }
      else
      {
        _m_prefetchw((const void *)v29);
        v31 = *v29 & 0x7FFFFFFF;
        v10 = (unsigned int)(v31 + 1);
        if ( v31 != _InterlockedCompareExchange(v29, v10, v31) )
          ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)(v12 + 1272));
      }
      CurrentIrql = v30;
    }
    v32 = (unsigned __int64 *)v97;
    while ( 2 )
    {
      while ( 2 )
      {
        v85 = 0LL;
        v33 = 0;
        v34 = (__int64 **)&v96;
        do
        {
          v35 = *v34;
          PteShadow = **v34;
          if ( (unsigned __int64)(*v34 + 0x12090482600LL) <= 0x7F8 )
            PteShadow = MiReadPteShadow(*v34, **v34);
          v83 = PteShadow;
          if ( !PteShadow )
            goto LABEL_92;
          if ( !(unsigned int)MiWorkingSetInfoCheckPageTable(v35, v84, v91, CurrentIrql) )
            break;
          ++v33;
          ++v34;
        }
        while ( v33 < 3 );
        if ( v33 < 3 )
          goto LABEL_107;
        v37 = *v32;
        v38 = 0x90482413000LL;
        v10 = (unsigned __int64)(v32 + 0x12090482600LL);
        if ( (unsigned __int64)(v32 + 0x12090482600LL) <= 0x7F8 )
          v37 = MiReadPteShadow(v32, *v32);
        v83 = v37;
        if ( (v37 & 0x80u) != 0LL )
        {
          if ( (unsigned __int64)&v84[v38 - 8] <= 0x7F8 )
            v37 = MiReadPteShadow(&v83, v37);
          v56 = v90;
          v55 = ((v37 >> 12) & 0xFFFFFFFFFLL) + (v90 & 0x1FF);
          v44 = v85 | 0x800001;
          LOWORD(PteShadow) = 0;
          v83 = 0LL;
          goto LABEL_138;
        }
        PteShadow = *v26;
        if ( (unsigned __int64)&v26[(unsigned __int64)v38 / 8] <= 0x7F8 )
          PteShadow = MiReadPteShadow(v26, *v26);
        v83 = PteShadow;
        if ( (PteShadow & 1) != 0 )
        {
          v44 = v85 | 1;
          v45 = v13[12];
          v46 = PteShadow;
          if ( (v45 & 7) == 6 )
          {
            if ( (unsigned __int64)&v84[v38 - 8] <= 0x7F8 )
              v46 = MiReadPteShadow(&v83, PteShadow);
            v47 = (v46 >> 12) & 0xFFFFFFFFFLL;
            v48 = 48 * v47 - 0x58000000000LL;
            if ( (unsigned int)MI_IS_PFN(v47) && (*(_BYTE *)(v48 + 35) & 0x40) != 0 )
              v44 |= 0x80000000uLL;
            if ( (unsigned int)MiRotatedToFrameBuffer(v26) )
            {
              v49 = 1;
              if ( (PteShadow & 0x800) != 0 )
                v49 = 4;
              v50 = (unsigned __int8)v45 >> 6;
              if ( v50 == 3 && (v45 & 0x38) != 0 )
              {
                v49 |= 0x18u;
              }
              else if ( v50 == 1 )
              {
                v49 |= 8u;
              }
            }
            else
            {
              v51 = *(_BYTE *)(v48 + 35);
              if ( (v51 & 8) != 0 )
                v52 = 5;
              else
                v52 = v51 & 7;
              v44 = v44 & 0xFFFFFFFFF8C0FFFFuLL | ((((unsigned __int64)(v52 & 7) << 8) | ((unsigned __int8)HIBYTE(*(_QWORD *)(v48 + 40)) >> 2)) << 16);
              v49 = (*(_DWORD *)(v48 + 16) >> 5) & 0x1F;
              if ( *(__int64 *)(v48 + 8) >= 0 )
              {
                v53 = v44 | 0x8000;
                LOBYTE(v54) = 7;
                if ( (*(_QWORD *)(v48 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
                  v54 = *(_QWORD *)(v48 + 24) & 0x3FFFFFFFFFFFFFFFLL;
                v44 = ((unsigned __int8)v53 ^ (unsigned __int8)(2 * v54)) & 0xE ^ (unsigned __int64)v53;
                v49 = MmMakeProtectNotWriteCopy[v49];
              }
            }
            v10 = ((unsigned __int16)v44 ^ (unsigned __int16)(16 * MmProtectToValue[v49])) & 0x7FF0;
            v18 = v10 ^ v44;
LABEL_109:
            v85 = v18;
LABEL_182:
            v15 = v82;
            goto LABEL_183;
          }
          if ( (unsigned __int64)&v84[v38 - 8] <= 0x7F8 )
            v46 = MiReadPteShadow(&v83, PteShadow);
          v55 = (v46 >> 12) & 0xFFFFFFFFFLL;
          v56 = v90;
LABEL_138:
          v57 = 48 * v55 - 0x58000000000LL;
          v58 = *(_QWORD *)(v57 + 40);
          v59 = (v58 >> 57) & 1;
          v60 = (unsigned __int16)(v44 ^ (((v58 & 0x200000000000000LL) != 0) << 15)) & 0x8000 ^ v44;
          v61 = *(_BYTE *)(v57 + 35);
          if ( (v61 & 8) != 0 )
            v62 = 5;
          else
            v62 = v61 & 7;
          v10 = (((unsigned __int64)(v62 & 7) << 8) | (v58 >> 58)) << 16;
          v63 = v60 & 0xFFFFFFFFF8C0FFFFuLL | v10;
          if ( (v61 & 0x40) != 0 )
            v63 |= 0x80000000uLL;
          if ( (v63 & 0x800000) == 0 )
          {
            if ( ((v58 >> 54) & 7) != 1 )
            {
              Wsle = MiLocateWsle(BugCheckParameter2);
              if ( Wsle < MEMORY[0xFFFFF58010804008] )
                v63 |= 0x400000uLL;
              if ( (*(_QWORD *)(v57 + 40) & 0x200000000000000LL) == 0 )
              {
                v10 = 16LL * (MmProtectToValue[(*(_DWORD *)(v57 + 16) >> 5) & 0x1F] & 0x7FF);
                v18 = v63 & 0xFFFFFFFFFFFF8001uLL | v10;
                goto LABEL_109;
              }
              LOBYTE(v66) = 7;
              if ( (*(_QWORD *)(v57 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
                v66 = *(_QWORD *)(v57 + 24) & 0x3FFFFFFFFFFFFFFFLL;
              v10 = 2
                  * (v66 & 7 | (8LL
                              * (MmProtectToValue[(unsigned int)MiGetPfnProtection(
                                                                  v57,
                                                                  Wsle * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBD00LL)] & 0x7FF)));
              v18 = v63 & 0xFFFFFFFFFFFF8001uLL | v10;
              v85 = v18;
              if ( v13 == v94 )
              {
                v18 |= 0x40000000uLL;
                goto LABEL_109;
              }
              if ( (v13[12] & 0x8000) != 0 )
                goto LABEL_182;
              ProtoPteAddress = MiGetProtoPteAddress(v13, v56, 1LL, v93);
              v10 = *(_QWORD *)(v57 + 8) | 0x8000000000000000uLL;
              v15 = v82;
              v12 = a3;
              CurrentThread = v81;
              MappedSystemVa = v78;
              v68 = ProtoPteAddress == v10;
              v16 = v79;
              if ( v68 )
              {
                v18 |= 0x40000000uLL;
                v85 = v18;
              }
              goto LABEL_186;
            }
            if ( !v59 )
            {
              if ( (PteShadow & 4) != 0 )
              {
                if ( (PteShadow & 0x800) != 0 )
                  v64 = v63 & 0xFFFFFFFFFFFF800FuLL | 0x40;
                else
                  v64 = v63 & 0xFFFFFFFFFFFF800FuLL | 0x20;
              }
              else
              {
                v64 = v63 & 0xFFFFFFFFFFFF800FuLL | 0x10;
              }
              v18 = v64 | 0x400000;
              goto LABEL_109;
            }
          }
          v10 = 16 * (MmProtectToValue[(v13[12] >> 3) & 0x1F] & 0x7FF | 0x40000LL);
          v18 = v63 & 0xFFFFFFFFFFFF800FuLL | v10;
          v85 = v18;
          v12 = a3;
          CurrentThread = v81;
          MappedSystemVa = v78;
          if ( v59 )
          {
            LOBYTE(v69) = 7;
            if ( (*(_QWORD *)(v57 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
              v69 = *(_QWORD *)(v57 + 24) & 0x3FFFFFFFFFFFFFFFLL;
            v10 = 2 * (v69 & 7 | 0x20000000);
            v18 = v18 & 0xFFFFFFFFFFFFFFF1uLL | v10;
            v85 = v18;
          }
          v15 = v82;
LABEL_185:
          v16 = v79;
          goto LABEL_186;
        }
        if ( (PteShadow & 0x400) == 0 )
        {
          if ( (PteShadow & 0x800) != 0 )
          {
            v39 = MiLockTransitionLeafPage((ULONG_PTR)v26);
            if ( !v39 )
              continue;
            MiQueryPfn((v39 + 0x58000000000LL) / 48, v84);
            _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_107:
            v18 = v85;
            goto LABEL_182;
          }
          v40 = PteShadow;
          v10 = (unsigned __int64)&v84[v38 - 8];
          if ( (unsigned __int64)&v84[v38 - 8] <= 0x7F8 )
            v40 = MiReadPteShadow(&v83, PteShadow);
          if ( (v40 & 4) != 0 )
          {
            v18 = v85 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
            goto LABEL_109;
          }
          if ( PteShadow )
            goto LABEL_107;
LABEL_92:
          if ( v13 == v94 || (v13[12] & 0x8000) != 0 )
            goto LABEL_107;
        }
        break;
      }
      v41 = 0LL;
      if ( v13 == v94 )
      {
        v41 = qword_14034EB58;
        PrototypePteDirect = qword_14034EB58;
      }
      else if ( (v13[12] & 0x8000) != 0
             || (v41 = MiGetProtoPteAddress(v13, v90, 1LL, v93), PteShadow)
             && !(unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
      {
        PrototypePteDirect = MiGetPrototypePteDirect(PteShadow, v41, MappedSystemVa, v17);
      }
      else
      {
        PrototypePteDirect = v41;
      }
      if ( !PrototypePteDirect )
        goto LABEL_107;
      v18 = v85 | 0x8000;
      v85 |= 0x8000uLL;
      if ( PrototypePteDirect == v41 )
      {
        v18 |= 0x40000000uLL;
        v85 = v18;
      }
      v15 = v82;
      if ( ((v82 ^ PrototypePteDirect) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        v82 = MiLockProtoPage(PrototypePteDirect);
        continue;
      }
      break;
    }
    v71 = MiLockLeafPage((unsigned __int64 *)PrototypePteDirect, 0LL);
    v72 = *(_QWORD *)PrototypePteDirect;
    v10 = PrototypePteDirect + 0x90482413000LL;
    if ( PrototypePteDirect + 0x90482413000LL <= 0x7F8 )
      v72 = MiReadPteShadow(PrototypePteDirect, *(_QWORD *)PrototypePteDirect);
    v83 = v72;
    if ( v71 )
    {
      MiQueryPfn((v71 + 0x58000000000LL) / 48, v84);
      _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v18 = v85;
LABEL_183:
      v12 = a3;
      CurrentThread = v81;
      goto LABEL_184;
    }
    if ( (v72 & 0x400) != 0 || (v72 & 0x800) != 0 || !(unsigned int)MiInvalidPteConforms(v72, v70) )
      goto LABEL_183;
    v76 = v74;
    v10 = (unsigned __int64)&v84[v75 - 8];
    if ( (unsigned __int64)&v84[v75 - 8] <= 0x7F8 )
      v76 = MiReadPteShadow(&v83, v74);
    v12 = a3;
    CurrentThread = v81;
    MappedSystemVa = v78;
    v68 = (v76 & 4) == 0;
    v16 = v79;
    if ( v68 )
    {
      if ( !v74 )
        v18 = 0LL;
      v85 = v18;
    }
    else
    {
      v18 = v18 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
      v85 = v18;
    }
LABEL_186:
    MappedSystemVa[1] = v18;
    MappedSystemVa += 2;
    v78 = MappedSystemVa;
    v79 = --v16;
    if ( !v16 )
    {
      if ( CurrentIrql != 17 )
      {
        v10 = v12 + 1272;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)v10, 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)v10);
        }
        __writecr8(CurrentIrql);
      }
      if ( v15 )
        MiLockProtoPage(0LL);
      if ( v13 )
      {
        if ( v13 == v94 )
        {
          v77 = CurrentThread->SpecialApcDisable + 1;
          CurrentThread->SpecialApcDisable = v77;
          if ( !v77
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v10);
          }
        }
        else
        {
          MiUnlockAndDereferenceVad(v13);
        }
      }
      if ( v87 == 1 )
        KiUnstackDetachProcess(v95, 0LL);
      MmUnlockPages(MemoryDescriptorList);
      ExFreePoolWithTag(MemoryDescriptorList, 0);
      return 0LL;
    }
  }
  v13 = (_DWORD *)MiObtainReferencedVad(v19, &v88);
  if ( v13 )
    goto LABEL_47;
  if ( v88 != -1073741558 )
  {
LABEL_184:
    MappedSystemVa = v78;
    goto LABEL_185;
  }
  if ( v87 == 1 )
    KiUnstackDetachProcess(v95, 0LL);
  MmUnlockPages(MemoryDescriptorList);
  ExFreePoolWithTag(MemoryDescriptorList, 0);
  return 3221225738LL;
}
