/*
 * XREFs of ?Realize@CHwConstantColorSource@@UEAAJXZ @ 0x180150EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Realize@CHwSolidColorTextureSource@@UEAAJXZ @ 0x180151260 (-Realize@CHwSolidColorTextureSource@@UEAAJXZ.c)
 */

__int64 __fastcall CHwConstantColorSource::Realize(CHwConstantColorSource *this)
{
  CHwSolidColorTextureSource *v1; // rcx
  __int64 result; // rax

  v1 = (CHwSolidColorTextureSource *)*((_QWORD *)this + 3);
  result = 0LL;
  if ( v1 )
    return CHwSolidColorTextureSource::Realize(v1);
  return result;
}
