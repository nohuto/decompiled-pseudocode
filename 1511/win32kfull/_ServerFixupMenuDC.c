/*
 * XREFs of _ServerFixupMenuDC @ 0x1C00ED968
 * Callers:
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00ECE50 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1C00ED1C0 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHINITMENU @ 0x1C00ED430 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C00ED6A0 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C01486A0 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 * Callees:
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     GreSetTextAlign @ 0x1C00CCFB8 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00CD038 (GreGetTextAlign.c)
 *     _WindowFromDC @ 0x1C00E5F40 (_WindowFromDC.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C010834C (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall ServerFixupMenuDC(HDC a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rsi
  __int64 DCEx; // rbp
  unsigned int CurrentProcessId; // ebx
  struct tagWND *v11; // rax
  struct tagWND *v12; // rbx
  struct tagDPIMETRICS *DPIMETRICS; // rax
  __int64 v14; // rbx
  int TextAlign; // edx
  __int64 v16; // r8
  _DWORD *v17; // rax

  v5 = a3;
  DCEx = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    if ( a1 )
    {
      v11 = WindowFromDC(a1);
      v12 = v11;
      if ( v11 )
      {
        DCEx = _GetDCEx(v11, 0LL, 65539LL);
        GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 3752LL));
        DPIMETRICS = GetDPIMETRICS(v12);
        GreSelectFont(DCEx, *((_QWORD *)DPIMETRICS + 1));
        v14 = ValidateHmenu(a2);
        if ( v14 )
        {
          TextAlign = GreGetTextAlign(a1);
          if ( a4 && (v16 = *(_QWORD *)(v14 + 80)) != 0 )
          {
            if ( (_DWORD)v5 == -1 || (unsigned int)v5 >= *(_DWORD *)(v14 + 52) )
              v17 = 0LL;
            else
              v17 = (_DWORD *)(v16 + 152 * v5);
          }
          else
          {
            v17 = *(_DWORD **)(v14 + 80);
          }
          if ( v17 && (*v17 & 0x2000) != 0 )
            GreSetTextAlign(a1, TextAlign | 0x100);
        }
      }
    }
  }
  return DCEx;
}
