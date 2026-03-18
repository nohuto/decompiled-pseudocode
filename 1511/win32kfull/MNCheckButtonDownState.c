/*
 * XREFs of MNCheckButtonDownState @ 0x1C02164AC
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxCallHandleMenuMessages @ 0x1C0216594 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     _GetKeyState @ 0x1C00936A0 (_GetKeyState.c)
 *     UnlockMFMWFPWindow @ 0x1C0137970 (UnlockMFMWFPWindow.c)
 */

__int64 __fastcall MNCheckButtonDownState(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) ^= (*(_DWORD *)(a1 + 8) ^ (8 * ((unsigned __int16)GetKeyState(*(_DWORD *)(a1 + 76)) >> 15))) & 8;
  result = *(unsigned int *)(a1 + 8);
  if ( (result & 8) == 0 )
  {
    *(_DWORD *)(a1 + 8) = result & 0xFFFFDF7F;
    return UnlockMFMWFPWindow((_QWORD *)(a1 + 64));
  }
  return result;
}
