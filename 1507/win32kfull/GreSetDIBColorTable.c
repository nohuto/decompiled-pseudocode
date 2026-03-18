/*
 * XREFs of GreSetDIBColorTable @ 0x1C02B20C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0013C98 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0019204 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019AB4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C009CD94 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v7; // ebx
  SURFACE *v8; // rax
  __int64 v9; // rdx
  int v10; // r8d
  unsigned int v11; // ecx
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-59h] BYREF
  _QWORD v15[7]; // [rsp+30h] [rbp-51h] BYREF
  _BYTE v16[32]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v17[80]; // [rsp+88h] [rbp+7h] BYREF

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( v15[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v16, (struct XDCOBJ *)v15);
    v8 = XDCOBJ::pSurfaceEff((XDCOBJ *)v15);
    if ( (unsigned int)SURFACE::bDIBSection(v8) && (unsigned int)(v10 - 1) <= 2 )
    {
      *(_DWORD *)(*(_QWORD *)(v15[0] + 80LL) + 8LL) |= 0xFu;
      v14 = *(_QWORD *)(v9 + 120);
      v11 = *(_DWORD *)(v14 + 28);
      if ( a2 < v11 )
      {
        v12 = a2 + a3;
        if ( a2 + a3 > v11 )
          v12 = *(_DWORD *)(v14 + 28);
        v7 = v12 - a2;
        XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v14, a4, a2, v12 - a2);
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
    DCOBJ::~DCOBJ((DCOBJ *)v17);
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return v7;
}
