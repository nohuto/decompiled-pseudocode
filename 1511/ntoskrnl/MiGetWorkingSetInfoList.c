/*
 * XREFs of MiGetWorkingSetInfoList @ 0x1400B9CE0
 * Callers:
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     MiRotatedToFrameBuffer @ 0x14001EE20 (MiRotatedToFrameBuffer.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1400BA994 (MiWorkingSetInfoCheckPageTable.c)
 *     MiGetPfnProtection @ 0x1400BB6C0 (MiGetPfnProtection.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     MiLockProtoPage @ 0x1400E1EC0 (MiLockProtoPage.c)
 *     MiQueryPfnUnsafe @ 0x1400EA268 (MiQueryPfnUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PFN_IS_ENCLAVE @ 0x1401DF9EC (MI_PFN_IS_ENCLAVE.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(__int64 a1, unsigned __int64 a2, _KPROCESS *a3, unsigned int a4)
{
  unsigned __int64 v7; // rsi
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v9; // r14
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *MappedSystemVa; // r8
  _KPROCESS *v12; // r14
  unsigned int *v13; // r15
  KIRQL v14; // r13
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  unsigned int v19; // esi
  int v20; // edx
  __int64 *v21; // rcx
  unsigned __int64 v22; // r12
  unsigned int v23; // ebx
  char *v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rdi
  unsigned __int64 v27; // rax
  __int64 ProtoPteAddress; // rdx
  ULONG_PTR v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  unsigned int v32; // r14d
  unsigned __int64 v33; // rax
  __int64 v34; // rbx
  int v35; // edx
  int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r14
  unsigned __int64 v41; // rax
  __int64 v42; // rbx
  char v43; // al
  unsigned __int64 v44; // r9
  __int64 v45; // r10
  char v46; // dl
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rsi
  unsigned __int64 Wsle; // rax
  int PfnProtection; // eax
  char v51; // r11
  __int64 v52; // rax
  bool v53; // zf
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rbx
  int v57; // eax
  unsigned __int64 *v58; // [rsp+30h] [rbp-188h]
  unsigned __int64 v59; // [rsp+38h] [rbp-180h]
  struct _KTHREAD *v61; // [rsp+48h] [rbp-170h]
  __int64 v62; // [rsp+50h] [rbp-168h] BYREF
  int v63; // [rsp+58h] [rbp-160h]
  __int64 v64; // [rsp+60h] [rbp-158h]
  char v65[8]; // [rsp+68h] [rbp-150h] BYREF
  __int64 v66; // [rsp+70h] [rbp-148h]
  int v67; // [rsp+78h] [rbp-140h] BYREF
  unsigned __int64 v68; // [rsp+80h] [rbp-138h]
  PMDL MemoryDescriptorList; // [rsp+88h] [rbp-130h]
  unsigned int v70; // [rsp+90h] [rbp-128h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-120h]
  __int64 v72[2]; // [rsp+A0h] [rbp-118h] BYREF
  _DWORD v73[36]; // [rsp+B0h] [rbp-108h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v74; // [rsp+140h] [rbp-78h] BYREF
  char v75; // [rsp+170h] [rbp-48h] BYREF
  __int64 v76; // [rsp+180h] [rbp-38h] BYREF

  v70 = a4;
  if ( a2 > 0xFFFFFFFF )
    return 3221225990LL;
  v59 = a2 >> 4;
  if ( !(a2 >> 4) )
    return 3221225476LL;
  if ( (a4 & 3) == 3 || (a4 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  v7 = 0LL;
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                 NonPagedPoolNx,
                                 8 * (((a2 & 0xFFF) != 0) + (a2 >> 12)) + 56,
                                 0x20206D4Du);
  v9 = PoolWithTag;
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
  v61 = CurrentThread;
  MmProbeAndLockPages(PoolWithTag, CurrentThread->PreviousMode, IoWriteAccess);
  if ( (v9->MdlFlags & 5) != 0 )
    MappedSystemVa = (unsigned __int64 *)v9->MappedSystemVa;
  else
    MappedSystemVa = (unsigned __int64 *)MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000010u);
  v58 = MappedSystemVa;
  if ( !MappedSystemVa )
  {
    MmUnlockPages(v9);
    ExFreePoolWithTag(v9, 0);
    return 3221225626LL;
  }
  v12 = a3;
  if ( CurrentThread->ApcState.Process == a3 )
  {
    v63 = 0;
  }
  else
  {
    KiStackAttachProcess(a3, 0LL, (__int64)&v74);
    v63 = 1;
    MappedSystemVa = v58;
  }
  v13 = 0LL;
  v14 = 17;
  v15 = 0LL;
  v64 = 0LL;
  v67 = 0;
  v16 = v59;
  while ( 2 )
  {
    v17 = *MappedSystemVa;
    BugCheckParameter2 = v17;
    if ( v17 > (unsigned __int64)MmHighestUserAddress )
      goto LABEL_138;
    v18 = v17 >> 12;
    v68 = v17 >> 12;
    if ( v13 == v73 )
    {
      if ( v14 != 17 )
      {
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)&v12[1].IdealNode[12], v14);
        v14 = 17;
      }
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    else if ( v13 )
    {
      if ( v18 >= (v13[6] | ((unsigned __int64)*((unsigned __int8 *)v13 + 32) << 32))
        && v18 <= (v13[7] | ((unsigned __int64)*((unsigned __int8 *)v13 + 33) << 32)) )
      {
        goto LABEL_40;
      }
      if ( v15 )
      {
        MiLockProtoPage(0LL);
        v15 = 0LL;
        v64 = 0LL;
      }
      if ( v14 != 17 )
      {
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)&v12[1].IdealNode[12], v14);
        v14 = 17;
      }
      MiUnlockAndDereferenceVad(v13);
    }
    if ( (v17 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000 || (HIDWORD(v12[2].SwapListEntry.Next) & 1) != 0 )
    {
      v13 = MiObtainReferencedVad(v17, &v67);
      if ( !v13 )
      {
        if ( v67 == -1073741558 )
        {
          if ( v63 == 1 )
            KiUnstackDetachProcess(&v74, 0LL);
          MmUnlockPages(MemoryDescriptorList);
          ExFreePoolWithTag(MemoryDescriptorList, 0);
          return 3221225738LL;
        }
        goto LABEL_136;
      }
    }
    else
    {
      v13 = v73;
      memset(v73, 0, 0x88uLL);
      v73[12] &= 0xFFFFFFF8;
      --CurrentThread->SpecialApcDisable;
    }
    MappedSystemVa = v58;
LABEL_40:
    v19 = v13[12];
    if ( (v19 & 7) == 1 )
    {
      v7 = (16LL * (MmProtectToValue[(unsigned __int8)v19 >> 3] & 0x7FF)) | 0x400001;
LABEL_137:
      v16 = v59;
      goto LABEL_138;
    }
    v20 = 2;
    v76 = ((v17 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v21 = &v76;
    do
    {
      --v21;
      *v21 = (((unsigned __int64)v21[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v20;
    }
    while ( v20 );
    v22 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v14 != 17 )
    {
      if ( (((((v17 >> 9) & 0xF8) + 8) & 0x78) != 0 || (*(_DWORD *)&v12[1].IdealNode[12] & 0x40000000) == 0)
        && !KeShouldYieldProcessor() )
      {
        goto LABEL_51;
      }
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)&v12[1].IdealNode[12], v14);
      if ( v15 )
      {
        MiLockProtoPage(0LL);
        v64 = 0LL;
      }
    }
    v14 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&v12[1].IdealNode[12]);
    while ( 1 )
    {
LABEL_51:
      v66 = 0LL;
      v23 = 0;
      v24 = &v75;
      do
      {
        v25 = *(_QWORD *)v24;
        v26 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)v24);
        if ( !v26 )
          goto LABEL_64;
        if ( !(unsigned int)MiWorkingSetInfoCheckPageTable(v25, v65, v70, v14) )
          break;
        ++v23;
        v24 += 8;
      }
      while ( v23 < 3 );
      if ( v23 < 3 )
      {
LABEL_134:
        v7 = v66;
        goto LABEL_135;
      }
      v62 = MI_READ_PTE_LOCK_FREE(v76);
      if ( (v62 & 0x80u) != 0LL )
      {
        v41 = MI_READ_PTE_LOCK_FREE(&v62);
        v40 = v68;
        v39 = (v68 & 0x1FF) + ((v41 >> 12) & 0xFFFFFFFFFLL);
        v31 = v66 | 0x800001;
        LOWORD(v26) = 0;
        goto LABEL_98;
      }
      v27 = MI_READ_PTE_LOCK_FREE(v22);
      v26 = v27;
      v62 = v27;
      if ( (v27 & 1) != 0 )
        break;
      if ( (v27 & 0x400) != 0 )
        goto LABEL_66;
      if ( (v27 & 0x800) != 0 )
      {
        if ( (unsigned int)MiQueryPfnUnsafe((v27 >> 12) & 0xFFFFFFFFFLL, v22, v27, v65) )
          goto LABEL_134;
      }
      else
      {
        if ( (unsigned int)MI_GET_PAGING_FILE_OFFSET(&v62) )
        {
          v7 = v66 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
          goto LABEL_135;
        }
        if ( v26 )
          goto LABEL_134;
LABEL_64:
        if ( v13 == v73 || (v13[12] & 0x8000) != 0 )
          goto LABEL_134;
LABEL_66:
        ProtoPteAddress = 0LL;
        if ( v13 == v73 )
        {
          ProtoPteAddress = qword_1402FE6A8;
          v29 = qword_1402FE6A8;
        }
        else if ( (v13[12] & 0x8000) != 0
               || (ProtoPteAddress = MiGetProtoPteAddress((__int64)v13, v68, 1u, v72), v26)
               && HIDWORD(v26) != 0xFFFFFFFF )
        {
          v29 = v26 >> 16;
        }
        else
        {
          v29 = ProtoPteAddress;
        }
        if ( !v29 )
          goto LABEL_134;
        v30 = v66 | 0x8000;
        v66 |= 0x8000uLL;
        if ( v29 == ProtoPteAddress )
          v66 = v30 | 0x40000000;
        if ( ((v64 ^ v29) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        {
          while ( 1 )
          {
            v55 = MI_READ_PTE_LOCK_FREE(v29);
            v56 = v55;
            v62 = v55;
            if ( (v55 & 1) != 0 )
            {
              MI_GET_PAGE_FRAME_FROM_PTE(&v62);
            }
            else
            {
              if ( (v55 & 0x400) != 0 )
                goto LABEL_134;
              if ( (v55 & 0x800) == 0 )
              {
                v57 = MI_GET_PAGING_FILE_OFFSET(&v62);
                v7 = v66;
                MappedSystemVa = v58;
                CurrentThread = v61;
                v53 = v57 == 0;
                v16 = v59;
                if ( v53 )
                {
                  if ( !v56 )
                    v7 = 0LL;
                  v12 = a3;
                }
                else
                {
                  v7 = v66 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
                  v12 = a3;
                }
                goto LABEL_138;
              }
            }
            if ( (unsigned int)((__int64 (*)(void))MiQueryPfnUnsafe)() )
              goto LABEL_134;
          }
        }
        v64 = MiLockProtoPage(v29);
      }
    }
    v31 = v66 | 1;
    v32 = v13[12];
    if ( (v13[12] & 7) == 6 )
    {
      v33 = MI_GET_PAGE_FRAME_FROM_PTE(&v62);
      v34 = 48 * v33 - 0x58000000000LL;
      if ( MI_IS_PFN(v33) && (*(_BYTE *)(v34 + 35) & 0x40) != 0 )
        v31 |= 0x80000000uLL;
      if ( MiRotatedToFrameBuffer(v22) )
      {
        v35 = 1;
        if ( (v26 & 0x800) != 0 )
          v35 = 4;
        v36 = (unsigned __int8)v32 >> 6;
        if ( v36 == 3 && (v32 & 0x38) != 0 )
        {
          v35 |= 0x18u;
        }
        else if ( v36 == 1 )
        {
          v35 |= 8u;
        }
      }
      else
      {
        v31 = v31 & 0xFFFFFFFFF8C0FFFFuLL | ((((MI_GET_PFN_PRIORITY(v34) & 7) << 8) | ((unsigned __int8)HIBYTE(*(_QWORD *)(v34 + 40)) >> 2)) << 16);
        v35 = (*(_DWORD *)(v34 + 16) >> 5) & 0x1F;
        if ( *(__int64 *)(v34 + 8) >= 0 )
        {
          v37 = v31 | 0x8000;
          LOBYTE(v38) = 7;
          if ( (*(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
            v38 = *(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          v31 = ((unsigned __int8)v37 ^ (unsigned __int8)(2 * v38)) & 0xE ^ (unsigned __int64)v37;
          v35 = MmMakeProtectNotWriteCopy[v35];
        }
      }
      v7 = ((unsigned __int16)v31 ^ (unsigned __int16)(16 * MmProtectToValue[v35])) & 0x7FF0 ^ v31;
      goto LABEL_135;
    }
    v39 = MI_GET_PAGE_FRAME_FROM_PTE(&v62);
    v40 = v68;
LABEL_98:
    v42 = 48 * v39 - 0x58000000000LL;
    v43 = MI_GET_PFN_PRIORITY(v42);
    v47 = v31 & 0xFFFFFFFFF8C07FFFuLL | ((v46 & 1 | (2 * (((unsigned __int64)(v43 & 7) << 8) | (v44 >> 58)))) << 15);
    if ( (*(_BYTE *)(v42 + 35) & 0x40) != 0 )
      v47 |= 0x80000000uLL;
    if ( (v47 & 0x800000) != 0 )
    {
LABEL_120:
      v7 = v47 & 0xFFFFFFFFFFFF800FuLL | (16 * (MmProtectToValue[(v13[12] >> 3) & 0x1F] & 0x7FF | 0x40000LL));
      v12 = a3;
      MappedSystemVa = v58;
      CurrentThread = v61;
      if ( v45 )
      {
        LOBYTE(v54) = 7;
        if ( (*(_QWORD *)(v42 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
          v54 = *(_QWORD *)(v42 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        v7 = v7 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v54 & 7 | 0x20000000));
      }
      goto LABEL_137;
    }
    if ( ((v44 >> 54) & 7) == 1 )
    {
      if ( !v45 )
      {
        if ( (unsigned int)MI_PFN_IS_ENCLAVE(v42) )
        {
          v48 = ((unsigned __int16)v47 ^ (unsigned __int16)(16 * MmProtectToValue[(*(_DWORD *)(v42 + 16) >> 5) & 0x1F])) & 0x7FF0 ^ v47;
        }
        else if ( (v26 & 4) != 0 )
        {
          if ( (v26 & 0x800) != 0 )
            v48 = v47 & 0xFFFFFFFFFFFF800FuLL | 0x40;
          else
            v48 = v47 & 0xFFFFFFFFFFFF800FuLL | 0x20;
        }
        else
        {
          v48 = v47 & 0xFFFFFFFFFFFF800FuLL | 0x10;
        }
        v7 = v48 | 0x400000;
        goto LABEL_135;
      }
      goto LABEL_120;
    }
    Wsle = MiLocateWsle(BugCheckParameter2, (__int64)&a3[1].IdealNode[12], *(_QWORD *)v42);
    if ( Wsle < MEMORY[0xFFFFF58010804008] )
      v47 |= 0x400000uLL;
    if ( (*(_QWORD *)(v42 + 40) & 0x200000000000000LL) == 0 )
    {
      v7 = v47 & 0xFFFFFFFFFFFF8001uLL | (16LL * (MmProtectToValue[(*(_DWORD *)(v42 + 16) >> 5) & 0x1F] & 0x7FF));
      goto LABEL_135;
    }
    PfnProtection = MiGetPfnProtection(v42, Wsle * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBCB0LL);
    v7 = v47 & 0xFFFFFFFFFFFF8001uLL | (2 * (v51 & 7 | (8LL * (MmProtectToValue[PfnProtection] & 0x7FF))));
    if ( v13 == v73 )
    {
      v7 |= 0x40000000uLL;
      goto LABEL_135;
    }
    if ( (v13[12] & 0x8000) != 0 )
    {
LABEL_135:
      v12 = a3;
      CurrentThread = v61;
LABEL_136:
      MappedSystemVa = v58;
      goto LABEL_137;
    }
    v52 = MiGetProtoPteAddress((__int64)v13, v40, 1u, v72);
    v12 = a3;
    MappedSystemVa = v58;
    CurrentThread = v61;
    v53 = v52 == (*(_QWORD *)(v42 + 8) | 0x8000000000000000uLL);
    v16 = v59;
    if ( v53 )
      v7 |= 0x40000000uLL;
LABEL_138:
    MappedSystemVa[1] = v7;
    MappedSystemVa += 2;
    v58 = MappedSystemVa;
    v59 = --v16;
    if ( v16 )
    {
      v15 = v64;
      v7 = 0LL;
      continue;
    }
    break;
  }
  if ( v14 != 17 )
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)&v12[1].IdealNode[12], v14);
  if ( v64 )
    MiLockProtoPage(0LL);
  if ( v13 )
  {
    if ( v13 == v73 )
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    else
      MiUnlockAndDereferenceVad(v13);
  }
  if ( v63 == 1 )
    KiUnstackDetachProcess(&v74, 0LL);
  MmUnlockPages(MemoryDescriptorList);
  ExFreePoolWithTag(MemoryDescriptorList, 0);
  return 0LL;
}
