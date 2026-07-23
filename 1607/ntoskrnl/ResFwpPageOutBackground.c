/*
 * XREFs of ResFwpPageOutBackground @ 0x140727A6C
 * Callers:
 *     ResFwBackgroundTransition @ 0x140725ACC (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140127764 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void ResFwpPageOutBackground()
{
  void *v0; // rsi
  PVOID PoolWithTag; // rax
  void *v2; // rdi

  if ( (dword_1402F9F90 & 0xC00) != 0xC00 )
  {
    v0 = Src;
    if ( Src )
    {
      if ( qword_1402F9FE0 )
      {
LABEL_9:
        _InterlockedExchange64((volatile __int64 *)&Src, 0LL);
        BgpFwFreeMemory((__int64)v0);
        return;
      }
      BgpFwReleaseLock();
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x4B494742u);
      v2 = PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, Src, (unsigned int)Size);
      BgpFwAcquireLock();
      if ( v2 )
      {
        if ( qword_1402F9FE0 )
        {
          BgpFwReleaseLock();
          ExFreePoolWithTag(v2, 0x4B494742u);
          BgpFwAcquireLock();
          return;
        }
        _InterlockedExchange64((volatile __int64 *)&qword_1402F9FE0, (__int64)v2);
        goto LABEL_9;
      }
    }
  }
}
