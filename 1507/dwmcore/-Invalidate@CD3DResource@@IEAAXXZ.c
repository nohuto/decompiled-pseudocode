/*
 * XREFs of ?Invalidate@CD3DResource@@IEAAXXZ @ 0x180015CC8
 * Callers:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180015B8C (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?DestroyAndRelease@CD3DResource@@QEAAXXZ @ 0x180015C58 (-DestroyAndRelease@CD3DResource@@QEAAXXZ.c)
 *     ?CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ @ 0x1800846C0 (-CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD3DResource::Invalidate(CD3DResource *this)
{
  int v2; // ebp

  if ( *((_BYTE *)this + 76) )
  {
    v2 = *((_DWORD *)this + 26);
    *((_BYTE *)this + 76) = 0;
    while ( v2 > 0 )
    {
      (***(void (__fastcall ****)(_QWORD, char *))(*((_QWORD *)this + 10) + 8LL * (unsigned int)(v2 - 1)))(
        *(_QWORD *)(*((_QWORD *)this + 10) + 8LL * (unsigned int)(v2 - 1)),
        (char *)this + 24);
      --v2;
    }
  }
}
