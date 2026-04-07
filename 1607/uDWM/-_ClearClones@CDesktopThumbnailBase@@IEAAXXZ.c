/*
 * XREFs of ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ @ 0x180097DC4
 * Callers:
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x18009660C (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800978B8 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDesktopThumbnailBase::_ClearClones(CDesktopThumbnailBase *this)
{
  unsigned int i; // ebx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  for ( i = 0; i < *((_DWORD *)this + 72); ++i )
  {
    v3 = *(CBaseObject **)(*((_QWORD *)this + 33) + 16LL * i + 8);
    if ( v3 )
      CBaseObject::Release(v3);
    v4 = *(CBaseObject **)(*((_QWORD *)this + 33) + 16LL * i);
    if ( v4 )
      CBaseObject::Release(v4);
  }
}
