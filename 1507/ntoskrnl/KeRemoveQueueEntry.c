/*
 * XREFs of KeRemoveQueueEntry @ 0x14012A138
 * Callers:
 *     IopCancelWaitCompletionPacket @ 0x14002DD10 (IopCancelWaitCompletionPacket.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KeRemoveQueueEntry(__int64 a1, _QWORD *a2)
{
  char v4; // bp
  unsigned __int8 CurrentIrql; // r14
  unsigned int v6; // esi
  __int64 v7; // rcx
  _QWORD *v8; // rax

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
  }
  if ( *a2 )
  {
    --*(_DWORD *)(a1 + 4);
    v7 = *a2;
    v8 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v8 != a2 )
      __fastfail(3u);
    *v8 = v7;
    v4 = 1;
    *(_QWORD *)(v7 + 8) = v8;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
  return v4;
}
