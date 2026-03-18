/*
 * XREFs of ?ComputePrefilteredDirtyRects@CHwBitmapColorSource@@AEAAIPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z @ 0x18000EFD8
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18001C494 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwBitmapColorSource::ComputePrefilteredDirtyRects(
        unsigned int *a1,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // r11d
  __int64 v7; // rdi
  unsigned int *v8; // r9
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax

  v4 = 0;
  if ( a3 )
  {
    v7 = a3;
    do
    {
      v8 = (unsigned int *)(a4 + 16LL * v4);
      *(_OWORD *)v8 = *a2;
      v9 = a1[34];
      v10 = a1[36];
      if ( (_DWORD)v9 != (_DWORD)v10 )
      {
        *v8 = v10 * (unsigned __int64)*v8 / v9;
        v8[2] = (v9 + v10 * v8[2] - 1) / v9;
      }
      v11 = a1[35];
      v12 = a1[37];
      if ( (_DWORD)v11 != (_DWORD)v12 )
      {
        v8[1] = v12 * (unsigned __int64)v8[1] / v11;
        v8[3] = (v11 + v12 * v8[3] - 1) / v11;
      }
      v13 = a1[43];
      if ( v13 > *v8 )
        *v8 = v13;
      v14 = a1[44];
      if ( v14 > v8[1] )
        v8[1] = v14;
      v15 = a1[45];
      if ( v15 < v8[2] )
        v8[2] = v15;
      v16 = a1[46];
      if ( v16 < v8[3] )
        v8[3] = v16;
      if ( v8[2] <= *v8 || v8[3] <= v8[1] )
      {
        v8[3] = 0;
        v8[2] = 0;
        v8[1] = 0;
        *v8 = 0;
      }
      else
      {
        ++v4;
      }
      ++a2;
      --v7;
    }
    while ( v7 );
  }
  return v4;
}
