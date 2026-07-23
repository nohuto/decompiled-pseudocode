/*
 * XREFs of MiRevertQuasiPte @ 0x140171DCC
 * Callers:
 *     MiUpdateUserMappings @ 0x1403C96BC (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRevertQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 1;
}
