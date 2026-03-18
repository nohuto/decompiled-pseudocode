/*
 * XREFs of MonitorDpiFromDpiAwarenessContext @ 0x1C00B9500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorDpiFromDpiAwarenessContext(__int64 a1, char a2)
{
  unsigned __int16 v2; // r8
  int v3; // edx
  int v4; // edx

  v2 = 0;
  v3 = a2 & 0xF;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        return *(unsigned __int16 *)(a1 + 154);
    }
    else
    {
      return *((unsigned __int16 *)gpsi + 4339);
    }
  }
  else
  {
    return 96;
  }
  return v2;
}
