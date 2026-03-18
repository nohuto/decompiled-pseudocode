/*
 * XREFs of NtGdiSetBoundsRect @ 0x1C00FDAD0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBoundsRect @ 0x1C00FDB28 (GreSetBoundsRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiSetBoundsRect(HDC a1, struct _POINTL *a2)
{
  __int128 v3; // [rsp+38h] [rbp-20h] BYREF

  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (struct _POINTL *)W32UserProbeAddress;
    v3 = *(_OWORD *)&a2->x;
    a2 = (struct _POINTL *)&v3;
  }
  return GreSetBoundsRect(a1, a2);
}
