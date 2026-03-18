/*
 * XREFs of ?InsertAt@?$DynArray@UMILGradientStop@@$0A@@@QEAAJAEBUMILGradientStop@@I@Z @ 0x18019A488
 * Callers:
 *     ?RepositionStopsForSmallGradientSpans@CGradientTextureGenerator@@CAJPEBVCGradientSpanInfo@@PEBU_D3DCOLORVALUE@@1PEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x18019A6E0 (-RepositionStopsForSmallGradientSpans@CGradientTextureGenerator@@CAJPEBVCGradientSpanInfo@@PEBU_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<MILGradientStop,0>::InsertAt(__int64 a1, unsigned __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edi
  unsigned __int64 v5; // r8
  unsigned int v6; // edx
  unsigned __int64 v7; // r9
  int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = a2;
  v3 = DynArrayImpl<0>::Grow(a1, 0x14u, 1, 0, &v11);
  v4 = v3;
  if ( v3 >= 0 )
  {
    ++*(_DWORD *)(a1 + 24);
    v5 = *(_QWORD *)a1;
    v6 = *(_DWORD *)(a1 + 24) - 1;
    if ( *(_DWORD *)(a1 + 24) != 1 )
    {
      v7 = v5 + 20LL * v6;
      do
      {
        v8 = *(_DWORD *)(v5 + 20LL * --v6 + 16);
        *(_OWORD *)v7 = *(_OWORD *)(v5 + 20LL * v6);
        *(_DWORD *)(v7 + 16) = v8;
        v7 -= 20LL;
      }
      while ( v6 );
    }
    v9 = v11;
    if ( v11 >= v5 && v11 < v5 + 4 * (5LL * *(unsigned int *)(a1 + 24) - 5) )
      v9 = v11 + 20;
    *(_OWORD *)v5 = *(_OWORD *)v9;
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(v9 + 16);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1CDu);
  }
  return v4;
}
