/*
 * XREFs of UserReAllocPoolWithQuota @ 0x1C0075D50
 * Callers:
 *     FastGetProfileKeysW @ 0x1C0075B10 (FastGetProfileKeysW.c)
 *     UserReAllocPoolWithQuotaZInit @ 0x1C0075D00 (UserReAllocPoolWithQuotaZInit.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

void *__fastcall UserReAllocPoolWithQuota(void *Src, size_t a2, size_t a3)
{
  void *v6; // rax
  void *v7; // rbx

  v6 = (void *)Win32AllocPoolWithQuota();
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
