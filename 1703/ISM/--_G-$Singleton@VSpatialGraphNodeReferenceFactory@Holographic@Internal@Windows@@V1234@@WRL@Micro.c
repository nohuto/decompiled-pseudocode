/*
 * XREFs of ??_G?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@EEAAPEAXI@Z @ 0x18008CD90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@EEAA@XZ @ 0x18008CB94 (--1-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Micros.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory *__fastcall Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::`scalar deleting destructor'(
        Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory *Block,
        char a2)
{
  Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::~Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
