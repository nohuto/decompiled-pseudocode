/*
 * XREFs of ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x18011D040
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyDesktopDirectScreenWrite@CComposition@@QEAAJXZ @ 0x180116BFC (-NotifyDesktopDirectScreenWrite@CComposition@@QEAAJXZ.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180152E40 (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV-$CMatrix@ULocalRenderi.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddNewComposeTopContent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax

  v4 = 0;
  if ( *(_QWORD *)(a1 + 264) )
    goto LABEL_10;
  v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         168LL);
  v10 = v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)v9 = &CComposeTop::`vftable';
    *(_OWORD *)(v9 + 24) = CMILMatrix::Identity;
    *(_OWORD *)(v9 + 40) = xmmword_1801EAD20;
    *(_OWORD *)(v9 + 56) = xmmword_1801EAD30;
    *(_OWORD *)(v9 + 72) = xmmword_1801EAD40;
    *(_DWORD *)(v9 + 88) = dword_1801EAD50;
    *(_OWORD *)(v9 + 92) = CMILMatrix::Identity;
    *(_OWORD *)(v9 + 108) = xmmword_1801EAD20;
    *(_OWORD *)(v9 + 124) = xmmword_1801EAD30;
    *(_OWORD *)(v9 + 140) = xmmword_1801EAD40;
    *(_DWORD *)(v9 + 156) = dword_1801EAD50;
    *(_QWORD *)(v9 + 160) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  *(_QWORD *)(a1 + 264) = v10;
  if ( !v10 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x6C9u);
    return v4;
  }
  v11 = CComposition::NotifyDesktopDirectScreenWrite(*(CComposition **)(a1 - 136));
  v4 = v11;
  if ( v11 >= 0 )
LABEL_10:
    CComposeTop::AddNewContent(*(_QWORD *)(a1 + 264), a2, a3, a4);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x6CAu);
  return v4;
}
