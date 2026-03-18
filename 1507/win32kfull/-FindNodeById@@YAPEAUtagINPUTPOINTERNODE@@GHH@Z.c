/*
 * XREFs of ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01FC1E4
 * Callers:
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01DAF68 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     GetPointerCursorIdInternal @ 0x1C01E0B90 (GetPointerCursorIdInternal.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F8E54 (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F9F44 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z @ 0x1C01FBDA0 (-AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z.c)
 *     ?CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z @ 0x1C01FBF3C (-CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z.c)
 *     ?GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z @ 0x1C01FC4E4 (-GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z.c)
 *     ?GetPointerVisualization@PointerList@@YAHGPEAH@Z @ 0x1C01FC510 (-GetPointerVisualization@PointerList@@YAHGPEAH@Z.c)
 *     ?IsPointerNodeInContact@PointerList@@YAHG@Z @ 0x1C01FC580 (-IsPointerNodeInContact@PointerList@@YAHG@Z.c)
 *     ?SetPointerInputCapture@PointerList@@YAHGPEAUtagWND@@H@Z @ 0x1C01FC924 (-SetPointerInputCapture@PointerList@@YAHGPEAUtagWND@@H@Z.c)
 *     ?SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z @ 0x1C01FC974 (-SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z.c)
 *     ?SetPointerVisualization@PointerList@@YAHGHPEAHH@Z @ 0x1C01FC9A4 (-SetPointerVisualization@PointerList@@YAHGHPEAHH@Z.c)
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01FCA70 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAG.c)
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C022FB64 (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C0230EE8 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     <none>
 */

struct tagINPUTPOINTERNODE *__fastcall FindNodeById(unsigned __int16 a1, int a2, int a3)
{
  __int64 *v3; // r10
  struct tagINPUTPOINTERNODE *v4; // r9
  struct tagINPUTPOINTERNODE *result; // rax
  bool v6; // zf

  v3 = &qword_1C03253D8;
  if ( !a2 )
    v3 = &qword_1C03253C8;
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
