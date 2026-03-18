/*
 * XREFs of KiAcquireReleaseThreadLock @ 0x14000E500
 * Callers:
 *     KeRundownApcQueues @ 0x140421134 (KeRundownApcQueues.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiAcquireReleaseThreadLock(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // edi
  __int64 result; // rax
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  _InterlockedOr(v5, 0);
  if ( *(_QWORD *)(a1 + 64) )
  {
    v3 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v3);
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
