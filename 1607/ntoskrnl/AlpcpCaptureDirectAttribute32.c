/*
 * XREFs of AlpcpCaptureDirectAttribute32 @ 0x1404C2088
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14044B6A0 (AlpcpCaptureAttributes.c)
 * Callees:
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcpCaptureDirectAttribute32(unsigned int *a1, void *a2, __int64 a3, int a4, int a5)
{
  NTSTATUS v6; // r9d
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = a2;
  v6 = (_bittest(&a5, 0x1Du) & ((a4 & 0x10010) == 0)) == 0 ? 0xC000000D : 0;
  if ( v6 >= 0 )
  {
    v6 = ObReferenceObjectByHandle((HANDLE)*a1, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    if ( v6 >= 0 )
      *(_QWORD *)(a3 + 56) = (unsigned __int64)Object | 1;
  }
  return (unsigned int)v6;
}
