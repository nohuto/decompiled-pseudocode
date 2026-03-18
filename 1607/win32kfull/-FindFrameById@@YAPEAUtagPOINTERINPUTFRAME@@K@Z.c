/*
 * XREFs of ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A54
 * Callers:
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z @ 0x1C01C185C (-SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z.c)
 *     ?GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01EF4A0 (-GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z @ 0x1C01EF4F0 (-GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z.c)
 *     ?GetPointerDataQPCTimeList@@YAH_KIPEA_KPEAH@Z @ 0x1C01EF5E8 (-GetPointerDataQPCTimeList@@YAH_KIPEA_KPEAH@Z.c)
 *     ?GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z @ 0x1C01EF6D0 (-GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z @ 0x1C01EF99C (-GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01EFE18 (-GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?IsPointerMsgRedirected@@YAH_KPEAH@Z @ 0x1C01F0254 (-IsPointerMsgRedirected@@YAH_KPEAH@Z.c)
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F02D0 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall FindFrameById(int a1)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v3; // rcx

  Flink = gFrameListHead.Flink;
  if ( gFrameListHead.Flink == &gFrameListHead )
    return 0LL;
  do
  {
    v3 = Flink;
    if ( LODWORD(Flink[2].Flink) == a1 )
      break;
    Flink = Flink->Flink;
  }
  while ( Flink != &gFrameListHead );
  if ( Flink == &gFrameListHead )
    return 0LL;
  else
    return v3;
}
