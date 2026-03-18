/*
 * XREFs of PspDispatchWakeNotification @ 0x1403ECE08
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x14048641C (PspFreezeJobTree.c)
 * Callees:
 *     PspSendWakeNotification @ 0x1403EC9F4 (PspSendWakeNotification.c)
 */

char __fastcall PspDispatchWakeNotification(PVOID Object, _DWORD *a2, __int64 a3)
{
  int v4; // eax
  unsigned int v6; // ebx
  unsigned __int64 *v7; // rdi
  char v8; // al

  v4 = *a2 | a2[1];
  if ( *(_QWORD *)a2 )
  {
    v6 = 0;
    v7 = (unsigned __int64 *)(a3 + 8);
    do
    {
      v8 = 0;
      if ( *v7 )
        v8 = 3;
      LOBYTE(v4) = PspSendWakeNotification(Object, v6, a2, *v7, v8);
      if ( (_BYTE)v4 )
        break;
      ++v6;
      ++v7;
    }
    while ( v6 < 5 );
  }
  return v4;
}
