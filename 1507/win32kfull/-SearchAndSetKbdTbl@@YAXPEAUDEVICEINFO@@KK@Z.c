/*
 * XREFs of ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01D8878
 * Callers:
 *     ?ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z @ 0x1C01D7F18 (-ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z.c)
 *     ProcessKeyboardInput @ 0x1C01D9F10 (ProcessKeyboardInput.c)
 * Callees:
 *     SetGlobalKeyboardTableInfo @ 0x1C013A708 (SetGlobalKeyboardTableInfo.c)
 */

void __fastcall SearchAndSetKbdTbl(struct DEVICEINFO *a1, int a2, int a3)
{
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned int v7; // r11d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax

  v5 = *(_QWORD *)(gpKL + 56);
  v6 = *(_QWORD *)(v5 + 32);
  if ( (*(_DWORD *)(v6 + 96) != a2 || *(_DWORD *)(v6 + 100) != a3) && (*((_BYTE *)a1 + 64) & 1) == 0 )
  {
    v7 = *(_DWORD *)(gpKL + 88);
    v8 = 0LL;
    if ( v7 )
    {
      v9 = *(_QWORD *)(gpKL + 96);
      while ( 1 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8 * v8) + 32LL);
        if ( *(_DWORD *)(v10 + 96) == a2 && *(_DWORD *)(v10 + 100) == a3 )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v7 )
          goto LABEL_11;
      }
      v5 = *(_QWORD *)(v9 + 8 * v8);
    }
  }
LABEL_11:
  if ( *(_QWORD *)(gpKL + 48) != v5 )
  {
    HMAssignmentLock(gpKL + 48, v5);
    SetGlobalKeyboardTableInfo(gpKL);
  }
}
