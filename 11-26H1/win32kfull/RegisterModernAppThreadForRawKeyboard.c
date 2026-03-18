/*
 * XREFs of RegisterModernAppThreadForRawKeyboard @ 0x14029ABCC
 * Callers:
 *     _EnableModernAppWindowKeyboardIntercept @ 0x14028B034 (_EnableModernAppWindowKeyboardIntercept.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _RegisterRawInputDevices @ 0x14016FDF8 (_RegisterRawInputDevices.c)
 *     HasHidTable @ 0x140172990 (HasHidTable.c)
 */

__int64 __fastcall RegisterModernAppThreadForRawKeyboard(__int64 a1)
{
  __int64 v1; // rbx
  int v4; // eax
  _DWORD v5[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 1360);
  if ( (v1 & 0x200000) != 0 )
    return 1LL;
  if ( (unsigned int)HasHidTable(a1) )
  {
    v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 456) + 824LL) + 100LL);
    if ( (v4 & 0x1000) != 0 )
    {
      *(_QWORD *)(a1 + 1360) = v1 | 0x200000;
      return 1LL;
    }
    if ( (v4 & 0x10) != 0 )
    {
      UserSetLastError(85);
      return 0LL;
    }
  }
  v5[0] = 393217;
  v5[1] = 16944;
  v6 = 0LL;
  if ( !(unsigned int)RegisterRawInputDevices((__int64)v5, 1u, 2u) )
    return 0LL;
  *(_QWORD *)(a1 + 1360) |= 0x200000uLL;
  return 1LL;
}
