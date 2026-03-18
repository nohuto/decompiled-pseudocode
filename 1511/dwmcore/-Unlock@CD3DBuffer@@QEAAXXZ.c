/*
 * XREFs of ?Unlock@CD3DBuffer@@QEAAXXZ @ 0x1800FBC50
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180034BF0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CD3DBuffer::Unlock(CD3DBuffer *this)
{
  if ( *((_DWORD *)this + 13) == 2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 560LL) + 120LL))(
      *(_QWORD *)(*((_QWORD *)this + 3) + 560LL),
      *((_QWORD *)this + 2),
      0LL);
    *((_QWORD *)this + 4) = 0LL;
  }
  *((_BYTE *)this + 56) = 0;
}
