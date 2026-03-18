/*
 * XREFs of NtGdiEngMarkBandingSurface @ 0x1C02AC130
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     EngMarkBandingSurface @ 0x1C027FA40 (EngMarkBandingSurface.c)
 */

__int64 __fastcall NtGdiEngMarkBandingSurface(HSURF hsurf, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // ebx
  BOOL v7; // edi
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  LOBYTE(a2) = 5;
  v3 = HmgShareLockCheckIgnoreStockBit(hsurf, a2);
  LOBYTE(v4) = 5;
  v10 = v3;
  v5 = HmgShareLockCheck(hsurf, v4);
  v9 = v5;
  v6 = 1;
  v7 = v5 && (*(_DWORD *)(v5 + 112) & 0x40000) != 0;
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v9);
  if ( !v7 || !EngMarkBandingSurface(hsurf) )
    v6 = 0;
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v10);
  return v6;
}
