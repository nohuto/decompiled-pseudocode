/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x140103E00
 * Callers:
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x1404E65E0 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiInsertVad @ 0x14004AD80 (MiInsertVad.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     MiAssignInitialPageAttribute @ 0x14013F0EC (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MiShowBadMapper @ 0x1401CEA7C (MiShowBadMapper.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 */

__int64 __fastcall MiMapLockedPagesInUserSpaceHelper(
        unsigned __int64 a1,
        ULONG_PTR *a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        int a7)
{
  unsigned __int64 v7; // rdi
  int v8; // r13d
  _KPROCESS *Process; // rbx
  unsigned __int64 v12; // r14
  unsigned int v13; // ebp
  KIRQL v14; // cl
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r8
  unsigned int v19; // r9d
  int ProtectionPfnCompatible; // esi
  __int64 v21; // rcx
  char v22; // al
  unsigned __int64 v23; // rdi
  __int64 v24; // r8
  _KSPIN_LOCK_QUEUE *v25; // r9
  __int64 v26; // r10
  __int64 v27; // rbx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v29; // rdx
  _QWORD *v30; // rbx
  unsigned __int64 v31; // rax
  int v32; // eax
  unsigned __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // r8
  int v39; // [rsp+30h] [rbp-68h] BYREF
  int v40; // [rsp+34h] [rbp-64h] BYREF
  unsigned __int16 *v41; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v43; // [rsp+A0h] [rbp+8h]
  unsigned int v44; // [rsp+B0h] [rbp+18h]
  KIRQL v45; // [rsp+D0h] [rbp+38h]

  v43 = a1;
  v7 = a1;
  v8 = 4;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a7 < 0 )
    v8 = 1;
  v13 = MiPlatformCacheAttributes[a4];
  if ( v13 )
  {
    if ( v13 == 2 )
      v8 |= 0x18u;
  }
  else
  {
    v8 |= 8u;
  }
  v41 = &Process[1].IdealNode[12];
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  v45 = v14;
  v15 = 0;
  if ( a6 )
  {
    MiInsertVad(a6, (__int64)Process);
    v14 = v45;
    v15 = (*(_DWORD *)(a6 + 48) >> 8) & 0x3F;
  }
  v44 = v15;
  do
  {
    MiMakeSystemAddressValid(v12, 0LL, v15, v14, 1);
    v17 = MI_GET_USED_PTES_HANDLE(v7);
    v39 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v39, v16, v18);
      while ( (*(_QWORD *)(v17 + 24) & 0x8000000000000000uLL) != 0 );
    }
    *(_QWORD *)(v17 + 16) ^= ((unsigned int)*(_QWORD *)(v17 + 16) ^ ((*(_QWORD *)(v17 + 16) & 0xFFFFC000) + 0x4000)) & 0xFFC000;
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiIsAddressValid(*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL);
    ProtectionPfnCompatible = v8;
    if ( a3 )
    {
      v13 = 1;
      v21 = 48LL * *a3 - 0x58000000000LL;
      ProtectionPfnCompatible = (*(_DWORD *)(v21 + 16) >> 5) & 0x1F;
      v22 = *(_BYTE *)(v21 + 34) >> 6;
      if ( v22 == 2 )
      {
        v13 = 2;
      }
      else if ( !v22 )
      {
        v13 = v19;
      }
      ++a3;
    }
    v23 = *a2;
    if ( MI_IS_PFN(*a2) )
    {
      v27 = 48 * v23 - v26;
      if ( !*(_WORD *)(v27 + 32) )
        MiShowBadMapper(v23);
      if ( (*(_BYTE *)(v27 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v27, v13, v24);
      if ( v13 != *(unsigned __int8 *)(v27 + 34) >> 6 )
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v27);
    }
    else
    {
      LockHandle.LockQueue.Next = v25;
      LockHandle.LockQueue.Lock = &qword_1402FF180;
      ProtectionPfnCompatible &= 7u;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle);
      }
      else
      {
        v29 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&qword_1402FF180, (__int64)&LockHandle);
        if ( v29 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v29, v24);
      }
      v30 = (_QWORD *)qword_1402FF190;
      if ( qword_1402FF190 )
      {
        do
        {
          v31 = v30[5];
          if ( v23 < v31 )
          {
            v30 = (_QWORD *)*v30;
          }
          else
          {
            if ( v23 < v31 + 512 )
              break;
            v30 = (_QWORD *)v30[1];
          }
        }
        while ( v30 );
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !v30 )
        KeBugCheckEx(0x1Au, 0x61949uLL, *a2, 1uLL, 0LL);
      v32 = *(unsigned __int16 *)(v30[6] + 2 * (*a2 - v30[5])) >> 14;
      if ( v32 )
      {
        if ( v32 == 2 )
          ProtectionPfnCompatible |= 0x38u;
      }
      else
      {
        ProtectionPfnCompatible |= 0x28u;
      }
    }
    v33 = MmProtectToPteMask[ProtectionPfnCompatible] & 0xFFFFFFFFFFFFFF7FuLL;
    v34 = v33 | ((HIBYTE(word_1402FE760) & 1 | (16 * (*a2 & 0xFFFFFFFFFLL))) << 8) | 0x25;
    if ( MmProtectToPteMask[ProtectionPfnCompatible] & 0x800 | ((HIBYTE(word_1402FE760) & 1 | (16 * (*a2 & 0xFFFFFFFFFLL))) << 8) & 0x800 )
      v34 = v33 | ((HIBYTE(word_1402FE760) & 1 | (16 * (*a2 & 0xFFFFFFFFFLL))) << 8) | 0x67;
    *(_QWORD *)v12 = v34;
    if ( (unsigned int)MiPteInShadowRange(v12) )
      MiWritePteShadow(v12, v34);
    v36 = MI_GET_PFN_FROM_PTE(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v40 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v40, v35, v37);
      while ( (*(_QWORD *)(v36 + 24) & 0x8000000000000000uLL) != 0 );
    }
    *(_QWORD *)(v36 + 24) ^= (*(_QWORD *)(v36 + 24) ^ (*(_QWORD *)(v36 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++a2;
    v14 = v45;
    v7 = v43 + 4096;
    v12 += 8LL;
    --a5;
    v43 += 4096LL;
    v15 = v44;
  }
  while ( a5 );
  if ( a6 )
    ++MEMORY[0xFFFFF58010804268];
  return MiUnlockWorkingSetExclusive((__int64)v41, v45, v37);
}
