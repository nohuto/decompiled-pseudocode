/*
 * XREFs of PopFxRequestWorker @ 0x1400DC918
 * Callers:
 *     PopPepRequestWork @ 0x1400DBB20 (PopPepRequestWork.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxRequestWorker(__int64 a1)
{
  _LIST_ENTRY *v1; // rdx
  unsigned int v2; // eax
  struct _KQUEUE *v3; // r10
  int v4; // r11d
  _LIST_ENTRY *v5; // rcx
  int Flink; // r8d

  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
      v2 = *(_DWORD *)(a1 + 120);
    else
      v2 = 1;
    v1 = (_LIST_ENTRY *)(a1 + 128);
    v3 = (struct _KQUEUE *)(a1 + 32);
  }
  else
  {
    v1 = &PopFxSystemWorkOrders;
    v2 = 4;
    v3 = &PopFxSystemWorkQueue;
  }
  v4 = 0;
  v5 = v1;
  if ( v2 )
  {
    while ( 1 )
    {
      Flink = (int)v5[2].Flink;
      if ( !Flink )
        break;
      if ( Flink < SLODWORD(v1[2].Flink) )
        v1 = v5;
      v5 = (_LIST_ENTRY *)((char *)v5 + 56);
      if ( ++v4 >= v2 )
        return PopFxQueueWorkOrder(v3, v1, 0LL);
    }
    v1 = v5;
  }
  return PopFxQueueWorkOrder(v3, v1, 0LL);
}
