/*
 * XREFs of RIMICUpdateDeviceRank @ 0x1C00D2ED8
 * Callers:
 *     RIMGetPointerDeviceContactState @ 0x1C00CB12C (RIMGetPointerDeviceContactState.c)
 *     RIMABAddBoostSource @ 0x1C00D2084 (RIMABAddBoostSource.c)
 *     RIMABRemoveBoostSource @ 0x1C00D2664 (RIMABRemoveBoostSource.c)
 * Callees:
 *     <none>
 */

void __fastcall RIMICUpdateDeviceRank(__int64 a1, int a2)
{
  int v2; // r8d
  int v3; // r8d
  int v4; // [rsp+18h] [rbp+18h]

  if ( gFastSwitchingEnabled )
  {
    v2 = *(_DWORD *)(a1 + 24);
    if ( (unsigned int)(v2 - 1) > 4 )
    {
      if ( (unsigned int)(v2 - 6) > 1 )
      {
        v3 = v4;
      }
      else
      {
        v3 = 3;
        if ( a2 )
          v3 = 5;
      }
    }
    else
    {
      v3 = 1;
      if ( a2 )
        v3 = 4;
    }
    *(_DWORD *)(a1 + 1476) = v3;
  }
}
