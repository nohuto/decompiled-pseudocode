/*
 * XREFs of ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C01C0A88
 * Callers:
 *     ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01BFFF8 (-CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     HoldRimCompleteFrame @ 0x1C01C1F74 (HoldRimCompleteFrame.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01EBE78 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ?xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EC130 (-xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@PEAGPEAI@Z @ 0x1C01F42C8 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 * Callees:
 *     <none>
 */

struct tagPOINTERHOLDINGFRAME *__fastcall FindHoldingFrameForDevice(void *a1)
{
  struct tagPOINTERHOLDINGFRAME *v1; // rax
  struct tagPOINTERHOLDINGFRAME *v4; // rcx

  v1 = qword_1C032DAA0;
  if ( qword_1C032DAA0 == (struct tagPOINTERHOLDINGFRAME *)&qword_1C032DAA0 )
    return 0LL;
  do
  {
    v4 = v1;
    if ( *((void **)v1 + 2) == a1 )
      break;
    v1 = *(struct tagPOINTERHOLDINGFRAME **)v1;
  }
  while ( v1 != (struct tagPOINTERHOLDINGFRAME *)&qword_1C032DAA0 );
  if ( v1 == (struct tagPOINTERHOLDINGFRAME *)&qword_1C032DAA0 )
    return 0LL;
  return v4;
}
