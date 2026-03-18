/*
 * XREFs of PopPluginComponentActive @ 0x140027B7C
 * Callers:
 *     PopFxCompleteComponentActivation @ 0x140027434 (PopFxCompleteComponentActivation.c)
 *     PopFxActivateComponentWorker @ 0x14002775C (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400279A0 (PopFxIdleWorkerTail.c)
 * Callees:
 *     PopPepProcessEvent @ 0x140027CF4 (PopPepProcessEvent.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 *     PopPluginNotifyActive @ 0x140239DB4 (PopPluginNotifyActive.c)
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
