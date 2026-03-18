/*
 * XREFs of ttfdQueryQuadTrueTypeOutline @ 0x1C02465DC
 * Callers:
 *     ttfdQueryTrueTypeOutline @ 0x1C02466C8 (ttfdQueryTrueTypeOutline.c)
 * Callees:
 *     ttfdOpenFontContext @ 0x1C00A9964 (ttfdOpenFontContext.c)
 *     bGrabXform @ 0x1C00B1F98 (bGrabXform.c)
 *     lQueryTTOutline @ 0x1C00F0EFC (lQueryTTOutline.c)
 *     lQueryTrueTypeOutlineVertical @ 0x1C02464F0 (lQueryTrueTypeOutlineVertical.c)
 */

__int64 __fastcall ttfdQueryQuadTrueTypeOutline(
        __int64 a1,
        unsigned int a2,
        int a3,
        _QWORD *a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // ebp
  int v8; // esi
  __int64 v12; // rbx

  v6 = a3 & 0xFFFFFFFB;
  v8 = (unsigned __int8)(a3 & 4) >> 2;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
    return 0xFFFFFFFFLL;
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 )
  {
    *(_DWORD *)(v12 + 40) = *(_DWORD *)(a1 + 12) | *(_DWORD *)(v12 + 40) & 0x80000000;
  }
  else
  {
    v12 = ttfdOpenFontContext();
    *(_QWORD *)(a1 + 56) = v12;
  }
  if ( !v12 )
    return 0xFFFFFFFFLL;
  *(_QWORD *)v12 = a1;
  if ( !(unsigned int)bGrabXform(v12, 0, 0, 0, 0) )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(v12 + 308) )
    return lQueryTrueTypeOutlineVertical(v12, 1u, a2, v6, v8, a4, a5, a6);
  return lQueryTTOutline(v12, 1LL, a2, v6, v8, a4, a5, a6);
}
