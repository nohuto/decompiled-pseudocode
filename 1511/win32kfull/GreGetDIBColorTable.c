/*
 * XREFs of GreGetDIBColorTable @ 0x1C00F3F30
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002D6BC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0038D44 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0041694 (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
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
  _QWORD v15[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h]
  int v18; // [rsp+48h] [rbp-38h]
  __int64 v19; // [rsp+50h] [rbp-30h]
  __int64 v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  __int64 v24; // [rsp+B8h] [rbp+38h] BYREF

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
  v20 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v16, (struct XDCOBJ *)v15);
  v9 = XDCOBJ::pSurfaceEff((XDCOBJ *)v15);
  if ( ((unsigned int)SURFACE::bDIBSection(v9) || *(_QWORD *)(v11 + 120)) && (unsigned int)(v10 - 1) <= 2 )
  {
    v24 = *(_QWORD *)(v11 + 120);
    v13 = *(_DWORD *)(v24 + 28);
    if ( a2 < v13 )
    {
      v14 = a2 + a3;
      if ( a2 + a3 > v13 )
        v14 = *(_DWORD *)(v24 + 28);
      v7 = v14 - a2;
      XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v24, a4, a2, v14 - a2);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v16);
LABEL_10:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v15);
  return v7;
}
