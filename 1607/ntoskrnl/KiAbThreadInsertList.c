/*
 * XREFs of KiAbThreadInsertList @ 0x1400ACCF0
 * Callers:
 *     PsBoostThreadIoEx @ 0x14002D440 (PsBoostThreadIoEx.c)
 *     ExpApplyPriorityBoost @ 0x14005D2D0 (ExpApplyPriorityBoost.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140062420 (KeAbProcessEffectiveIoPriorityChange.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     KiAbSetMinimumThreadPriority @ 0x14006C0E4 (KiAbSetMinimumThreadPriority.c)
 *     KiAbThreadBoostIoPriority @ 0x14006C5A4 (KiAbThreadBoostIoPriority.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1400721B0 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAbThreadInsertList(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v8);
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
    _InterlockedAdd16((volatile signed __int16 *)(a1 + 1420), 1u);
  return v3;
}
