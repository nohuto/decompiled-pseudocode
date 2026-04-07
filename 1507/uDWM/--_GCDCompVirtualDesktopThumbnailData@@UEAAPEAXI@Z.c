/*
 * XREFs of ??_GCDCompVirtualDesktopThumbnailData@@UEAAPEAXI@Z @ 0x180077050
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CDCompVirtualDesktopThumbnailData *__fastcall CDCompVirtualDesktopThumbnailData::`scalar deleting destructor'(
        CDCompVirtualDesktopThumbnailData *this,
        char a2)
{
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CDCompVirtualDesktopThumbnailData::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 15) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 20);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 16);
  *(_QWORD *)this = &CThumbnailData::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDCompVirtualDesktopThumbnailData *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
