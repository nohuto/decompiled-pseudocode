/*
 * XREFs of ?ReleaseWriteAccessToAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x18014F9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::ReleaseWriteAccessToAdvancedDirectFlipRestoreBuffer(
        CHwFullScreenRenderTarget *this)
{
  __int64 v1; // rdi
  int v3; // eax
  unsigned int v4; // ebx

  v1 = *((_QWORD *)this + 4);
  if ( !v1 )
    return 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 136LL))(*((_QWORD *)this + 4));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x26Eu);
  return v4;
}
