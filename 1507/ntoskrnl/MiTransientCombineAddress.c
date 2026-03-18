/*
 * XREFs of MiTransientCombineAddress @ 0x14022C8AC
 * Callers:
 *     MiRaisedIrqlFault @ 0x140223EF8 (MiRaisedIrqlFault.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiCombineCompareThread @ 0x140227B24 (MiCombineCompareThread.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiTransientCombineAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int8 CurrentIrql; // r14
  int v7; // ett
  _QWORD *v8; // rbx
  int v9; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  if ( !dword_14034EF04 )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034EF00);
  }
  else
  {
    _m_prefetchw(&dword_14034EF00);
    v7 = dword_14034EF00 & 0x7FFFFFFF;
    if ( v7 != _InterlockedCompareExchange(
                 &dword_14034EF00,
                 (dword_14034EF00 & 0x7FFFFFFF) + 1,
                 dword_14034EF00 & 0x7FFFFFFF) )
      ExpWaitForSpinLockSharedAndAcquire(&dword_14034EF00);
  }
  v8 = (_QWORD *)qword_14034EF08;
  while ( v8 )
  {
    v9 = MiCombineCompareThread(a1, (__int64)v8);
    if ( v9 >= 0 )
    {
      if ( v9 <= 0 )
        break;
      v8 = (_QWORD *)v8[1];
    }
    else
    {
      v8 = (_QWORD *)*v8;
    }
  }
  if ( v8 && v8[5] != ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    v8 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EF00, retaddr);
  }
  else
  {
    _InterlockedAnd(&dword_14034EF00, 0xBFFFFFFF);
    _InterlockedDecrement(&dword_14034EF00);
  }
  __writecr8(CurrentIrql);
  LOBYTE(v2) = v8 != 0LL;
  return v2;
}
