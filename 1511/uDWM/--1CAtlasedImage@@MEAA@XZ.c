/*
 * XREFs of ??1CAtlasedImage@@MEAA@XZ @ 0x18002C39C
 * Callers:
 *     ??1CAtlasButton@@MEAA@XZ @ 0x18001C300 (--1CAtlasButton@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAtlasedImage::~CAtlasedImage(CAtlasedImage *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CAtlasedImage::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 11) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
}
