/*
 * XREFs of KiFlushQueueApc @ 0x14000F0C4
 * Callers:
 *     KeRundownApcQueues @ 0x140421134 (KeRundownApcQueues.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

_QWORD *__fastcall KiFlushQueueApc(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // edi
  _QWORD *result; // rax
  unsigned int v7; // edi
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rdx

  if ( a2 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( *(_QWORD *)(a1 + 168) == a1 + 168 )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      __writecr8(CurrentIrql);
      return 0LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16LL * a2 + 152) == a1 + 16LL * a2 + 152 )
      return 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7);
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
  }
  v8 = (_QWORD *)(16LL * a2 + a1 + 152);
  result = (_QWORD *)*v8;
  if ( (_QWORD *)*v8 == v8 )
  {
    result = 0LL;
  }
  else
  {
    v9 = (_QWORD *)v8[1];
    if ( (_QWORD *)result[1] != v8 || (_QWORD *)*v9 != v8 )
      __fastfail(3u);
    *v9 = result;
    result[1] = v9;
    v10 = result;
    do
    {
      *((_BYTE *)v10 + 66) = 0;
      v10 = (_QWORD *)*v10;
    }
    while ( v10 != result );
    v8[1] = v8;
    *v8 = v8;
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  __writecr8(CurrentIrql);
  return result;
}
