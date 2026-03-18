/*
 * XREFs of ValidateOwnerDepth @ 0x140224504
 * Callers:
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateOwnerDepth(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi

  v2 = 1;
  v3 = 0;
  while ( 1 )
  {
    if ( !a2 )
    {
      LOBYTE(v3) = v2 <= *(_DWORD *)(W32GetUserSessionState(a1, 0LL) + 63224);
      return v3;
    }
    if ( a2 == a1 )
      break;
    a2 = *(_QWORD *)(a2 + 120);
    ++v2;
  }
  return 0LL;
}
