/*
 * XREFs of BltIcon @ 0x140027954
 * Callers:
 *     _DrawIconEx @ 0x140027334 (_DrawIconEx.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1401BFE18 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 * Callees:
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140027C40 (GreSetBkColor.c)
 *     GreSetStretchBltMode @ 0x140027CD0 (GreSetStretchBltMode.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     ??1MAPIDCOBJ@@QEAA@XZ @ 0x1400B4334 (--1MAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ??0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z @ 0x14016B560 (--0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z.c)
 */

__int64 __fastcall BltIcon(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        HDC a6,
        __int64 a7,
        int a8,
        int a9)
{
  int v9; // esi
  __int64 v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // edi
  int v17; // ebx
  __int64 v19; // [rsp+78h] [rbp-110h]
  _BYTE v20[104]; // [rsp+80h] [rbp-108h] BYREF
  _BYTE v21[120]; // [rsp+E8h] [rbp-A0h] BYREF
  int v22; // [rsp+1C8h] [rbp+40h]

  v9 = 0;
  if ( a8 == 1 )
  {
    v14 = a7;
LABEL_3:
    v15 = *(_QWORD *)(v14 + 88);
    goto LABEL_4;
  }
  if ( a8 == 3 )
  {
    v14 = a7;
    v15 = *(_QWORD *)(a7 + 128);
  }
  else
  {
    v14 = a7;
    v15 = *(_QWORD *)(a7 + 96);
    if ( !v15 )
    {
      v9 = *(_DWORD *)(a7 + 144) >> 1;
      goto LABEL_3;
    }
  }
LABEL_4:
  GreSetBkColor(a1);
  GreSetTextColor(a1);
  GreSetStretchBltMode(a1);
  v19 = GreSelectBitmap(a6, v15);
  if ( a8 == 3 )
  {
    HIWORD(v22) = 511;
    LOBYTE(v22) = 0;
    BYTE1(v22) = a9 < 0 ? 0 : 0x80;
    GreAlphaBlend(a1, a2, a3, a4, a5, a6, 0, v9, *(_DWORD *)(v14 + 140), *(_DWORD *)(v14 + 144) >> 1, v22, 0LL);
  }
  else
  {
    v16 = *(_DWORD *)(v14 + 144);
    v17 = *(_DWORD *)(v14 + 140);
    MAPIDCOBJ::MAPIDCOBJ((MAPIDCOBJ *)v20, a1, a6);
    GrepStretchBlt(
      (struct XDCOBJ *)v20,
      a2,
      a3,
      a4,
      a5,
      (struct OPTAPIDCOBJ *)v21,
      0,
      v9,
      v17,
      v16 >> 1,
      a9,
      0xFFFFFFFF,
      0);
    MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)v20);
  }
  GreSetStretchBltMode(a1);
  GreSetTextColor(a1);
  GreSetBkColor(a1);
  GreSelectBitmap(a6, v19);
  return 1LL;
}
