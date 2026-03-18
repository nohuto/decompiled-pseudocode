/*
 * XREFs of ?DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x18010D3C0
 * Callers:
 *     ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x1801035B0 (-DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingCon.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawTextW(
        CDrawingContext *this,
        unsigned __int16 *a2,
        __int64 a3,
        struct IDWriteTextFormat *a4,
        const struct D2D_RECT_F *a5,
        const struct _D3DCOLORVALUE *a6)
{
  char *v7; // r14
  int v8; // ecx
  int v9; // ebp
  int v10; // ecx

  if ( this )
    v7 = (char *)this + 56;
  else
    v7 = 0LL;
  v8 = *((_DWORD *)this + 68);
  v9 = 0;
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( v10 )
    {
      if ( v10 == 3 )
        v9 = 2;
    }
    else
    {
      v9 = 1;
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD, char *, unsigned __int16 *, __int64, struct IDWriteTextFormat *, const struct D2D_RECT_F *, const struct _D3DCOLORVALUE *, bool, int, _DWORD, _DWORD))(**((_QWORD **)this + 47) + 168LL))(
           *((_QWORD *)this + 47),
           v7,
           a2,
           3LL,
           a4,
           a5,
           a6,
           *((_DWORD *)this + 62) != 0,
           v9,
           0,
           0);
}
