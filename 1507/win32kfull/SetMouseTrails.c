/*
 * XREFs of SetMouseTrails @ 0x1C01359E4
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxRemoteReconnect @ 0x1C012DFA0 (xxxRemoteReconnect.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0133984 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     SetPointer @ 0x1C003E370 (SetPointer.c)
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 */

__int64 __fastcall SetMouseTrails(int a1)
{
  __int64 result; // rax

  SetPointer(0);
  if ( a1 )
    gMouseTrails = a1 - 1;
  else
    gMouseTrails = 0;
  SetPointer(1);
  result = gProtocolType;
  if ( !gProtocolType )
  {
    result = (gtmridMouseTrails != 0) ^ (unsigned int)(gMouseTrails != 0);
    if ( (_DWORD)result )
    {
      if ( gMouseTrails )
      {
        return PostMessage(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)&gTermIO + 2) + 424LL) + 16LL), 0x401u, 0LL, 0LL);
      }
      else
      {
        result = FindTimer(0LL, gtmridMouseTrails, 4u, 1, 0LL);
        gtmridMouseTrails = 0LL;
      }
    }
  }
  return result;
}
