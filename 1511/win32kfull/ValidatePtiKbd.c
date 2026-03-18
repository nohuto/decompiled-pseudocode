/*
 * XREFs of ValidatePtiKbd @ 0x1C008488C
 * Callers:
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00874E8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C01D8E30 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidatePtiKbd(__int64 a1)
{
  __int64 v1; // rax

  if ( !a1 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  else
    return *(_QWORD *)(a1 + 56);
}
