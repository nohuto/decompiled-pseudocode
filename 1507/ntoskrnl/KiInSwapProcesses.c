/*
 * XREFs of KiInSwapProcesses @ 0x140110624
 * Callers:
 *     KeSwapProcessOrStack @ 0x140164CD4 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiReadyOutSwappedThreads @ 0x1401106FC (KiReadyOutSwappedThreads.c)
 *     MmInSwapProcess @ 0x140110ACC (MmInSwapProcess.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiInSwapProcesses(_QWORD *a1)
{
  _DWORD *v2; // rbx
  __int64 v3; // rdx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // edi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 result; // rax

  do
  {
    v2 = a1 - 33;
    a1 = (_QWORD *)*a1;
    _InterlockedXor(v2 + 143, 6u);
    MmInSwapProcess(v2);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v5 = 0;
    while ( _interlockedbittestandset(v2, 7u) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
      while ( (*v2 & 0x80u) != 0 );
    }
    v6 = v2 + 62;
    v7 = *((_QWORD *)v2 + 31);
    if ( (_DWORD *)v7 == v2 + 62 )
    {
      v7 = 0LL;
    }
    else
    {
      v8 = (_QWORD *)*((_QWORD *)v2 + 32);
      if ( *(_QWORD **)(v7 + 8) != v6 || (_QWORD *)*v8 != v6 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *((_QWORD *)v2 + 32) = v2 + 62;
      *v6 = v6;
    }
    _InterlockedXor(v2 + 143, 4u);
    _InterlockedAnd(v2, 0xFFFFFF7F);
    if ( v7 )
    {
      LOBYTE(v3) = CurrentIrql;
      result = KiReadyOutSwappedThreads(v7, v3);
    }
    else
    {
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  while ( a1 );
  return result;
}
