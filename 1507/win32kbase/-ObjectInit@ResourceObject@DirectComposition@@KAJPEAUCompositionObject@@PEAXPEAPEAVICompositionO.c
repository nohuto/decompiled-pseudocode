/*
 * XREFs of ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0023FB0
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
  bool v3; // zf
  struct ICompositionObject *v4; // rcx
  void **v5; // r9

  v3 = (struct CompositionObject *)((char *)a1 + 24) == 0LL;
  v4 = (struct CompositionObject *)((char *)a1 + 24);
  v5 = &DirectComposition::CSharedSystemResource::`vftable';
  if ( v3 )
    v5 = *(void ***)v4;
  *(_QWORD *)v4 = v5;
  *a3 = v4;
  return DirectComposition::CSharedSystemResource::Initialize(v4, (unsigned int)a2);
}
