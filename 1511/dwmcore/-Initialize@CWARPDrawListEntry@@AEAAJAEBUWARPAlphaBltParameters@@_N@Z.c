/*
 * XREFs of ?Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@_N@Z @ 0x180118018
 * Callers:
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@_NPEAPEAV1@@Z @ 0x180117F08 (-Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?ExtendModeToWarpAddressMode@@YA?AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z @ 0x180117FEC (-ExtendModeToWarpAddressMode@@YA-AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z.c)
 *     ?InterpolationModeToWarpFilterMode2@@YA?AW4Enum@WarpFilterMode2@@AEBW4D2D1_INTERPOLATION_MODE@@@Z @ 0x180118204 (-InterpolationModeToWarpFilterMode2@@YA-AW4Enum@WarpFilterMode2@@AEBW4D2D1_INTERPOLATION_MODE@@@.c)
 *     ?SetAntialiasMode@CWARPDrawListEntry@@AEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x180118284 (-SetAntialiasMode@CWARPDrawListEntry@@AEAAXW4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?SetBlendMode@CWARPDrawListEntry@@AEAAXW4Enum@BlendMode@@@Z @ 0x1801182A8 (-SetBlendMode@CWARPDrawListEntry@@AEAAXW4Enum@BlendMode@@@Z.c)
 *     ?SetOpacity@CWARPDrawListEntry@@AEAAXM@Z @ 0x18011830C (-SetOpacity@CWARPDrawListEntry@@AEAAXM@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::Initialize(
        CWARPDrawListEntry *this,
        const struct WARPAlphaBltParameters *a2,
        char a3)
{
  __int128 v5; // xmm0
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  CBitmapOfDeviceBitmaps *v9; // rcx
  char *v10; // rax
  int v11; // eax

  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 3);
  v5 = *((_OWORD *)a2 + 1);
  *((_BYTE *)this + 353) = a3;
  *((_OWORD *)this + 2) = v5;
  CWARPDrawListEntry::SetAntialiasMode(this, *((enum D2D1_ANTIALIAS_MODE *)a2 + 8));
  CWARPDrawListEntry::SetBlendMode(v6, *((unsigned int *)a2 + 9));
  if ( !*((_BYTE *)a2 + 40) )
  {
    v8 = *((_DWORD *)a2 + 9);
    if ( v8 == 4 || v8 == 6 || v8 == 17 || v8 == 20 )
    {
      *(_DWORD *)(v7 + 64) &= ~0x800u;
      *(_DWORD *)(v7 + 64) |= 0x700u;
    }
  }
  if ( *((_BYTE *)a2 + 41) )
  {
    *(_BYTE *)(v7 + 352) = 1;
    *(_DWORD *)(v7 + 72) = *((_DWORD *)a2 + 11);
    *(_DWORD *)(v7 + 76) = *((_DWORD *)a2 + 12);
    *(_DWORD *)(v7 + 80) = *((_DWORD *)a2 + 14);
    *(_DWORD *)(v7 + 84) = *((_DWORD *)a2 + 15);
    *(_DWORD *)(v7 + 88) = *((_DWORD *)a2 + 16);
    *(_DWORD *)(v7 + 92) = *((_DWORD *)a2 + 18);
    *(_DWORD *)(v7 + 96) = *((_DWORD *)a2 + 23);
    *(_DWORD *)(v7 + 100) = *((_DWORD *)a2 + 24);
    *(_DWORD *)(v7 + 104) = *((_DWORD *)a2 + 26);
  }
  v9 = (CBitmapOfDeviceBitmaps *)*((_QWORD *)a2 + 14);
  if ( v9 )
  {
    *((_QWORD *)this + 14) = v9;
    CBitmapOfDeviceBitmaps::AddRef(v9);
    *((_DWORD *)this + 78) = *((_DWORD *)a2 + 30);
    *((_DWORD *)this + 79) = *((_DWORD *)a2 + 31);
    *((_DWORD *)this + 80) = *((_DWORD *)a2 + 32);
    *((_DWORD *)this + 81) = *((_DWORD *)a2 + 33);
    *((_DWORD *)this + 82) = *((_DWORD *)a2 + 34);
    *((_DWORD *)this + 83) = *((_DWORD *)a2 + 35);
    if ( *((_BYTE *)a2 + 144) )
    {
      *((_DWORD *)this + 84) = *((_DWORD *)a2 + 37);
      *((_DWORD *)this + 86) = *((_DWORD *)a2 + 39);
      *((_DWORD *)this + 85) = *((_DWORD *)a2 + 38);
      *((_DWORD *)this + 87) = *((_DWORD *)a2 + 40);
    }
    *((_DWORD *)this + 16) &= 0xFFFFFFC7;
    *((_DWORD *)this + 16) |= 4u;
    *((_DWORD *)this + 30) = 0;
    *((_DWORD *)this + 31) = 0;
    *((_QWORD *)this + 16) = (char *)this + 312;
    if ( *((_BYTE *)a2 + 144) )
      v10 = (char *)this + 336;
    else
      v10 = 0LL;
    *((_QWORD *)this + 18) = v10;
    *((_DWORD *)this + 43) = ExtendModeToWarpAddressMode((_DWORD *)a2 + 41);
    *((_DWORD *)this + 44) = ExtendModeToWarpAddressMode((_DWORD *)a2 + 42);
    v11 = InterpolationModeToWarpFilterMode2((char *)a2 + 172);
    *((_DWORD *)this + 39) = 0;
    *((_DWORD *)this + 41) = 0;
    *((_DWORD *)this + 42) = v11;
    *((_DWORD *)this + 40) = 1;
  }
  CWARPDrawListEntry::SetOpacity(this, *((float *)a2 + 44));
  return 0LL;
}
