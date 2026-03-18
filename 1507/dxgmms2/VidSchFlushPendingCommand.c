/*
 * XREFs of VidSchFlushPendingCommand @ 0x1C0078390
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C002EC90 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00765D0 (VidSchiDiscardQueuePacket.c)
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
  int v13; // edx

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
        --*(_DWORD *)(a1 + 424);
        if ( v4 || (v13 = *((_DWORD *)v12 + 18), (v13 & 0x80u) == 0) )
        {
          VidSchiDiscardQueuePacket(v12);
        }
        else
        {
          if ( !*(_DWORD *)(a1 + 424) )
            *((_DWORD *)v12 + 18) = v13 & 0xFFFFFEFF | *((_DWORD *)v12 + 64) & 0x100 | 0x8000;
          VidSchiSubmitCommandPacketToQueue(v12);
        }
      }
      while ( *(_DWORD *)(a1 + 424) );
    }
    *(_DWORD *)(v8 + 472) = -1;
    return 0LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v6);
    return 3221225485LL;
  }
}
