/*
 * XREFs of EtwpObjectHandleRundown @ 0x1406A73A4
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1404989B4 (EtwpProcessEnumCallback.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140072328 (PsIsSystemProcess.c)
 *     PsGetProcessId @ 0x140085488 (PsGetProcessId.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     ExEnumHandleTable @ 0x14045E4D0 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x14050D150 (ObReferenceProcessHandleTable.c)
 */

void __fastcall EtwpObjectHandleRundown(struct _EX_RUNDOWN_REF *Process, __int64 a2)
{
  unsigned int *v4; // rdi

  v4 = (unsigned int *)ObReferenceProcessHandleTable(Process);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 36) = (unsigned int)PsGetProcessId((PEPROCESS)Process);
    *(_BYTE *)(a2 + 100) = PsIsSystemProcess((PEPROCESS)Process);
    ExEnumHandleTable(
      v4,
      (__int64 (__fastcall *)(unsigned int *, signed __int64 *, __int64, __int64))EtwpObjectHandleEnumCallback,
      a2,
      0LL);
    ExReleaseRundownProtection(Process + 92);
  }
}
