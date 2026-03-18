/*
 * XREFs of ?CheckPresentDurationSupport@CHwFullScreenRenderTarget@@UEAAJIPEAI@Z @ 0x18017FD60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckPresentDurationSupport(
        CHwFullScreenRenderTarget *this,
        unsigned int a2,
        unsigned int *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v8; // eax

  v4 = 0;
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5) )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 5) + 192LL))(
             *((_QWORD *)this + 5),
             a2,
             a3);
      v4 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x300u);
    }
  }
  return v4;
}
