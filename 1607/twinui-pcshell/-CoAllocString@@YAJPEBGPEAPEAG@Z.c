/*
 * XREFs of ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18002B734
 * Callers:
 *     ?Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z @ 0x18002B8D0 (-Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z.c)
 *     ?InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT@@@Z @ 0x18002B920 (-InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18002D35C (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002B68C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002C8A0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall CoAllocString(IMalloc *a1, unsigned __int16 **a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // rbp
  int v6; // ebx
  unsigned __int16 **v8; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v9; // [rsp+28h] [rbp-30h]
  unsigned int v10; // [rsp+30h] [rbp-28h]

  v2 = -1LL;
  do
    ++v2;
  while ( *((_WORD *)&a1->lpVtbl + v2) );
  v5 = v2 + 1;
  *a2 = 0LL;
  if ( v2 + 1 >= v2 && (*a2 = 0LL, is_mul_ok(v5, 2uLL)) )
  {
    v6 = CTCoAllocPolicy::Alloc(a1, (v5 * (unsigned __int128)2uLL) >> 64, 2 * v5, (void **)a2);
    if ( v6 >= 0 )
      StringCchCopyNExW(*a2, v2 + 1, (const unsigned __int16 *)a1, v2, v8, v9, v10);
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return (unsigned int)v6;
}
