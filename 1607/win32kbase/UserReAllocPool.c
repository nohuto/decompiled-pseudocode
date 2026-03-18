/*
 * XREFs of UserReAllocPool @ 0x1C0079490
 * Callers:
 *     UserReAllocPoolZInit @ 0x1C0079440 (UserReAllocPoolZInit.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

void *__fastcall UserReAllocPool(void *Src, size_t a2, size_t a3)
{
  void *v6; // rax
  void *v7; // rbx

  v6 = (void *)Win32AllocPool();
  v7 = v6;
  if ( v6 )
  {
    if ( a2 > a3 )
      a2 = a3;
    memmove(v6, Src, a2);
    Win32FreePool();
  }
  return v7;
}
