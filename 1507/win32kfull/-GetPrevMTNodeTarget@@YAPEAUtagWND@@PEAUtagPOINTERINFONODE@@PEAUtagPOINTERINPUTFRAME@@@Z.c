/*
 * XREFs of ?GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C022F71C
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0132C4C (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C022F3A8 (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C022FE6C (-ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C023090C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

struct tagWND *__fastcall GetPrevMTNodeTarget(struct tagPOINTERINFONODE *a1, struct tagPOINTERINPUTFRAME *a2)
{
  __int64 v2; // rbx
  const struct tagPOINTERINPUTFRAME *v3; // rax
  __int64 v4; // r10
  struct tagPOINTERINPUTFRAME *v5; // rdi
  struct tagPOINTERINFONODE *ValidNodeInFrame; // rax

  v2 = 0LL;
  v3 = ReferencePreviousFrameByDeviceInt(a2);
  v5 = v3;
  if ( v3 )
  {
    ValidNodeInFrame = FindValidNodeInFrame(v3, *(_WORD *)(v4 + 60), 0LL);
    if ( ValidNodeInFrame )
      v2 = HMValidateHandleNoSecure(*((_QWORD *)ValidNodeInFrame + 10), 1);
    UnreferenceFrameInt(v5);
  }
  return (struct tagWND *)v2;
}
