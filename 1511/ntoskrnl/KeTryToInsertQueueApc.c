/*
 * XREFs of KeTryToInsertQueueApc @ 0x1401C77E0
 * Callers:
 *     EtwpQueueStackWalkApc @ 0x140210C68 (EtwpQueueStackWalkApc.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x140031480 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140031620 (KiInsertQueueApc.c)
 *     KeGetEffectiveIrql @ 0x14009FE70 (KeGetEffectiveIrql.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 */

char __fastcall KeTryToInsertQueueApc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  char v7; // bl
  char v8; // r10
  __int64 v9; // r11

  v3 = *(_QWORD *)(a1 + 8);
  if ( !KeIsThreadRunning(v3) )
    return 0;
  KeGetEffectiveIrql();
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
    return 0;
  v7 = 1;
  if ( (*(_DWORD *)(v3 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v7 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc(v9, a1, v8);
  }
  *(_QWORD *)(v3 + 64) = 0LL;
  return v7;
}
