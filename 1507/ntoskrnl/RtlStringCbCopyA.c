/*
 * XREFs of RtlStringCbCopyA @ 0x1400F0684
 * Callers:
 *     PfpPrivSourceEnum @ 0x14050CF74 (PfpPrivSourceEnum.c)
 *     ObpRegisterObject @ 0x1406AE194 (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x1406E87EC (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x1407E19C0 (IopStoreArcInformation.c)
 * Callees:
 *     sub_1400F06C0 @ 0x1400F06C0 (sub_1400F06C0.c)
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d

  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return sub_1400F06C0(pszDest, cbDest, 0LL, pszSrc);
  if ( cbDest )
    *pszDest = 0;
  return v3;
}
