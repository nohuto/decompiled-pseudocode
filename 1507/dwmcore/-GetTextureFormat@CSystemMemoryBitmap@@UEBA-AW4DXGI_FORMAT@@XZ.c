/*
 * XREFs of ?GetTextureFormat@CSystemMemoryBitmap@@UEBA?AW4DXGI_FORMAT@@XZ @ 0x180143A90
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CSystemMemoryBitmap::GetTextureFormat(CSystemMemoryBitmap *this)
{
  __int64 *v1; // rdi
  __int64 v2; // rax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( this == (CSystemMemoryBitmap *)256 )
    v1 = 0LL;
  else
    v1 = (__int64 *)((char *)this - 240);
  v2 = *v1;
  v4 = 0;
  (*(void (__fastcall **)(__int64 *, unsigned int *))(v2 + 24))(v1, &v4);
  return v4;
}
