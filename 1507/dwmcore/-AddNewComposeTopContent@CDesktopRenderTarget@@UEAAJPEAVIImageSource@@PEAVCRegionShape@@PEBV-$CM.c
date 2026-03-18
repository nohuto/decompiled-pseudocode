/*
 * XREFs of ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x1800EB160
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?NotifyDesktopDirectScreenWrite@CComposition@@QEAAJXZ @ 0x1800E2ED0 (-NotifyDesktopDirectScreenWrite@CComposition@@QEAAJXZ.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180119B28 (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV-$CMatrix@ULocalRenderi.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddNewComposeTopContent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  int v10; // eax

  v4 = 0;
  if ( *(_QWORD *)(a1 + 168) )
  {
LABEL_9:
    CComposeTop::AddNewContent(*(_QWORD *)(a1 + 168), a2, a3, a4);
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
    *(_OWORD *)(v9 + 56) = xmmword_180190B20;
    *(_OWORD *)(v9 + 72) = xmmword_180190B30;
    *(_OWORD *)(v9 + 88) = IdentityMatrix;
    *(_OWORD *)(v9 + 104) = *(&IdentityMatrix + 1);
    *(_OWORD *)(v9 + 120) = xmmword_180190B20;
    *(_OWORD *)(v9 + 136) = xmmword_180190B30;
    *(_QWORD *)(v9 + 152) = 0LL;
  }
  *(_QWORD *)(a1 + 168) = v9;
  if ( v9 )
  {
    v10 = CComposition::NotifyDesktopDirectScreenWrite(*(CComposition **)(a1 - 64));
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x62Du);
      return v4;
    }
    goto LABEL_9;
  }
  v4 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x62Cu);
  return v4;
}
