/*
 * XREFs of _ExcludeUpdateRgn @ 0x1C00CC3D8
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00CB970 (-UT_InvertCaret@@YAXXZ.c)
 *     NtUserExcludeUpdateRgn @ 0x1C0219750 (NtUserExcludeUpdateRgn.c)
 * Callees:
 *     GreExtSelectClipRgn @ 0x1C009B3F8 (GreExtSelectClipRgn.c)
 *     GetDCOrgOnScreen @ 0x1C00CC890 (GetDCOrgOnScreen.c)
 *     GreGetRandomRgn @ 0x1C01475A0 (GreGetRandomRgn.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall ExcludeUpdateRgn(HDC a1, __int64 a2)
{
  __int64 v2; // rax
  int v6; // edx
  __int64 v7; // rdx
  unsigned int v8; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-24h]
  _BYTE v10[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a2 + 160);
  if ( !v2 )
    return GreGetClipBox(a1, v10, 0LL);
  if ( v2 == 1 )
    return GreIntersectClipRect(a1, 0LL, 0LL, 0LL, 0);
  if ( !(unsigned int)GetDCOrgOnScreen(a1, &v8) )
    return 0LL;
  if ( (unsigned int)GreGetRandomRgn(a1) == 1 )
  {
    GreOffsetRgn(ghrgnInv1, v8, v9);
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 344);
    if ( v6 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
    {
      if ( v6 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 408LL) + 8LL) + 244LL) & 1) != 0 )
        v7 = *(_QWORD *)(gpDispInfo + 168LL);
      else
        v7 = *(_QWORD *)(gpDispInfo + 152LL);
    }
    else
    {
      v7 = *(_QWORD *)(gpDispInfo + 160LL);
    }
    GreCombineRgn(ghrgnInv1, v7, 0LL, 5LL);
  }
  GreCombineRgn(ghrgnInv1, ghrgnInv1, *(_QWORD *)(a2 + 160), 4LL);
  GreOffsetRgn(ghrgnInv1, -v8, -v9);
  return GreExtSelectClipRgn(a1, ghrgnInv1, 5);
}
