/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z @ 0x18009A5B0
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<COverlayContext *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  int v5; // edi
  _QWORD *v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(unsigned int *)(a1 + 24);
  v4 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    return 2147942934LL;
  }
  else if ( v4 <= *(_DWORD *)(a1 + 20) )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v3) = *a2;
    *(_DWORD *)(a1 + 24) = v4;
    return 0LL;
  }
  else
  {
    v7 = a2;
    v5 = DynArrayImpl<0>::Grow(a1, 8, 1, 0, (__int64)&v7);
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC0u);
    else
      *(_QWORD *)(*(_QWORD *)a1 + (unsigned int)(8 * (*(_DWORD *)(a1 + 24))++)) = *v7;
    return (unsigned int)v5;
  }
}
