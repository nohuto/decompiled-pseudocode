/*
 * XREFs of ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F604
 * Callers:
 *     ?GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F82B4 (-GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z @ 0x1C01F8304 (-GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z.c)
 *     ?GetPointerDataQPCTimeList@@YAH_KIPEA_KPEAH@Z @ 0x1C01F83FC (-GetPointerDataQPCTimeList@@YAH_KIPEA_KPEAH@Z.c)
 *     ?GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z @ 0x1C01F84E4 (-GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z @ 0x1C01F87B0 (-GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01F8C2C (-GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?IsPointerMsgRedirected@@YAH_KPEAH@Z @ 0x1C01F9034 (-IsPointerMsgRedirected@@YAH_KPEAH@Z.c)
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F90B8 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F5EC (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z @ 0x1C023047C (-SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z.c)
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
    if ( LODWORD(Flink[1].Flink) == a1 )
      break;
    Flink = Flink->Flink;
  }
  while ( Flink != &gFrameListHead );
  if ( Flink == &gFrameListHead )
    return 0LL;
  else
    return v3;
}
