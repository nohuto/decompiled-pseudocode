/*
 * XREFs of PopDiagGetDriverName @ 0x1401239A8
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x14012BE68 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x14012C694 (PopDiagTraceDeviceAcquireIrp.c)
 *     PopDiagTraceDriverVeto @ 0x1403DF510 (PopDiagTraceDriverVeto.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PopDiagGetDriverName(__int64 a1, wchar_t *a2, unsigned int a3)
{
  __int64 v4; // rax
  const wchar_t *v5; // r8
  unsigned __int16 v6; // cx

  if ( a1 && (v4 = *(_QWORD *)(a1 + 8), (v5 = *(const wchar_t **)(v4 + 64)) != 0LL) && (v6 = *(_WORD *)(v4 + 56)) != 0 )
    return RtlStringCbCopyNW(a2, a3, v5, v6);
  else
    return -1073741823;
}
