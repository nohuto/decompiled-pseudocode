/*
 * XREFs of ?xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EC130
 * Callers:
 *     <none>
 * Callees:
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C01C0A88 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     zzzPostInertiaMessage @ 0x1C022A498 (zzzPostInertiaMessage.c)
 */

void __fastcall xxxInertiaTimerProc(struct tagWND *a1)
{
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  __int64 v2; // rbx

  HoldingFrameForDevice = FindHoldingFrameForDevice(ghdevTouchpad);
  if ( HoldingFrameForDevice )
  {
    v2 = *((_QWORD *)HoldingFrameForDevice + 11);
    if ( v2 )
    {
      EtwTraceTouchpadStopInertiaQueued();
      if ( (*(_DWORD *)(v2 + 1920) & 0x200000) != 0 )
        zzzPostInertiaMessage(0x23Bu);
    }
  }
  ghdevTouchpad = 0LL;
  gtmridTouchpadInertiaTimer = 0LL;
}
