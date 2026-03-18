/*
 * XREFs of ResFwpPageInBackground @ 0x14075CCB4
 * Callers:
 *     ResFwBackgroundTransition @ 0x14075CC74 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x1401525C4 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

void ResFwpPageInBackground()
{
  void *Memory; // rbx

  if ( (dword_140323CF0 & 0xC00) != 0xC00 && (dword_140323CF0 & 0x100000) == 0 )
  {
    if ( qword_140323D40 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(Memory, qword_140323D40, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( Src )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&Src, (__int64)Memory);
      }
    }
  }
}
