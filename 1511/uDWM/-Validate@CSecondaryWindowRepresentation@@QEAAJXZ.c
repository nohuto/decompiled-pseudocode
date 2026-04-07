/*
 * XREFs of ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180016F68
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180012518 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180016F68 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180019280 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180019A20 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800354E0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x18009D5E0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180016F68 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x180017768 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Validate(CSecondaryWindowRepresentation *this)
{
  unsigned int v1; // edi
  int updated; // eax
  CVisual *v4; // rcx
  int v5; // eax
  CVisual *v7; // rcx
  __int64 v8; // rsi
  int v9; // eax

  v1 = 0;
  if ( (*((_BYTE *)this + 24) & 4) != 0 )
  {
    if ( *((_QWORD *)this + 6) )
    {
      updated = CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(this);
      v1 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x2B1u);
        return v1;
      }
    }
    *((_DWORD *)this + 6) &= ~4u;
  }
  if ( (*((_BYTE *)this + 24) & 0x10) != 0 )
  {
    if ( (*((_BYTE *)this + 40) & 1) != 0 )
    {
      v7 = (CVisual *)*((_QWORD *)this + 6);
      if ( v7 )
      {
        CVisual::SetOpacity(v7, *((double *)this + 61));
        CVisual::SetOpacity(*((CVisual **)this + 7), *((double *)this + 62));
      }
    }
    v1 = 0;
    *((_DWORD *)this + 6) &= ~0x10u;
  }
  v4 = (CVisual *)*((_QWORD *)this + 6);
  if ( v4 && (v5 = CVisual::RenderRecursive(v4), v1 = v5, v5 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x2C2u);
  }
  else
  {
    *((_DWORD *)this + 6) &= ~8u;
    if ( (*((_BYTE *)this + 24) & 1) != 0 )
    {
      v8 = 0LL;
      if ( *((_DWORD *)this + 38) )
      {
        while ( 1 )
        {
          v9 = CSecondaryWindowRepresentation::Validate(*(CSecondaryWindowRepresentation **)(*((_QWORD *)this + 16)
                                                                                           + 8 * v8));
          v1 = v9;
          if ( v9 < 0 )
            break;
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *((_DWORD *)this + 38) )
            goto LABEL_17;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x2CEu);
      }
      else
      {
LABEL_17:
        *((_DWORD *)this + 6) &= ~1u;
      }
    }
  }
  return v1;
}
