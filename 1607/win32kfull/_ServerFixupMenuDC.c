/*
 * XREFs of _ServerFixupMenuDC @ 0x1C01163C0
 * Callers:
 *     SfnINLPUAHDRAWMENU @ 0x1C01158D0 (SfnINLPUAHDRAWMENU.c)
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C0115B30 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHINITMENU @ 0x1C0115EA0 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C0116100 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C014D020 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 * Callees:
 *     _WindowFromDC @ 0x1C005CB00 (_WindowFromDC.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00B78D0 (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreSetTextAlign @ 0x1C00B9838 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00B98B0 (GreGetTextAlign.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

HDC __fastcall ServerFixupMenuDC(HDC a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rsi
  HDC DCEx; // rbp
  unsigned int CurrentProcessId; // ebx
  struct tagWND *v10; // rax
  struct tagWND *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  int TextAlign; // edx
  __int64 v17; // r8
  _DWORD *v18; // rax

  v5 = a3;
  DCEx = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    if ( a1 )
    {
      v10 = WindowFromDC(a1);
      v11 = v10;
      if ( v10 )
      {
        DCEx = (HDC)_GetDCEx(v10, 0LL, 65539LL);
        GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 5144LL));
        GetDPIMETRICS(v11, v12, v13, v14);
        GreSelectFontInternal(DCEx);
        v15 = ValidateHmenu(a2);
        if ( v15 )
        {
          TextAlign = GreGetTextAlign(a1);
          if ( a4 && (v17 = *(_QWORD *)(v15 + 80)) != 0 )
          {
            if ( (_DWORD)v5 == -1 || (unsigned int)v5 >= *(_DWORD *)(v15 + 52) )
              v18 = 0LL;
            else
              v18 = (_DWORD *)(v17 + 152 * v5);
          }
          else
          {
            v18 = *(_DWORD **)(v15 + 80);
          }
          if ( v18 && (*v18 & 0x2000) != 0 )
            GreSetTextAlign(a1, TextAlign | 0x100);
        }
      }
    }
  }
  return DCEx;
}
