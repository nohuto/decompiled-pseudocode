/*
 * XREFs of _GetAsyncKeyState @ 0x1C00EB660
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C00EB4B0 (NtUserGetAsyncKeyState.c)
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     ?PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_CONTACT_INFO@@@Z @ 0x1C01DB800 (-PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C0200428 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C0200D50 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C0200F84 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall GetAsyncKeyState(unsigned int a1)
{
  unsigned __int64 v1; // r9
  char v2; // al
  unsigned __int16 v3; // dx
  unsigned __int64 v4; // r10
  unsigned int v5; // r11d
  int v6; // ecx

  if ( a1 >= 0x100 )
  {
    UserSetLastError(87);
    return 0;
  }
  else
  {
    v1 = (unsigned __int8)a1;
    v2 = a1;
    v3 = 0;
    v4 = (unsigned __int64)(unsigned __int8)a1 >> 3;
    v5 = a1 & 7;
    v6 = *((unsigned __int8 *)&gafAsyncKeyStateRecentDown + v4);
    if ( _bittest(&v6, v5) )
    {
      v3 = 1;
      *((_BYTE *)&gafAsyncKeyStateRecentDown + v4) = v6 & ~(1 << v5);
    }
    if ( ((unsigned __int8)(1 << (2 * (v2 & 3))) & gafAsyncKeyState[v1 >> 2]) != 0 )
      v3 |= 0x8000u;
  }
  return v3;
}
