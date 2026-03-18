/*
 * XREFs of ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F1E8
 * Callers:
 *     AbortDeviceActivity @ 0x1C01C71D0 (AbortDeviceActivity.c)
 *     EndAllActiveContacts @ 0x1C01C978C (EndAllActiveContacts.c)
 *     FreePointerDevice @ 0x1C01CA8D0 (FreePointerDevice.c)
 *     xxxAssessPointerContactState @ 0x1C01CD534 (xxxAssessPointerContactState.c)
 *     xxxUpdateDeviceFrameState @ 0x1C01CDE84 (xxxUpdateDeviceFrameState.c)
 *     ?CheckTouchpadCachedInertia@@YAXPEAX@Z @ 0x1C01F10D4 (-CheckTouchpadCachedInertia@@YAXPEAX@Z.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4B44 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ?xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01F4E30 (-xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@PEAGPEAI@Z @ 0x1C01FCBA8 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 *     ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C022E89C (-CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     ?FindOrCreateHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F2E0 (-FindOrCreateHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     HoldRimCompleteFrame @ 0x1C02309FC (HoldRimCompleteFrame.c)
 * Callees:
 *     <none>
 */

struct tagPOINTERHOLDINGFRAME *__fastcall FindHoldingFrameForDevice(void *a1)
{
  struct tagPOINTERHOLDINGFRAME *v1; // rax
  struct tagPOINTERHOLDINGFRAME *v4; // rcx

  v1 = qword_1C03253E8;
  if ( qword_1C03253E8 == (struct tagPOINTERHOLDINGFRAME *)&qword_1C03253E8 )
    return 0LL;
  do
  {
    v4 = v1;
    if ( *((void **)v1 + 2) == a1 )
      break;
    v1 = *(struct tagPOINTERHOLDINGFRAME **)v1;
  }
  while ( v1 != (struct tagPOINTERHOLDINGFRAME *)&qword_1C03253E8 );
  if ( v1 == (struct tagPOINTERHOLDINGFRAME *)&qword_1C03253E8 )
    return 0LL;
  return v4;
}
