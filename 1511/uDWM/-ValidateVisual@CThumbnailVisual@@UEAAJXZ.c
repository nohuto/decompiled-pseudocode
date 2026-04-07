/*
 * XREFs of ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180019A20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180016D78 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180016F68 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x1800189B0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180018B1C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x180018CC0 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180018FA8 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180019280 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18001969C (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x180019C9C (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001FE50 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021ED8 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x1800225C0 (-UpdateLayout@CVisual@@UEAAJXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x180046B24 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     Template_q @ 0x18007CFB4 (Template_q.c)
 */

__int64 __fastcall CThumbnailVisual::ValidateVisual(struct CResource **this)
{
  int v2; // eax
  unsigned int v3; // edi
  int updated; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  struct CResource *v13; // rax
  __int64 v14; // rcx
  CSecondaryWindowRepresentation *v15; // rcx
  int v16; // eax
  CSecondaryWindowRepresentation *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  CBaseObject *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // [rsp+30h] [rbp-28h] BYREF
  __int64 v30; // [rsp+34h] [rbp-24h]

  if ( ((_DWORD)this[10] & 0x2000) != 0 )
  {
    v2 = CThumbnailVisual::EnsureVisualBrush((CThumbnailVisual *)this);
    v3 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x157u);
      return v3;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000);
    *((_DWORD *)this + 20) &= ~0x2000u;
  }
  if ( *((char *)this + 80) < 0 )
  {
    v15 = this[45];
    if ( v15 )
    {
      v16 = CSecondaryWindowRepresentation::Validate(v15);
      v3 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x164u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x16Cu);
      return v3;
    }
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v5 = CVisual::UpdateLayout((CVisual *)this);
  v3 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x171u);
    return v3;
  }
  if ( ((_DWORD)this[10] & 0x1000) != 0 )
  {
    v6 = CThumbnailVisual::UpdateDestinationRect((CThumbnailVisual *)this);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x17Au);
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
        v23 = VisualCollection::RemoveAll((VisualCollection *)(this + 4));
        v3 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x186u);
          return v3;
        }
        v24 = CVisual::ClearInstructions((CVisual *)this);
        v3 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x187u);
          return v3;
        }
        v25 = this[45];
        if ( v25 )
        {
          CBaseObject::Release(v25);
          this[45] = 0LL;
        }
        *((_BYTE *)this + 458) = 0;
        v26 = CThumbnailVisual::EnsureVisualBrush((CThumbnailVisual *)this);
        v3 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x18Au);
          return v3;
        }
        v27 = CThumbnailVisual::UpdateSourceRect((CThumbnailVisual *)this);
        v3 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x18Bu);
          return v3;
        }
        v28 = CThumbnailVisual::UpdateDestinationRect((CThumbnailVisual *)this);
        v3 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x18Cu);
          return v3;
        }
        *((_DWORD *)this + 20) &= 0xFFFE8F7F;
      }
    }
    else if ( CThumbnailVisual::_ShouldUseSecondaryWindowVisual((CThumbnailVisual *)this) )
    {
      v20 = CVisual::ClearInstructions((CVisual *)this);
      v3 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x196u);
        return v3;
      }
      v21 = CThumbnailVisual::EnsureSecondaryWindowVisual((CThumbnailVisual *)this);
      v3 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x197u);
        return v3;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_q(v22, &UdwmThumbnailVisualValidated_Info, 1LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_q(v9, &UdwmThumbnailVisualValidated_Info, 0LL);
      v10 = VisualCollection::RemoveAll((VisualCollection *)(this + 4));
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x19Du);
        return v3;
      }
      v11 = CVisual::ClearInstructions((CVisual *)this);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x19Eu);
        return v3;
      }
      v12 = CThumbnailVisual::EnsureVisualBrush((CThumbnailVisual *)this);
      v3 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x19Fu);
        return v3;
      }
      v13 = this[45];
      if ( v13 )
      {
        v14 = *((_QWORD *)v13 + 6);
        if ( v14 )
        {
          v29 = 49;
          v30 = 0LL;
          v18 = *(_QWORD *)(v14 + 16);
          if ( v18 )
            LODWORD(v18) = *(_DWORD *)(v18 + 24);
          LODWORD(v30) = v18;
          v19 = MilResource_SendCommand(
                  &v29,
                  0xCu,
                  *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
          v3 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x1A5u);
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
    v17 = this[45];
    if ( v17 )
      CSecondaryWindowRepresentation::SnapshotIfStatic(
        v17,
        this[52],
        this[46],
        (const struct MilPointAndSizeL *)((char *)this + 484));
    *((_DWORD *)this + 20) &= ~0x40000u;
  }
  v7 = CVisual::ValidateVisual((CVisual *)this);
  v3 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x1CDu);
  return v3;
}
