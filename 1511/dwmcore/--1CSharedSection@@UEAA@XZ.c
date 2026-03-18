/*
 * XREFs of ??1CSharedSection@@UEAA@XZ @ 0x1800AD730
 * Callers:
 *     ??_ECSharedSection@@UEAAPEAXI@Z @ 0x1800AD620 (--_ECSharedSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z @ 0x180094D14 (-UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z.c)
 */

void __fastcall CSharedSection::~CSharedSection(CSharedSection *this)
{
  void *v1; // rdx

  v1 = (void *)*((_QWORD *)this + 7);
  *(_QWORD *)this = &CSharedSection::`vftable';
  if ( v1 )
    CComposition::UnmapSharedSectionView(*((CComposition **)this + 2), v1);
  CResource::~CResource(this);
}
