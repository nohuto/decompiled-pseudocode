/*
 * XREFs of ?InsertAt@?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBQEAUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x1800F6D9C
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180012740 (-DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayCon.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003FE30 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<COverlayContext::OverlayPlaneInfo *,0>::InsertAt(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  _QWORD *v9; // r9
  _QWORD *v10; // rdx
  _QWORD *v11; // r9
  _QWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  if ( a3 <= *(_DWORD *)(a1 + 24) )
  {
    v13 = (_QWORD *)a2;
    v6 = DynArrayImpl<0>::Grow(a1, 8u, 1, 0, (unsigned __int64 *)&v13);
    v5 = v6;
    if ( v6 >= 0 )
    {
      ++*(_DWORD *)(a1 + 24);
      v7 = *(_QWORD *)a1;
      v8 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
      if ( (unsigned int)v8 > (unsigned int)v4 )
      {
        v9 = (_QWORD *)(v7 + 8 * v8);
        do
        {
          v8 = (unsigned int)(v8 - 1);
          *v9-- = *(_QWORD *)(v7 + 8 * v8);
        }
        while ( (unsigned int)v8 > (unsigned int)v4 );
      }
      v10 = v13;
      v11 = (_QWORD *)(v7 + 8 * v4);
      if ( v13 >= v11 && (unsigned __int64)v13 < v7 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 24) - 1) )
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
