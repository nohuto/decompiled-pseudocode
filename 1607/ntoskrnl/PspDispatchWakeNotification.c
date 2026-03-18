/*
 * XREFs of PspDispatchWakeNotification @ 0x14048A150
 * Callers:
 *     PspFreezeJobTree @ 0x140489E4C (PspFreezeJobTree.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14048A7F4 (PspAllocateAndQueryNotificationChannel.c)
 * Callees:
 *     PspSendWakeNotification @ 0x14048A1BC (PspSendWakeNotification.c)
 */

__int64 __fastcall PspDispatchWakeNotification(PVOID Object, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rdi
  char v7; // al

  result = (unsigned int)(*a2 | a2[1]);
  if ( *(_QWORD *)a2 )
  {
    v5 = 0;
    v6 = (_QWORD *)(a3 + 8);
    do
    {
      v7 = 0;
      if ( *v6 )
        v7 = 3;
      result = PspSendWakeNotification(Object, v7);
      if ( (_BYTE)result )
        break;
      ++v5;
      ++v6;
    }
    while ( v5 < 5 );
  }
  return result;
}
