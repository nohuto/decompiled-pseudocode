/*
 * XREFs of ?RIMIDESetPointerDeviceTypeAndRank@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x1C00C4B38
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C51A8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RIMIDESetPointerDeviceTypeAndRank(struct tagHID_POINTER_DEVICE_INFO *a1, struct tagHIDDESC *a2)
{
  switch ( *((_WORD *)a2 + 20) )
  {
    case 1:
      *((_DWORD *)a1 + 6) = 7;
      *((_DWORD *)a1 + 369) = 2;
      break;
    case 2:
      *((_DWORD *)a1 + 6) = 6;
      *((_DWORD *)a1 + 369) = 3;
      break;
    case 4:
      *((_DWORD *)a1 + 6) = 5;
      *((_DWORD *)a1 + 369) = 1;
      break;
    case 5:
      *((_DWORD *)a1 + 6) = 8;
      *((_DWORD *)a1 + 369) = 0;
      break;
  }
}
