/*
 * XREFs of MmRotatePhysicalView @ 0x14052871C
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfn @ 0x14000F720 (MiIsPfn.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MmSizeOfMdl @ 0x1400883D0 (MmSizeOfMdl.c)
 *     MiDereferenceIoPages @ 0x14009B770 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x14009BB00 (MiReferenceIoPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400FA930 (MmBuildMdlForNonPagedPool.c)
 *     MiReplaceRotateWithDemandZero @ 0x14010E038 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateComplete @ 0x14010E6F8 (MiRotateComplete.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E778 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDeleteRotateAndStopFaults @ 0x14010EB18 (MiDeleteRotateAndStopFaults.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiMarkMdlComplete @ 0x1401E879C (MiMarkMdlComplete.c)
 *     MiSlowRotateCopy @ 0x1401E8874 (MiSlowRotateCopy.c)
 *     MiSwitchToTransition @ 0x1401E8974 (MiSwitchToTransition.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiLogVirtualRotateEvent @ 0x140659DC8 (MiLogVirtualRotateEvent.c)
 */

NTSTATUS __stdcall MmRotatePhysicalView(
        PVOID VirtualAddress,
        PSIZE_T NumberOfBytes,
        PMDL NewMdl,
        MM_ROTATE_DIRECTION Direction,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context)
{
  struct _MDL *v6; // r13
  unsigned __int64 v7; // rdi
  NTSTATUS v8; // r15d
  char *v9; // rsi
  ULONG_PTR v10; // r12
  int v11; // ebx
  unsigned __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // edx
  SIZE_T v17; // r14
  unsigned __int64 v18; // rcx
  unsigned __int64 *v19; // rdx
  unsigned __int64 v20; // rax
  int v21; // r9d
  __int64 v22; // r10
  NTSTATUS v23; // ebx
  SIZE_T v24; // rax
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v26; // rbx
  MM_ROTATE_DIRECTION v27; // r14d
  BOOL v29; // r14d
  int v30; // edi
  PSIZE_T v31; // r12
  SIZE_T v32; // rax
  struct _MDL *v33; // rsi
  SIZE_T v34; // rax
  CSHORT v35; // r14
  unsigned __int64 v36; // rsi
  PMDL v37; // rax
  ULONG v38; // edi
  __int64 v39; // rsi
  char *v40; // rdi
  __int64 ByteCount; // rax
  PMDL v42; // r14
  unsigned __int64 v43; // rsi
  unsigned __int64 *v44; // r14
  __int64 v45; // r9
  PVOID v46; // rdi
  unsigned __int64 *v47; // r13
  __int64 v48; // r9
  int v49; // [rsp+40h] [rbp-268h]
  int v51; // [rsp+50h] [rbp-258h] BYREF
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-250h]
  PVOID P; // [rsp+60h] [rbp-248h]
  MM_ROTATE_DIRECTION v54; // [rsp+68h] [rbp-240h]
  unsigned int v55; // [rsp+6Ch] [rbp-23Ch]
  __int64 v56; // [rsp+70h] [rbp-238h]
  int v57; // [rsp+78h] [rbp-230h]
  unsigned __int64 v58; // [rsp+80h] [rbp-228h]
  PMDL v59; // [rsp+88h] [rbp-220h]
  int *ProcessPartition; // [rsp+90h] [rbp-218h]
  ULONG_PTR v61; // [rsp+98h] [rbp-210h]
  unsigned __int64 v62; // [rsp+A0h] [rbp-208h]
  PVOID v63; // [rsp+A8h] [rbp-200h]
  PVOID v64; // [rsp+B0h] [rbp-1F8h]
  PMM_ROTATE_COPY_CALLBACK_FUNCTION v65; // [rsp+B8h] [rbp-1F0h]
  PSIZE_T v66; // [rsp+C0h] [rbp-1E8h]
  unsigned __int64 v67[3]; // [rsp+C8h] [rbp-1E0h] BYREF
  _BYTE v68[192]; // [rsp+E0h] [rbp-1C8h] BYREF
  _BYTE v69[192]; // [rsp+1A0h] [rbp-108h] BYREF

  v54 = Direction;
  v6 = NewMdl;
  v7 = (unsigned __int64)VirtualAddress;
  P = VirtualAddress;
  v66 = NumberOfBytes;
  v59 = NewMdl;
  v65 = CopyFunction;
  v64 = Context;
  v8 = 0;
  v9 = 0LL;
  v49 = 0;
  v10 = *NumberOfBytes;
  v61 = 0LL;
  if ( ((unsigned __int16)VirtualAddress & 0xFFF) != 0 )
  {
    v23 = -1073741585;
LABEL_31:
    v30 = 0;
    v31 = NumberOfBytes;
    goto LABEL_84;
  }
  if ( (v10 & 0xFFF) != 0 )
  {
LABEL_32:
    v23 = -1073741584;
    goto LABEL_31;
  }
  if ( Direction >= MmMaximumRotateDirection )
  {
    v23 = -1073741583;
    goto LABEL_31;
  }
  v62 = (unsigned __int64)VirtualAddress + v10 - 1;
  if ( v62 <= (unsigned __int64)VirtualAddress )
    goto LABEL_32;
  v11 = 0;
  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  while ( 1 )
  {
    v12 = MiObtainReferencedVad(v7, &v51);
    v9 = (char *)v12;
    v63 = (PVOID)v12;
    if ( !v12 )
    {
      v23 = v51;
      v30 = 0;
      v31 = NumberOfBytes;
      if ( v51 == -1073741664 )
        v23 = -1073741819;
      goto LABEL_84;
    }
    v13 = *(_DWORD *)(v12 + 48);
    if ( (*(_BYTE *)(v12 + 48) & 7) != 6
      || (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) < v62 >> 12 )
    {
      v23 = -1073741800;
      goto LABEL_38;
    }
    v14 = (unsigned __int8)v13 >> 6;
    if ( (v13 & 0x38) != 0 && v14 == 3 )
      v15 = 2;
    else
      v15 = v14 != 1;
    v57 = v15;
    v16 = MiPlatformCacheAttributes[v15];
    v55 = v16;
    LODWORD(MemoryDescriptorList) = MiPlatformCacheAttributes[v15 + 6];
    v17 = v10;
    v56 = v10;
    v18 = v10 >> 12;
    v58 = v10 >> 12;
    if ( v54 <= MmToFrameBufferNoCopy )
    {
      if ( v10 <= 0xFFFFFFFF )
      {
        v19 = (unsigned __int64 *)&v6[1];
        P = &v6[1];
        v20 = 0LL;
        while ( 1 )
        {
          v51 = v20;
          if ( v20 >= v18 )
            break;
          if ( !MiIsPfn(*v19) )
          {
            v23 = MiReferenceIoPages(1, v22, 1LL, v21, 0LL, 0LL);
            if ( v23 < 0 )
              goto LABEL_82;
            ++v49;
          }
          v20 = (unsigned int)(v51 + 1);
          v19 = (unsigned __int64 *)((char *)P + 8);
          P = (char *)P + 8;
          v18 = v58;
        }
        if ( (unsigned int)MiChargeCommit((__int64)ProcessPartition, v18, 0) )
        {
          v24 = MmSizeOfMdl((PVOID)v7, v10);
          PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x6F666E49u);
          v26 = PoolWithTag;
          P = PoolWithTag;
          if ( PoolWithTag )
          {
            PoolWithTag->Next = 0LL;
            PoolWithTag->Size = 8 * (((v10 + (v7 & 0xFFF) + 4095) >> 12) + 6);
            PoolWithTag->MdlFlags = 0;
            PoolWithTag->StartVa = (PVOID)(v7 & 0xFFFFFFFFFFFFF000uLL);
            PoolWithTag->ByteOffset = v7 & 0xFFF;
            PoolWithTag->ByteCount = v10;
            MmProbeAndLockPages(PoolWithTag, 1, IoReadAccess);
            v67[1] = (unsigned __int64)v9;
            v67[2] = (unsigned __int64)KeGetCurrentThread();
            MiDeleteRotateAndStopFaults(v7, v62, v67);
            v27 = v54;
            if ( v54 == MmToFrameBuffer )
            {
              v26->MdlFlags |= 0x2000u;
              if ( ((int (__fastcall *)(struct _MDL *, struct _MDL *, PVOID))v65)(v6, v26, v64) < 0 )
                MiSlowRotateCopy((__int64)v6, (__int64)v26, (__int64)v9);
            }
            MiMapLockedPagesInUserSpaceHelper(v7, (ULONG_PTR *)&v6[1], &v26[1].Next, v57, v58, 0LL, 16);
            MiRotateComplete(v67);
            MiUnlockAndDereferenceVad(v9);
            MmUnlockPages(v26);
            ExFreePoolWithTag(v26, 0);
            *NumberOfBytes = v10;
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v10 )
              MiLogVirtualRotateEvent(v7, v10, (unsigned int)v27);
            return 0;
          }
          MiReturnCommit((__int64)ProcessPartition, v58);
        }
        v23 = -1073741670;
LABEL_82:
        v30 = v49;
        goto LABEL_83;
      }
      v23 = -1073741306;
LABEL_38:
      v30 = 0;
      goto LABEL_83;
    }
    if ( v54 == MmToRegularMemoryNoCopy )
    {
      v29 = MiReplaceRotateWithDemandZero(v7, v62, v16);
      MiUnlockAndDereferenceVad(v9);
      *NumberOfBytes = v10;
      if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v10 )
        MiLogVirtualRotateEvent(v7, v10, 3LL);
      if ( v29 )
        return 1073741849;
      return v8;
    }
    if ( v10 <= 0x10000 )
      goto LABEL_51;
    if ( v10 > 0xFFFFFFFF
      || (v32 = MmSizeOfMdl((PVOID)v7, v10),
          v33 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v32, 0x6F666E49u),
          (MemoryDescriptorList = v33) == 0LL) )
    {
      v17 = 0x10000LL;
      v56 = 0x10000LL;
LABEL_51:
      v33 = (struct _MDL *)v68;
      MemoryDescriptorList = (PMDL)v68;
    }
    if ( v17 > 0x10000 )
    {
      v34 = MmSizeOfMdl((PVOID)v7, v17);
      v6 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v34, 0x6F666E49u);
      if ( v6 )
        goto LABEL_56;
      v17 = 0x10000LL;
      v56 = 0x10000LL;
    }
    v6 = (struct _MDL *)v69;
LABEL_56:
    v33->Next = 0LL;
    v35 = 8 * ((((v7 & 0xFFF) + 4095 + v17) >> 12) + 6);
    v33->Size = v35;
    v33->MdlFlags = 0;
    v36 = v7 & 0xFFFFFFFFFFFFF000uLL;
    v37 = MemoryDescriptorList;
    MemoryDescriptorList->StartVa = (PVOID)(v7 & 0xFFFFFFFFFFFFF000uLL);
    v38 = v7 & 0xFFF;
    v37->ByteOffset = v38;
    v37->ByteCount = v56;
    MmBuildMdlForNonPagedPool(v37);
    MemoryDescriptorList->MdlFlags |= 0x2000u;
    v6->Next = 0LL;
    v6->Size = v35;
    v6->StartVa = (PVOID)v36;
    v6->ByteOffset = v38;
    v39 = v56;
    v6->ByteCount = v56;
    v6->MdlFlags = 0x2000;
    v11 |= 1u;
    v40 = (char *)v63;
    v55 = MiSwitchToTransition((ULONG_PTR)v6, (__int64)v63, v55);
    ByteCount = v6->ByteCount;
    v42 = MemoryDescriptorList;
    if ( ByteCount != v39 )
    {
      v56 = v6->ByteCount;
      MemoryDescriptorList->ByteCount = ByteCount;
    }
    if ( v6->ByteCount )
    {
      v51 = ((__int64 (__fastcall *)(struct _MDL *, PMDL, PVOID))v65)(v6, v42, v64);
      if ( v51 < 0 )
        MiSlowRotateCopy((__int64)v6, (__int64)v42, (__int64)v40);
      MiMarkMdlComplete((__int64)v6, (__int64)v40);
      v43 = (unsigned __int64)v42->ByteCount >> 12;
      v44 = (unsigned __int64 *)&v42[1];
      while ( v43 )
      {
        if ( !MiIsPfn(*v44) )
          MiDereferenceIoPages(1, v45, 1uLL);
        ++v44;
        --v43;
      }
      v42 = MemoryDescriptorList;
    }
    MiUnlockAndDereferenceVad(v40);
    v9 = 0LL;
    v46 = P;
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v56 )
      MiLogVirtualRotateEvent(P, v56, (unsigned int)v54);
    if ( v42 != (PMDL)v68 )
      ExFreePoolWithTag(v42, 0);
    if ( (v11 & 1) != 0 )
    {
      v11 &= ~1u;
      if ( v6->ByteCount )
        MmUnlockPages(v6);
      if ( v6 != (struct _MDL *)v69 )
        ExFreePoolWithTag(v6, 0);
    }
    v61 += v56;
    v7 = (unsigned __int64)v46 + v56;
    P = (PVOID)v7;
    if ( v55 == 1 )
    {
      v23 = 1073741849;
      v30 = 0;
      goto LABEL_83;
    }
    v10 -= v56;
    if ( !v10 )
      break;
    v6 = 0LL;
    v59 = 0LL;
  }
  v23 = 0;
  v30 = 0;
LABEL_83:
  v31 = NumberOfBytes;
LABEL_84:
  if ( v9 )
    MiUnlockAndDereferenceVad(v9);
  if ( v23 < 0 )
  {
    v47 = (unsigned __int64 *)&v6[1];
    while ( v30 )
    {
      if ( !MiIsPfn(*v47) )
      {
        MiDereferenceIoPages(1, v48, 1uLL);
        --v30;
      }
      ++v47;
    }
  }
  *v31 = v61;
  return v23;
}
