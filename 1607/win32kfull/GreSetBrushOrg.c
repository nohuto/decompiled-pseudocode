/*
 * XREFs of GreSetBrushOrg @ 0x1C00B276C
 * Callers:
 *     _DrawIconEx @ 0x1C00B0C5C (_DrawIconEx.c)
 *     xxxPaintRect @ 0x1C00B26A8 (xxxPaintRect.c)
 *     NtGdiSetBrushOrg @ 0x1C014A680 (NtGdiSetBrushOrg.c)
 *     MNEraseBackground @ 0x1C0237348 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0237D5C (xxxMNDrawFullNC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreSetBrushOrg(HDC a1, int a2, int a3, _QWORD *a4)
{
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _DWORD *v9; // rdx
  int v10; // r8d
  int v11; // r8d
  int v12; // ecx
  int v13; // eax
  _QWORD v15[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v16[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  v7 = v15[0];
  if ( v15[0] )
  {
    if ( a4 )
      *a4 = *(_QWORD *)(v15[0] + 136LL);
    v8 = 1;
    *(_DWORD *)(*(_QWORD *)(v7 + 80) + 380LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v15[0] + 80LL) + 384LL) = a3;
    v9 = (_DWORD *)v15[0];
    v10 = *(_DWORD *)(v15[0] + 40LL);
    *(_DWORD *)(v15[0] + 136LL) = a2;
    v9[35] = a3;
    v11 = v10 & 1;
    if ( v11 )
      v12 = v9[354];
    else
      v12 = v9[352];
    v9[394] = a2 + v12;
    if ( v11 )
      v13 = v9[355];
    else
      v13 = v9[353];
    v9[395] = a3 + v13;
  }
  else
  {
    EngSetLastError(6u);
    v8 = 0;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v15);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v16);
  return v8;
}
