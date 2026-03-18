/*
 * XREFs of KeTryToInsertQueueApc @ 0x140204508
 * Callers:
 *     EtwpQueueStackWalkApc @ 0x140260000 (EtwpQueueStackWalkApc.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x14000D028 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x14000D1B4 (KiInsertQueueApc.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 */

char __fastcall KeTryToInsertQueueApc(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r10
  struct _KPRCB *CurrentPrcb; // rsi
  char v6; // di
  __int64 v7; // r10
  char v8; // r11

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v1 + 388) != 2 || *(_DWORD *)(v1 + 536) != KeGetPcr()->Prcb.Number )
    return 0;
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    KeGetCurrentIrql();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 64), 0LL) )
    return 0;
  v6 = 1;
  if ( (*(_DWORD *)(v1 + 116) & 0x4000) == 0 || *(_BYTE *)(v4 + 82) )
  {
    v6 = 0;
  }
  else
  {
    *(_BYTE *)(v4 + 82) = 1;
    *(_QWORD *)(v4 + 64) = v2;
    *(_QWORD *)(v4 + 72) = v3;
    KiInsertQueueApc(v4);
    KiSignalThreadForApc((__int64)CurrentPrcb, v7, v8);
  }
  *(_QWORD *)(v1 + 64) = 0LL;
  return v6;
}
