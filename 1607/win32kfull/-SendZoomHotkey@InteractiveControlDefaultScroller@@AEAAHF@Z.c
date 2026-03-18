/*
 * XREFs of ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C023F780
 * Callers:
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJF@Z @ 0x1C023F438 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJF@Z.c)
 * Callees:
 *     xxxSendInput @ 0x1C009EC1C (xxxSendInput.c)
 *     InternalMapVirtualKeyEx @ 0x1C00E8328 (InternalMapVirtualKeyEx.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     GetCurrentKbdTables @ 0x1C01D2064 (GetCurrentKbdTables.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C023F834 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::SendZoomHotkey(
        InteractiveControlDefaultScroller *this,
        __int16 a2)
{
  unsigned int v4; // edi
  __int16 v5; // dx
  __int64 CurrentKbdTables; // rax
  unsigned __int16 v7; // dx
  _OWORD v9[5]; // [rsp+20h] [rbp-50h] BYREF

  v4 = 1;
  InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 61), 1);
  if ( *((_BYTE *)this + 60) != 2 )
  {
    memset(v9, 0, sizeof(v9));
    v5 = 187;
    LODWORD(v9[0]) = 1;
    v4 = 0;
    if ( a2 < 0 )
      v5 = 189;
    WORD4(v9[0]) = v5;
    CurrentKbdTables = GetCurrentKbdTables();
    WORD5(v9[0]) = InternalMapVirtualKeyEx(v7, 0, CurrentKbdTables);
    *(_OWORD *)((char *)&v9[2] + 8) = v9[0];
    DWORD1(v9[3]) = 2;
    *((_QWORD *)&v9[4] + 1) = *(_QWORD *)&v9[2];
    *(_OWORD *)((char *)&v9[3] + 8) = v9[1];
    xxxSendInput(2u, (__int64)v9);
  }
  return v4;
}
