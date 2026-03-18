/*
 * XREFs of CmpIsHiveOnRemovableDisk @ 0x1405E4D00
 * Callers:
 *     HvpIsHiveEligibleForSystemCacheBacking @ 0x1403D3D68 (HvpIsHiveEligibleForSystemCacheBacking.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

bool __fastcall CmpIsHiveOnRemovableDisk(__int64 a1)
{
  void *v1; // rcx
  bool v2; // bl
  __int64 v3; // rdx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(void **)(a1 + 2664);
  if ( !v1 )
    return 0;
  v2 = 1;
  if ( ObReferenceObjectByHandle(v1, 1u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL) >= 0 )
  {
    v3 = *((_QWORD *)Object + 1);
    v2 = (*(_DWORD *)(v3 + 48) & 0x600100) == 0 && (*(_DWORD *)(v3 + 52) & 0x40001) != 0;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v2;
}
