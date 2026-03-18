/*
 * XREFs of ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x180044168
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAXI_N@Z @ 0x180044DD0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAXI_N@Z.c)
 *     ?WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z @ 0x18008B030 (-WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@MEBA_NXZ @ 0x180044CE0 (-IsValid@CHwDisplayRenderTarget@@MEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::ValidateDeviceAndSwapChain(CHwDisplayRenderTarget *this)
{
  int v1; // ebx
  __int64 v3; // rax
  bool (__fastcall *v4)(CHwDisplayRenderTarget *__hidden); // rsi
  bool IsValid; // al

  v1 = *((_DWORD *)this + 75);
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v1, 0x687u);
  }
  else
  {
    v3 = *((_QWORD *)this + 20);
    if ( !v3 )
    {
      v1 = -2003304307;
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, -2003304307, 0x692u);
      goto LABEL_11;
    }
    v1 = *(_DWORD *)(v3 + 836);
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v1, 0x68Eu);
    }
    else if ( *((_BYTE *)this + 184) )
    {
      if ( !*((_QWORD *)this + 26)
        || ((v4 = *(bool (__fastcall **)(CHwDisplayRenderTarget *__hidden))(*(_QWORD *)this + 192LL),
             v4 != CHwDisplayRenderTarget::IsValid)
          ? (IsValid = v4(this))
          : (IsValid = CHwDisplayRenderTarget::IsValid(this)),
            !IsValid) )
      {
        v1 = -2003304442;
        MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, -2003304442, 0x69Bu);
        goto LABEL_11;
      }
    }
  }
  if ( v1 < 0 )
LABEL_11:
    *((_DWORD *)this + 75) = v1;
  return (unsigned int)v1;
}
