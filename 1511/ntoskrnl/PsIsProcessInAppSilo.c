/*
 * XREFs of PsIsProcessInAppSilo @ 0x14063FA68
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessSilo @ 0x140079730 (PsGetProcessSilo.c)
 */

bool __fastcall PsIsProcessInAppSilo(__int64 a1)
{
  __int64 ProcessSilo; // rax
  char v2; // cl

  ProcessSilo = PsGetProcessSilo(a1);
  v2 = 0;
  if ( ProcessSilo )
    return *(_QWORD *)(*(_QWORD *)(ProcessSilo + 1248) + 136LL) == 0LL;
  return v2;
}
