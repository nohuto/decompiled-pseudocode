/*
 * XREFs of VidSchDdiNotifyDpcWorker @ 0x1C0020BE4
 * Callers:
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0022F10 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 * Callees:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C00056C0 (VidSchiProcessDpcVSyncCookie.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C001C8B8 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C0020DEC (VidSchiProcessDpcDmaPacket.c)
 */

PSLIST_ENTRY __fastcall VidSchDdiNotifyDpcWorker(__int64 a1, int a2)
{
  union _SLIST_HEADER *v2; // rbp
  PSLIST_ENTRY result; // rax
  __int64 v6; // r9
  _QWORD *v7; // rbx
  __int64 v8; // r8
  struct _SLIST_ENTRY *v9; // rdi
  int Next; // ecx
  __int64 v11; // rdx

  v2 = *(union _SLIST_HEADER **)(a1 + 408);
  result = ExpInterlockedFlushSList(v2 + 117);
  v7 = 0LL;
  if ( result )
  {
    do
    {
      v8 = (__int64)&result[-1];
      result = result->Next;
      *(_QWORD *)(v8 + 16) = v7;
      v7 = (_QWORD *)(v8 + 16);
    }
    while ( result );
    do
    {
      v9 = (struct _SLIST_ENTRY *)(v7 - 2);
      v7 = (_QWORD *)*v7;
      Next = (int)v9->Next;
      if ( ((LODWORD(v9->Next) - 1) & 0xFFFFFFF6) != 0 || Next == 10 )
      {
        result = (PSLIST_ENTRY)(unsigned int)(Next - 3);
        if ( ((unsigned int)result & 0xFFFFFFFB) == 0 )
        {
          VidSchiProcessDpcVSyncCookie((struct _VIDSCH_VSYNC_COOKIE *)&v9[-1]);
          result = ExpInterlockedPushEntrySList(
                     (PSLIST_HEADER)(*(&v2[162].Alignment + HIDWORD(v9[4].Next)) + 15136),
                     v9);
        }
      }
      else
      {
        if ( a2 )
        {
          _InterlockedExchange((volatile __int32 *)&v9[2].Next[6].Next[27].Next + 2, 1);
          v11 = (unsigned int)dword_1C002F104 >> 4;
          if ( (dword_1C002F104 & 0x10) != 0 )
          {
            LOBYTE(v11) = 1;
            VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(a1 + 432), v11, v8, v6);
          }
        }
        result = (PSLIST_ENTRY)VidSchiProcessDpcDmaPacket((struct _VIDSCH_DMA_PACKET *)&v9[-1]);
      }
    }
    while ( v7 );
  }
  return result;
}
