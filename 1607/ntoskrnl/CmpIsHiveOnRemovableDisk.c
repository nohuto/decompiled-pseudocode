/*
 * XREFs of CmpIsHiveOnRemovableDisk @ 0x14060430C
 * Callers:
 *     HvpIsHiveEligibleForSystemCacheBacking @ 0x14047DEC0 (HvpIsHiveEligibleForSystemCacheBacking.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
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
