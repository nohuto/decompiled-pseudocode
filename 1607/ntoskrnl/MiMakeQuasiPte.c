/*
 * XREFs of MiMakeQuasiPte @ 0x140171DBC
 * Callers:
 *     MiUpdateUserMappings @ 0x1403C96BC (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
}
