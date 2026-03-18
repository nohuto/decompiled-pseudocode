/*
 * XREFs of ?GetPixelFormat@CHwndRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180105DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::GetPixelFormat(CHwndRenderTarget *this, enum DXGI_FORMAT *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  *a2 = DXGI_FORMAT_UNKNOWN;
  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 5) + 240LL))((char *)this - 40);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, enum DXGI_FORMAT *))(**((_QWORD **)this + 6) + 24LL))(
           *((_QWORD *)this + 6),
           a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x63u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x60u);
  }
  return v5;
}
