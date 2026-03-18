/*
 * XREFs of NtGdiEngMarkBandingSurface @ 0x1C02ACC10
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     EngMarkBandingSurface @ 0x1C0280090 (EngMarkBandingSurface.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C02B0114 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEngMarkBandingSurface(HSURF a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  BOOL v4; // edi
  _BYTE v6[32]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  _BYTE v8[32]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v9; // [rsp+68h] [rbp-10h]

  SURFREF::SURFREF((SURFREF *)v8);
  LOBYTE(v2) = 5;
  v9 = HmgShareLockCheckIgnoreStockBit(a1, v2);
  SURFREF::SURFREF((SURFREF *)v6, a1);
  v3 = 1;
  v4 = v7 && (*(_DWORD *)(v7 + 112) & 0x40000) != 0;
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v6);
  if ( !v4 || !EngMarkBandingSurface(a1) )
    v3 = 0;
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v8);
  return v3;
}
