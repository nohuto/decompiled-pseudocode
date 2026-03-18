/*
 * XREFs of ?CheckPresentDurationSupport@CHwFullScreenRenderTarget@@UEAAJIPEAI@Z @ 0x180140190
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckPresentDurationSupport(
        CHwFullScreenRenderTarget *this,
        unsigned int a2,
        unsigned int *a3)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  int v8; // eax

  v3 = *((_QWORD *)this + 4);
  v4 = 0;
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 24LL))(*((_QWORD *)this + 4)) )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 4) + 184LL))(
             *((_QWORD *)this + 4),
             a2,
             a3);
      v4 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2F7u);
    }
  }
  return v4;
}
