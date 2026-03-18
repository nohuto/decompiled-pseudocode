/*
 * XREFs of SetMouseTrails @ 0x1C0094A28
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 *     xxxRemoteReconnect @ 0x1C01537F0 (xxxRemoteReconnect.c)
 * Callees:
 *     SetPointer @ 0x1C0094C10 (SetPointer.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 */

__int64 __fastcall SetMouseTrails(int a1)
{
  __int64 result; // rax

  SetPointer(0LL);
  if ( a1 )
    gMouseTrails = a1 - 1;
  else
    gMouseTrails = 0;
  SetPointer(1LL);
  result = gProtocolType;
  if ( !gProtocolType )
  {
    result = (gtmridMouseTrails != 0) ^ (unsigned int)(gMouseTrails != 0);
    if ( (_DWORD)result )
    {
      if ( gMouseTrails )
      {
        return PostMessage(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)&gTermIO + 2) + 416LL) + 16LL), 1025LL, 0LL);
      }
      else
      {
        result = FindTimer(0, gtmridMouseTrails, 4, 1, 0LL);
        gtmridMouseTrails = 0LL;
      }
    }
  }
  return result;
}
