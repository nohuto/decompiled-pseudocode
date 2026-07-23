/*
 * XREFs of RtlStringCbCopyA @ 0x1400C76AC
 * Callers:
 *     PfpPrivSourceEnum @ 0x1404EB998 (PfpPrivSourceEnum.c)
 *     ObpRegisterObject @ 0x1406682E0 (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x1406A7230 (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x14079A6CC (IopStoreArcInformation.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1400C76E8 (RtlStringCopyWorkerA.c)
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringCopyWorkerA(pszDest, cbDest, 0LL, pszSrc, v5);
  if ( cbDest )
    *pszDest = 0;
  return v3;
}
