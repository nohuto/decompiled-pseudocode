/*
 * XREFs of IoFindDeviceThatFailedIrp @ 0x1400B25F4
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1400083A0 (PnpDeviceCompletionRoutine.c)
 *     PopDiagTraceIrpFinish @ 0x14012BE68 (PopDiagTraceIrpFinish.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1401D0F78 (PnpDiagnosticCompletionRoutine.c)
 *     PopSystemIrpCompletion @ 0x1403D12D8 (PopSystemIrpCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoFindDeviceThatFailedIrp(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // edx
  __int64 v3; // rcx

  v1 = *(char *)(a1 + 66);
  v2 = 0;
  if ( *(int *)(a1 + 48) >= 0 )
    return 0LL;
  v3 = a1 + 8 * (v1 - 1 + 8LL * (v1 - 1) + 26);
  if ( !v1 )
    return 0LL;
  while ( (*(_BYTE *)(v3 + 3) & 2) == 0 )
  {
    ++v2;
    v3 -= 72LL;
    if ( v2 >= v1 )
      return 0LL;
  }
  return *(_QWORD *)(v3 + 40);
}
