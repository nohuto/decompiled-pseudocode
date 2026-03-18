/*
 * XREFs of ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0012910
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00765D0 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiFreeHistoryBufferStorage(struct _VIDSCH_QUEUE_PACKET *a1)
{
  char *v2; // rcx
  char *v3; // rcx

  v2 = (char *)*((_QWORD *)a1 + 31);
  if ( v2 != (char *)a1 + 184 )
    ExFreePoolWithTag(v2, 0);
  v3 = (char *)*((_QWORD *)a1 + 74);
  if ( v3 != (char *)a1 + 152 )
    ExFreePoolWithTag(v3, 0);
  *((_QWORD *)a1 + 31) = 0LL;
  *((_QWORD *)a1 + 74) = 0LL;
}
