/*
 * XREFs of RawInputRequestedForMouse @ 0x1401ABFA8
 * Callers:
 *     EditionHandleRawInputThrottlingTimer @ 0x1401AB950 (EditionHandleRawInputThrottlingTimer.c)
 *     EditionRawInputRequestedForMouse @ 0x1401ABF90 (EditionRawInputRequestedForMouse.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x1401AE4CC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     EditionPostRawMouseInputMessage @ 0x1402706C0 (EditionPostRawMouseInputMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputRequestedForMouse(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v4 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 16844) || *(_DWORD *)(W32GetUserSessionState(v3, v2) + 16308) )
    return 1;
  return v4;
}
