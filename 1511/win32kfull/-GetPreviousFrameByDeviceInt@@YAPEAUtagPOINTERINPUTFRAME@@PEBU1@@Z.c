/*
 * XREFs of ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C022FBC0
 * Callers:
 *     ?GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z @ 0x1C01F8304 (-GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z.c)
 *     ?GetPointerDataQPCTimeList@@YAH_KIPEA_KPEAH@Z @ 0x1C01F83FC (-GetPointerDataQPCTimeList@@YAH_KIPEA_KPEAH@Z.c)
 *     ?GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z @ 0x1C01F84E4 (-GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z @ 0x1C01F87B0 (-GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01F8C2C (-GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C023029C (-ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall GetPreviousFrameByDeviceInt(struct _LIST_ENTRY **a1)
{
  struct _LIST_ENTRY *v1; // rdx
  struct _LIST_ENTRY *result; // rax

  v1 = *a1;
  if ( *a1 == &gFrameListHead )
    return 0LL;
  do
  {
    result = v1;
    if ( v1[2].Blink == a1[5] )
      break;
    v1 = v1->Flink;
  }
  while ( v1 != &gFrameListHead );
  if ( v1 == &gFrameListHead )
    return 0LL;
  if ( HIDWORD(result[1].Blink) == LODWORD(result[1].Blink) )
    return 0LL;
  return result;
}
