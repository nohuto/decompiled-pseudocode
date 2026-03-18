/*
 * XREFs of ?GetPixelFormat@CHwndRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800E9F10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::GetPixelFormat(CHwndRenderTarget *this, enum DXGI_FORMAT *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  *a2 = DXGI_FORMAT_UNKNOWN;
  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 5) + 232LL))((char *)this - 40);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, enum DXGI_FORMAT *))(**((_QWORD **)this + 6) + 24LL))(
           *((_QWORD *)this + 6),
           a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x67u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x64u);
  }
  return v5;
}
