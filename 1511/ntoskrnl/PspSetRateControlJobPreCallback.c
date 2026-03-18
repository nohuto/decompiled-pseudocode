/*
 * XREFs of PspSetRateControlJobPreCallback @ 0x140642F88
 * Callers:
 *     <none>
 * Callees:
 *     PspSetEffectiveRateControlJob @ 0x1406425E8 (PspSetEffectiveRateControlJob.c)
 */

__int64 __fastcall PspSetRateControlJobPreCallback(__int64 a1, __int64 a2)
{
  unsigned int v4; // r11d

  PspSetEffectiveRateControlJob(a1, *(_QWORD *)(a2 + 24), *(_DWORD *)(a2 + 32));
  if ( *(_QWORD *)a2 )
    return (*(unsigned int (__fastcall **)(__int64, _QWORD))a2)(a1, *(_QWORD *)(a2 + 16));
  return v4;
}
