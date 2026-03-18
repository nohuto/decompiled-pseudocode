/*
 * XREFs of MiMakeQuasiPte @ 0x140195D50
 * Callers:
 *     MiUpdateUserMappings @ 0x1403F0374 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
}
