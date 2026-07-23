/*
 * XREFs of PnpDiagnosticCompletionRoutine @ 0x1401D0F78
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     IoFindDeviceThatFailedIrp @ 0x1400B25F4 (IoFindDeviceThatFailedIrp.c)
 */

__int64 __fastcall PnpDiagnosticCompletionRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // r10
  __int64 DeviceThatFailedIrp; // rax

  v3 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a3 + 32) = v3;
  v5 = a2;
  if ( v3 < 0 )
  {
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a2);
    if ( DeviceThatFailedIrp )
      *(_QWORD *)a3 = *(_QWORD *)(DeviceThatFailedIrp + 8);
  }
  pIoFreeIrp(v5);
  KeSetEvent((PRKEVENT)(a3 + 8), 0, 0);
  return 3221225494LL;
}
