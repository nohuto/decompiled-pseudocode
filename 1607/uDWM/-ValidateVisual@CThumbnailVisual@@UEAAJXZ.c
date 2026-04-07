/*
 * XREFs of ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180016D00
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180009394 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180015FA0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x1800160D0 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x180016280 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180016574 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180016980 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x180016F44 (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001CBB0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001F154 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18001F21C (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x18001F850 (-UpdateLayout@CVisual@@UEAAJXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180034540 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180034740 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x180075A2C (Template_q.c)
 */

__int64 __fastcall CThumbnailVisual::ValidateVisual(struct CResource **this)
{
  int v2; // eax
  unsigned int v3; // edi
  CSecondaryWindowRepresentation *v4; // rcx
  int v5; // eax
  int updated; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  struct CResource *v13; // rax
  __int64 v14; // rcx
  CSecondaryWindowRepresentation *v15; // rcx
  int v16; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  CBaseObject *v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax

  if ( ((_DWORD)this[10] & 0x2000) != 0 )
  {
    v2 = CThumbnailVisual::EnsureVisualBrush((CThumbnailVisual *)this);
    v3 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x157u);
      return v3;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000);
    *((_DWORD *)this + 20) &= ~0x2000u;
  }
  if ( *((char *)this + 80) < 0 )
  {
    v4 = this[45];
    if ( v4 )
    {
      v5 = CSecondaryWindowRepresentation::Validate(v4);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x164u);
        return v3;
      }
    }
    *((_DWORD *)this + 20) &= ~0x80u;
  }
  if ( ((_DWORD)this[10] & 0x4000) != 0 )
  {
    updated = CThumbnailVisual::UpdateSourceRect((CThumbnailVisual *)this);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x16Cu);
      return v3;
    }
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v7 = CVisual::UpdateLayout((CVisual *)this);
  v3 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x171u);
    return v3;
  }
  if ( ((_DWORD)this[10] & 0x1000) != 0 )
  {
    v8 = CThumbnailVisual::UpdateDestinationRect((CThumbnailVisual *)this);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x17Au);
      return v3;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000);
    *((_DWORD *)this + 20) &= ~0x1000u;
  }
  if ( ((_DWORD)this[10] & 0x8000) != 0 )
  {
    if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this) )
    {
      if ( ((_DWORD)this[10] & 0x10000) != 0 )
      {
        v24 = VisualCollection::RemoveAll((VisualCollection *)(this + 4));
        v3 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x186u);
          return v3;
        }
        v25 = CVisual::ClearInstructions((CVisual *)this);
        v3 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x187u);
          return v3;
        }
        v26 = this[45];
        if ( v26 )
        {
          CBaseObject::Release(v26);
          this[45] = 0LL;
        }
        *((_BYTE *)this + 458) = 0;
        v27 = CThumbnailVisual::EnsureVisualBrush((CThumbnailVisual *)this);
        v3 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x18Au);
          return v3;
        }
        v28 = CThumbnailVisual::UpdateSourceRect((CThumbnailVisual *)this);
        v3 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x18Bu);
          return v3;
        }
        v29 = CThumbnailVisual::UpdateDestinationRect((CThumbnailVisual *)this);
        v3 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x18Cu);
          return v3;
        }
        *((_DWORD *)this + 20) &= 0xFFFE8F7F;
      }
    }
    else if ( CThumbnailVisual::_ShouldUseSecondaryWindowVisual((CThumbnailVisual *)this) )
    {
      v21 = CVisual::ClearInstructions((CVisual *)this);
      v3 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x196u);
        return v3;
      }
      v22 = CThumbnailVisual::EnsureSecondaryWindowVisual((CThumbnailVisual *)this);
      v3 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x197u);
        return v3;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_q(v23, &UdwmThumbnailVisualValidated_Info, 1LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_q(v9, &UdwmThumbnailVisualValidated_Info, 0LL);
      v10 = VisualCollection::RemoveAll((VisualCollection *)(this + 4));
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x19Du);
        return v3;
      }
      v11 = CVisual::ClearInstructions((CVisual *)this);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x19Eu);
        return v3;
      }
      v12 = CThumbnailVisual::EnsureVisualBrush((CThumbnailVisual *)this);
      v3 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x19Fu);
        return v3;
      }
      v13 = this[45];
      if ( v13 )
      {
        v14 = *((_QWORD *)v13 + 6);
        if ( v14 )
        {
          v18 = *(_QWORD *)(v14 + 16);
          v19 = v18 ? *(unsigned int *)(v18 + 24) : 0LL;
          v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 4)
                                                                   + 368LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v19,
                  0LL);
          v3 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x1A5u);
            return v3;
          }
        }
      }
      if ( !*((_BYTE *)this[44] + 34) )
        CVisual::ClearInterpolationMode((CVisual *)this);
    }
    *((_DWORD *)this + 20) &= ~0x8000u;
  }
  if ( ((_DWORD)this[10] & 0x20000) != 0 )
  {
    if ( (*((_DWORD *)this[44] + 9) & 0x30000000) == 0x10000000 )
      CVisual::SetInterpolationMode(this, 6LL);
    else
      CVisual::ClearInterpolationMode((CVisual *)this);
    *((_DWORD *)this + 20) &= ~0x20000u;
  }
  if ( ((_DWORD)this[10] & 0x40000) != 0 )
  {
    v15 = this[45];
    if ( v15 )
      CSecondaryWindowRepresentation::SnapshotIfStatic(
        v15,
        this[52],
        this[46],
        (const struct MilPointAndSizeL *)((char *)this + 484));
    *((_DWORD *)this + 20) &= ~0x40000u;
  }
  v16 = CVisual::ValidateVisual((CVisual *)this);
  v3 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1CDu);
  return v3;
}
