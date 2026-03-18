/*
 * XREFs of ?GetBuffer@CDWMOffScreenSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x18008C4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::GetBuffer(
        CDWMOffScreenSwapChain *this,
        int a2,
        unsigned int *a3,
        struct ID3D11Texture2D **a4)
{
  unsigned int v4; // esi

  v4 = 0;
  if ( a2 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    *a3 = 64;
    *a4 = (struct ID3D11Texture2D *)*((_QWORD *)this + 36);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 8LL))(*((_QWORD *)this + 36));
  }
  return v4;
}
