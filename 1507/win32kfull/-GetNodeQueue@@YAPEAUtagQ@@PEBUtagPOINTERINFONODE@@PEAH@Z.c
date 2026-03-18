/*
 * XREFs of ?GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z @ 0x1C022F654
 * Callers:
 *     ?GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8900 (-GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FAE54 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@PEAUtagPOINTERQFRAME@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C022E090 (-CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@.c)
 * Callees:
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01FC440 (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     PointerSpeedHitTest @ 0x1C022D338 (PointerSpeedHitTest.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagQ *__fastcall GetNodeQueue(const struct tagPOINTERINFONODE *a1, int *a2)
{
  struct tagWND *v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v4 = (struct tagWND *)ValidateHwnd(*((_QWORD *)a1 + 10));
  v6 = (__int64)v4;
  if ( v4 )
    return *(struct tagQ **)(*((_QWORD *)v4 + 2) + 392LL);
  if ( gbValidateHandleForIL
    && (gbValidateHandleForIL = 0, v6 = ValidateHwnd(*((_QWORD *)a1 + 10)), gbValidateHandleForIL = 1, v6) )
  {
    *a2 = 1;
  }
  else if ( (*(_DWORD *)a1 & 0x400) == 0 )
  {
    PointerList::GetPointerCapture(*((PointerList **)a1 + 2), 0, &v6, 0LL);
    v4 = (struct tagWND *)v6;
    if ( v6 )
      return *(struct tagQ **)(*((_QWORD *)v4 + 2) + 392LL);
    v4 = PointerSpeedHitTest(
           *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL),
           (const struct tagPOINTERINFONODE *)((char *)a1 + 48),
           0LL,
           0LL);
    if ( v4 )
      return *(struct tagQ **)(*((_QWORD *)v4 + 2) + 392LL);
  }
  return 0LL;
}
