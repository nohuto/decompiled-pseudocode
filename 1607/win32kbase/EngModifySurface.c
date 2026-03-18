/*
 * XREFs of EngModifySurface @ 0x1C007A100
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00C2E90 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0026AD8 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C007A960 (HmgShareLockIgnoreStockBit.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00C4E0C (--0SURFREF@@QEAA@XZ.c)
 */

BOOL __stdcall EngModifySurface(
        HSURF hsurf,
        HDEV hdev,
        FLONG flHooks,
        FLONG flSurface,
        DHSURF dhsurf,
        PVOID pvScan0,
        LONG lDelta,
        PVOID pvReserved)
{
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ebx
  int v15; // ecx
  HDEV v16; // rax
  FLONG v17; // r14d
  _BYTE v19[32]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]

  SURFREF::SURFREF((SURFREF *)v19);
  if ( !hdev
    || (v12 = HmgShareLockIgnoreStockBit(hsurf), v20 = v12, (v13 = v12) == 0)
    || (v14 = pvReserved == 0LL, (flSurface & 0xFFFFFFF8) != 0) )
  {
    v14 = 0;
    goto LABEL_20;
  }
  v15 = *(_DWORD *)(v12 + 112);
  if ( (v15 & 0x400000) == 0 && *(_WORD *)(v12 + 100) != 1 )
    v14 = 0;
  v16 = *(HDEV *)(v12 + 48);
  if ( v16 && v16 != hdev )
    v14 = 0;
  v17 = flHooks & 0xFFFFB7FF;
  if ( v15 < 0 && (((_DWORD)hdev[49] & 0x3B5EF) != v17 || ((_DWORD)hdev[14] & 0x400) == 0) )
    v14 = 0;
  if ( pvScan0 && lDelta )
  {
    if ( (v17 & 0x1000) == 0 && (flSurface & 1) != 0 )
      v14 = 0;
    if ( v14 )
    {
      *(_QWORD *)(v13 + 80) = pvScan0;
      *(_DWORD *)(v20 + 88) = lDelta;
      *(_WORD *)(v20 + 100) = 0;
      if ( lDelta <= 0 )
      {
        *(_QWORD *)(v20 + 72) = (char *)pvScan0 + lDelta * (*(_DWORD *)(v20 + 60) - 1);
        *(_WORD *)(v20 + 102) &= ~1u;
      }
      else
      {
        *(_QWORD *)(v20 + 72) = pvScan0;
        *(_WORD *)(v20 + 102) |= 1u;
      }
LABEL_13:
      if ( (flSurface & 1) != 0 )
        *(_WORD *)(v20 + 102) |= 0x20u;
      else
        *(_WORD *)(v20 + 102) &= ~0x20u;
      if ( (flSurface & 2) != 0 )
        *(_DWORD *)(v20 + 112) |= 0x200u;
      else
        *(_DWORD *)(v20 + 112) &= ~0x200u;
      if ( (flSurface & 4) != 0 )
        *(_DWORD *)(v20 + 116) |= 0x100u;
      else
        *(_DWORD *)(v20 + 116) &= ~0x100u;
      *(_QWORD *)(v20 + 24) = dhsurf;
      *(_QWORD *)(v20 + 128) = 0LL;
      *(_QWORD *)(v20 + 48) = hdev;
      *(_QWORD *)(v20 + 40) = *((_QWORD *)hdev + 228);
      *(_DWORD *)(v20 + 112) = v17 | *(_DWORD *)(v20 + 112) & 0xFFFC4A10;
    }
  }
  else
  {
    if ( (v17 & 0x29) != 0x29 )
      v14 = 0;
    v14 &= (flSurface & 1) != 0 ? -(dhsurf != 0LL) : 0;
    if ( v14 )
    {
      *(_QWORD *)(v13 + 80) = 0LL;
      *(_QWORD *)(v20 + 72) = 0LL;
      *(_DWORD *)(v20 + 88) = 0;
      if ( *(_WORD *)(v20 + 100) != 1 )
        *(_WORD *)(v20 + 100) = 3;
      goto LABEL_13;
    }
  }
LABEL_20:
  SURFREF::~SURFREF((SURFREF *)v19);
  return v14;
}
