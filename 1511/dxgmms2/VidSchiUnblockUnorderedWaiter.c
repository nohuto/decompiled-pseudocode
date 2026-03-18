/*
 * XREFs of VidSchiUnblockUnorderedWaiter @ 0x1C00130A0
 * Callers:
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BE90 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchTimeoutSyncObject @ 0x1C0014608 (VidSchTimeoutSyncObject.c)
 * Callees:
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0013124 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
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
    v6 = (struct _VIDSCH_QUEUE_PACKET *)(v4 - 34);
    v4 = (_QWORD *)*v4;
    if ( a2
      || *(_DWORD *)(a1 + 40) == 2
      && (*(_BYTE *)(a1 + 27) ? (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 40LL)) : (v7 = *(_QWORD *)(a1 + 56)),
          *((_QWORD *)v6 + 36) <= v7) )
    {
LABEL_2:
      VidSchiUnblockUnorderedWaitQueuePacket(v6, a2);
    }
    else if ( *(_DWORD *)(a1 + 40) == 4 )
    {
      v8 = *((_QWORD *)v6 + 36);
      if ( *(_BYTE *)(a1 + 28) )
      {
LABEL_18:
        if ( (*((_DWORD *)v6 + 64) & 4) != 0 )
          goto LABEL_2;
      }
      else
      {
        v9 = *(unsigned __int64 **)(a1 + 56);
        if ( *(_BYTE *)(a1 + 29) )
        {
          if ( *v9 >= v8 )
            goto LABEL_18;
        }
        else if ( *(_DWORD *)v9 - (int)v8 >= 0 )
        {
          goto LABEL_18;
        }
      }
    }
  }
}
