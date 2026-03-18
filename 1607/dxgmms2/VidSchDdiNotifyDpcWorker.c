/*
 * XREFs of VidSchDdiNotifyDpcWorker @ 0x1C0023C30
 * Callers:
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0027554 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 * Callees:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0005A50 (VidSchiProcessDpcVSyncCookie.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C001D8A0 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C0024584 (VidSchiProcessDpcDmaPacket.c)
 */

__int64 __fastcall VidSchDdiNotifyDpcWorker(__int64 a1, int a2)
{
  union _SLIST_HEADER *v2; // rbp
  __int64 result; // rax
  __int64 v6; // r9
  _QWORD *v7; // rbx
  __int64 v8; // r8
  struct _SLIST_ENTRY *v9; // rdi
  unsigned int Next; // ecx
  __int64 v11; // rdx

  v2 = *(union _SLIST_HEADER **)(a1 + 384);
  result = (__int64)ExpInterlockedFlushSList(v2 + 119);
  v7 = 0LL;
  if ( result )
  {
    do
    {
      v8 = result - 16;
      result = *(_QWORD *)result;
      *(_QWORD *)(v8 + 16) = v7;
      v7 = (_QWORD *)(v8 + 16);
    }
    while ( result );
    do
    {
      v9 = (struct _SLIST_ENTRY *)(v7 - 2);
      v7 = (_QWORD *)*v7;
      Next = (unsigned int)v9->Next;
      result = (unsigned int)(LODWORD(v9->Next) - 1);
      if ( (result & 0xFFFFFFF6) != 0 )
      {
        if ( Next <= 0xA )
        {
LABEL_10:
          result = 1160LL;
          if ( _bittest((const int *)&result, Next) )
          {
            VidSchiProcessDpcVSyncCookie((struct _VIDSCH_VSYNC_COOKIE *)&v9[-1]);
            result = (__int64)ExpInterlockedPushEntrySList(
                                (PSLIST_HEADER)(*(&v2[185].Region + HIDWORD(v9[4].Next)) + 19232),
                                v9);
          }
        }
      }
      else
      {
        if ( Next == 10 )
          goto LABEL_10;
        if ( a2 )
        {
          _InterlockedExchange((volatile __int32 *)&v9[2].Next[6].Next[30], 1);
          v11 = VIDMM_GLOBAL::_Config >> 4;
          if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
          {
            LOBYTE(v11) = 1;
            VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(a1 + 408), v11, v8, v6);
          }
        }
        result = VidSchiProcessDpcDmaPacket((struct _VIDSCH_DMA_PACKET *)&v9[-1]);
      }
    }
    while ( v7 );
  }
  return result;
}
