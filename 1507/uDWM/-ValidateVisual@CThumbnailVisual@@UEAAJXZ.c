/*
 * XREFs of ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012F30 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180013080 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x1800131F0 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180013474 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18001374C (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180013B64 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x1800140FC (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800150D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001CA80 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x18001D1B0 (-UpdateLayout@CVisual@@UEAAJXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180033D48 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180033F40 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18003D738 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     Template_q @ 0x180074F24 (Template_q.c)
 */

__int64 __fastcall CThumbnailVisual::ValidateVisual(struct CResource **this)
{
  int v2; // eax
  unsigned int v3; // edi
  int updated; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  struct CResource *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  CSecondaryWindowRepresentation *v15; // rcx
  int v16; // eax
  CSecondaryWindowRepresentation *v17; // rcx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  CBaseObject *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  int v29; // [rsp+30h] [rbp-28h] BYREF
  __int64 v30; // [rsp+34h] [rbp-24h]

  if ( ((_DWORD)this[10] & 0x2000) != 0 )
  {
    v2 = CThumbnailVisual::EnsureVisualBrush((CThumbnailVisual *)this);
    v3 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x178u);
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
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x185u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x18Du);
      return v3;
    }
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v5 = CVisual::UpdateLayout((CVisual *)this);
  v3 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x192u);
  }
  else
  {
    if ( ((_DWORD)this[10] & 0x1000) != 0 )
    {
      v6 = CThumbnailVisual::UpdateDestinationRect((CThumbnailVisual *)this);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x19Bu);
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
          v21 = VisualCollection::RemoveAll((VisualCollection *)(this + 4));
          v3 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x1A7u);
            return v3;
          }
          v22 = CVisual::ClearInstructions((CVisual *)this);
          v3 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x1A8u);
            return v3;
          }
          v23 = this[45];
          if ( v23 )
          {
            CBaseObject::Release(v23);
            this[45] = 0LL;
          }
          *((_BYTE *)this + 458) = 0;
          v24 = CThumbnailVisual::EnsureVisualBrush((CThumbnailVisual *)this);
          v3 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x1ABu);
            return v3;
          }
          v25 = CThumbnailVisual::UpdateSourceRect((CThumbnailVisual *)this);
          v3 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0x1ACu);
            return v3;
          }
          v26 = CThumbnailVisual::UpdateDestinationRect((CThumbnailVisual *)this);
          v3 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x1ADu);
            return v3;
          }
          *((_DWORD *)this + 20) &= 0xFFFE8F7F;
        }
      }
      else if ( CThumbnailVisual::_ShouldUseSecondaryWindowVisual((CThumbnailVisual *)this) )
      {
        v18 = CVisual::ClearInstructions((CVisual *)this);
        v3 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x1B7u);
          return v3;
        }
        v19 = CThumbnailVisual::EnsureSecondaryWindowVisual((CThumbnailVisual *)this);
        v3 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x1B8u);
          return v3;
        }
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          Template_q(v20, &UdwmThumbnailVisualValidated_Info, 1LL);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          Template_q(v7, &UdwmThumbnailVisualValidated_Info, 0LL);
        v8 = VisualCollection::RemoveAll((VisualCollection *)(this + 4));
        v3 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x1BEu);
          return v3;
        }
        v9 = CVisual::ClearInstructions((CVisual *)this);
        v3 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x1BFu);
          return v3;
        }
        v10 = CThumbnailVisual::EnsureVisualBrush((CThumbnailVisual *)this);
        v3 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x1C0u);
          return v3;
        }
        v11 = this[45];
        if ( v11 )
        {
          v12 = *((_QWORD *)v11 + 6);
          if ( v12 )
          {
            v29 = 46;
            v30 = 0LL;
            v27 = *(_QWORD *)(v12 + 16);
            if ( v27 )
              LODWORD(v27) = *(_DWORD *)(v27 + 24);
            LODWORD(v30) = v27;
            v28 = MilResource_SendCommand(
                    &v29,
                    0xCu,
                    *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
            v3 = v28;
            if ( v28 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x1C6u);
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
    v13 = CVisual::ValidateVisual((CVisual *)this);
    v3 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x1EEu);
  }
  return v3;
}
