/*
 * XREFs of EtwpObjectHandleRundown @ 0x14066599C
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1405008B4 (EtwpProcessEnumCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     PsIsSystemProcess @ 0x140091DCC (PsIsSystemProcess.c)
 *     PsGetProcessId @ 0x1400F4C44 (PsGetProcessId.c)
 *     ObReferenceProcessHandleTable @ 0x14047D304 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x140480DE0 (ExEnumHandleTable.c)
 */

void __fastcall EtwpObjectHandleRundown(struct _EX_RUNDOWN_REF *Process, __int64 a2)
{
  unsigned int *v4; // rdi

  v4 = (unsigned int *)ObReferenceProcessHandleTable(Process);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 36) = (unsigned int)PsGetProcessId((PEPROCESS)Process);
    *(_BYTE *)(a2 + 60) = PsIsSystemProcess((PEPROCESS)Process);
    ExEnumHandleTable(
      v4,
      (__int64 (__fastcall *)(unsigned int *, signed __int64 *, _QWORD, __int64))EtwpObjectHandleEnumCallback,
      a2,
      0LL);
    ExReleaseRundownProtection_0(Process + 92);
  }
}
