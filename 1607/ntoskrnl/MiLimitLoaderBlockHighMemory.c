/*
 * XREFs of MiLimitLoaderBlockHighMemory @ 0x14078ED68
 * Callers:
 *     MiMemoryLicense @ 0x14078EC84 (MiMemoryLicense.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall MiLimitLoaderBlockHighMemory(__int64 a1, ULONG_PTR a2)
{
  __int64 *v2; // r11
  __int64 *i; // r9
  unsigned __int64 v4; // r8
  __int64 v5; // rcx
  ULONG_PTR v6; // r10
  int v7; // eax
  __int64 *v8; // rcx
  __int64 **v9; // rax

  v2 = (__int64 *)(a1 + 32);
  for ( i = *(__int64 **)(a1 + 32); i != v2; i = (__int64 *)*i )
  {
    v4 = *((int *)i + 4);
    if ( (unsigned int)v4 <= 0x20 )
    {
      v5 = 0x1C0C00048LL;
      if ( _bittest64(&v5, v4) )
        continue;
    }
    v6 = i[3];
    if ( v6 + i[4] > a2 )
    {
      if ( (unsigned int)v4 > 0x18 || (v7 = 16777524, !_bittest(&v7, v4)) )
        KeBugCheckEx(0x1Au, 0x3030308uLL, a2, i[3], i[4]);
      if ( v6 < a2 )
      {
        i[4] = a2 - v6;
      }
      else
      {
        v8 = (__int64 *)*i;
        v9 = (__int64 **)i[1];
        if ( *(__int64 **)(*i + 8) != i || *v9 != i )
          __fastfail(3u);
        *v9 = v8;
        v8[1] = (__int64)v9;
      }
    }
  }
}
