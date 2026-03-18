/*
 * XREFs of ProcessKeyboardInput @ 0x1C01D22D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C00E8688 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01D0DA0 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 */

__int64 __fastcall ProcessKeyboardInput(struct DEVICEINFO *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _KEYBOARD_INPUT_DATA *v4; // rdi
  struct _KEYBOARD_INPUT_DATA *v5; // rsi

  EnterCrit(0LL, 1LL);
  v3 = gpKL;
  if ( gpKL )
  {
    if ( *(_DWORD *)(gpKL + 88) )
    {
      v2 = *((unsigned int *)a1 + 123);
      if ( *(_QWORD *)(gpKL + 104) != *(_QWORD *)((char *)a1 + 492) )
      {
        SearchAndSetKbdTbl(a1, v2, *((_DWORD *)a1 + 124));
        v3 = gpKL;
        *(_DWORD *)(gpKL + 104) = *((_DWORD *)a1 + 123);
        *(_DWORD *)(v3 + 108) = *((_DWORD *)a1 + 124);
      }
    }
  }
  v4 = (struct _KEYBOARD_INPUT_DATA *)((char *)a1 + 500);
  v5 = (struct _KEYBOARD_INPUT_DATA *)((char *)a1 + *((_QWORD *)a1 + 33) + 500);
  while ( v4 < v5 )
  {
    v3 = gpsi;
    if ( (*gpsi & 0x2000) != 0 )
      break;
    ProcessKeyboardInputWorker(v4++, a1, 1);
  }
  return UserSessionSwitchLeaveCrit(v3, v2);
}
