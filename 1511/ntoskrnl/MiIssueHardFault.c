/*
 * XREFs of MiIssueHardFault @ 0x140039650
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiResolvePageTablePage @ 0x14004CC60 (MiResolvePageTablePage.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiGetEffectivePagePriorityThread @ 0x140011A18 (MiGetEffectivePagePriorityThread.c)
 *     MiReferenceInPageFile @ 0x140039C9C (MiReferenceInPageFile.c)
 *     MiGetSessionIdForVa @ 0x140039DB4 (MiGetSessionIdForVa.c)
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 *     MiIssueHardFaultIo @ 0x14003A3B8 (MiIssueHardFaultIo.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiLogPageAccess @ 0x14005A690 (MiLogPageAccess.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiLockPageAndSetDirty @ 0x1400B820C (MiLockPageAndSetDirty.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     PfHardFaultRecord @ 0x1400DE608 (PfHardFaultRecord.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiIssueHardFault(
        _BYTE *SpinLock,
        unsigned __int8 a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r12
  __int64 v8; // r14
  char v9; // bl
  unsigned int SessionIdForVa; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rcx
  int v16; // r8d
  bool v17; // zf
  char v18; // dl
  __int64 v19; // rdx
  __int64 v20; // r9
  _QWORD *v21; // rdx
  char v22; // cl
  ULONG_PTR *v23; // rax
  _QWORD *v24; // rdx
  ULONG_PTR *v25; // rcx
  __int64 result; // rax
  __int64 v27; // r14
  unsigned __int64 v28; // rdi
  int v29; // esi
  unsigned __int64 v30; // rbx
  __int64 v31; // rbx
  unsigned __int64 v32; // r15
  __int64 v33; // [rsp+0h] [rbp-60h]
  _DWORD v34[16]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 v35; // [rsp+60h] [rbp+0h]
  __int64 v36; // [rsp+68h] [rbp+8h] BYREF
  __int64 v37; // [rsp+70h] [rbp+10h] BYREF
  __int64 v38; // [rsp+78h] [rbp+18h]
  unsigned __int64 v39; // [rsp+80h] [rbp+20h]

  v6 = *(_QWORD *)(a4 + 152);
  v8 = *(_QWORD *)(a4 + 200);
  v35 = a2;
  v9 = 0;
  v39 = a3;
  *(_QWORD *)(a4 + 216) = a3;
  SessionIdForVa = MiGetSessionIdForVa(a3);
  v12 = MiReferenceInPageFile(a4, SessionIdForVa);
  LOBYTE(v13) = 1;
  v14 = v12;
  MiUnlockWorkingSetExclusive(SpinLock, v13);
  if ( v14 )
  {
    *(_QWORD *)(a4 + 192) = v14;
    v9 = (*(_BYTE *)(v8 + 56) & 0x20) != 0;
  }
  v38 = a5 & 1;
  if ( (a5 & 1) == 0 || *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v6 + 1738);
  if ( (SpinLock[216] & 7) != 0 )
    --*(_WORD *)(v6 + 486);
  else
    --*(_WORD *)(v6 + 484);
  __writecr8(v35);
  if ( (*(_BYTE *)(a4 + 191) & 1) != 0 )
  {
    v15 = *(_QWORD *)(a4
                    + 8LL * ((unsigned int)((*(_DWORD *)(a4 + 296) & 0xFFF) != 0) + (*(_DWORD *)(a4 + 296) >> 12))
                    + 296);
    MiZeroPhysicalPage(v15, 3LL, *(unsigned __int8 *)(48 * v15 - 0x57FFFFFFFDELL) >> 6);
  }
  v16 = *(_DWORD *)(a4 + 296);
  *(_DWORD *)(a4 + 180) = v16;
  v17 = *(_DWORD *)(a4 + 36) == 0;
  v36 = 0LL;
  if ( v17 )
  {
    v18 = *(_BYTE *)(a4 + 189);
    if ( (v18 & 4) == 0 || (*(_BYTE *)(a4 + 191) & 0x10) == 0 || v18 < 0 )
    {
      if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_140317B14 & 1) != 0) && v18 >= 0 && (v18 & 4) == 0 )
      {
        v19 = *(_QWORD *)(a4 + 96);
        v20 = *(_QWORD *)(a4 + 216);
        v33 = *(_QWORD *)(a4 + 192);
        v36 = (__int64)v34;
        PfHardFaultRecord((unsigned int)v34, v19, v16, v20, v33, v6);
      }
      if ( (SpinLock[219] & 0xC0) == 0xC0 && !*((_QWORD *)SpinLock + 30) )
        KiStackAttachProcess((ULONG_PTR)PsInitialSystemProcess);
      v9 |= 2u;
      MiIssueHardFaultIo(a4, v9 & 1, a5);
    }
  }
  else
  {
    v9 |= 2u;
  }
  if ( (a5 & 1) != 0 )
  {
    v21 = (_QWORD *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v22 = SpinLock[216];
      if ( (v22 & 7u) >= 2 )
        *(_BYTE *)(a4 + 189) ^= (*(_BYTE *)(a4 + 189) ^ (v22 - 1)) & 3;
      if ( (v9 & 2) != 0 )
      {
        v23 = (ULONG_PTR *)v21[6];
        v24 = v21 + 5;
        *(_QWORD *)a4 = v24;
        *(_QWORD *)(a4 + 8) = v23;
        if ( (_QWORD *)*v23 != v24 )
          __fastfail(3u);
        *v23 = a4;
        v24[1] = a4;
      }
      else
      {
        v25 = (ULONG_PTR *)v21[8];
        *(_QWORD *)a4 = v21 + 7;
        *(_QWORD *)(a4 + 8) = v25;
        if ( (_QWORD *)*v25 != v21 + 7 )
          __fastfail(3u);
        *v25 = a4;
        v21[8] = a4;
        v21[9] += *(unsigned int *)(a4 + 180);
      }
      __writecr8(1uLL);
      if ( (SpinLock[216] & 7) != 0 )
        KiLeaveGuardedRegionUnsafe(v6);
      else
        KeLeaveCriticalRegionThread(v6);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SpinLock);
      return 0LL;
    }
  }
  v27 = *(_QWORD *)(a4 + 240);
  v28 = *(_QWORD *)(a4 + 224);
  if ( *(__int64 *)(v27 + 8) >= 0 )
    v27 = 0LL;
  result = MiWaitForInPageComplete(a4, (__int64)&v36);
  --*(_BYTE *)(v6 + 1738);
  v29 = result;
  if ( !(_DWORD)result )
  {
    if ( !v27 )
      v27 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v37) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v27 + 40) & 0x200000000000000LL) != 0 )
    {
      v28 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v29 = MiCompleteProtoPteFault((_DWORD)SpinLock, v35, v39, v37, a6, 0, a5);
      if ( v29 >= 0 )
        goto LABEL_47;
      return (unsigned int)v29;
    }
    if ( v38 )
    {
      if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      {
        v30 = MI_READ_PTE_LOCK_FREE(v28) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        *(_QWORD *)v28 = v30;
        if ( (unsigned int)MiPteInShadowRange(v28) )
          MiWritePteShadow(v28, v30);
      }
    }
    v31 = MmProtectToPteMask[(*(_QWORD *)v28 >> 5) & 0x1FLL] ^ (*(_QWORD *)v28 ^ MmProtectToPteMask[(*(_QWORD *)v28 >> 5) & 0x1FLL]) & 0xFFFFFFFFF000LL | 0x21;
    if ( v28 + 0x904C0000000LL <= 0x3FFFFFFF )
      v31 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v28 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v28 >= 0xFFFFF68000000000uLL
      || v28 >= 0xFFFFF6FB40000000uLL
      && v28 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || v28 >= 0xFFFFF6FB7DA00000uLL
      && v28 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
      || v28 >= 0xFFFFF6FB7DBED000uLL
      && v28 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v31 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v28) )
      v31 |= 0x100uLL;
    if ( a6 )
    {
      if ( (v31 & 0x800) != 0 )
      {
        v31 |= 0x42uLL;
        if ( (*(_BYTE *)(v27 + 34) & 0x10) == 0 )
        {
          if ( (unsigned int)MI_GET_PAGING_FILE_OFFSET(v27 + 16) )
            MiLockPageAndSetDirty(v27, 1LL);
        }
      }
    }
    if ( !v38 )
      goto LABEL_83;
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      *(_QWORD *)v28 = v31;
      if ( (unsigned int)MiPteInShadowRange(v28) )
        MiWritePteShadow(v28, v31);
      *(_QWORD *)v27 = 0LL;
      return 276LL;
    }
    v32 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) != 5 )
LABEL_83:
      v32 = 0LL;
    if ( MiAllocateWsle(SpinLock, v28, v27, 0LL, v31, v32) )
    {
LABEL_47:
      if ( dword_1402FED88 && (_DWORD)v36 != 2 && (unsigned int)MiGetEffectivePagePriorityThread(v6) >= dword_1402FEDB0 )
        MiLogPageAccess(SpinLock, v28 | 1);
      if ( !v29 )
        return 276;
      return (unsigned int)v29;
    }
    MiLockAndDecrementShareCount(v27, 0);
    return (unsigned int)-1073741801;
  }
  return result;
}
