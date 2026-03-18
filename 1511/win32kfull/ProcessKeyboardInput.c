/*
 * XREFs of ProcessKeyboardInput @ 0x1C01DA520
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C01D8E30 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01D973C (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
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
      v2 = *((unsigned int *)a1 + 107);
      if ( *(_QWORD *)(gpKL + 104) != *(_QWORD *)((char *)a1 + 428) )
      {
        SearchAndSetKbdTbl(a1, v2, *((_DWORD *)a1 + 108));
        v3 = gpKL;
        *(_DWORD *)(gpKL + 104) = *((_DWORD *)a1 + 107);
        *(_DWORD *)(v3 + 108) = *((_DWORD *)a1 + 108);
      }
    }
  }
  v4 = (struct _KEYBOARD_INPUT_DATA *)((char *)a1 + 436);
  v5 = (struct _KEYBOARD_INPUT_DATA *)((char *)a1 + *((_QWORD *)a1 + 32) + 436);
  while ( v4 < v5 )
  {
    v3 = gpsi;
    if ( (*gpsi & 0x2000) != 0 )
      break;
    ProcessKeyboardInputWorker(v4++, a1, 1);
  }
  return UserSessionSwitchLeaveCrit(v3, v2);
}
