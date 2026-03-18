/*
 * XREFs of ?GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C0EF0
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01088A8 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01C0B7C (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C01C16E0 (-ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

struct tagWND *__fastcall GetPrevMTNodeTarget(struct tagPOINTERINFONODE *a1, struct tagPOINTERINPUTFRAME *a2)
{
  __int64 v2; // rbx
  const struct tagPOINTERINPUTFRAME *v3; // rax
  __int64 v4; // r10
  struct tagPOINTERINPUTFRAME *v5; // rdi
  struct tagPOINTERINFONODE *ValidNodeInFrame; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = 0LL;
  v3 = ReferencePreviousFrameByDeviceInt(a2);
  v5 = v3;
  if ( v3 )
  {
    ValidNodeInFrame = FindValidNodeInFrame(v3, *(_WORD *)(v4 + 60), 0LL);
    if ( ValidNodeInFrame )
    {
      LOBYTE(v7) = 1;
      v2 = HMValidateHandleNoSecure(*((_QWORD *)ValidNodeInFrame + 10), v7, v8, v9);
    }
    UnreferenceFrameInt(v5);
  }
  return (struct tagWND *)v2;
}
