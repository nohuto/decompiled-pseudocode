/*
 * XREFs of MiMapUserLargePages @ 0x1401E1F60
 * Callers:
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiCloneProcessAddressSpace @ 0x14046100C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14001EC70 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiUnlockVad @ 0x140038910 (MiUnlockVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiLocateVadEvent @ 0x1400B8A24 (MiLocateVadEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401D3510 (MiLogPerfMemoryRangeEvent.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapUserLargePages(__int64 a1, unsigned int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdi
  KIRQL v21; // al
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r12
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // r13
  unsigned __int8 v28; // al
  unsigned __int64 v29; // rcx
  __int64 result; // rax
  KIRQL v31; // [rsp+30h] [rbp-69h]
  __int64 v34; // [rsp+40h] [rbp-59h]
  unsigned __int64 v35; // [rsp+48h] [rbp-51h]
  __int64 v36; // [rsp+50h] [rbp-49h]
  _QWORD *v37; // [rsp+58h] [rbp-41h]
  _QWORD *v38; // [rsp+60h] [rbp-39h]
  __int64 v39; // [rsp+68h] [rbp-31h]
  __int64 v41; // [rsp+80h] [rbp-19h]
  PVOID P[2]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v43; // [rsp+A0h] [rbp+7h]
  __int64 v44; // [rsp+B0h] [rbp+17h]

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v34 = 0LL;
  v39 = (__int64)CurrentThread;
  v5 = (unsigned int)MmMakeProtectNotWriteCopy[(*(_DWORD *)(a1 + 48) >> 3) & 0x1F];
  v6 = (((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12 >> 18) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v41 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v38 = (_QWORD *)v6;
  v7 = MmProtectToPteMask[v5] | 0xFFFFFFFFF021LL;
  v8 = ((8 * (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))) & 0x7FFFFFFFF8LL)
     - 0x98000000000LL;
  if ( v8 + 0x904C0000000LL <= 0x3FFFFFFF )
    v7 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v8 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && v8 >= 0xFFFFF68000000000uLL
    || v8 >= 0xFFFFF6FB40000000uLL
    && v8 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || v8 >= 0xFFFFF6FB7DA00000uLL
    && v8 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || v8 >= 0xFFFFF6FB7DBED000uLL
    && v8 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v7 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v8) )
    v7 |= 0x100uLL;
  if ( (v5 & 4) != 0 )
    v7 |= 0x42uLL;
  v9 = v7 | 0xA0;
  MiLockVad((__int64)CurrentThread, v4);
  v10 = MiLocateVadEvent(v4, 16)[2];
  *(_OWORD *)P = *(_OWORD *)v10;
  v43 = *(_OWORD *)(v10 + 16);
  v44 = *(_QWORD *)(v10 + 32);
  if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 || **(_QWORD **)(v10 + 8) != v10 )
    __fastfail(3u);
  *((_QWORD *)P[0] + 1) = P;
  *(_QWORD *)P[1] = P;
  memset((void *)v10, 0, 0x28uLL);
  *(_BYTE *)(v10 + 28) = BYTE12(v43);
  *(_QWORD *)(v10 + 32) = v44;
  MiUnlockVad((__int64)CurrentThread, v4);
  v11 = a3;
  while ( 1 )
  {
    v12 = P[0];
    if ( P[0] == P )
      break;
    v13 = *(_QWORD *)P[0];
    if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v13 + 8) != P[0] )
      __fastfail(3u);
    v14 = P[0];
    v37 = P[0];
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v13 + 8) = P;
    v15 = 0LL;
    v16 = v12[2];
    v36 = 0LL;
    v17 = 0LL;
    v18 = 3 * v16;
    v9 ^= (v9 ^ (v16 << 12)) & 0xFFFFFFFFF000LL;
    v19 = v14[3];
    v34 += v19;
    v20 = 16 * v18 - 0x58000000000LL;
    v35 = v6 + 8 * (v19 >> 9);
    MiLockVad(v39, v4);
    v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a3 + 1280));
    v31 = v21;
    if ( v6 < v35 )
    {
      do
      {
        if ( !v15 || (v6 & 0xFFF) == 0 )
        {
          v36 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiMakeSystemAddressValid(v6, 0LL, a2, v21, 1);
          v17 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v36) - 0x58000000000LL;
        }
        MiLockPageAtDpcInline(v17, v22, v23);
        *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v17, 1u);
        v24 = (__int64)(v6 << 25) >> 16;
        v25 = MI_GET_PAGE_FRAME_FROM_PTE(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v26 = v20 + 24576;
        v27 = v25 & 0xFFFFFFFFFLL;
        do
        {
          *(_QWORD *)(v20 + 16) = 0LL;
          v28 = MiLockPageInline(v20);
          v29 = *(_QWORD *)(v20 + 40) & 0xFFFFFFF000000000uLL;
          *(_QWORD *)(v20 + 8) = v24;
          *(_QWORD *)(v20 + 40) = v27 | v29;
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v28);
          v20 += 48LL;
          v24 += 8LL;
        }
        while ( v20 < v26 );
        *v38 = v9;
        v15 = v36;
        if ( MiPteInShadowRange((__int64)v38) )
          MiWritePteShadow((__int64)v38, v9);
        v6 = (unsigned __int64)(v38 + 1);
        v38 = (_QWORD *)v6;
        v9 ^= (v9 ^ ((v9 & 0xFFFFFFFFFFFFF000uLL) + 0x200000)) & 0xFFFFFFFFF000LL;
        v21 = v31;
      }
      while ( v6 < v35 );
      v14 = v37;
      v4 = a1;
    }
    v11 = a3;
    LOBYTE(v22) = v21;
    MiUnlockWorkingSetExclusive(a3 + 1280, v22, v23);
    MiUnlockVad(v39, v4);
    ExFreePoolWithTag(v14, 0);
  }
  result = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    return MiLogPerfMemoryRangeEvent(v41, v11, 0x1Bu, v34);
  return result;
}
