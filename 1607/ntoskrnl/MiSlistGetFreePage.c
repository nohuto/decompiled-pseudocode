/*
 * XREFs of MiSlistGetFreePage @ 0x140060FF8
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x14003D800 (MiGetFreeOrZeroPage.c)
 *     MiRemoveAnyPage @ 0x1400642C0 (MiRemoveAnyPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     KeCheckForZeroPage @ 0x140162310 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     MiPageNotZero @ 0x1401F2AB8 (MiPageNotZero.c)
 *     MiSetFreshPfnFromFreeList @ 0x1401F2DD8 (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiSlistGetFreePage(__int64 a1, int a2, unsigned int a3)
{
  _SLIST_HEADER *v4; // rcx
  PSLIST_ENTRY v6; // rax
  _QWORD *p_Next; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  _BYTE v11[16]; // [rsp+50h] [rbp+50h] BYREF

  v4 = (_SLIST_HEADER *)(*(_QWORD *)(a1 + 8LL * a2 + 1744) + 16LL * a3);
  if ( !LOWORD(v4->Alignment) )
    return -1LL;
  v6 = RtlpInterlockedPopEntrySList(v4);
  p_Next = &v6->Next;
  if ( !v6 )
    return -1LL;
  v6[1].Next = 0LL;
  v8 = (__int64)&v6[0x5800000000LL] / 48;
  if ( a2 )
  {
    MiSetFreshPfnFromFreeList(v6);
  }
  else if ( (MiFlags & 0x80u) != 0
         && v8 < 0x200000
         && (*(_BYTE *)(48 * v8 - 0x57FFFFFFFDDLL) & 0x40) == 0
         && (++dword_140327160 & MmPageValidationFrequency) == 0 )
  {
    if ( KeGetCurrentPrcb()->HyperPte )
    {
      v9 = MiMapPageInHyperSpaceWorker(
             (__int64)&v6[0x5800000000LL] / 48,
             (unsigned __int8 *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL),
             0x80000000);
      if ( KeCheckForZeroPage(v9) )
        MiPageNotZero(v9, (__int64)(p_Next + 0xB000000000LL) / 48);
      LOBYTE(v10) = *(_BYTE *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL);
      MiUnmapPageInHyperSpaceWorker(v9, v10);
    }
  }
  *p_Next = 0LL;
  return (__int64)(p_Next + 0xB000000000LL) / 48;
}
