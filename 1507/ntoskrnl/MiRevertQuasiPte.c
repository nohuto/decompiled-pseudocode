/*
 * XREFs of MiRevertQuasiPte @ 0x140195D60
 * Callers:
 *     MiUpdateUserMappings @ 0x1403F0374 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRevertQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 1;
}
