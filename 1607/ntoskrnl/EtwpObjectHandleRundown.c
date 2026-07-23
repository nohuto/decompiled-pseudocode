/*
 * XREFs of EtwpObjectHandleRundown @ 0x1406A74DC
 * Callers:
 *     EtwpProcessEnumCallback @ 0x140499444 (EtwpProcessEnumCallback.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140071EA8 (PsIsSystemProcess.c)
 *     PsGetProcessId @ 0x140086D74 (PsGetProcessId.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExEnumHandleTable @ 0x14045D3A0 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x1404F00E0 (ObReferenceProcessHandleTable.c)
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
