/*
 * XREFs of PopPluginComponentActive @ 0x1400BFFEC
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1400BF4F0 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400BF6F0 (PopFxIdleWorkerTail.c)
 *     PopFxCompleteComponentActivation @ 0x1400BF8F4 (PopFxCompleteComponentActivation.c)
 * Callees:
 *     PopPepProcessEvent @ 0x1400C00D8 (PopPepProcessEvent.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 *     PopPluginNotifyActive @ 0x14020439C (PopPluginNotifyActive.c)
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
