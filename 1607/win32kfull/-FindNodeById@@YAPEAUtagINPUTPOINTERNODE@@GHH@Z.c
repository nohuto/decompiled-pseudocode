/*
 * XREFs of ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F3918
 * Callers:
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C01C12EC (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C01C25B4 (xxxSetManipulationInputTarget.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01D2F84 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     GetPointerCursorIdInternal @ 0x1C01D74F8 (GetPointerCursorIdInternal.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F050C (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F15E8 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z @ 0x1C01F34D4 (-AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z.c)
 *     ?CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z @ 0x1C01F3670 (-CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z.c)
 *     ?GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z @ 0x1C01F3C24 (-GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z.c)
 *     ?GetPointerVisualization@PointerList@@YAHGPEAH@Z @ 0x1C01F3C50 (-GetPointerVisualization@PointerList@@YAHGPEAH@Z.c)
 *     ?SetPointerInputCapture@PointerList@@YAHGPEAUtagWND@@H@Z @ 0x1C01F4044 (-SetPointerInputCapture@PointerList@@YAHGPEAUtagWND@@H@Z.c)
 *     ?SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z @ 0x1C01F4094 (-SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z.c)
 *     ?SetPointerVisualization@PointerList@@YAHGHPEAHH@Z @ 0x1C01F40C4 (-SetPointerVisualization@PointerList@@YAHGHPEAHH@Z.c)
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01F4190 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAG.c)
 *     IsPointerNodeInContact @ 0x1C01F45D0 (IsPointerNodeInContact.c)
 * Callees:
 *     <none>
 */

struct tagINPUTPOINTERNODE *__fastcall FindNodeById(unsigned __int16 a1, int a2, int a3)
{
  __int64 *v3; // r10
  struct tagINPUTPOINTERNODE *v4; // r9
  struct tagINPUTPOINTERNODE *result; // rax
  bool v6; // zf

  v3 = &qword_1C032DB00;
  if ( !a2 )
    v3 = &qword_1C032DAF0;
  v4 = (struct tagINPUTPOINTERNODE *)*v3;
  if ( (__int64 *)*v3 == v3 )
    return 0LL;
  do
  {
    result = (struct tagINPUTPOINTERNODE *)((char *)v4 - 16);
    if ( !a2 )
      result = v4;
    if ( a3 )
      v6 = *((_WORD *)result + 17) == a1;
    else
      v6 = *((_WORD *)result + 16) == a1;
    if ( v6 )
      break;
    v4 = *(struct tagINPUTPOINTERNODE **)v4;
  }
  while ( v4 != (struct tagINPUTPOINTERNODE *)v3 );
  if ( v4 == (struct tagINPUTPOINTERNODE *)v3 )
    return 0LL;
  return result;
}
