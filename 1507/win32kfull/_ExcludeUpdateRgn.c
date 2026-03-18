/*
 * XREFs of _ExcludeUpdateRgn @ 0x1C00FC0C8
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0056F94 (-UT_InvertCaret@@YAXXZ.c)
 *     NtUserExcludeUpdateRgn @ 0x1C02198C0 (NtUserExcludeUpdateRgn.c)
 * Callees:
 *     GetDCOrgOnScreen @ 0x1C0113178 (GetDCOrgOnScreen.c)
 *     GreGetRandomRgn @ 0x1C011DA40 (GreGetRandomRgn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     GreExtSelectClipRgnInternal @ 0x1C0291854 (GreExtSelectClipRgnInternal.c)
 */

__int64 __fastcall ExcludeUpdateRgn(HDC a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
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
  result = GetDCOrgOnScreen(a1, &v8);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)GreGetRandomRgn(a1) == 1 )
    {
      GreOffsetRgn(ghrgnInv1, v8, v9);
    }
    else
    {
      v6 = *(_DWORD *)(a2 + 344);
      if ( v6 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
      {
        if ( v6 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 416LL) + 8LL) + 260LL) & 1) != 0 )
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
    return GreExtSelectClipRgnInternal(a1);
  }
  return result;
}
