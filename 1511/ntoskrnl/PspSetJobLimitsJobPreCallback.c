/*
 * XREFs of PspSetJobLimitsJobPreCallback @ 0x1404B7344
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PspSetEffectiveJobLimits @ 0x1404B7374 (PspSetEffectiveJobLimits.c)
 */

__int64 __fastcall PspSetJobLimitsJobPreCallback(__int64 a1, __int64 a2)
{
  __int64 v5; // rax
  __int64 v6; // rbx

  PspSetEffectiveJobLimits(a1, a2);
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != a1 )
  {
    v5 = KeAbPreAcquire((ULONG_PTR)&qword_1402D4950, 0LL, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402D4950, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_1402D4950, v5, (ULONG_PTR)&qword_1402D4950);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1296), 0x100u);
  }
  return 0LL;
}
