/*
 * XREFs of MNCheckButtonDownState @ 0x1C020F048
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxCallHandleMenuMessages @ 0x1C020F130 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     UnlockMFMWFPWindow @ 0x1C01413F4 (UnlockMFMWFPWindow.c)
 */

__int64 __fastcall MNCheckButtonDownState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) ^= (*(_DWORD *)(a1 + 8) ^ (8
                                               * ((unsigned __int16)GetKeyState(*(_DWORD *)(a1 + 76), a2, a3, a4) >> 15))) & 8;
  result = *(unsigned int *)(a1 + 8);
  if ( (result & 8) == 0 )
  {
    *(_DWORD *)(a1 + 8) = result & 0xFFFFDF7F;
    return UnlockMFMWFPWindow((_QWORD *)(a1 + 64), v5, v6, v7);
  }
  return result;
}
