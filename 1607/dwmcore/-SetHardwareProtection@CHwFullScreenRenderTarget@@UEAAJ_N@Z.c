/*
 * XREFs of ?SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x1801803A0
 * Callers:
 *     ?SetHardwareProtection@CHwFullScreenRenderTarget@@WLA@EAAJ_N@Z @ 0x1800C1660 (-SetHardwareProtection@CHwFullScreenRenderTarget@@WLA@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetHardwareProtection(CHwFullScreenRenderTarget *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx

  v4 = *((_QWORD *)this + 27);
  if ( v4 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) )
  {
    LOBYTE(v5) = a2;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 27) + 200LL))(*((_QWORD *)this + 27), v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x506u);
      return v7;
    }
  }
  else
  {
    v7 = -2003292404;
  }
  v8 = *((_QWORD *)this + 45);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 45) = 0LL;
  }
  return v7;
}
