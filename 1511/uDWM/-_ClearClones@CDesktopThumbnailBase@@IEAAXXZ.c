/*
 * XREFs of ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ @ 0x18009AFB0
 * Callers:
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x18009985C (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x18009AAAC (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
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
