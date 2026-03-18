/*
 * XREFs of ?Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z @ 0x180180C34
 * Callers:
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1800827C8 (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x180181034 (-Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::Create(
        struct IBitmapSource *a1,
        const struct CColorKey *a2,
        struct CBitmapColorKey **a3)
{
  __int64 v6; // rax
  CBitmapOfDeviceBitmaps *v7; // rbx
  unsigned int v8; // edi
  int v9; // eax

  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         136LL);
  v7 = (CBitmapOfDeviceBitmaps *)v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)v6 = &CBitmapColorKey::`vftable'{for `CMILCOMBase'};
    *(_QWORD *)(v6 + 16) = &CBitmapColorKey::`vftable'{for `IBitmapSource'};
    *(_QWORD *)(v6 + 24) = &CBitmapColorKey::`vftable'{for `IWICBitmapSource'};
    *(_QWORD *)(v6 + 76) = 0LL;
    *(_QWORD *)(v6 + 108) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_DWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 44) = 1LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v7);
    v9 = CBitmapColorKey::Initialize(v7, a1, a2);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB4u);
      CMILCOMBase::InternalRelease(v7);
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB0u);
  }
  return v8;
}
