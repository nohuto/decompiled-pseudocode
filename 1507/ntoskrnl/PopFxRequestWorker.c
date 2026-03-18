/*
 * XREFs of PopFxRequestWorker @ 0x140029120
 * Callers:
 *     PopPepRequestWork @ 0x140027EF0 (PopPepRequestWork.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxRequestWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rdx
  unsigned int v5; // eax
  struct _KQUEUE *v6; // r10
  int v7; // r11d
  _DWORD *v8; // rcx
  int v9; // r8d

  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 120);
      LOBYTE(a4) = 0;
    }
    else
    {
      LOBYTE(a4) = 1;
      v5 = 1;
    }
    v4 = (_DWORD *)(a1 + 128);
    v6 = (struct _KQUEUE *)(a1 + 32);
  }
  else
  {
    v4 = &PopFxSystemWorkOrders;
    LOBYTE(a4) = 0;
    v5 = 4;
    v6 = &PopFxSystemWorkQueue;
  }
  v7 = 0;
  v8 = v4;
  if ( v5 )
  {
    while ( 1 )
    {
      v9 = v8[8];
      if ( !v9 )
        break;
      if ( v9 < v4[8] )
        v4 = v8;
      v8 += 14;
      if ( ++v7 >= v5 )
        return PopFxQueueWorkOrder(v6, v4, 0LL, a4);
    }
    v4 = v8;
  }
  return PopFxQueueWorkOrder(v6, v4, 0LL, a4);
}
