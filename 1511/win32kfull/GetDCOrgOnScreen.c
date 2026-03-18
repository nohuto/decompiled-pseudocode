/*
 * XREFs of GetDCOrgOnScreen @ 0x1C00CC890
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006A524 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxScrollWindowEx @ 0x1C00CB5C8 (xxxScrollWindowEx.c)
 *     _ExcludeUpdateRgn @ 0x1C00CC3D8 (_ExcludeUpdateRgn.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C007A940 (UserGetRedirectedWindowOrigin.c)
 */

__int64 __fastcall GetDCOrgOnScreen(__int64 a1, _DWORD *a2)
{
  int v5; // [rsp+40h] [rbp+18h] BYREF
  int v6; // [rsp+44h] [rbp+1Ch]

  if ( !(unsigned int)GreGetDCOrg(a1, a2) || !(unsigned int)UserGetRedirectedWindowOrigin(a1, (__int64)&v5) )
    return 0LL;
  *a2 += v5;
  a2[1] += v6;
  return 1LL;
}
