/*
 * XREFs of UserReAllocPool @ 0x1C0012260
 * Callers:
 *     UserReAllocPoolZInit @ 0x1C0012210 (UserReAllocPoolZInit.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

void *__fastcall UserReAllocPool(void *Src, size_t a2, size_t a3, unsigned int a4)
{
  void *v7; // rax
  void *v8; // rbx

  v7 = (void *)Win32AllocPool(a3, a4);
  v8 = v7;
  if ( v7 )
  {
    if ( a2 > a3 )
      a2 = a3;
    memmove(v7, Src, a2);
    Win32FreePool(Src);
  }
  return v8;
}
