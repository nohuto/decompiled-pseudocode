/*
 * XREFs of UserReAllocPoolWithQuotaZInit @ 0x1C0054C00
 * Callers:
 *     <none>
 * Callees:
 *     UserReAllocPoolWithQuota @ 0x1C0054C50 (UserReAllocPoolWithQuota.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall UserReAllocPoolWithQuotaZInit(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi

  v5 = UserReAllocPoolWithQuota(a1);
  v6 = v5;
  if ( v5 && a3 > a2 )
    memset((void *)(v5 + a2), 0, a3 - a2);
  return v6;
}
