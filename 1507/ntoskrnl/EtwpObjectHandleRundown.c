/*
 * XREFs of EtwpObjectHandleRundown @ 0x1406E8B14
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14041C13C (EtwpProcessEnumCallback.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140020228 (PsIsSystemProcess.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     PsGetProcessId @ 0x1400CF7C4 (PsGetProcessId.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x140521D30 (ExEnumHandleTable.c)
 */

void __fastcall EtwpObjectHandleRundown(struct _EX_RUNDOWN_REF *Process, __int64 a2)
{
  unsigned int *v4; // rdi
  unsigned __int64 v5; // rtt

  v4 = (unsigned int *)ObReferenceProcessHandleTable(Process);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 36) = (unsigned int)PsGetProcessId((PEPROCESS)Process);
    *(_BYTE *)(a2 + 60) = PsIsSystemProcess((PEPROCESS)Process);
    ExEnumHandleTable(
      v4,
      (__int64 (__fastcall *)(unsigned int *, __int64 *, __int64, __int64))EtwpObjectHandleEnumCallback,
      a2,
      0LL);
    _m_prefetchw(&Process[92]);
    v5 = Process[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)&Process[92], v5 - 2, v5) )
      ExfReleaseRundownProtection(Process + 92);
  }
}
