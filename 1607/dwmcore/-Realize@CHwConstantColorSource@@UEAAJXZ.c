/*
 * XREFs of ?Realize@CHwConstantColorSource@@UEAAJXZ @ 0x1801107F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Realize@CHwSolidColorTextureSource@@UEAAJXZ @ 0x18017C720 (-Realize@CHwSolidColorTextureSource@@UEAAJXZ.c)
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
