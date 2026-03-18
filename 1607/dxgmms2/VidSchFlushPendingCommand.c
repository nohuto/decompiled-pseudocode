/*
 * XREFs of VidSchFlushPendingCommand @ 0x1C00A0EA0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0043780 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiDiscardQueuePacket @ 0x1C009FC70 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchFlushPendingCommand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v6; // rax
  __int64 v8; // rsi
  __int64 **v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rcx
  struct _VIDSCH_QUEUE_PACKET *v12; // rcx
  __int64 v13; // r8

  v4 = a2;
  if ( a1 )
  {
    v8 = *(_QWORD *)(a1 + 104);
    if ( *(_DWORD *)(a1 + 424) )
    {
      v9 = (__int64 **)(a1 + 680);
      do
      {
        v10 = *v9;
        v11 = **v9;
        if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v11 + 8) != v10 )
          __fastfail(3u);
        *v9 = (__int64 *)v11;
        *(_QWORD *)(v11 + 8) = v9;
        v12 = (struct _VIDSCH_QUEUE_PACKET *)(v10 - 4);
        v13 = (unsigned int)--*(_DWORD *)(a1 + 424);
        if ( v4 || (a2 = *((unsigned int *)v12 + 18), (a2 & 0x40) == 0) )
        {
          VidSchiDiscardQueuePacket(v12, a2, v13, a4);
        }
        else
        {
          if ( !(_DWORD)v13 )
            *((_DWORD *)v12 + 18) = a2 & 0xFFFFFF7F | *((_DWORD *)v12 + 66) & 0x80 | 0x4000;
          VidSchiSubmitCommandPacketToQueue(v12);
        }
      }
      while ( *(_DWORD *)(a1 + 424) );
    }
    *(_DWORD *)(v8 + 464) = -1;
    return 0LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v6);
    return 3221225485LL;
  }
}
