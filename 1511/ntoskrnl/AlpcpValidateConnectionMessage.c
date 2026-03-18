/*
 * XREFs of AlpcpValidateConnectionMessage @ 0x14047E2FC
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x14047D7C8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpValidateConnectionMessage(__int64 a1, _WORD *a2, __int64 a3)
{
  if ( !(_BYTE)a3 )
    return AlpcpValidateMessage(a2, 0LL, a3);
  if ( (unsigned __int16)*a2 > (unsigned __int64)(*(_QWORD *)(a1 + 272) - 40LL) )
    *a2 = *(_WORD *)(a1 + 272) - 40;
  return 0LL;
}
