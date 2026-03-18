/*
 * XREFs of EngModifySurface @ 0x1C0075FE0
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00B7960 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0077048 (HmgShareLockIgnoreStockBit.c)
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
  __int64 v11; // rax
  int v12; // ebx
  int v13; // r8d
  HDEV v14; // rcx
  FLONG v15; // ebp
  unsigned int v16; // r8d

  v11 = 0LL;
  if ( hdev
    && (v11 = HmgShareLockIgnoreStockBit(hsurf)) != 0
    && (v12 = pvReserved == 0LL, (flSurface & 0xFFFFFFF8) == 0) )
  {
    v13 = *(_DWORD *)(v11 + 112);
    if ( (v13 & 0x400000) == 0 && *(_WORD *)(v11 + 100) != 1 )
      v12 = 0;
    v14 = *(HDEV *)(v11 + 48);
    if ( v14 && v14 != hdev )
      v12 = 0;
    v15 = flHooks & 0xFFFFB7FF;
    if ( v13 < 0 && (((_DWORD)hdev[49] & 0x3B5EF) != v15 || ((_DWORD)hdev[14] & 0x400) == 0) )
      v12 = 0;
    if ( pvScan0 && lDelta )
    {
      if ( (flSurface & 1) != 0 && (v15 & 0x1000) == 0 )
        v12 = 0;
      if ( v12 )
      {
        *(_QWORD *)(v11 + 80) = pvScan0;
        *(_DWORD *)(v11 + 88) = lDelta;
        *(_WORD *)(v11 + 100) = 0;
        if ( lDelta <= 0 )
        {
          *(_QWORD *)(v11 + 72) = (char *)pvScan0 + lDelta * (*(_DWORD *)(v11 + 60) - 1);
          *(_WORD *)(v11 + 102) &= ~1u;
        }
        else
        {
          *(_WORD *)(v11 + 102) |= 1u;
          *(_QWORD *)(v11 + 72) = pvScan0;
        }
LABEL_13:
        if ( (flSurface & 1) != 0 )
          *(_WORD *)(v11 + 102) |= 0x20u;
        else
          *(_WORD *)(v11 + 102) &= ~0x20u;
        if ( (flSurface & 2) != 0 )
          v16 = v13 | 0x200;
        else
          v16 = v13 & 0xFFFFFDFF;
        *(_DWORD *)(v11 + 112) = v16;
        if ( (flSurface & 4) != 0 )
          *(_DWORD *)(v11 + 116) |= 0x100u;
        else
          *(_DWORD *)(v11 + 116) &= ~0x100u;
        *(_QWORD *)(v11 + 24) = dhsurf;
        *(_QWORD *)(v11 + 128) = 0LL;
        *(_QWORD *)(v11 + 48) = hdev;
        *(_QWORD *)(v11 + 40) = *((_QWORD *)hdev + 228);
        *(_DWORD *)(v11 + 112) = v15 | *(_DWORD *)(v11 + 112) & 0xFFFC4A10;
      }
    }
    else
    {
      if ( (v15 & 0x29) != 0x29 )
        v12 = 0;
      v12 &= (flSurface & 1) != 0 ? -(dhsurf != 0LL) : 0;
      if ( v12 )
      {
        *(_QWORD *)(v11 + 80) = 0LL;
        *(_QWORD *)(v11 + 72) = 0LL;
        *(_DWORD *)(v11 + 88) = 0;
        if ( *(_WORD *)(v11 + 100) != 1 )
          *(_WORD *)(v11 + 100) = 3;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v12 = 0;
  }
  if ( v11 )
    HmgDecrementShareReferenceCount((_DWORD *)v11);
  return v12;
}
