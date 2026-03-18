/*
 * XREFs of EngMarkBandingSurface @ 0x1C027FA40
 * Callers:
 *     NtGdiEngMarkBandingSurface @ 0x1C02AC130 (NtGdiEngMarkBandingSurface.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 */

BOOL __stdcall EngMarkBandingSurface(HSURF hsurf)
{
  char v1; // dl
  __int64 v2; // rax
  BOOL v3; // ebx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = 5;
  v2 = HmgShareLockCheckIgnoreStockBit(hsurf, v1);
  v3 = 0;
  v5 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 112) |= 0x2000000u;
    v3 = 1;
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v5);
  return v3;
}
