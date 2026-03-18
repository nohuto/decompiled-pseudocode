/*
 * XREFs of MNCheckButtonDownState @ 0x1C0216648
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxCallHandleMenuMessages @ 0x1C0216730 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     _GetKeyState @ 0x1C0041BD0 (_GetKeyState.c)
 *     UnlockMFMWFPWindow @ 0x1C010B474 (UnlockMFMWFPWindow.c)
 */

__int64 __fastcall MNCheckButtonDownState(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) ^= (*(_DWORD *)(a1 + 8) ^ (8 * ((unsigned __int16)GetKeyState(*(_DWORD *)(a1 + 76)) >> 15))) & 8;
  result = *(unsigned int *)(a1 + 8);
  if ( (result & 8) == 0 )
  {
    *(_DWORD *)(a1 + 8) = result & 0xFFFFDF7F;
    return UnlockMFMWFPWindow((_QWORD *)(a1 + 64), v2, v3, v4);
  }
  return result;
}
