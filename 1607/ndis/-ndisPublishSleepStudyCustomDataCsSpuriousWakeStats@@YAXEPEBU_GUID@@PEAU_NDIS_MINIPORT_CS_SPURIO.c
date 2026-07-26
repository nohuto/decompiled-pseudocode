/*
 * XREFs of ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@@Z @ 0x1C00DCD94
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006DAA4 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z @ 0x1C00DCC3C (-ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z.c)
 */

void __fastcall ndisPublishSleepStudyCustomDataCsSpuriousWakeStats(
        char a1,
        const struct _GUID *a2,
        struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *a3)
{
  const unsigned __int16 **v4; // rdi
  __int64 v7; // rsi

  v4 = (const unsigned __int16 **)&off_1C0076F20;
  v7 = 11LL;
  do
  {
    ndisPublishSleepStudyCustomData(a1, a2, *v4, a3->WakeReasonUnspec);
    a3 = (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *)((char *)a3 + 4);
    ++v4;
    --v7;
  }
  while ( v7 );
}
