/*
 * XREFs of AlpcpSetupMessageDataForDeferredCopy @ 0x14047E3AC
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x14047D7C8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpCaptureMessageData @ 0x1404A7424 (AlpcpCaptureMessageData.c)
 */

__int64 __fastcall AlpcpSetupMessageDataForDeferredCopy(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int16 a4,
        char a5,
        char a6)
{
  unsigned int v6; // r10d

  v6 = 0;
  if ( !a5 )
  {
    if ( (a3 & 0xC0000000) == 0x80000000 )
      a2 += 24LL;
    else
      a2 += 40LL;
  }
  if ( a6 && a2 + (unsigned __int64)a4 > MmUserProbeAddress )
    return 3221225477LL;
  *(_QWORD *)(a1 + 168) = a2;
  if ( a4 > 0x200u )
    return (unsigned int)AlpcpCaptureMessageData(a1, a4, 0LL);
  return v6;
}
