/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x14065E930
 * Callers:
 *     NtLoadEnclaveData @ 0x140660068 (NtLoadEnclaveData.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiMakeProtectionMask @ 0x14002B880 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MiGetPteFromCopyList @ 0x140034700 (MiGetPteFromCopyList.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14008B5C0 (ExReleaseAutoExpandPushLockShared.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400C55E0 (ExAcquireAutoExpandPushLockShared.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiReleasePteCopyList @ 0x140104DB4 (MiReleasePteCopyList.c)
 *     MiCreatePteCopyList @ 0x140104EF8 (MiCreatePteCopyList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MiGetVmPartition @ 0x1401E8170 (MiGetVmPartition.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiInitializeEnclavePfn @ 0x1401F03C8 (MiInitializeEnclavePfn.c)
 *     MiReturnEnclavePage @ 0x1401F0518 (MiReturnEnclavePage.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiGetPageForEnclave @ 0x14065F5F8 (MiGetPageForEnclave.c)
 *     KeAddEnclavePage @ 0x1406E5CDC (KeAddEnclavePage.c)
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
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r15
  int v20; // esi
  ULONG_PTR v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // cl
  char *v25; // rcx
  char *v26; // rdi
  int v27; // esi
  __int64 PageForEnclave; // rax
  ULONG_PTR v29; // rdi
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r9
  unsigned int v37; // [rsp+34h] [rbp-1E4h]
  int v38; // [rsp+3Ch] [rbp-1DCh] BYREF
  void *Src; // [rsp+40h] [rbp-1D8h]
  char *v40; // [rsp+48h] [rbp-1D0h]
  unsigned int v41; // [rsp+50h] [rbp-1C8h]
  unsigned __int64 v42; // [rsp+58h] [rbp-1C0h]
  PVOID v43; // [rsp+60h] [rbp-1B8h]
  unsigned __int64 v44; // [rsp+68h] [rbp-1B0h]
  _QWORD *PteAddress; // [rsp+70h] [rbp-1A8h]
  ULONG_PTR BugCheckParameter1a; // [rsp+78h] [rbp-1A0h]
  _QWORD *v47; // [rsp+80h] [rbp-198h]
  int *VmPartition; // [rsp+90h] [rbp-188h]
  __int64 v49; // [rsp+98h] [rbp-180h]
  __int64 v50; // [rsp+A0h] [rbp-178h]
  unsigned __int64 PteFromCopyList; // [rsp+A8h] [rbp-170h]
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-168h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-160h]
  unsigned int v54[6]; // [rsp+C0h] [rbp-158h] BYREF
  _BYTE v55[56]; // [rsp+D8h] [rbp-140h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+110h] [rbp-108h] BYREF

  v8 = (__int16)a4;
  Src = a4;
  v42 = a3;
  BugCheckParameter1a = (ULONG_PTR)BugCheckParameter1;
  v47 = a7;
  v49 = a8;
  MemoryDescriptorList.MdlFlags = 0;
  PoolWithTag = 0LL;
  v43 = 0LL;
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
    if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x400) != 0
      && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
    {
      return 3221227012LL;
    }
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
  MiCreatePteCopyList(v16 + 1, v16 + 1, (unsigned __int64)v54);
  if ( !v54[1] )
    return 3221225626LL;
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v55);
  v17 = 1;
  v18 = MiObtainReferencedVad(a3, &v38);
  v19 = v18;
  v44 = v18;
  if ( v18 && (*(_BYTE *)(v18 + 48) & 7) == 3 && (*(_DWORD *)(v18 + 48) & 0x40000) != 0 )
  {
    if ( (*(_DWORD *)(v18 + 88) & 1) != 0 )
      v15 |= 0x40u;
    if ( (v8 & 0xFFF) == 0
      || (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x10000uLL, 0x44456D4Du), (v43 = PoolWithTag) != 0LL) )
    {
      CurrentThread = KeGetCurrentThread();
      v21 = BugCheckParameter1a;
      v22 = *(_QWORD *)(BugCheckParameter1a + 1032);
      --CurrentThread->SpecialApcDisable;
      BugCheckParameter2 = ExAcquireAutoExpandPushLockShared(v22 + 16, 0LL);
      v50 = (__int64)(*(_QWORD *)(v19 + 64) << 25) >> 16;
      PteAddress = (_QWORD *)MiGetPteAddress(v42);
      VmPartition = MiGetVmPartition(v21 + 1280);
      v20 = 0;
      v38 = 0;
      *v47 = 0LL;
      while ( v16 )
      {
        KiUnstackDetachProcess((struct _KTHREAD *)v55, 0);
        v23 = v16;
        if ( v16 > 0x10 )
          v23 = 16LL;
        v37 = v23;
        v24 = a2;
        if ( a2 == 1 && (v23 & 0xFFFFFFFFFFFFFLL) != 0 )
        {
          v25 = (char *)Src + 4096 * v23;
          if ( (unsigned __int64)v25 > 0x7FFFFFFF0000LL || v25 < Src )
            MEMORY[0x7FFFFFFF0000] = 0;
          v24 = 1;
        }
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, Src, (unsigned __int64)(unsigned int)v23 << 12);
          v26 = PoolWithTag;
        }
        else if ( v24 == 1 )
        {
          MemoryDescriptorList.Next = 0LL;
          MemoryDescriptorList.Size = 8
                                    * (((((unsigned __int64)(unsigned int)v23 << 12)
                                       + ((unsigned __int16)Src & 0xFFF)
                                       + 4095LL) >> 12)
                                     + 6);
          MemoryDescriptorList.MdlFlags = 0;
          MemoryDescriptorList.StartVa = (PVOID)((unsigned __int64)Src & 0xFFFFFFFFFFFFF000uLL);
          MemoryDescriptorList.ByteOffset = (unsigned __int16)Src & 0xFFF;
          MemoryDescriptorList.ByteCount = (_DWORD)v23 << 12;
          MmProbeAndLockPages(&MemoryDescriptorList, 0, IoReadAccess);
          v26 = (char *)MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
          if ( !v26 )
          {
            v20 = -1073741670;
            v17 = 0;
            break;
          }
        }
        else
        {
          v26 = (char *)Src;
        }
        Src = (char *)Src + 4096 * (unsigned __int64)v37;
        v16 -= v37;
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0, (__int64)v55);
        v27 = v42;
        v40 = &v26[-v42];
        while ( 1 )
        {
          PageForEnclave = MiGetPageForEnclave(v19, VmPartition);
          v29 = PageForEnclave;
          if ( PageForEnclave == -1 )
            break;
          PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(v54, PageForEnclave, -1LL);
          v20 = KeAddEnclavePage(v50, v27 + (int)v40, (__int64)(PteFromCopyList << 25) >> 16, v27, v15, v49);
          v38 = v20;
          v30 = PteFromCopyList;
          *(_QWORD *)PteFromCopyList = 0LL;
          if ( MiPteInShadowRange(v30) )
            MiWritePteShadow(v31, 0LL);
          if ( v20 < 0 )
          {
            MiReturnEnclavePage(v29);
            goto LABEL_59;
          }
          MiInitializeEnclavePfn(v29, (__int64)PteAddress, v41);
          v32 = MmProtectToPteMask[v41] & 0xFFFFFFFFFFFFFF7FuLL | ((HIBYTE(word_140326AE8) & 1 | (16
                                                                                                * (v29 & 0xFFFFFFFFFLL))) << 8) | 0x25;
          if ( (v41 & 4) != 0 )
            v32 |= 0x42uLL;
          v33 = (unsigned __int64)PteAddress;
          *PteAddress = v32;
          if ( MiPteInShadowRange(v33) )
            MiWritePteShadow(v34, v32);
          v42 += 4096LL;
          PteAddress = (_QWORD *)(v35 + 8);
          --v37;
          *v47 += 4096LL;
          if ( !v37 )
            goto LABEL_59;
          v27 = v42;
        }
        v20 = -1073741801;
        v38 = -1073741801;
LABEL_59:
        v17 = 1;
        if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
          MmUnlockPages(&MemoryDescriptorList);
      }
      ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    else
    {
      v20 = -1073741670;
    }
  }
  else
  {
    v20 = -1073741800;
  }
  if ( v19 )
    MiUnlockAndDereferenceVad((char *)v19);
  if ( v17 )
    KiUnstackDetachProcess((struct _KTHREAD *)v55, 0);
  if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
    MmUnlockPages(&MemoryDescriptorList);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  MiReleasePteCopyList((__int64)v54);
  return (unsigned int)v20;
}
