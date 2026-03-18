/*
 * XREFs of ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C01C0F48
 * Callers:
 *     ?ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C01C16E0 (-ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z @ 0x1C01EF4F0 (-GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z.c)
 *     ?GetPointerDataQPCTimeList@@YAH_KIPEA_KPEAH@Z @ 0x1C01EF5E8 (-GetPointerDataQPCTimeList@@YAH_KIPEA_KPEAH@Z.c)
 *     ?GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z @ 0x1C01EF6D0 (-GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z @ 0x1C01EF99C (-GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01EFE18 (-GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
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
    if ( v1[3].Blink == a1[7] )
      break;
    v1 = v1->Flink;
  }
  while ( v1 != &gFrameListHead );
  if ( v1 == &gFrameListHead )
    return 0LL;
  if ( HIDWORD(result[2].Blink) == LODWORD(result[2].Blink) )
    return 0LL;
  return result;
}
