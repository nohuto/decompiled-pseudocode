/*
 * XREFs of UserReAllocPool @ 0x1C00755F0
 * Callers:
 *     UserReAllocPoolZInit @ 0x1C00755A0 (UserReAllocPoolZInit.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
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
