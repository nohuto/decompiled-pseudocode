/*
 * XREFs of ExpRemoveCurrentThreadFromThreadHistory @ 0x1400E90C0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1400C5D50 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 */

char __fastcall ExpRemoveCurrentThreadFromThreadHistory(__int64 a1)
{
  char result; // al
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v4; // bl

  result = *(_DWORD *)(a1 + 144) & 7;
  if ( result != 4 )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 0;
    while ( 1 )
    {
      result = v4;
      if ( *(struct _KTHREAD **)(a1 + 8LL * v4 + 72) == CurrentThread )
        break;
      if ( ++v4 >= 4u )
        return result;
    }
    ObfDereferenceObjectWithTag(CurrentThread, 0x746C6644u);
    result = v4;
    *(_QWORD *)(a1 + 8LL * v4 + 72) = 0LL;
  }
  return result;
}
