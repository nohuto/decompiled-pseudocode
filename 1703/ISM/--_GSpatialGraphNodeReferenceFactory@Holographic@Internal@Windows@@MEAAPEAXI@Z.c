/*
 * XREFs of ??_GSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAAPEAXI@Z @ 0x18008B420
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ @ 0x18008B3AC (--1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory *__fastcall Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::`scalar deleting destructor'(
        Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory *this,
        char a2)
{
  Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::~SpatialGraphNodeReferenceFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
