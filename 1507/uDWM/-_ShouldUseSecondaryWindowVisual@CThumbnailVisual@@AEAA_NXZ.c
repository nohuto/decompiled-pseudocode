/*
 * XREFs of ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x1800140FC
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013ED0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180013080 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?GetThumbnailType@CSecondaryWindowRepresentation@@QEBA?AW4THUMBNAIL_TYPE@@XZ @ 0x180033580 (-GetThumbnailType@CSecondaryWindowRepresentation@@QEBA-AW4THUMBNAIL_TYPE@@XZ.c)
 */

char __fastcall CThumbnailVisual::_ShouldUseSecondaryWindowVisual(CThumbnailVisual *this)
{
  char v2; // bl
  __int64 v4; // rcx
  int v5; // r9d
  int v6; // eax
  int v7; // ecx

  v2 = 1;
  if ( !EqualRect(
          (const RECT *)(*(_QWORD *)(*((_QWORD *)this + 44) + 24LL) + 48LL),
          (const RECT *)(*(_QWORD *)(*((_QWORD *)this + 44) + 24LL) + 204LL)) )
    return 0;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
    return 0;
  v4 = *((_QWORD *)this + 44);
  if ( (*(_BYTE *)(v4 + 36) & 2) != 0
    && (*(_DWORD *)(v4 + 36) & 0x100000) == 0
    && !EqualRect((const RECT *)(*(_QWORD *)(v4 + 24) + 48LL), (const RECT *)(v4 + 56)) )
  {
    return 0;
  }
  v5 = *(_DWORD *)(*((_QWORD *)this + 44) + 36LL);
  if ( (v5 & 0x40000000) != 0 )
    return 0;
  if ( *((_QWORD *)this + 45)
    && (unsigned int)CSecondaryWindowRepresentation::GetThumbnailType() != 1
    && (v6 = *((_DWORD *)this + 127)) != 0
    && (v7 = *((_DWORD *)this + 128)) != 0 )
  {
    if ( (float)((float)*((int *)this + 123) / (float)v6) < 0.5
      || (float)((float)*((int *)this + 124) / (float)v7) < 0.5 )
    {
      return 0;
    }
  }
  else if ( (v5 & 0x4000000) != 0 )
  {
    return 0;
  }
  return v2;
}
