/*
 * XREFs of VidSchiUnblockUnorderedWaiter @ 0x1C0010B10
 * Callers:
 *     VidSchiCompleteSignalSyncObject @ 0x1C000AA90 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchTimeoutSyncObject @ 0x1C0011E00 (VidSchTimeoutSyncObject.c)
 * Callees:
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0010B94 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 */

void __fastcall VidSchiUnblockUnorderedWaiter(__int64 a1, unsigned __int8 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rdi
  struct _VIDSCH_QUEUE_PACKET *v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r9
  unsigned __int64 *v9; // rax

  v2 = (_QWORD *)(a1 + 104);
  v4 = *(_QWORD **)(a1 + 104);
  while ( v4 != v2 )
  {
    v6 = (struct _VIDSCH_QUEUE_PACKET *)(v4 - 35);
    v4 = (_QWORD *)*v4;
    if ( a2
      || *(_DWORD *)(a1 + 40) == 2
      && (*(_BYTE *)(a1 + 27) ? (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 40LL)) : (v7 = *(_QWORD *)(a1 + 56)),
          *((_QWORD *)v6 + 37) <= v7) )
    {
LABEL_9:
      VidSchiUnblockUnorderedWaitQueuePacket(v6, a2);
    }
    else if ( *(_DWORD *)(a1 + 40) == 4 )
    {
      v8 = *((_QWORD *)v6 + 37);
      if ( *(_BYTE *)(a1 + 28) )
      {
LABEL_17:
        if ( (*((_DWORD *)v6 + 66) & 4) != 0 )
          goto LABEL_9;
      }
      else
      {
        v9 = *(unsigned __int64 **)(a1 + 56);
        if ( *(_BYTE *)(a1 + 29) )
        {
          if ( *v9 >= v8 )
            goto LABEL_17;
        }
        else if ( *(_DWORD *)v9 - (int)v8 >= 0 )
        {
          goto LABEL_17;
        }
      }
    }
  }
}
