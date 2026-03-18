/*
 * XREFs of ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C023F834
 * Callers:
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJF@Z @ 0x1C023F438 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJF@Z.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C023F780 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 * Callees:
 *     xxxSendInput @ 0x1C009EC1C (xxxSendInput.c)
 *     InternalMapVirtualKeyEx @ 0x1C00E8328 (InternalMapVirtualKeyEx.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     GetCurrentKbdTables @ 0x1C01D2064 (GetCurrentKbdTables.c)
 */

void __fastcall InteractiveControlDefaultScroller::SendZoomModifiers(char a1, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int16 *v7; // rdi
  __int64 v8; // rsi
  __int64 CurrentKbdTables; // rax
  _QWORD v10[16]; // [rsp+20h] [rbp-98h] BYREF

  v4 = 0;
  memset(v10, 0, 0x78uLL);
  if ( (a1 & 1) != 0 )
  {
    LOWORD(v10[1]) = 17;
    v4 = 1;
  }
  if ( (a1 & 2) != 0 )
  {
    v5 = v4++;
    LOWORD(v10[5 * v5 + 1]) = 18;
  }
  if ( (a1 & 4) != 0 )
  {
    v6 = v4++;
    LOWORD(v10[5 * v6 + 1]) = 16;
  }
  if ( v4 )
  {
    v7 = (unsigned __int16 *)&v10[1];
    v8 = v4;
    do
    {
      *((_DWORD *)v7 - 2) = 1;
      CurrentKbdTables = GetCurrentKbdTables();
      v7[1] = InternalMapVirtualKeyEx(*v7, 0, CurrentKbdTables);
      v7 += 20;
      *((_DWORD *)v7 - 9) = a2 == 0 ? 2 : 0;
      --v8;
    }
    while ( v8 );
    xxxSendInput(v4, (__int64)v10);
  }
}
