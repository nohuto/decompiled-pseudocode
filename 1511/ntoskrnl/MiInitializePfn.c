/*
 * XREFs of MiInitializePfn @ 0x1400AA390
 * Callers:
 *     MiMapNewWorkingSetPage @ 0x140017418 (MiMapNewWorkingSetPage.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     MiAllocateKernelStackPages @ 0x1400DFB3C (MiAllocateKernelStackPages.c)
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 *     MiInitializeProtoPfn @ 0x1401E3058 (MiInitializeProtoPfn.c)
 *     MmAllocateIndependentPages @ 0x1403CBDCC (MmAllocateIndependentPages.c)
 *     MiSessionInitializeWorkingSetList @ 0x1404FF630 (MiSessionInitializeWorkingSetList.c)
 *     MiMapNewSession @ 0x1404FFD90 (MiMapNewSession.c)
 *     MiInitializeSystemWorkingSetList @ 0x14074A208 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeSystemImagePage @ 0x14074B5A8 (MiInitializeSystemImagePage.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     PsGetPagePriorityThread @ 0x140070140 (PsGetPagePriorityThread.c)
 *     MiSetPfnTbFlushStamp @ 0x140071D20 (MiSetPfnTbFlushStamp.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiInitializePfn(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 v8; // rax
  unsigned int v9; // esi
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v16; // r15
  unsigned int Queue_high; // ebp
  int v18; // ebp
  unsigned __int8 v19; // r12
  unsigned __int64 v20; // rax
  char v21; // cl
  char v22; // cl
  char result; // al
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (a4 & 4) != 0 )
    v8 = 32LL * a3;
  *(_QWORD *)(a1 + 16) = v8;
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 40) |= 0x200000000000000uLL;
  }
  else if ( (a4 & 8) == 0 )
  {
    *(_QWORD *)(a1 + 16) = v8 & 0xFFFFFFFFFF003FFFuLL;
  }
  if ( a3 == 31 )
  {
    v9 = 1;
  }
  else
  {
    v10 = a3 >> 3;
    if ( a3 >> 3 == 3 && (a3 & 7) != 0 )
    {
      v9 = dword_1403812A8;
    }
    else
    {
      v9 = 1;
      if ( v10 == 1 )
        v9 = MiPlatformCacheAttributes[0];
    }
  }
  *(_WORD *)(a1 + 32) = 1;
  if ( (a4 & 0x20) == 0 )
    *(_BYTE *)(a1 + 34) |= 0x10u;
  v24 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = MI_READ_PTE_LOCK_FREE(&v24);
  v13 = 0xFFFFFFFFFLL;
  v14 = (v11 >> 12) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) ^= (*(_QWORD *)(a1 + 40) ^ v14) & 0xFFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  v16 = 48 * v14 - 0x58000000000LL;
  Queue_high = HIDWORD(CurrentThread[1].Queue);
  if ( (Queue_high & 0x100) != 0 )
    v18 = (Queue_high >> 9) & 7;
  else
    LOBYTE(v18) = PsGetPagePriorityThread((__int64)CurrentThread);
  v19 = 17;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 0x10) != 0 )
      MiLockPageAtDpcInline(a1, v13, v12);
    else
      v19 = MiLockPageInline(a1);
  }
  MiLockNestedPageAtDpcInline(v16, v13, v12);
  *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != v9 )
    MiChangePageAttribute(a1, v9, 1LL);
  MiSetPfnTbFlushStamp(a1, 0LL, 1);
  v20 = *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(a1 + 8) = a2;
  v21 = *(_BYTE *)(a1 + 35);
  *(_QWORD *)(a1 + 24) = v20 | 1;
  v22 = *(_BYTE *)(a1 + 35) ^ (v18 ^ v21) & 7;
  result = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  *(_BYTE *)(a1 + 35) = v22;
  *(_BYTE *)(a1 + 34) = result;
  if ( (a4 & 0x40) != 0 )
    *(_BYTE *)(a1 + 35) = v22 | 0x20;
  if ( (a4 & 1) == 0 )
  {
    result = -1;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (a4 & 0x10) == 0 )
    {
      result = v19;
      __writecr8(v19);
    }
  }
  return result;
}
