/*
 * XREFs of ?ReleaseWriteAccessToAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x1801404C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
