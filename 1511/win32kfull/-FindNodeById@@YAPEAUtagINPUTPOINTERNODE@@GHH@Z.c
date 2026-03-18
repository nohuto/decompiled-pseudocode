/*
 * XREFs of ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01FC678
 * Callers:
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01DB568 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     GetPointerCursorIdInternal @ 0x1C01E11A0 (GetPointerCursorIdInternal.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F9304 (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z @ 0x1C01FC234 (-AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z.c)
 *     ?CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z @ 0x1C01FC3D0 (-CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z.c)
 *     ?GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z @ 0x1C01FC984 (-GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z.c)
 *     ?GetPointerVisualization@PointerList@@YAHGPEAH@Z @ 0x1C01FC9B0 (-GetPointerVisualization@PointerList@@YAHGPEAH@Z.c)
 *     ?IsPointerNodeInContact@PointerList@@YAHG@Z @ 0x1C01FCA20 (-IsPointerNodeInContact@PointerList@@YAHG@Z.c)
 *     ?SetPointerInputCapture@PointerList@@YAHGPEAUtagWND@@H@Z @ 0x1C01FCDC4 (-SetPointerInputCapture@PointerList@@YAHGPEAUtagWND@@H@Z.c)
 *     ?SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z @ 0x1C01FCE14 (-SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z.c)
 *     ?SetPointerVisualization@PointerList@@YAHGHPEAHH@Z @ 0x1C01FCE44 (-SetPointerVisualization@PointerList@@YAHGHPEAHH@Z.c)
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01FCF10 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAG.c)
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C022FF94 (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C0231318 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     <none>
 */

struct tagINPUTPOINTERNODE *__fastcall FindNodeById(unsigned __int16 a1, int a2, int a3)
{
  __int64 *v3; // r10
  struct tagINPUTPOINTERNODE *v4; // r9
  struct tagINPUTPOINTERNODE *result; // rax
  bool v6; // zf

  v3 = &qword_1C03277F0;
  if ( !a2 )
    v3 = &qword_1C03277E0;
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
