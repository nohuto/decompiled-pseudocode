/*
 * XREFs of ttfdQueryQuadTrueTypeOutline @ 0x1C0246704
 * Callers:
 *     ttfdQueryTrueTypeOutline @ 0x1C02467F4 (ttfdQueryTrueTypeOutline.c)
 * Callees:
 *     bGrabXform @ 0x1C00AA7EC (bGrabXform.c)
 *     lQueryTTOutline @ 0x1C00F65D4 (lQueryTTOutline.c)
 *     ttfdOpenFontContext @ 0x1C0118EA0 (ttfdOpenFontContext.c)
 *     lQueryTrueTypeOutlineVertical @ 0x1C0246618 (lQueryTrueTypeOutlineVertical.c)
 */

__int64 __fastcall ttfdQueryQuadTrueTypeOutline(
        __int64 a1,
        unsigned int a2,
        char a3,
        _QWORD *a4,
        unsigned int a5,
        __int64 a6)
{
  char v6; // bp
  int v8; // esi
  __int64 v12; // rbx

  v6 = a3 & 0xFB;
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
  if ( !(unsigned int)bGrabXform(v12, 0, 0, 0, 0, 0) )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(v12 + 308) )
    return lQueryTrueTypeOutlineVertical(v12, 1u, a2, v6, v8, a4, a5, a6);
  return lQueryTTOutline(v12, 1LL, a2, v6, v8, a4, a5, a6);
}
