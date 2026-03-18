/*
 * XREFs of ?AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ @ 0x180126598
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x1801284A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetManager::AlwaysNeedsRenderPass(CRenderTargetManager *this)
{
  char v2; // bl
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx

  if ( *((_DWORD *)this + 16) )
    return 1;
  v2 = 0;
  v3 = 0LL;
  do
  {
    if ( (unsigned int)v3 >= *((_DWORD *)this + 12) )
      break;
    v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, 38LL) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3) + 152LL);
      if ( *(_QWORD *)(v5 + 136) != v5 )
        v2 = 1;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( !v2 );
  return v2;
}
