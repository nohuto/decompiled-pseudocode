/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x140629118
 * Callers:
 *     NtLoadEnclaveData @ 0x14062A804 (NtLoadEnclaveData.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x140020390 (ExAcquireAutoExpandPushLockShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiMakeProtectionMask @ 0x140062870 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiCreatePteCopyList @ 0x1400BFE3C (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x1400BFE9C (MiReleasePteCopyList.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1400C8A30 (ExReleaseAutoExpandPushLockShared.c)
 *     MiGetPteFromCopyList @ 0x1400FE324 (MiGetPteFromCopyList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiInitializeEnclavePfn @ 0x1401DFD10 (MiInitializeEnclavePfn.c)
 *     MiReturnEnclavePage @ 0x1401DFE5C (MiReturnEnclavePage.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiGetPageForEnclave @ 0x140629DA8 (MiGetPageForEnclave.c)
 *     KeAddEnclavePage @ 0x14069EC48 (KeAddEnclavePage.c)
 */

__int64 __fastcall MiCopyPagesIntoEnclave(
        _KPROCESS *BugCheckParameter1,
        char a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        int a6,
        _QWORD *a7,
        __int64 a8)
{
  __int16 v8; // si
  char *PoolWithTag; // r12
  int v12; // r14d
  unsigned int ProtectionMask; // eax
  int v15; // r14d
  unsigned int v16; // r13d
  int v17; // edi
  unsigned int *v18; // rax
  __int64 v19; // r8
  unsigned int *v20; // r15
  int v21; // esi
  ULONG_PTR v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rax
  char v25; // cl
  char *v26; // rcx
  char *v27; // rdi
  int v28; // esi
  __int64 PageForEnclave; // rax
  ULONG_PTR v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  _QWORD *v33; // rax
  unsigned int v35; // [rsp+34h] [rbp-1E4h]
  int v36; // [rsp+3Ch] [rbp-1DCh] BYREF
  void *Src; // [rsp+40h] [rbp-1D8h]
  __int64 PteFromCopyList; // [rsp+48h] [rbp-1D0h]
  unsigned __int64 v39; // [rsp+50h] [rbp-1C8h]
  _QWORD *PteAddress; // [rsp+58h] [rbp-1C0h]
  unsigned int v41; // [rsp+60h] [rbp-1B8h]
  PVOID v42; // [rsp+68h] [rbp-1B0h]
  unsigned int *v43; // [rsp+70h] [rbp-1A8h]
  ULONG_PTR BugCheckParameter1a; // [rsp+78h] [rbp-1A0h]
  _QWORD *v45; // [rsp+80h] [rbp-198h]
  __int64 v46; // [rsp+88h] [rbp-190h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-188h]
  int *VmPartition; // [rsp+98h] [rbp-180h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-178h]
  char *v50; // [rsp+B0h] [rbp-168h]
  __int64 v51; // [rsp+B8h] [rbp-160h]
  unsigned int v52[6]; // [rsp+C0h] [rbp-158h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v53; // [rsp+D8h] [rbp-140h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+110h] [rbp-108h] BYREF

  v8 = (__int16)a4;
  Src = a4;
  v39 = a3;
  BugCheckParameter1a = (ULONG_PTR)BugCheckParameter1;
  v45 = a7;
  v46 = a8;
  MemoryDescriptorList.MdlFlags = 0;
  PoolWithTag = 0LL;
  v42 = 0LL;
  v12 = 0;
  if ( a6 < 0 )
    v12 = 8;
  if ( (a6 & 0x20000000) != 0 )
    v12 |= 0x10u;
  ProtectionMask = MiMakeProtectionMask(a6 & 0x5FFFFFFF);
  v41 = ProtectionMask;
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0 )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x400) != 0 )
      return 3221227012LL;
    v12 |= 4u;
  }
  if ( (ProtectionMask & 4) != 0 )
    v12 |= 2u;
  v15 = v12 | 1;
  if ( (v15 & 9) == 0 )
    return 3221225541LL;
  if ( a5 <= 0x14000 )
    v16 = ((a5 & 0xFFF) != 0) + (unsigned int)(a5 >> 12);
  else
    v16 = 20;
  MiCreatePteCopyList(v16 + 1, v16 + 1, (unsigned __int64)v52);
  if ( !v52[1] )
    return 3221225626LL;
  KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)&v53);
  v17 = 1;
  v18 = MiObtainReferencedVad(a3, &v36);
  v20 = v18;
  v43 = v18;
  if ( v18 && (v18[12] & 7) == 3 && (v18[12] & 0x40000) != 0 )
  {
    if ( (v18[22] & 1) != 0 )
      v15 |= 0x40u;
    if ( (v8 & 0xFFF) == 0
      || (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x10000uLL, 0x44456D4Du), (v42 = PoolWithTag) != 0LL) )
    {
      CurrentThread = KeGetCurrentThread();
      v22 = BugCheckParameter1a;
      v23 = *(_QWORD *)(BugCheckParameter1a + 1032);
      --CurrentThread->SpecialApcDisable;
      BugCheckParameter2 = ExAcquireAutoExpandPushLockShared(v23 + 16, 0LL, v19);
      v51 = (__int64)(*((_QWORD *)v20 + 8) << 25) >> 16;
      PteAddress = (_QWORD *)MiGetPteAddress(v39);
      VmPartition = MiGetVmPartition(v22 + 1280);
      v21 = 0;
      v36 = 0;
      *v45 = 0LL;
      while ( v16 )
      {
        KiUnstackDetachProcess(&v53, 0LL);
        v24 = v16;
        if ( v16 > 0x10 )
          v24 = 16LL;
        v35 = v24;
        v25 = a2;
        if ( a2 == 1 && (v24 & 0xFFFFFFFFFFFFFLL) != 0 )
        {
          v26 = (char *)Src + 4096 * v24;
          if ( (unsigned __int64)v26 > MmUserProbeAddress || v26 < Src )
            *(_BYTE *)MmUserProbeAddress = 0;
          v25 = 1;
        }
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, Src, (unsigned __int64)(unsigned int)v24 << 12);
          v27 = PoolWithTag;
        }
        else if ( v25 == 1 )
        {
          MemoryDescriptorList.Next = 0LL;
          MemoryDescriptorList.Size = 8
                                    * (((((unsigned __int64)(unsigned int)v24 << 12)
                                       + ((unsigned __int16)Src & 0xFFF)
                                       + 4095LL) >> 12)
                                     + 6);
          MemoryDescriptorList.MdlFlags = 0;
          MemoryDescriptorList.StartVa = (PVOID)((unsigned __int64)Src & 0xFFFFFFFFFFFFF000uLL);
          MemoryDescriptorList.ByteOffset = (unsigned __int16)Src & 0xFFF;
          MemoryDescriptorList.ByteCount = (_DWORD)v24 << 12;
          MmProbeAndLockPages(&MemoryDescriptorList, 0, IoReadAccess);
          v27 = (char *)MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
          if ( !v27 )
          {
            v21 = -1073741670;
            v17 = 0;
            break;
          }
        }
        else
        {
          v27 = (char *)Src;
        }
        Src = (char *)Src + 4096 * (unsigned __int64)v35;
        v16 -= v35;
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0LL, (__int64)&v53);
        v28 = v39;
        v50 = &v27[-v39];
        while ( 1 )
        {
          PageForEnclave = MiGetPageForEnclave(v20, VmPartition);
          v30 = PageForEnclave;
          if ( PageForEnclave == -1 )
            break;
          PteFromCopyList = (__int64)MiGetPteFromCopyList(v52, PageForEnclave, -1LL);
          v21 = KeAddEnclavePage(v51, v28 + (int)v50, PteFromCopyList << 25 >> 16, v28, v15, v46);
          v36 = v21;
          v31 = PteFromCopyList;
          *(_QWORD *)PteFromCopyList = 0LL;
          if ( MiPteInShadowRange(v31) )
            MiWritePteShadow(PteFromCopyList, 0LL);
          if ( v21 < 0 )
          {
            MiReturnEnclavePage(v30);
            goto LABEL_58;
          }
          MiInitializeEnclavePfn(v30, (__int64)PteAddress, v41);
          v32 = MmProtectToPteMask[v41] & 0xFFFFFFFFFFFFFF7FuLL | ((HIBYTE(word_1402FE760) & 1 | (16
                                                                                                * (v30 & 0xFFFFFFFFFLL))) << 8) | 0x25;
          if ( (v41 & 4) != 0 )
            v32 |= 0x42uLL;
          v33 = PteAddress;
          *PteAddress = v32;
          if ( MiPteInShadowRange((__int64)v33) )
            MiWritePteShadow((__int64)PteAddress, v32);
          v39 += 4096LL;
          ++PteAddress;
          --v35;
          *v45 += 4096LL;
          if ( !v35 )
            goto LABEL_58;
          v28 = v39;
        }
        v21 = -1073741801;
        v36 = -1073741801;
LABEL_58:
        v17 = 1;
        if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
          MmUnlockPages(&MemoryDescriptorList);
      }
      ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    else
    {
      v21 = -1073741670;
    }
  }
  else
  {
    v21 = -1073741800;
  }
  if ( v20 )
    MiUnlockAndDereferenceVad(v20);
  if ( v17 )
    KiUnstackDetachProcess(&v53, 0LL);
  if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
    MmUnlockPages(&MemoryDescriptorList);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  MiReleasePteCopyList((__int64)v52);
  return (unsigned int)v21;
}
