/*
 * XREFs of ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0048580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::ResourceObject::ObjectInit(
        struct CompositionObject *a1,
        void *a2,
        struct ICompositionObject **a3)
{
  char *v3; // rcx

  v3 = (char *)a1 + 24;
  if ( v3 )
  {
    *((_QWORD *)v3 + 1) = 0LL;
    *((_QWORD *)v3 + 2) = 0LL;
    *(_QWORD *)v3 = &DirectComposition::CSharedSystemResource::`vftable';
    *((_DWORD *)v3 + 5) = 0;
  }
  *a3 = (struct ICompositionObject *)v3;
  return DirectComposition::CSharedSystemResource::Initialize(
           (DirectComposition::CSharedSystemResource *)v3,
           (unsigned int)a2);
}
