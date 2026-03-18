/*
 * XREFs of UserReAllocPoolWithQuota @ 0x1C0014610
 * Callers:
 *     UserReAllocPoolWithQuotaZInit @ 0x1C00145C0 (UserReAllocPoolWithQuotaZInit.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

void *__fastcall UserReAllocPoolWithQuota(void *Src, size_t a2, size_t a3, unsigned int a4)
{
  void *v7; // rax
  void *v8; // rbx

  v7 = (void *)Win32AllocPoolWithQuota(a3, a4);
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
