/*
 * XREFs of AlpcpDereferenceView @ 0x140655578
 * Callers:
 *     AlpcpLocateSectionView @ 0x14040BA70 (AlpcpLocateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x1404724E8 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall AlpcpDereferenceView(ULONG_PTR a1)
{
  return AlpcpDereferenceBlobEx(a1, 1);
}
