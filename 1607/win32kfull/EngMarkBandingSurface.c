/*
 * XREFs of EngMarkBandingSurface @ 0x1C027DEE0
 * Callers:
 *     NtGdiEngMarkBandingSurface @ 0x1C02AE410 (NtGdiEngMarkBandingSurface.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0257CE4 (--0SURFREF@@QEAA@XZ.c)
 */

BOOL __stdcall EngMarkBandingSurface(HSURF hsurf)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  BOOL v4; // ebx
  int v5; // ecx
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v7);
  LOBYTE(v2) = 5;
  v3 = HmgShareLockCheckIgnoreStockBit(hsurf, v2);
  v4 = 0;
  v8 = v3;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 112);
    if ( (v5 & 0x200000) != 0 )
    {
      v4 = 1;
      *(_DWORD *)(v3 + 112) = v5 | 0x2000000;
    }
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v7);
  return v4;
}
