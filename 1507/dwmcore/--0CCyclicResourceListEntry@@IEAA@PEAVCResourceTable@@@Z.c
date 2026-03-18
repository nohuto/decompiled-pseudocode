/*
 * XREFs of ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x180017D30
 * Callers:
 *     ??0CAtlasedRectsGroup@@IEAA@PEAVCComposition@@PEAVCResourceTable@@@Z @ 0x180016DA4 (--0CAtlasedRectsGroup@@IEAA@PEAVCComposition@@PEAVCResourceTable@@@Z.c)
 *     ??0CTransformGroup@@IEAA@PEAVCComposition@@PEAVCResourceTable@@@Z @ 0x18001A1E4 (--0CTransformGroup@@IEAA@PEAVCComposition@@PEAVCResourceTable@@@Z.c)
 *     ??0CTransform3DGroup@@IEAA@PEAVCComposition@@PEAVCResourceTable@@@Z @ 0x18006053C (--0CTransform3DGroup@@IEAA@PEAVCComposition@@PEAVCResourceTable@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ??0CCombinedGeometry@@IEAA@PEAVCComposition@@PEAVCResourceTable@@@Z @ 0x1800F8750 (--0CCombinedGeometry@@IEAA@PEAVCComposition@@PEAVCResourceTable@@@Z.c)
 *     ??0CGeometryGroup@@IEAA@PEAVCComposition@@PEAVCResourceTable@@@Z @ 0x1800F8874 (--0CGeometryGroup@@IEAA@PEAVCComposition@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

CCyclicResourceListEntry *__fastcall CCyclicResourceListEntry::CCyclicResourceListEntry(
        CCyclicResourceListEntry *this,
        struct CResourceTable *a2)
{
  __int64 *v2; // rdx
  char *v3; // rax
  __int64 v4; // r8

  v2 = (__int64 *)((char *)a2 + 56);
  *(_QWORD *)this = &CCyclicResourceListEntry::`vftable';
  v3 = (char *)this + 8;
  *((_QWORD *)this + 1) = (char *)this + 8;
  *((_QWORD *)this + 2) = (char *)this + 8;
  v4 = *v2;
  *((_QWORD *)this + 1) = *v2;
  *((_QWORD *)this + 2) = v2;
  if ( *(__int64 **)(v4 + 8) != v2 )
    __fastfail(3u);
  *(_QWORD *)(v4 + 8) = v3;
  *v2 = (__int64)v3;
  return this;
}
