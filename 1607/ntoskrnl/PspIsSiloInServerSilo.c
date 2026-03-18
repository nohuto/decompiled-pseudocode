/*
 * XREFs of PspIsSiloInServerSilo @ 0x14020F6C8
 * Callers:
 *     NtQueryInformationJobObject @ 0x140466FD0 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140076688 (PsGetEffectiveServerSilo.c)
 */

bool __fastcall PspIsSiloInServerSilo(__int64 a1)
{
  __int64 EffectiveServerSilo; // rax

  EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
  return PspIsServerSilo(EffectiveServerSilo);
}
