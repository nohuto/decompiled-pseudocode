/*
 * XREFs of ?UpdateGammaRamp@DXGDEVICE@@QEAAXIW4_D3DDDI_GAMMARAMP_TYPE@@IPEAX@Z @ 0x1C01377EC
 * Callers:
 *     DxgkSetGammaRamp @ 0x1C0138D70 (DxgkSetGammaRamp.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGDEVICE::UpdateGammaRamp(
        DXGDEVICE *this,
        unsigned int a2,
        enum _D3DDDI_GAMMARAMP_TYPE a3,
        int a4,
        void *a5)
{
  __int64 v5; // rdi
  void *v9; // rcx

  v5 = a2;
  v9 = (void *)*((_QWORD *)this + a2 + 2282);
  if ( v9 )
    operator delete(v9);
  *((_QWORD *)this + v5 + 2282) = a5;
  *((_DWORD *)this + v5 + 4596) = a3;
  *((_DWORD *)this + v5 + 4612) = a4;
}
