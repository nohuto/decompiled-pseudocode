/*
 * XREFs of RegisterModernAppThreadForRawKeyboard @ 0x1C01D557C
 * Callers:
 *     _EnableModernAppWindowKeyboardIntercept @ 0x1C0223630 (_EnableModernAppWindowKeyboardIntercept.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     HasHidTable @ 0x1C0053C70 (HasHidTable.c)
 *     _RegisterRawInputDevices @ 0x1C00893B4 (_RegisterRawInputDevices.c)
 */

__int64 __fastcall RegisterModernAppThreadForRawKeyboard(__int64 a1)
{
  int v1; // ebx
  int v4; // eax
  _DWORD v5[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 1072);
  if ( (v1 & 0x200000) != 0 )
    return 1LL;
  if ( (unsigned int)HasHidTable(a1) )
  {
    v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 376) + 784LL) + 100LL);
    if ( (v4 & 0x800) != 0 )
    {
      *(_DWORD *)(a1 + 1072) = v1 | 0x200000;
      return 1LL;
    }
    if ( (v4 & 0x10) != 0 )
    {
      UserSetLastError(85);
      return 0LL;
    }
  }
  v6 = 0LL;
  v5[0] = 393217;
  v5[1] = 16944;
  if ( !(unsigned int)RegisterRawInputDevices((__int64)v5, 1u, 2u) )
    return 0LL;
  *(_DWORD *)(a1 + 1072) |= 0x200000u;
  return 1LL;
}
