/*
 * XREFs of PopUserPresencePredictionModeCallback @ 0x140580990
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1400F94C4 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall PopUserPresencePredictionModeCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_QWORD *)&GUID_USER_PRESENCE_PREDICTION.Data1 - *a1;
  if ( *(_QWORD *)&GUID_USER_PRESENCE_PREDICTION.Data1 == *a1 )
    v3 = *(_QWORD *)GUID_USER_PRESENCE_PREDICTION.Data4 - a1[1];
  v4 = 0;
  if ( !v3 && a3 == 4 && a2 )
  {
    if ( *a2 )
    {
      if ( *a2 != 1 )
        return v4;
      memset(Src, 0, 0x48uLL);
      Src[2] = 3;
    }
    else
    {
      memset(Src, 0, 0x48uLL);
      Src[2] = 2;
    }
    Src[0] = 14;
    PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
