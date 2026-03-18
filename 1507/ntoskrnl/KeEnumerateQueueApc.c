/*
 * XREFs of KeEnumerateQueueApc @ 0x140204424
 * Callers:
 *     DbgkpLkmdSnapThread @ 0x1401E1598 (DbgkpLkmdSnapThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeEnumerateQueueApc(
        __int64 a1,
        void (__fastcall *a2)(_QWORD *, __int64, __int64),
        __int64 a3,
        char *a4)
{
  char v7; // bl
  char v8; // bp
  unsigned __int8 CurrentIrql; // r15
  unsigned int v10; // edi
  _QWORD **v11; // r14
  _QWORD *i; // rdi
  __int64 result; // rax

  if ( a4 )
  {
    v7 = *a4;
    v8 = *a4;
  }
  else
  {
    v7 = 0;
    v8 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  do
  {
    v11 = (_QWORD **)(16LL * v7 + a1 + 152);
    for ( i = *v11; i != v11; i = (_QWORD *)*i )
      a2(i - 2, 88LL, a3);
    ++v7;
  }
  while ( v7 <= v8 );
  *(_QWORD *)(a1 + 64) = 0LL;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
