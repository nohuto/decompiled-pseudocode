/*
 * XREFs of RtlStringCbCopyA @ 0x1400925DC
 * Callers:
 *     PfpPrivSourceEnum @ 0x14044B238 (PfpPrivSourceEnum.c)
 *     ObpRegisterObject @ 0x140630100 (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x1406656F8 (EtwpLogRefSetAutoMark.c)
 *     IopStoreArcInformation @ 0x140750ED8 (IopStoreArcInformation.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     sub_140092618 @ 0x140092618 (sub_140092618.c)
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d

  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return sub_140092618(pszDest, cbDest, 0LL, pszSrc);
  if ( cbDest )
    *pszDest = 0;
  return v3;
}
