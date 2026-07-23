/*
 * XREFs of MiSlistGetFreePage @ 0x140012D54
 * Callers:
 *     MiRemoveAnyPage @ 0x1400124B0 (MiRemoveAnyPage.c)
 *     MiGetFreeOrZeroPage @ 0x140054B20 (MiGetFreeOrZeroPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     KeCheckForZeroPage @ 0x1401573D0 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     MiPageNotZero @ 0x1401DFFEC (MiPageNotZero.c)
 */

__int64 __fastcall MiSlistGetFreePage(__int64 a1, int a2, unsigned int a3)
{
  _SLIST_HEADER *v4; // rcx
  PSLIST_ENTRY v5; // rax
  _QWORD *p_Next; // rdi
  __int64 v7; // kr00_8
  unsigned __int64 v8; // rbx
  ULONG_PTR v10; // rsi
  __int64 v11; // rdx
  char v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = (_SLIST_HEADER *)(*(_QWORD *)(a1 + 8LL * a2 + 1616) + 16LL * a3);
  if ( !LOWORD(v4->Alignment) )
    return -1LL;
  v5 = RtlpInterlockedPopEntrySList(v4);
  p_Next = &v5->Next;
  if ( !v5 )
    return -1LL;
  v5[1].Next = 0LL;
  v7 = (__int64)&v5[0x5800000000LL];
  v8 = (__int64)&v5[0x5800000000LL] / 48;
  if ( a2 )
  {
    v5[1].Next = (_SLIST_ENTRY *)128;
  }
  else if ( (MiFlags & 0x80u) != 0
         && v8 < 0x200000
         && (*(_BYTE *)(48 * v8 - 0x57FFFFFFFDDLL) & 0x40) == 0
         && (++dword_1402FED50 & MmPageValidationFrequency) == 0 )
  {
    if ( KeGetCurrentPrcb()->HyperPte )
    {
      v10 = MiMapPageInHyperSpaceWorker(v7 / 48, &v12, 0x80000000LL);
      if ( KeCheckForZeroPage(v10) )
        MiPageNotZero(v10, v7 / 48);
      LOBYTE(v11) = v12;
      MiUnmapPageInHyperSpaceWorker(v10, v11, 0x80000000LL);
    }
  }
  *p_Next = 0LL;
  return v7 / 48;
}
