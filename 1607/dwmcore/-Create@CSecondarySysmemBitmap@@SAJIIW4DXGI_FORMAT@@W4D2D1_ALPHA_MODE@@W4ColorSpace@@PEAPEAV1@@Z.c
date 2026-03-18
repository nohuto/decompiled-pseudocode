/*
 * XREFs of ?Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4ColorSpace@@PEAPEAV1@@Z @ 0x18001F2D0
 * Callers:
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1800105A0 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x18001F768 (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Create(int a1, int a2, int a3, int a4, int a5, CSecondarySysmemBitmap **a6)
{
  __int64 v10; // rax
  CSecondarySysmemBitmap *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi

  *a6 = 0LL;
  v10 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          152LL);
  v11 = (CSecondarySysmemBitmap *)v10;
  if ( v10 )
  {
    *(_DWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 16) = &ISecondaryBitmap::`vftable';
    *(_QWORD *)(v10 + 24) = v10 + 32;
    *(_DWORD *)(v10 + 32) = 0;
    *(_DWORD *)(v10 + 120) = 0;
    *(_QWORD *)(v10 + 136) = 0LL;
    *(_DWORD *)(v10 + 144) = 0;
    *(_QWORD *)v10 = &CSecondarySysmemBitmap::`vftable'{for `CMILCOMBase'};
    *(_QWORD *)(v10 + 16) = &CSecondarySysmemBitmap::`vftable'{for `CSecondaryBitmap'};
    *(_QWORD *)(v10 + 96) = &CSecondarySysmemBitmap::`vftable'{for `ID2DBitmapCacheSource'};
    *(_QWORD *)(v10 + 104) = &CSecondarySysmemBitmap::`vftable'{for `IBitmapUnlock'};
    *(_DWORD *)(v10 + 132) = a5;
    *(_DWORD *)(v10 + 112) = a1;
    *(_DWORD *)(v10 + 116) = a2;
    *(_DWORD *)(v10 + 124) = a3;
    *(_DWORD *)(v10 + 128) = a4;
    *(_BYTE *)(v10 + 148) = 0;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    (*(void (__fastcall **)(CSecondarySysmemBitmap *))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = CSecondarySysmemBitmap::Initialize(v11);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x25u);
      (*(void (__fastcall **)(CSecondarySysmemBitmap *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    else
    {
      *a6 = v11;
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x22u);
  }
  return v13;
}
