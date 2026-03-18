/*
 * XREFs of ResFwpPageOutBackground @ 0x1406DB9AC
 * Callers:
 *     ResFwBackgroundTransition @ 0x1406D9C2C (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void ResFwpPageOutBackground()
{
  void *v0; // rsi
  PVOID PoolWithTag; // rax
  void *v2; // rdi

  if ( (dword_1402D4BB0 & 0xC00) != 0xC00 )
  {
    v0 = qword_1402D4BF8;
    if ( qword_1402D4BF8 )
    {
      if ( qword_1402D4C00 )
      {
LABEL_9:
        _InterlockedExchange64((volatile __int64 *)&qword_1402D4BF8, 0LL);
        BgpFwFreeMemory((__int64)v0);
        return;
      }
      BgpFwReleaseLock();
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x4B494742u);
      v2 = PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, qword_1402D4BF8, (unsigned int)Size);
      BgpFwAcquireLock();
      if ( v2 )
      {
        if ( qword_1402D4C00 )
        {
          BgpFwReleaseLock();
          ExFreePoolWithTag(v2, 0x4B494742u);
          BgpFwAcquireLock();
          return;
        }
        _InterlockedExchange64((volatile __int64 *)&qword_1402D4C00, (__int64)v2);
        goto LABEL_9;
      }
    }
  }
}
