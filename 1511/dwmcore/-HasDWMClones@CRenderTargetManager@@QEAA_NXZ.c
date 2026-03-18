/*
 * XREFs of ?HasDWMClones@CRenderTargetManager@@QEAA_NXZ @ 0x1800072F0
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007D60 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007BA90 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CRenderTargetManager::HasDWMClones(CRenderTargetManager *this)
{
  char v1; // bl
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(_QWORD, __int64); // rbp
  __int64 v6; // rcx

  v1 = 0;
  v3 = 0LL;
  do
  {
    if ( (unsigned int)v3 >= *((_DWORD *)this + 12) )
      break;
    v4 = *(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 8 * v3) + 48LL);
    if ( v4 == CHwndRenderTarget::IsOfType
       ? CHwndRenderTarget::IsOfType(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3), 37LL)
       : (unsigned __int8)v4(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3), 37LL) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3) + 80LL);
      if ( *(_QWORD *)(v6 + 136) != v6 )
        v1 = 1;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( !v1 );
  return v1;
}
