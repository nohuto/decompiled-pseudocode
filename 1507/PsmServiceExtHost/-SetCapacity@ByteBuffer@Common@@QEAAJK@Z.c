/*
 * XREFs of ?SetCapacity@ByteBuffer@Common@@QEAAJK@Z @ 0x18004D9C0
 * Callers:
 *     ?GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z @ 0x180044C8C (-GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z.c)
 * Callees:
 *     ?AlternateHeapReAlloc@@YAJPEAX_K1PEAPEAX@Z @ 0x18001DF58 (-AlternateHeapReAlloc@@YAJPEAX_K1PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall Common::ByteBuffer::SetCapacity(void **this, unsigned int a2)
{
  __int64 result; // rax
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 > 0x7FFFFFFF )
    return 2147943683LL;
  if ( a2 != *((_DWORD *)this + 4) )
  {
    if ( a2 )
    {
      result = AlternateHeapReAlloc(this[1], *((unsigned int *)this + 4), a2, &v5);
      if ( (int)result < 0 )
        return result;
      this[1] = v5;
    }
    else
    {
      operator delete(this[1]);
      this[1] = 0LL;
    }
    *((_DWORD *)this + 4) = a2;
    if ( *(_DWORD *)this > a2 )
      *(_DWORD *)this = a2;
  }
  return 0LL;
}
