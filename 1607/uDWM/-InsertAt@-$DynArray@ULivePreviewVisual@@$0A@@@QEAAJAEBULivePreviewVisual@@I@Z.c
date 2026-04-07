/*
 * XREFs of ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x180073060
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x1800336E4 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<LivePreviewVisual,0>::InsertAt(__int64 a1, unsigned __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edi
  unsigned __int64 v5; // r8
  unsigned int v6; // edx
  unsigned __int64 v7; // r9
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  unsigned __int64 v10; // rdx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = a2;
  v3 = DynArrayImpl<0>::Grow(a1, 0x28u, 1, 0, &v12);
  v4 = v3;
  if ( v3 >= 0 )
  {
    ++*(_DWORD *)(a1 + 24);
    v5 = *(_QWORD *)a1;
    v6 = *(_DWORD *)(a1 + 24) - 1;
    if ( *(_DWORD *)(a1 + 24) != 1 )
    {
      v7 = v5 + 40LL * v6;
      do
      {
        v8 = *(_OWORD *)(v5 + 40LL * --v6 + 16);
        *(_OWORD *)v7 = *(_OWORD *)(v5 + 40LL * v6);
        v9 = *(_QWORD *)(v5 + 40LL * v6 + 32);
        *(_OWORD *)(v7 + 16) = v8;
        *(_QWORD *)(v7 + 32) = v9;
        v7 -= 40LL;
      }
      while ( v6 );
    }
    v10 = v12;
    if ( v12 >= v5 && v12 < v5 + 8 * (5LL * *(unsigned int *)(a1 + 24) - 5) )
      v10 = v12 + 40;
    *(_OWORD *)v5 = *(_OWORD *)v10;
    *(_OWORD *)(v5 + 16) = *(_OWORD *)(v10 + 16);
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(v10 + 32);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x1CDu);
  }
  return v4;
}
