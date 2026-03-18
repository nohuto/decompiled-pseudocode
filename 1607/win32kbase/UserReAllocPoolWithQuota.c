/*
 * XREFs of UserReAllocPoolWithQuota @ 0x1C0054C50
 * Callers:
 *     FastGetProfileKeysW @ 0x1C0054A10 (FastGetProfileKeysW.c)
 *     UserReAllocPoolWithQuotaZInit @ 0x1C0054C00 (UserReAllocPoolWithQuotaZInit.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
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
