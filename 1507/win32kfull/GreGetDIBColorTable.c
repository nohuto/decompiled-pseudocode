/*
 * XREFs of GreGetDIBColorTable @ 0x1C00ED910
 * Callers:
 *     <none>
 * Callees:
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0013C0C (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0019204 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019AB4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C009CD94 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v7; // ebx
  ULONG v8; // ecx
  SURFACE *v9; // rax
  int v10; // edx
  __int64 v11; // rcx
  unsigned int v13; // ecx
  int v14; // eax
  _QWORD v15[6]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v16[32]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v17[80]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v18; // [rsp+F8h] [rbp+7Fh] BYREF

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( !a4 )
  {
    v8 = 87;
    goto LABEL_4;
  }
  if ( !v15[0] )
  {
    v8 = 6;
LABEL_4:
    EngSetLastError(v8);
    goto LABEL_10;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16);
  DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v16, (struct XDCOBJ *)v15);
  v9 = XDCOBJ::pSurfaceEff((XDCOBJ *)v15);
  if ( ((unsigned int)SURFACE::bDIBSection(v9) || *(_QWORD *)(v11 + 120)) && (unsigned int)(v10 - 1) <= 2 )
  {
    v18 = *(_QWORD *)(v11 + 120);
    v13 = *(_DWORD *)(v18 + 28);
    if ( a2 < v13 )
    {
      v14 = a2 + a3;
      if ( a2 + a3 > v13 )
        v14 = *(_DWORD *)(v18 + 28);
      v7 = v14 - a2;
      XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v18, a4, a2, v14 - a2);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
  DCOBJ::~DCOBJ((DCOBJ *)v17);
LABEL_10:
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return v7;
}
