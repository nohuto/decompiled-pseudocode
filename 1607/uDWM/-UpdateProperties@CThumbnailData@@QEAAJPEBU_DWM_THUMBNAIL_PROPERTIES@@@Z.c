/*
 * XREFs of ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18003FC10
 * Callers:
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x18000638C (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002FF10 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180082470 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 * Callees:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180017064 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CThumbnailData::UpdateProperties(CThumbnailData *this, const struct _DWM_THUMBNAIL_PROPERTIES *a2)
{
  unsigned int v2; // r15d
  int v3; // edi
  DWORD v6; // edi
  DWORD v7; // ecx
  DWORD v8; // ecx
  signed int v9; // ecx
  int v10; // eax
  CSecondaryWindowRepresentation **v11; // rcx
  int updated; // eax
  int v14; // eax

  v2 = 0;
  v3 = 0;
  if ( (a2->dwFlags & 1) != 0 )
  {
    if ( !EqualRect((const RECT *)((char *)this + 40), &a2->rcDestination) || (*((_BYTE *)this + 36) & 1) == 0 )
      v3 = 1;
    *((_DWORD *)this + 9) |= 1u;
    *(RECT *)((char *)this + 40) = a2->rcDestination;
  }
  if ( (a2->dwFlags & 2) != 0 )
  {
    if ( !EqualRect((const RECT *)((char *)this + 56), &a2->rcSource) || (*((_BYTE *)this + 36) & 2) == 0 )
      v3 |= 2u;
    *((_DWORD *)this + 9) |= 2u;
    *(RECT *)((char *)this + 56) = a2->rcSource;
  }
  if ( (a2->dwFlags & 4) != 0 )
  {
    if ( *((_BYTE *)this + 72) != a2->opacity || (*((_BYTE *)this + 36) & 4) == 0 )
      v3 |= 4u;
    *((_DWORD *)this + 9) |= 4u;
    *((_BYTE *)this + 72) = a2->opacity;
  }
  if ( (a2->dwFlags & 8) != 0 )
  {
    if ( *(_DWORD *)((char *)this + 73) != a2->fVisible || (*((_BYTE *)this + 36) & 8) == 0 )
      v3 |= 8u;
    *((_DWORD *)this + 9) |= 8u;
    *(_DWORD *)((char *)this + 73) = a2->fVisible;
  }
  if ( (a2->dwFlags & 0x10) != 0 )
  {
    if ( *(_DWORD *)((char *)this + 77) != a2->fSourceClientAreaOnly || (*((_BYTE *)this + 36) & 0x10) == 0 )
      v3 |= 0x10u;
    *((_DWORD *)this + 9) |= 0x10u;
    *(_DWORD *)((char *)this + 77) = a2->fSourceClientAreaOnly;
  }
  if ( (a2->dwFlags & 0x80000) != 0 )
    v3 |= 0x80000u;
  if ( (a2->dwFlags & 0x400000) != 0 )
  {
    v14 = *((_DWORD *)this + 9);
    if ( (v14 & 0x400000) == 0 )
    {
      v3 |= 0x400000u;
      *((_DWORD *)this + 9) = v14 | 0x400000;
    }
  }
  v6 = a2->dwFlags & 0x30000 | v3;
  if ( (a2->dwFlags & 0x100000) != 0 )
  {
    v6 |= 0x100000u;
    *((_DWORD *)this + 9) |= 0x100000u;
  }
  if ( (a2->dwFlags & 0x800000) != 0 )
  {
    v6 |= 0x800000u;
    *((_DWORD *)this + 9) |= 0x800000u;
  }
  v7 = a2->dwFlags & 0xC000000;
  if ( v7 )
  {
    v6 |= v7;
    *((_DWORD *)this + 9) = v7 | *((_DWORD *)this + 9) & 0xF3FFFFFF;
  }
  v8 = a2->dwFlags & 0x30000000;
  if ( v8 )
  {
    v6 |= v8;
    *((_DWORD *)this + 9) = v8 | *((_DWORD *)this + 9) & 0xCFFFFFFF;
  }
  v9 = a2->dwFlags & 0xC0000000;
  if ( v9 )
  {
    v6 |= v9;
    v10 = v9 | *((_DWORD *)this + 9) & 0x3FFFFFFF;
    *((_DWORD *)this + 9) = v10;
    if ( v9 < 0 )
      *((_DWORD *)this + 9) = v10 & 0xFFEFFFFF;
  }
  v11 = (CSecondaryWindowRepresentation **)*((_QWORD *)this + 11);
  if ( v11 )
  {
    updated = CThumbnailVisual::UpdateProperties(v11, v6);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x1C90u);
  }
  return v2;
}
