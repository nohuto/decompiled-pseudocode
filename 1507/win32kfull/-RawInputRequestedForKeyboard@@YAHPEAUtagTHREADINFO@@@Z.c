/*
 * XREFs of ?RawInputRequestedForKeyboard@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C004A73C
 * Callers:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C01D8014 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 * Callees:
 *     HasHidTable @ 0x1C0090A50 (HasHidTable.c)
 */

__int64 __fastcall RawInputRequestedForKeyboard(struct tagTHREADINFO *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( gHidCounters
    || (unsigned int)HasHidTable(a1) && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 48) + 784LL) + 100LL) & 0x10) != 0 )
  {
    return 1;
  }
  return v1;
}
