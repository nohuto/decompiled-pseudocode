/*
 * XREFs of ?SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x18014FA20
 * Callers:
 *     ?SetHardwareProtection@CHwFullScreenRenderTarget@@WLA@EAAJ_N@Z @ 0x1800BDEE0 (-SetHardwareProtection@CHwFullScreenRenderTarget@@WLA@EAAJ_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetHardwareProtection(CHwFullScreenRenderTarget *this, char a2)
{
  __int64 v2; // rdi
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx

  v2 = *((_QWORD *)this + 26);
  if ( v2 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2) )
  {
    LOBYTE(v5) = a2;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 26) + 200LL))(*((_QWORD *)this + 26), v5);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x49Bu);
  }
  else
  {
    return (unsigned int)-2003292404;
  }
  return v7;
}
