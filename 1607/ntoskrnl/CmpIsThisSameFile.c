/*
 * XREFs of CmpIsThisSameFile @ 0x1403FCA68
 * Callers:
 *     CmLoadAppKey @ 0x1403FC110 (CmLoadAppKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1405FEFD8 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

bool __fastcall CmpIsThisSameFile(__int64 a1, void *a2)
{
  bool v3; // bl
  __int64 v4; // r8
  __int64 v5; // rdx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( ObReferenceObjectByHandle(a2, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL) < 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    v5 = *((_QWORD *)Object + 5);
    if ( v5 )
      v3 = v4 == v5;
  }
  ObfDereferenceObject(Object);
  return v3;
}
