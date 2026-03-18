/*
 * XREFs of ?SetAntialiasMode@CWARPDrawListEntry@@AEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800FF424
 * Callers:
 *     ?Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@@Z @ 0x1800FF204 (-Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@@Z.c)
 *     ?SetUncachedState@CWARPDrawListEntry@@QEAAXUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1800FF520 (-SetUncachedState@CWARPDrawListEntry@@QEAAXUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@Blen.c)
 * Callees:
 *     <none>
 */

void __fastcall CWARPDrawListEntry::SetAntialiasMode(CWARPDrawListEntry *this, enum D2D1_ANTIALIAS_MODE a2)
{
  if ( a2 )
  {
    if ( a2 == D2D1_ANTIALIAS_MODE_ALIASED )
      *((_DWORD *)this + 16) &= 0xFFFFFF3F;
  }
  else
  {
    *((_DWORD *)this + 16) &= ~0x80u;
    *((_DWORD *)this + 16) |= 0x40u;
  }
}
