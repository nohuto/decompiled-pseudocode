/*
 * XREFs of ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x18006747C
 * Callers:
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x18001D0A8 (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x1800260C0 (--_ECAtlasedRectsGroup@@MEAAPEAXI@Z.c)
 *     ??1CTransformGroup@@MEAA@XZ @ 0x180066A88 (--1CTransformGroup@@MEAA@XZ.c)
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x180068848 (--1CTransform3DGroup@@MEAA@XZ.c)
 *     ??_ECGeometry2DGroup@@MEAAPEAXI@Z @ 0x180113380 (--_ECGeometry2DGroup@@MEAAPEAXI@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x18013546C (--1CGeometryGroup@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCyclicResourceListEntry::~CCyclicResourceListEntry(CCyclicResourceListEntry *this)
{
  char *v1; // rdx
  __int64 v2; // rcx
  char **v3; // rax

  v1 = (char *)this + 8;
  *(_QWORD *)this = &CCyclicResourceListEntry::`vftable';
  v2 = *((_QWORD *)this + 1);
  v3 = (char **)*((_QWORD *)v1 + 1);
  if ( *(char **)(v2 + 8) != v1 || *v3 != v1 )
    __fastfail(3u);
  *v3 = (char *)v2;
  *(_QWORD *)(v2 + 8) = v3;
}
