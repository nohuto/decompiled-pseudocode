/*
 * XREFs of VidSchDdiNotifyDpcWorker @ 0x1C000211C
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0002090 (VidSchDdiNotifyDpc.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C001DC94 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 * Callees:
 *     VidSchiProcessDpcDmaPacket @ 0x1C00021E0 (VidSchiProcessDpcDmaPacket.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C000EB0C (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0017F3C (VidSchiProcessDpcVSyncCookie.c)
 */

PSLIST_ENTRY __fastcall VidSchDdiNotifyDpcWorker(__int64 a1, int a2)
{
  union _SLIST_HEADER *v2; // rbp
  PSLIST_ENTRY result; // rax
  struct _SLIST_ENTRY *v6; // rbx
  PSLIST_ENTRY v7; // r8
  struct _SLIST_ENTRY *v8; // rdi
  int Next; // ecx

  v2 = *(union _SLIST_HEADER **)(a1 + 384);
  result = ExpInterlockedFlushSList(v2 + 120);
  v6 = 0LL;
  if ( result )
  {
    do
    {
      v7 = result - 1;
      result = result->Next;
      v7[1].Next = v6;
      v6 = v7 + 1;
    }
    while ( result );
    do
    {
      v8 = v6 - 1;
      v6 = v6->Next;
      Next = (int)v8->Next;
      if ( ((LODWORD(v8->Next) - 1) & 0xFFFFFFF6) != 0 || Next == 10 )
      {
        result = (PSLIST_ENTRY)(unsigned int)(Next - 3);
        if ( ((unsigned int)result & 0xFFFFFFFB) == 0 )
        {
          VidSchiProcessDpcVSyncCookie((struct _VIDSCH_VSYNC_COOKIE *)&v8[-1]);
          result = ExpInterlockedPushEntrySList(
                     (PSLIST_HEADER)(*(&v2[165].Alignment + *((unsigned int *)&v8[3].Next + 3)) + 15104),
                     v8);
        }
      }
      else
      {
        if ( a2 )
        {
          _InterlockedExchange((volatile __int32 *)&v8[2].Next[6].Next[25].Next + 2, 1);
          if ( (dword_1C00270E4 & 0x10) != 0 )
            VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(a1 + 408), 1u);
        }
        result = (PSLIST_ENTRY)VidSchiProcessDpcDmaPacket((struct _VIDSCH_DMA_PACKET *)&v8[-1]);
      }
    }
    while ( v6 );
  }
  return result;
}
