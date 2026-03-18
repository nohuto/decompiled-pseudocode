/*
 * XREFs of ?UserGetRedirectedWindowOriginApiExt@@YAHQEAUHDC__@@PEAUtagPOINT@@@Z @ 0x1C00B85E0
 * Callers:
 *     <none>
 * Callees:
 *     IsUserGetRedirectedWindowOriginSupported_0 @ 0x1C0001568 (IsUserGetRedirectedWindowOriginSupported_0.c)
 *     UserGetRedirectedWindowOrigin_0 @ 0x1C0001570 (UserGetRedirectedWindowOrigin_0.c)
 */

__int64 __fastcall UserGetRedirectedWindowOriginApiExt(HDC a1, struct tagPOINT *a2)
{
  int RedirectedWindowOriginSupported_0; // eax
  unsigned int v3; // r8d

  *a2 = 0LL;
  RedirectedWindowOriginSupported_0 = IsUserGetRedirectedWindowOriginSupported_0();
  v3 = 0;
  if ( RedirectedWindowOriginSupported_0 >= 0 )
    return (unsigned int)UserGetRedirectedWindowOrigin_0();
  return v3;
}
