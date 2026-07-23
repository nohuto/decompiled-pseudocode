/*
 * XREFs of ResFwpPageInBackground @ 0x140725B0C
 * Callers:
 *     ResFwBackgroundTransition @ 0x140725ACC (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140127764 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x140129A78 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

void ResFwpPageInBackground()
{
  void *Memory; // rbx

  if ( (dword_1402F9F90 & 0xC00) != 0xC00 && (dword_1402F9F90 & 0x100000) == 0 )
  {
    if ( qword_1402F9FE0 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(Memory, qword_1402F9FE0, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( Src )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&Src, (__int64)Memory);
      }
    }
  }
}
