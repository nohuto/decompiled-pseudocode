/*
 * XREFs of ?DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x180122FE8
 * Callers:
 *     ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x180119734 (-DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingCon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawTextW(
        CDrawingContext *this,
        unsigned __int16 *a2,
        __int64 a3,
        struct IDWriteTextFormat *a4,
        const struct D2D_RECT_F *a5,
        const struct _D3DCOLORVALUE *a6)
{
  char *v8; // r11
  int v9; // ecx
  int v10; // edx
  int v11; // ecx

  if ( this )
    v8 = (char *)this + 128;
  else
    v8 = 0LL;
  v9 = *((_DWORD *)this + 88);
  v10 = 0;
  if ( v9 )
  {
    v11 = v9 - 1;
    if ( v11 )
    {
      if ( v11 == 3 )
        v10 = 2;
    }
    else
    {
      v10 = 1;
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD, char *, unsigned __int16 *, __int64, struct IDWriteTextFormat *, const struct D2D_RECT_F *, const struct _D3DCOLORVALUE *, bool, int, _DWORD, _DWORD))(**((_QWORD **)this + 57) + 160LL))(
           *((_QWORD *)this + 57),
           v8,
           a2,
           3LL,
           a4,
           a5,
           a6,
           *((_DWORD *)this + 82) != 0,
           v10,
           0,
           0);
}
