/*
 * XREFs of ?CoAllocStringLen@@YAJPEBG_KPEAPEAG@Z @ 0x18002D588
 * Callers:
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x18002D6EC (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002B68C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002C8A0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall CoAllocStringLen(IMalloc *a1, unsigned __int64 a2, unsigned __int16 **a3)
{
  unsigned __int64 v3; // rbp
  int v6; // ebx

  *a3 = 0LL;
  v3 = a2 + 1;
  if ( a2 + 1 >= a2 && (*a3 = 0LL, is_mul_ok(v3, 2uLL)) )
  {
    v6 = CTCoAllocPolicy::Alloc(a1, (v3 * (unsigned __int128)2uLL) >> 64, 2 * v3, (void **)a3);
    if ( v6 >= 0 )
      StringCchCopyNExW((char *)*a3, v3, 0LL, a2);
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return (unsigned int)v6;
}
