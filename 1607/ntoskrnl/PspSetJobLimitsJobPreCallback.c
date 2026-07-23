/*
 * XREFs of PspSetJobLimitsJobPreCallback @ 0x1404D53A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     PspSetEffectiveJobLimits @ 0x1404D53D0 (PspSetEffectiveJobLimits.c)
 */

__int64 __fastcall PspSetJobLimitsJobPreCallback(__int64 a1, __int64 a2)
{
  _BYTE *v5; // rax
  _BYTE *v6; // rbx

  PspSetEffectiveJobLimits();
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != a1 )
  {
    v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1402F9CD0, 0LL, 0);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402F9CD0, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_1402F9CD0, v5, (ULONG_PTR)&qword_1402F9CD0);
    if ( v6 )
      v6[26] |= 1u;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1304), 0x100u);
  }
  return 0LL;
}
