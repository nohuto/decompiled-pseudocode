/*
 * XREFs of ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x1800278EC
 * Callers:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180022020 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CD2DResourceManager::MarkAllResourcesInvalid(CD2DResourceManager *this)
{
  __int64 v1; // rsi
  _QWORD *v3; // rax
  int v4; // r14d
  _QWORD *v5; // rax

  v1 = *((_QWORD *)this + 1);
  v3 = *(_QWORD **)(v1 + 8);
  if ( *(CD2DResourceManager **)v1 != this || *v3 != v1 )
    __fastfail(3u);
  *((_QWORD *)this + 1) = v3;
  for ( *v3 = this; (CD2DResourceManager *)v1 != this; *v5 = this )
  {
    v4 = *(_DWORD *)(v1 + 40);
    *(_BYTE *)(v1 - 8) = 0;
    while ( v4 > 0 )
    {
      (***(void (__fastcall ****)(_QWORD, __int64))(*(_QWORD *)(v1 + 16) + 8LL * (unsigned int)(v4 - 1)))(
        *(_QWORD *)(*(_QWORD *)(v1 + 16) + 8LL * (unsigned int)(v4 - 1)),
        v1 - 24);
      --v4;
    }
    v1 = *((_QWORD *)this + 1);
    v5 = *(_QWORD **)(v1 + 8);
    if ( *(CD2DResourceManager **)v1 != this || *v5 != v1 )
      __fastfail(3u);
    *((_QWORD *)this + 1) = v5;
  }
}
