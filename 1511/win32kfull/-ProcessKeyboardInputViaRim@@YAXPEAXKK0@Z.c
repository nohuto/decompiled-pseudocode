/*
 * XREFs of ?ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z @ 0x1C01D8D34
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 * Callees:
 *     FindRimDevBackedDeviceInfo @ 0x1C014F184 (FindRimDevBackedDeviceInfo.c)
 *     ?ProcessKeyboardInjectedInputViaRim@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01D8B30 (-ProcessKeyboardInjectedInputViaRim@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C01D8E30 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01D973C (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 */

void __fastcall ProcessKeyboardInputViaRim(struct _KEYBOARD_INPUT_DATA *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct _KEYBOARD_INPUT_DATA *v4; // rdi
  struct _KEYBOARD_INPUT_DATA *v5; // rsi
  BOOL v7; // ebp
  __int64 v8; // r8
  struct DEVICEINFO *RimDevBackedDeviceInfo; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DEVICEINFO *v12; // rbx

  v4 = a1;
  v5 = (struct _KEYBOARD_INPUT_DATA *)((char *)a1 + a3);
  EnterCrit(0LL, 1LL);
  v7 = v4->UnitId == 0xFFFE;
  RimDevBackedDeviceInfo = FindRimDevBackedDeviceInfo(a4, v7, v8);
  v12 = RimDevBackedDeviceInfo;
  if ( RimDevBackedDeviceInfo )
  {
    v11 = gpKL;
    if ( gpKL )
    {
      if ( *(_DWORD *)(gpKL + 88) )
      {
        v10 = *((unsigned int *)RimDevBackedDeviceInfo + 107);
        if ( *(_QWORD *)(gpKL + 104) != *(_QWORD *)((char *)RimDevBackedDeviceInfo + 428) )
        {
          SearchAndSetKbdTbl(RimDevBackedDeviceInfo, v10, *((_DWORD *)RimDevBackedDeviceInfo + 108));
          v11 = gpKL;
          *(_DWORD *)(gpKL + 104) = *((_DWORD *)v12 + 107);
          *(_DWORD *)(v11 + 108) = *((_DWORD *)v12 + 108);
        }
      }
    }
    for ( ; v4 < v5; ++v4 )
    {
      v11 = gpsi;
      if ( (*gpsi & 0x2000) != 0 )
        break;
      if ( v7 )
        ProcessKeyboardInjectedInputViaRim(v4, v12);
      else
        ProcessKeyboardInputWorker(v4, v12, 1);
    }
  }
  UserSessionSwitchLeaveCrit(v11, v10);
}
