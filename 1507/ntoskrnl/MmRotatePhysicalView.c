/*
 * XREFs of MmRotatePhysicalView @ 0x140560980
 * Callers:
 *     <none>
 * Callees:
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     MmSizeOfMdl @ 0x1400628C0 (MmSizeOfMdl.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400DFCC0 (MmBuildMdlForNonPagedPool.c)
 *     MiDereferenceIoPages @ 0x140116398 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140116704 (MiReferenceIoPages.c)
 *     MiReplaceRotateWithDemandZero @ 0x140134D50 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateComplete @ 0x140135624 (MiRotateComplete.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1401356DC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDeleteRotateAndStopFaults @ 0x140135C44 (MiDeleteRotateAndStopFaults.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiMarkMdlComplete @ 0x140219754 (MiMarkMdlComplete.c)
 *     MiSlowRotateCopy @ 0x140219888 (MiSlowRotateCopy.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiLogVirtualRotateEvent @ 0x1406A3070 (MiLogVirtualRotateEvent.c)
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
  SIZE_T v10; // r12
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
  ULONG_PTR v22; // r10
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
  PVOID v43; // rdi
  unsigned __int64 *v44; // r13
  ULONG_PTR v45; // r9
  int v46; // [rsp+40h] [rbp-268h]
  int v48; // [rsp+50h] [rbp-258h]
  int v49; // [rsp+50h] [rbp-258h]
  int v50; // [rsp+54h] [rbp-254h] BYREF
  PVOID P; // [rsp+58h] [rbp-250h]
  PMDL MemoryDescriptorList; // [rsp+60h] [rbp-248h]
  __int64 v53; // [rsp+68h] [rbp-240h]
  unsigned int v54; // [rsp+70h] [rbp-238h]
  MM_ROTATE_DIRECTION v55; // [rsp+74h] [rbp-234h]
  SIZE_T v56; // [rsp+78h] [rbp-230h]
  __int16 *ProcessPartition; // [rsp+80h] [rbp-228h]
  ULONG_PTR v58; // [rsp+88h] [rbp-220h]
  PMM_ROTATE_COPY_CALLBACK_FUNCTION v59; // [rsp+90h] [rbp-218h]
  PMDL v60; // [rsp+98h] [rbp-210h]
  unsigned __int64 v61; // [rsp+A0h] [rbp-208h]
  PVOID v62; // [rsp+A8h] [rbp-200h]
  PVOID v63; // [rsp+B0h] [rbp-1F8h]
  PSIZE_T v64; // [rsp+B8h] [rbp-1F0h]
  unsigned __int64 v65[4]; // [rsp+C0h] [rbp-1E8h] BYREF
  _BYTE v66[192]; // [rsp+E0h] [rbp-1C8h] BYREF
  _BYTE v67[192]; // [rsp+1A0h] [rbp-108h] BYREF

  v55 = Direction;
  v6 = NewMdl;
  v7 = (unsigned __int64)VirtualAddress;
  P = VirtualAddress;
  v64 = NumberOfBytes;
  v60 = NewMdl;
  v59 = CopyFunction;
  v62 = Context;
  v8 = 0;
  v9 = 0LL;
  v46 = 0;
  v10 = *NumberOfBytes;
  v58 = 0LL;
  if ( ((unsigned __int16)VirtualAddress & 0xFFF) != 0 )
  {
    v23 = -1073741585;
LABEL_31:
    v30 = 0;
    v31 = NumberOfBytes;
    goto LABEL_82;
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
  v61 = (unsigned __int64)VirtualAddress + v10 - 1;
  if ( v61 <= (unsigned __int64)VirtualAddress )
    goto LABEL_32;
  v11 = 0;
  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  while ( 1 )
  {
    v12 = MiObtainReferencedVad(v7, &v50);
    v9 = (char *)v12;
    v63 = (PVOID)v12;
    if ( !v12 )
    {
      v23 = v50;
      v30 = 0;
      v31 = NumberOfBytes;
      if ( v50 == -1073741664 )
        v23 = -1073741819;
      goto LABEL_82;
    }
    v13 = *(_DWORD *)(v12 + 48);
    if ( (*(_BYTE *)(v12 + 48) & 7) != 6
      || (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) < v61 >> 12 )
    {
      v23 = -1073741800;
      goto LABEL_38;
    }
    v14 = (unsigned __int8)v13 >> 6;
    if ( (v13 & 0x38) != 0 && v14 == 3 )
      v15 = 2;
    else
      v15 = v14 != 1;
    v48 = v15;
    v16 = MiPlatformCacheAttributes[v15];
    v54 = v16;
    LODWORD(MemoryDescriptorList) = MiPlatformCacheAttributes[v15 + 6];
    v17 = v10;
    v53 = v10;
    v18 = v10 >> 12;
    v56 = v10 >> 12;
    if ( v55 <= MmToFrameBufferNoCopy )
    {
      if ( v10 <= 0xFFFFFFFF )
      {
        v19 = (unsigned __int64 *)&v6[1];
        P = &v6[1];
        v20 = 0LL;
        while ( 1 )
        {
          v50 = v20;
          if ( v20 >= v18 )
            break;
          if ( !MI_IS_PFN(*v19) )
          {
            v23 = MiReferenceIoPages(1, v22, 1LL, v21, 0LL, 0LL);
            if ( v23 < 0 )
              goto LABEL_80;
            ++v46;
          }
          v20 = (unsigned int)(v50 + 1);
          v19 = (unsigned __int64 *)((char *)P + 8);
          P = (char *)P + 8;
          v18 = v56;
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
            v65[1] = (unsigned __int64)v9;
            v65[2] = (unsigned __int64)KeGetCurrentThread();
            MiDeleteRotateAndStopFaults(v7, v61, v65);
            v27 = v55;
            if ( v55 == MmToFrameBuffer )
            {
              v26->MdlFlags |= 0x2000u;
              if ( ((int (__fastcall *)(struct _MDL *, struct _MDL *, PVOID))v59)(v6, v26, v62) < 0 )
                MiSlowRotateCopy((__int64)v6, (__int64)v26, (__int64)v9);
            }
            MiMapLockedPagesInUserSpaceHelper(v7, (ULONG_PTR *)&v6[1], &v26[1].Next, v48, v56, 0LL, 16);
            MiRotateComplete(v65);
            MiUnlockAndDereferenceVad(v9);
            MmUnlockPages(v26);
            ExFreePoolWithTag(v26, 0);
            *NumberOfBytes = v10;
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v10 )
              MiLogVirtualRotateEvent(v7, v10, (unsigned int)v27);
            return 0;
          }
          MiReturnCommit((__int64)ProcessPartition, v56);
        }
        v23 = -1073741670;
LABEL_80:
        v30 = v46;
        goto LABEL_81;
      }
      v23 = -1073741306;
LABEL_38:
      v30 = 0;
      goto LABEL_81;
    }
    if ( v55 == MmToRegularMemoryNoCopy )
    {
      v29 = MiReplaceRotateWithDemandZero(v7, v61, v16);
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
      v53 = 0x10000LL;
LABEL_51:
      v33 = (struct _MDL *)v66;
      MemoryDescriptorList = (PMDL)v66;
    }
    if ( v17 > 0x10000 )
    {
      v34 = MmSizeOfMdl((PVOID)v7, v17);
      v6 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v34, 0x6F666E49u);
      if ( v6 )
        goto LABEL_56;
      v17 = 0x10000LL;
      v53 = 0x10000LL;
    }
    v6 = (struct _MDL *)v67;
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
    v37->ByteCount = v53;
    MmBuildMdlForNonPagedPool(v37);
    MemoryDescriptorList->MdlFlags |= 0x2000u;
    v6->Next = 0LL;
    v6->Size = v35;
    v6->StartVa = (PVOID)v36;
    v6->ByteOffset = v38;
    v39 = v53;
    v6->ByteCount = v53;
    v6->MdlFlags = 0x2000;
    v11 |= 1u;
    v40 = (char *)v63;
    v54 = MiSwitchToTransition((ULONG_PTR)v6, (__int64)v63, v54);
    ByteCount = v6->ByteCount;
    v42 = MemoryDescriptorList;
    if ( ByteCount == v39 )
    {
      v49 = 0;
    }
    else
    {
      v53 = v6->ByteCount;
      v49 = MemoryDescriptorList->ByteCount - ByteCount;
      MemoryDescriptorList->ByteCount -= v49;
    }
    if ( v6->ByteCount )
    {
      v50 = ((__int64 (__fastcall *)(struct _MDL *, PMDL, PVOID))v59)(v6, v42, v62);
      if ( v50 < 0 )
        MiSlowRotateCopy((__int64)v6, (__int64)v42, (__int64)v40);
      MiMarkMdlComplete((__int64)v6, (__int64)v40);
    }
    MiUnlockAndDereferenceVad(v40);
    v9 = 0LL;
    v43 = P;
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v53 )
      MiLogVirtualRotateEvent(P, v53, (unsigned int)v55);
    if ( v49 )
      v42->ByteCount += v49;
    if ( v42 != (PMDL)v66 )
      ExFreePoolWithTag(v42, 0);
    if ( (v11 & 1) != 0 )
    {
      v11 &= ~1u;
      if ( v6->ByteCount )
        MmUnlockPages(v6);
      if ( v6 != (struct _MDL *)v67 )
        ExFreePoolWithTag(v6, 0);
    }
    v58 += v53;
    v7 = (unsigned __int64)v43 + v53;
    P = (PVOID)v7;
    if ( v54 == 1 )
    {
      v23 = 1073741849;
      v30 = 0;
      goto LABEL_81;
    }
    v10 -= v53;
    if ( !v10 )
      break;
    v6 = 0LL;
    v60 = 0LL;
  }
  v23 = 0;
  v30 = 0;
LABEL_81:
  v31 = NumberOfBytes;
LABEL_82:
  if ( v9 )
    MiUnlockAndDereferenceVad(v9);
  if ( v23 < 0 )
  {
    v44 = (unsigned __int64 *)&v6[1];
    while ( v30 )
    {
      if ( !MI_IS_PFN(*v44) )
      {
        MiDereferenceIoPages(1, v45, 1uLL);
        --v30;
      }
      ++v44;
    }
  }
  *v31 = v58;
  return v23;
}
