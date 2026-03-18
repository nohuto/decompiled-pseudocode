/*
 * XREFs of ?InsertAt@?$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJAEBURampEntry@CoordMap@@I@Z @ 0x18013628C
 * Callers:
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180135340 (-AddEntry@CoordMap@@AEAAJAEAV-$DynArray@URampEntry@CoordMap@@$0A@@@HAEBURampPair@1@W4RampMergeMo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<CoordMap::RampEntry,0>::InsertAt(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // edx
  _OWORD *v9; // rcx
  _OWORD *v10; // rcx
  _OWORD *v11; // rdx
  _OWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  if ( a3 <= *(_DWORD *)(a1 + 24) )
  {
    v13 = (_OWORD *)a2;
    v6 = DynArrayImpl<0>::Grow(a1, 0x10u, 1, 0, (unsigned __int64 *)&v13);
    v5 = v6;
    if ( v6 >= 0 )
    {
      ++*(_DWORD *)(a1 + 24);
      v7 = *(_QWORD *)a1;
      v8 = *(_DWORD *)(a1 + 24) - 1;
      if ( v8 > (unsigned int)v4 )
      {
        v9 = (_OWORD *)(v7 + 16LL * v8);
        do
          *v9-- = *(_OWORD *)(v7 + 16LL * --v8);
        while ( v8 > (unsigned int)v4 );
      }
      v10 = v13;
      v11 = (_OWORD *)(v7 + 16 * v4);
      if ( v13 >= v11 && (unsigned __int64)v13 < v7 + 16 * (unsigned __int64)*(unsigned int *)(a1 + 24) - 16 )
        v10 = v13 + 1;
      *v11 = *v10;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1CDu);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1C3u);
  }
  return v5;
}
