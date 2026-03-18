/*
 * XREFs of MmRotatePhysicalView @ 0x1404E2C10
 * Callers:
 *     <none>
 * Callees:
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     MiDereferenceIoPages @ 0x1400C1300 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x1400C16A0 (MiReferenceIoPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400C8770 (MmBuildMdlForNonPagedPool.c)
 *     MmSizeOfMdl @ 0x1400FE044 (MmSizeOfMdl.c)
 *     MiReplaceRotateWithDemandZero @ 0x140102EA0 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateComplete @ 0x140103530 (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x140103598 (MiDeleteRotateAndStopFaults.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140103E00 (MiMapLockedPagesInUserSpaceHelper.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiMarkMdlComplete @ 0x1401D6CB4 (MiMarkMdlComplete.c)
 *     MiSlowRotateCopy @ 0x1401D6D90 (MiSlowRotateCopy.c)
 *     MiSwitchToTransition @ 0x1401D6E6C (MiSwitchToTransition.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiLogVirtualRotateEvent @ 0x140623E5C (MiLogVirtualRotateEvent.c)
 */

NTSTATUS __stdcall MmRotatePhysicalView(
        PVOID VirtualAddress,
        PSIZE_T NumberOfBytes,
        PMDL NewMdl,
        MM_ROTATE_DIRECTION Direction,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context)
{
  PMDL v6; // rdi
  PSIZE_T v7; // rax
  unsigned __int64 v8; // rsi
  unsigned int *v9; // rdx
  int v10; // r15d
  ULONG_PTR v11; // r14
  ULONG_PTR v12; // rcx
  unsigned __int64 v13; // rdi
  int v14; // ebx
  unsigned int *v15; // rax
  unsigned int v16; // r8d
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // r13d
  int v20; // r12d
  SIZE_T v21; // rdi
  unsigned __int64 v22; // r14
  unsigned __int64 *v23; // rdi
  unsigned int i; // ebx
  unsigned __int64 *v25; // r9
  ULONG_PTR v26; // r10
  NTSTATUS v27; // esi
  int *v28; // rdi
  SIZE_T v29; // rax
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v31; // rbx
  BOOL v33; // ebx
  SIZE_T v34; // rax
  struct _MDL *v35; // rcx
  SIZE_T v36; // rax
  CSHORT v37; // r14
  unsigned __int64 v38; // rsi
  ULONG v39; // edi
  __int64 v40; // r12
  unsigned int v41; // r8d
  unsigned int *v42; // r13
  int v43; // esi
  __int64 ByteCount; // rcx
  int v45; // r14d
  unsigned __int64 *v46; // r13
  unsigned __int64 j; // rsi
  ULONG_PTR v48; // r9
  unsigned __int64 *v49; // rbx
  ULONG_PTR v50; // r9
  PMDL v51; // [rsp+40h] [rbp-278h]
  PMDL v52; // [rsp+40h] [rbp-278h]
  unsigned int *P; // [rsp+50h] [rbp-268h]
  ULONG_PTR v55; // [rsp+58h] [rbp-260h]
  PMDL MemoryDescriptorList; // [rsp+60h] [rbp-258h]
  int v57; // [rsp+68h] [rbp-250h]
  int v58; // [rsp+68h] [rbp-250h]
  SIZE_T Length; // [rsp+70h] [rbp-248h]
  unsigned __int64 Base; // [rsp+78h] [rbp-240h]
  __int64 v62; // [rsp+88h] [rbp-230h]
  int v63; // [rsp+90h] [rbp-228h] BYREF
  unsigned __int64 v64; // [rsp+98h] [rbp-220h]
  PVOID v65; // [rsp+A0h] [rbp-218h]
  int *ProcessPartition; // [rsp+A8h] [rbp-210h]
  PMM_ROTATE_COPY_CALLBACK_FUNCTION v67; // [rsp+B0h] [rbp-208h]
  PVOID v68; // [rsp+B8h] [rbp-200h]
  unsigned __int64 v69; // [rsp+C0h] [rbp-1F8h]
  PSIZE_T v70; // [rsp+C8h] [rbp-1F0h]
  __int64 v71[4]; // [rsp+D0h] [rbp-1E8h] BYREF
  _BYTE v72[192]; // [rsp+F0h] [rbp-1C8h] BYREF
  _BYTE v73[192]; // [rsp+1B0h] [rbp-108h] BYREF

  v6 = NewMdl;
  v51 = NewMdl;
  v7 = NumberOfBytes;
  v8 = (unsigned __int64)VirtualAddress;
  Base = (unsigned __int64)VirtualAddress;
  v70 = NumberOfBytes;
  v67 = CopyFunction;
  v65 = Context;
  v9 = 0LL;
  v10 = 0;
  v11 = *v7;
  Length = *v7;
  v12 = 0LL;
  v55 = 0LL;
  if ( (v8 & 0xFFF) != 0 )
  {
    v27 = -1073741585;
    goto LABEL_85;
  }
  if ( (v11 & 0xFFF) != 0 )
  {
    v27 = -1073741584;
    goto LABEL_85;
  }
  if ( Direction >= MmMaximumRotateDirection )
  {
    v27 = -1073741583;
    goto LABEL_85;
  }
  v13 = v11 + v8 - 1;
  v64 = v13;
  if ( v13 > v8 )
  {
    v14 = 0;
    ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
    while ( 1 )
    {
      v15 = MiObtainReferencedVad(v8, &v63);
      v9 = v15;
      P = v15;
      v68 = v15;
      if ( !v15 )
      {
        v27 = v63;
        v7 = NumberOfBytes;
        v12 = v55;
        if ( v63 == -1073741664 )
          v27 = -1073741819;
        goto LABEL_84;
      }
      v16 = v15[12];
      if ( (v15[12] & 7) != 6 || (v15[7] | ((unsigned __int64)*((unsigned __int8 *)v15 + 33) << 32)) < v13 >> 12 )
      {
        v27 = -1073741800;
        v7 = NumberOfBytes;
        v12 = v55;
        goto LABEL_84;
      }
      v17 = (unsigned __int8)v16 >> 6;
      if ( (v16 & 0x38) != 0 && v17 == 3 )
        v18 = 2;
      else
        v18 = v17 != 1;
      v57 = v18;
      v19 = MiPlatformCacheAttributes[v18];
      v20 = MiPlatformCacheAttributes[v18 + 6];
      v21 = v11;
      v62 = v11;
      v22 = v11 >> 12;
      v69 = v22;
      if ( Direction <= MmToFrameBufferNoCopy )
      {
        if ( Length > 0xFFFFFFFF )
        {
          v27 = -1073741306;
        }
        else
        {
          v23 = (unsigned __int64 *)&v51[1];
          for ( i = 0; i < v22; ++i )
          {
            if ( !MI_IS_PFN(*v23) )
            {
              v27 = MiReferenceIoPages(1, v26, 1LL, v20, v25, v25);
              if ( v27 < 0 )
                goto LABEL_83;
              ++v10;
            }
            ++v23;
          }
          v28 = ProcessPartition;
          if ( (unsigned int)MiChargeCommit((unsigned __int64)ProcessPartition, v22, 0LL) )
          {
            v29 = MmSizeOfMdl((PVOID)Base, Length);
            PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v29, 0x6F666E49u);
            v31 = PoolWithTag;
            if ( PoolWithTag )
            {
              PoolWithTag->Next = 0LL;
              PoolWithTag->Size = 8 * ((((Base & 0xFFF) + Length + 4095) >> 12) + 6);
              PoolWithTag->MdlFlags = 0;
              PoolWithTag->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
              PoolWithTag->ByteOffset = Base & 0xFFF;
              PoolWithTag->ByteCount = Length;
              MmProbeAndLockPages(PoolWithTag, 1, IoReadAccess);
              v71[1] = (__int64)P;
              v71[2] = (__int64)KeGetCurrentThread();
              MiDeleteRotateAndStopFaults(Base, v64, v71);
              if ( Direction == MmToFrameBuffer )
              {
                v31->MdlFlags |= 0x2000u;
                if ( ((int (__fastcall *)(PMDL, struct _MDL *, PVOID))v67)(v51, v31, v65) < 0 )
                  MiSlowRotateCopy((__int64)v51, (__int64)v31, (__int64)P);
              }
              MiMapLockedPagesInUserSpaceHelper(Base, (ULONG_PTR *)&v51[1], &v31[1].Next, v57, v22, 0LL, 16);
              MiRotateComplete(v71);
              MiUnlockAndDereferenceVad(P);
              MmUnlockPages(v31);
              ExFreePoolWithTag(v31, 0);
              *NumberOfBytes = Length;
              if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && Length )
                MiLogVirtualRotateEvent(Base, Length, (unsigned int)Direction);
              return 0;
            }
            MiReturnCommit((__int64)v28, v22);
          }
          v27 = -1073741670;
        }
LABEL_83:
        v12 = v55;
        v7 = NumberOfBytes;
        v9 = P;
        goto LABEL_84;
      }
      if ( Direction == MmToRegularMemoryNoCopy )
      {
        v33 = MiReplaceRotateWithDemandZero(v8, v64, v19);
        MiUnlockAndDereferenceVad(P);
        *NumberOfBytes = Length;
        if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && Length )
          MiLogVirtualRotateEvent(v8, Length, 3LL);
        if ( !v33 )
          return 0;
        return 1073741849;
      }
      if ( Length <= 0x10000 )
        goto LABEL_47;
      if ( Length > 0xFFFFFFFF )
        break;
      v34 = MmSizeOfMdl((PVOID)v8, Length);
      v35 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v34, 0x6F666E49u);
      MemoryDescriptorList = v35;
      if ( !v35 )
        break;
LABEL_48:
      if ( v21 > 0x10000 )
      {
        v36 = MmSizeOfMdl((PVOID)v8, v21);
        v52 = (PMDL)ExAllocatePoolWithTag(NonPagedPoolNx, v36, 0x6F666E49u);
        v35 = MemoryDescriptorList;
        if ( v52 )
          goto LABEL_52;
        v21 = 0x10000LL;
        v62 = 0x10000LL;
      }
      v52 = (PMDL)v73;
LABEL_52:
      v35->Next = 0LL;
      v37 = 8 * (((v21 + (v8 & 0xFFF) + 4095) >> 12) + 6);
      v35->Size = v37;
      v35->MdlFlags = 0;
      v38 = v8 & 0xFFFFFFFFFFFFF000uLL;
      v35->StartVa = (PVOID)v38;
      v39 = Base & 0xFFF;
      v35->ByteOffset = v39;
      v40 = v62;
      v35->ByteCount = v62;
      MmBuildMdlForNonPagedPool(v35);
      MemoryDescriptorList->MdlFlags |= 0x2000u;
      v52->Next = 0LL;
      v52->Size = v37;
      v52->StartVa = (PVOID)v38;
      v52->ByteOffset = v39;
      v52->ByteCount = v62;
      v52->MdlFlags = 0x2000;
      v14 |= 1u;
      v41 = v19;
      v42 = P;
      v43 = MiSwitchToTransition((ULONG_PTR)v52, (__int64)P, v41);
      v58 = v43;
      ByteCount = v52->ByteCount;
      if ( ByteCount == v62 )
      {
        v45 = 0;
      }
      else
      {
        v40 = (unsigned int)ByteCount;
        v45 = MemoryDescriptorList->ByteCount - ByteCount;
        MemoryDescriptorList->ByteCount -= v45;
      }
      if ( v52->ByteCount )
      {
        v63 = ((__int64 (__fastcall *)(PMDL, PMDL, PVOID))v67)(v52, MemoryDescriptorList, v65);
        if ( v63 < 0 )
          MiSlowRotateCopy((__int64)v52, (__int64)MemoryDescriptorList, (__int64)P);
        MiMarkMdlComplete((__int64)v52, (__int64)P);
        v46 = (unsigned __int64 *)&MemoryDescriptorList[1];
        for ( j = (unsigned __int64)MemoryDescriptorList->ByteCount >> 12; j; --j )
        {
          if ( !MI_IS_PFN(*v46) )
            MiDereferenceIoPages(1, v48, 1uLL);
          ++v46;
        }
        v43 = v58;
        v42 = P;
      }
      MiUnlockAndDereferenceVad(v42);
      v9 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v40 )
      {
        MiLogVirtualRotateEvent(Base, v40, (unsigned int)Direction);
        v9 = 0LL;
      }
      if ( v45 )
        MemoryDescriptorList->ByteCount += v45;
      if ( MemoryDescriptorList != (PMDL)v72 )
      {
        ExFreePoolWithTag(MemoryDescriptorList, 0);
        v9 = 0LL;
      }
      v6 = v52;
      if ( (v14 & 1) != 0 )
      {
        v14 &= ~1u;
        if ( v52->ByteCount )
        {
          MmUnlockPages(v52);
          v9 = 0LL;
        }
        if ( v52 != (PMDL)v73 )
        {
          ExFreePoolWithTag(v52, 0);
          v9 = 0LL;
        }
      }
      v12 = v40 + v55;
      v55 += v40;
      Base += v40;
      if ( v43 == 1 )
      {
        v27 = 1073741849;
        v7 = NumberOfBytes;
        goto LABEL_85;
      }
      v11 = Length - v40;
      Length -= v40;
      if ( !Length )
      {
        v27 = 0;
        v7 = NumberOfBytes;
        goto LABEL_85;
      }
      v51 = 0LL;
      v8 = Base;
      v13 = v64;
    }
    v21 = 0x10000LL;
    v62 = 0x10000LL;
LABEL_47:
    v35 = (struct _MDL *)v72;
    MemoryDescriptorList = (PMDL)v72;
    goto LABEL_48;
  }
  v27 = -1073741584;
LABEL_84:
  v6 = v51;
LABEL_85:
  if ( v9 )
  {
    MiUnlockAndDereferenceVad(v9);
    v7 = NumberOfBytes;
    v12 = v55;
  }
  if ( v27 < 0 )
  {
    v49 = (unsigned __int64 *)&v6[1];
    while ( v10 )
    {
      if ( !MI_IS_PFN(*v49) )
      {
        MiDereferenceIoPages(1, v50, 1uLL);
        --v10;
      }
      ++v49;
    }
    v7 = NumberOfBytes;
    v12 = v55;
  }
  *v7 = v12;
  return v27;
}
