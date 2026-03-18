/*
 * XREFs of PspSetJobLimitsJobPreCallback @ 0x14054FEDC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     PspSetEffectiveJobLimits @ 0x14054FF0C (PspSetEffectiveJobLimits.c)
 */

__int64 __fastcall PspSetJobLimitsJobPreCallback(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx

  PspSetEffectiveJobLimits(a1, a2);
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != a1 )
  {
    v6 = KeAbPreAcquire((ULONG_PTR)&qword_140323A70, 0LL, 0LL, v4);
    v8 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140323A70, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140323A70, v6, (ULONG_PTR)&qword_140323A70, v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1296), 0x100u);
  }
  return 0LL;
}
