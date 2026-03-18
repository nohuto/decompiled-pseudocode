/*
 * XREFs of GreGetDIBColorTable @ 0x1C00F03D0
 * Callers:
 *     <none>
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0033D44 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C003A834 (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00488E8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0049064 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreGetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v7; // ebx
  SURFACE *v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  int v12; // eax
  ULONG v13; // ecx
  _QWORD v15[2]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v16[32]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v17[32]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v18[80]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v19; // [rsp+F8h] [rbp+7Fh] BYREF

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( !a4 )
  {
    v13 = 87;
    goto LABEL_14;
  }
  if ( !v15[0] )
  {
    v13 = 6;
LABEL_14:
    EngSetLastError(v13);
    goto LABEL_15;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17);
  DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v17, (struct XDCOBJ *)v15);
  v8 = XDCOBJ::pSurfaceEff((XDCOBJ *)v15);
  if ( ((unsigned int)SURFACE::bDIBSection(v8) || *(_QWORD *)(v10 + 120)) && (unsigned int)(v9 - 1) <= 2 )
  {
    v19 = *(_QWORD *)(v10 + 120);
    v11 = *(_DWORD *)(v19 + 28);
    if ( a2 < v11 )
    {
      v12 = a2 + a3;
      if ( a2 + a3 > v11 )
        v12 = *(_DWORD *)(v19 + 28);
      v7 = v12 - a2;
      XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v19, a4, a2, v12 - a2);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v17);
  DCOBJ::~DCOBJ((DCOBJ *)v18);
LABEL_15:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v15);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v16);
  return v7;
}
