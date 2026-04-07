/*
 * XREFs of ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x180029BB4
 * Callers:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x18002BECC (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x18003D2A0 (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x1800792C8 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x1800793F8 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007A220 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 * Callees:
 *     <none>
 */

struct CThumbnailData *__fastcall CWindowList::FindThumbnailData(CWindowList *this, union _LARGE_INTEGER a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r9
  unsigned int i; // r8d

  v2 = *((_DWORD *)this + 94);
  v3 = 0LL;
  for ( i = 0; i < v2; ++i )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 44) + 8LL * i) + 8LL) == a2.QuadPart )
      break;
  }
  if ( i < v2 )
    return *(struct CThumbnailData **)(*((_QWORD *)this + 44) + 8LL * i);
  return (struct CThumbnailData *)v3;
}
