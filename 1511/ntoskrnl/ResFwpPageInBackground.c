/*
 * XREFs of ResFwpPageInBackground @ 0x1406D9C6C
 * Callers:
 *     ResFwBackgroundTransition @ 0x1406D9C2C (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x14011E344 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 *     memmove @ 0x140166980 (memmove.c)
 */

void ResFwpPageInBackground()
{
  void *Memory; // rbx

  if ( (dword_1402D4BB0 & 0xC00) != 0xC00 && (dword_1402D4BB0 & 0x100000) == 0 )
  {
    if ( qword_1402D4C00 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(Memory, qword_1402D4C00, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( qword_1402D4BF8 )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_1402D4BF8, (__int64)Memory);
      }
    }
  }
}
