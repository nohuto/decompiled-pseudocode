/*
 * XREFs of NtUserGetCursorDims @ 0x1C00F9BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetCursorDims(_DWORD *a1)
{
  int v2; // r8d
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  _DWORD *v5; // rdx

  EnterCrit(0LL, 1LL);
  v2 = 0;
  LODWORD(v3) = 0;
  v4 = &gfCursorSizeNeeded;
  do
  {
    if ( *v4 )
      v2 |= 1 << v3;
    v3 = (unsigned int)(v3 + 1);
    ++v4;
  }
  while ( (unsigned int)v3 < 5 );
  v5 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v5 = (_DWORD *)W32UserProbeAddress;
  *v5 = *v5;
  *a1 = v2;
  UserSessionSwitchLeaveCrit(v3, v5);
  return 1LL;
}
