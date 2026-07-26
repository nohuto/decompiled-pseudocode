/*
 * XREFs of ndisOidPreMaxFrameOrTotalSize @ 0x1C00AC2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPreMaxFrameOrTotalSize(__int64 *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  char result; // al

  v1 = *a1;
  v2 = a1[4];
  result = 0;
  if ( *a1 )
  {
    if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFFD) != 0 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    else
    {
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v2 + 48) < 4u )
      {
        *(_DWORD *)(v2 + 56) = 4;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      if ( !*((_DWORD *)a1 + 10) )
      {
        result = 0;
        if ( !*a1 || *(_DWORD *)(v2 + 32) != 65798 )
          return result;
        **(_DWORD **)(v2 + 40) = *(_DWORD *)(v1 + 3060);
        *(_DWORD *)(v2 + 52) = 4;
        *((_DWORD *)a1 + 10) = 0;
      }
    }
    return 1;
  }
  return result;
}
