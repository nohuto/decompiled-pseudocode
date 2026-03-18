/*
 * XREFs of ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180106B90
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyDesktopDirectScreenWrite@CComposition@@QEAAJXZ @ 0x180100FC8 (-NotifyDesktopDirectScreenWrite@CComposition@@QEAAJXZ.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180130978 (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV-$CMatrix@ULocalRenderi.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddNewComposeTopContent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  int v10; // eax

  v4 = 0;
  if ( *(_QWORD *)(a1 + 216) )
  {
LABEL_9:
    CComposeTop::AddNewContent(*(_QWORD *)(a1 + 216), a2, a3, a4);
    return v4;
  }
  v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         160LL);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)v9 = &CComposeTop::`vftable';
    *(_OWORD *)(v9 + 24) = IdentityMatrix;
    *(_OWORD *)(v9 + 40) = *(&IdentityMatrix + 1);
    *(__m256 *)(v9 + 56) = ymmword_18019E9D0;
    *(_OWORD *)(v9 + 88) = IdentityMatrix;
    *(_OWORD *)(v9 + 104) = *(&IdentityMatrix + 1);
    *(__m256 *)(v9 + 120) = ymmword_18019E9D0;
    *(_QWORD *)(v9 + 152) = 0LL;
  }
  *(_QWORD *)(a1 + 216) = v9;
  if ( v9 )
  {
    v10 = CComposition::NotifyDesktopDirectScreenWrite(*(CComposition **)(a1 - 64));
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x62Bu);
      return v4;
    }
    goto LABEL_9;
  }
  v4 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x62Au);
  return v4;
}
