/*
 * XREFs of xxxSendInput @ 0x1C009EC1C
 * Callers:
 *     NtUserSendInput @ 0x1C009EAE0 (NtUserSendInput.c)
 *     ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C01ED778 (-xxxSend3FingerTapHotkey@@YAXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C01ED8B8 (-xxxSend4FingerTapHotkey@@YAXXZ.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C023F780 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C023F834 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 * Callees:
 *     xxxInternalKeyEventDirect @ 0x1C00A21FC (xxxInternalKeyEventDirect.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C00E0460 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00@Z @ 0x1C01D14C8 (-xxxMouseEventDirect@@YAHKKKK_K00@Z.c)
 */

__int64 __fastcall xxxSendInput(unsigned int a1, __int64 a2)
{
  bool v3; // bp
  int v4; // ebx
  unsigned int v5; // esi
  unsigned int *v6; // rdi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  LONGLONG v12; // rbx
  unsigned __int64 v13; // rax

  v3 = *(_WORD *)(gptiCurrent + 552LL) >= 0x501u;
  v4 = 0;
  v5 = 0;
  if ( !a1 )
    return v5;
  v6 = (unsigned int *)(a2 + 24);
  do
  {
    v7 = *(v6 - 6);
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 1 && v3 )
        {
          UserSetLastError(120LL);
          return v5;
        }
      }
      else
      {
        v9 = gpsi;
        if ( (*gpsi & 0x2000) != 0 )
          goto LABEL_25;
        if ( v4 && glDitMouseHandling )
        {
          v4 = 0;
          xxxWaitForDITMouseInjectionFlush();
        }
        v10 = *(v6 - 3);
        if ( (v10 & 4) == 0 || *((_WORD *)v6 - 8) || (v10 & 0xFFFFFFF9) != 0 )
        {
          v11 = *((unsigned __int8 *)v6 - 14);
          LOBYTE(v9) = *((_BYTE *)v6 - 16);
        }
        else
        {
          v11 = *((unsigned __int16 *)v6 - 7);
          LOBYTE(v9) = -25;
        }
        if ( !(unsigned int)xxxInternalKeyEventDirect(v9, v11, v10, *(v6 - 2), *(_QWORD *)v6) && v3 )
          return v5;
      }
    }
    else
    {
      if ( (*gpsi & 0x2000) != 0 )
        goto LABEL_25;
      v12 = gliQpcFreq.QuadPart * *v6 / 1000;
      v13 = UpconvertTime();
      if ( !(unsigned int)xxxMouseEventDirect(*(v6 - 4), *(v6 - 3), *(v6 - 2), *(v6 - 1), v13, v12, *((_QWORD *)v6 + 1))
        && v3 )
      {
        return v5;
      }
      v4 = 1;
    }
    v6 += 10;
LABEL_25:
    ++v5;
  }
  while ( v5 < a1 );
  if ( v4 && glDitMouseHandling )
    xxxWaitForDITMouseInjectionFlush();
  return v5;
}
