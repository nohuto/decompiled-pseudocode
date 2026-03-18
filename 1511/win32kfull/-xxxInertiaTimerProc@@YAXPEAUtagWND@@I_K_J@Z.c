/*
 * XREFs of ?xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01F5240
 * Callers:
 *     <none>
 * Callees:
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F638 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     PostInertiaMessage @ 0x1C0239A9C (PostInertiaMessage.c)
 */

void __fastcall xxxInertiaTimerProc(struct tagWND *a1)
{
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  __int64 v2; // rbx
  __int64 v3; // rdx

  HoldingFrameForDevice = FindHoldingFrameForDevice(ghdevTouchpad);
  if ( HoldingFrameForDevice )
  {
    v2 = *((_QWORD *)HoldingFrameForDevice + 11);
    if ( v2 )
    {
      EtwTraceTouchpadStopInertiaQueued();
      v3 = *(_QWORD *)(v2 + 1560);
      if ( v3 )
        PostInertiaMessage(
          571LL,
          v3,
          (unsigned int)-__CFSHR__(*(_DWORD *)(v2 + 1544), 25),
          *(_QWORD *)(v2 + 1568),
          *(_QWORD *)(v2 + 1576));
    }
  }
  ghdevTouchpad = 0LL;
  gtmridTouchpadInertiaTimer = 0LL;
}
