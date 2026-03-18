/*
 * XREFs of GreSetBrushOrg @ 0x14012768C
 * Callers:
 *     _DrawIconEx @ 0x140027334 (_DrawIconEx.c)
 *     xxxPaintRect @ 0x140127520 (xxxPaintRect.c)
 *     NtGdiSetBrushOrg @ 0x140127620 (NtGdiSetBrushOrg.c)
 *     MNEraseBackground @ 0x1402FA5BC (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1402FA704 (xxxMNDrawFullNC.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBrushOrg(HDC a1, int a2, int a3, _QWORD *a4)
{
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _DWORD *v9; // r8
  __int64 v10; // rdx
  _QWORD v12[14]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v12, a1);
  v7 = v12[0];
  if ( v12[0] )
  {
    if ( a4 )
      *a4 = *(_QWORD *)(v12[0] + 124LL);
    v8 = 1;
    *(_DWORD *)(*(_QWORD *)(v7 + 976) + 344LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v12[0] + 976LL) + 348LL) = a3;
    v9 = (_DWORD *)v12[0];
    v10 = *(_DWORD *)(v12[0] + 40LL) & 1LL;
    *(_DWORD *)(v12[0] + 124LL) = a2;
    v9[32] = a3;
    v9[298] = a2 + v9[2 * v10 + 254];
    v9[299] = a3 + v9[2 * v10 + 255];
  }
  else
  {
    EngSetLastError(6u);
    v8 = 0;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
  return v8;
}
