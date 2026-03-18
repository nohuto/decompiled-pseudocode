/*
 * XREFs of PopPluginComponentActive @ 0x1400DB738
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1400DAF10 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400DB11C (PopFxIdleWorkerTail.c)
 *     PopFxCompleteComponentActivation @ 0x1400DC434 (PopFxCompleteComponentActivation.c)
 * Callees:
 *     PopPepProcessEvent @ 0x1400DB930 (PopPepProcessEvent.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PopFxBugCheck @ 0x1401E991C (PopFxBugCheck.c)
 *     PopPluginNotifyActive @ 0x1401EBBAC (PopPluginNotifyActive.c)
 */

__int64 __fastcall PopPluginComponentActive(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  char v6; // si
  __int64 v8; // rdi
  int v9; // r8d
  int v10; // r9d
  __int64 result; // rax

  v6 = a3;
  if ( a4 )
    memset(a4, 0, 0x40uLL);
  v8 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v8 + 124) )
  {
    LOBYTE(a3) = v6;
    PopPluginNotifyActive(*(_QWORD *)(v8 + 32), a2, a3);
  }
  if ( v6 )
  {
    v9 = 6;
    v10 = 2;
  }
  else
  {
    v9 = 3;
    v10 = 6;
  }
  result = PopPepProcessEvent(v8, (unsigned int)v8 + 200 * a2 + 176, v9, v10);
  if ( (_BYTE)result )
  {
    if ( !a4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
