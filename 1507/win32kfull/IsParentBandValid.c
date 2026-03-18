/*
 * XREFs of IsParentBandValid @ 0x1C006208C
 * Callers:
 *     ValidateNewParent @ 0x1C0061FF8 (ValidateNewParent.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 * Callees:
 *     IsTopLevelParent @ 0x1C00620F0 (IsTopLevelParent.c)
 */

_BOOL8 __fastcall IsParentBandValid(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _BOOL8 result; // rax
  __int64 CurrentProcessWin32Process; // rax

  result = 1;
  if ( !(unsigned int)IsTopLevelParent(a2) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    if ( !(unsigned int)IsImmersiveBroker(CurrentProcessWin32Process)
      && (*(_DWORD *)(a2 + 304) != *(_DWORD *)(a1 + 304) || ((*(_BYTE *)(a2 + 290) ^ *(_BYTE *)(a1 + 290)) & 0x40) != 0) )
    {
      return 0;
    }
  }
  return result;
}
