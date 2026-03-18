/*
 * XREFs of FreeHidData @ 0x1C000A1B0
 * Callers:
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00072B4 (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0007640 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0007730 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01CBFDC (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     NtUserGetRawInputBuffer @ 0x1C0214720 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeHidData(__int64 a1)
{
  __int64 result; // rax

  result = HMMarkObjectDestroy();
  if ( (_DWORD)result )
  {
    HMAssignmentUnlock(a1 + 24);
    return HMFreeObject(a1);
  }
  return result;
}
