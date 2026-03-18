/*
 * XREFs of ?RawInputRequestedForKeyboard@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C01D92AC
 * Callers:
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C01D8E30 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 * Callees:
 *     HasHidTable @ 0x1C0053C70 (HasHidTable.c)
 */

__int64 __fastcall RawInputRequestedForKeyboard(struct tagTHREADINFO *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( gHidCounters
    || (unsigned int)HasHidTable((__int64)a1)
    && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 47) + 784LL) + 100LL) & 0x10) != 0 )
  {
    return 1;
  }
  return v1;
}
