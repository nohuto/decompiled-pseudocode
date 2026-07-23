/*
 * XREFs of AlpcpDereferenceView @ 0x14065565C
 * Callers:
 *     AlpcpLocateSectionView @ 0x14040A930 (AlpcpLocateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x1404713B8 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall AlpcpDereferenceView(ULONG_PTR a1)
{
  return AlpcpDereferenceBlobEx(a1, 1);
}
