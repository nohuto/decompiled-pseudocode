/*
 * XREFs of _ServerFixupMenuDC @ 0x1C00E7618
 * Callers:
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00E6B00 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1C00E6E70 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHINITMENU @ 0x1C00E70E0 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C00E7350 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C011E8F0 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 * Callees:
 *     _WindowFromDC @ 0x1C00E39B0 (_WindowFromDC.c)
 *     GreSetTextAlign @ 0x1C00FA3AC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00FAEBC (GreGetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00FBD44 (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

HDC __fastcall ServerFixupMenuDC(HDC a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rsi
  HDC DCEx; // rbp
  unsigned int CurrentProcessId; // ebx
  struct tagWND *v10; // rax
  struct tagWND *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // r8
  _DWORD *v14; // rax

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
        GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 3752LL));
        GetDPIMETRICS(v11);
        GreSelectFontInternal(DCEx);
        v12 = ValidateHmenu(a2);
        if ( v12 )
        {
          GreGetTextAlign(a1);
          if ( a4 && (v13 = *(_QWORD *)(v12 + 80)) != 0 )
          {
            if ( (_DWORD)v5 == -1 || (unsigned int)v5 >= *(_DWORD *)(v12 + 52) )
              v14 = 0LL;
            else
              v14 = (_DWORD *)(v13 + 152 * v5);
          }
          else
          {
            v14 = *(_DWORD **)(v12 + 80);
          }
          if ( v14 && (*v14 & 0x2000) != 0 )
            GreSetTextAlign(a1);
        }
      }
    }
  }
  return DCEx;
}
