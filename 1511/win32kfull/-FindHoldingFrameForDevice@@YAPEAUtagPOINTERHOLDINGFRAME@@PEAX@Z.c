/*
 * XREFs of ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F638
 * Callers:
 *     AbortDeviceActivity @ 0x1C01C8D90 (AbortDeviceActivity.c)
 *     EndAllActiveContacts @ 0x1C01CB36C (EndAllActiveContacts.c)
 *     FreePointerDevice @ 0x1C01CC4B0 (FreePointerDevice.c)
 *     xxxAssessPointerContactState @ 0x1C01CF118 (xxxAssessPointerContactState.c)
 *     xxxUpdateDeviceFrameState @ 0x1C01CFA74 (xxxUpdateDeviceFrameState.c)
 *     ?CheckTouchpadCachedInertia@@YAXPEAX@Z @ 0x1C01F1034 (-CheckTouchpadCachedInertia@@YAXPEAX@Z.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4F58 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ?xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01F5240 (-xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@PEAGPEAI@Z @ 0x1C01FD048 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 *     ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C022ECE8 (-CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     ?FindOrCreateHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F72C (-FindOrCreateHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     HoldRimCompleteFrame @ 0x1C0230E2C (HoldRimCompleteFrame.c)
 * Callees:
 *     <none>
 */

struct tagPOINTERHOLDINGFRAME *__fastcall FindHoldingFrameForDevice(void *a1)
{
  struct tagPOINTERHOLDINGFRAME *v1; // rax
  struct tagPOINTERHOLDINGFRAME *v4; // rcx

  v1 = qword_1C0327800;
  if ( qword_1C0327800 == (struct tagPOINTERHOLDINGFRAME *)&qword_1C0327800 )
    return 0LL;
  do
  {
    v4 = v1;
    if ( *((void **)v1 + 2) == a1 )
      break;
    v1 = *(struct tagPOINTERHOLDINGFRAME **)v1;
  }
  while ( v1 != (struct tagPOINTERHOLDINGFRAME *)&qword_1C0327800 );
  if ( v1 == (struct tagPOINTERHOLDINGFRAME *)&qword_1C0327800 )
    return 0LL;
  return v4;
}
