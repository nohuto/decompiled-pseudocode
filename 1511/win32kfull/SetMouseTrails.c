/*
 * XREFs of SetMouseTrails @ 0x1C0096C64
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     xxxRemoteReconnect @ 0x1C014DAC0 (xxxRemoteReconnect.c)
 * Callees:
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     SetPointer @ 0x1C0096E50 (SetPointer.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
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
        return PostMessage(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)&gTermIO + 2) + 416LL) + 16LL), 1025LL, 0LL, 0LL);
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
