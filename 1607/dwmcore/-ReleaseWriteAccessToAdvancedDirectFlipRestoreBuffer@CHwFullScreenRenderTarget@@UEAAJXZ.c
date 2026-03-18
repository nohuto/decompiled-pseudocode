/*
 * XREFs of ?ReleaseWriteAccessToAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x1801802B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::ReleaseWriteAccessToAdvancedDirectFlipRestoreBuffer(
        CHwFullScreenRenderTarget *this)
{
  __int64 v1; // rcx
  int v3; // eax
  unsigned int v4; // ebx

  v1 = *((_QWORD *)this + 5);
  if ( !v1 )
    return 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 136LL))(v1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x273u);
  return v4;
}
