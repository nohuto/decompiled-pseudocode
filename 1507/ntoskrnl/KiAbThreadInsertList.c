/*
 * XREFs of KiAbThreadInsertList @ 0x14012B960
 * Callers:
 *     KeAbProcessBaseIoPriorityChange @ 0x14000A100 (KeAbProcessBaseIoPriorityChange.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1400CA5E0 (KeAbProcessEffectiveIoPriorityChange.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     KiAbThreadBoostIoPriority @ 0x1400D635C (KiAbThreadBoostIoPriority.c)
 *     KiAbSetMinimumThreadPriority @ 0x1400F475C (KiAbSetMinimumThreadPriority.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiAbThreadInsertList(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  unsigned int v7; // esi

  v3 = 0;
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
  if ( *a3 == 1LL )
  {
    v3 = 1;
    *a3 = *a2;
    *a2 = a3;
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v3 )
    _InterlockedAdd16((volatile signed __int16 *)(a1 + 1416), 1u);
  return v3;
}
