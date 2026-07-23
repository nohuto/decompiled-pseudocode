/*
 * XREFs of AlpcpSetupMessageDataForDeferredCopy @ 0x14049FA0C
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x140408318 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpCaptureMessageData @ 0x1404A01B8 (AlpcpCaptureMessageData.c)
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
  __int64 v8; // rax
  unsigned __int64 v9; // rax

  v6 = 0;
  if ( !a5 )
  {
    if ( (a3 & 0xC0000000) == 0x80000000 )
      a2 += 24LL;
    else
      a2 += 40LL;
  }
  if ( a6 && a2 + (unsigned __int64)a4 > 0x7FFFFFFF0000LL )
    return 3221225477LL;
  v8 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 176) = a2;
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 32) - 40LL;
  else
    v9 = 512LL;
  if ( a4 > v9 )
    return (unsigned int)AlpcpCaptureMessageData(a1, a4, 0LL);
  return v6;
}
