/*
 * XREFs of AllocateHidData @ 0x1C000285C
 * Callers:
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00021AC (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0002560 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C000276C (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D43F0 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateHidData(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v13; // rax

  if ( a5 )
  {
    v8 = *(_QWORD *)(a5 + 16);
  }
  else
  {
    v13 = *(_QWORD *)(gpqForeground + 80LL);
    if ( v13 )
      v8 = *(_QWORD *)(v13 + 16);
    else
      v8 = *(_QWORD *)(gpqForeground + 56LL);
  }
  if ( (int)a3 + 56 < (unsigned int)a3 )
    return 0LL;
  v9 = a3 + 24;
  if ( (int)a3 + 24 < (unsigned int)a3 )
    return 0LL;
  LOBYTE(a3) = 18;
  v10 = HMAllocObject(v8, 0LL, a3);
  v11 = v10;
  if ( v10 )
  {
    *(_QWORD *)(v10 + 24) = 0LL;
    HMAssignmentLock(v10 + 24, a5);
    *(_DWORD *)(v11 + 36) = v9;
    *(_DWORD *)(v11 + 32) = a2;
    *(_QWORD *)(v11 + 40) = a1;
    *(_QWORD *)(v11 + 48) = a4;
  }
  return v11;
}
