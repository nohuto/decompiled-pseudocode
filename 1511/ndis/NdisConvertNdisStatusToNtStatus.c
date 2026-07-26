/*
 * XREFs of NdisConvertNdisStatusToNtStatus @ 0x1C0049D00
 * Callers:
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009C75C (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisWdfRegisterMiniportDriver @ 0x1C00CCF20 (NdisWdfRegisterMiniportDriver.c)
 *     ndisAddDevice @ 0x1C00E1708 (ndisAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisConvertNdisStatusToNtStatus(int a1)
{
  __int64 result; // rax

  if ( a1 != 259 && a1 > 0 && a1 != 1076035585 )
    return 3221225473LL;
  result = 3221225507LL;
  if ( a1 != -1073676266 )
    return (unsigned int)a1;
  return result;
}
