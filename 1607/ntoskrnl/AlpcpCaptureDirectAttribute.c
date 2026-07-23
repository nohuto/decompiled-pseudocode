/*
 * XREFs of AlpcpCaptureDirectAttribute @ 0x14044C900
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14044B6A0 (AlpcpCaptureAttributes.c)
 * Callees:
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall AlpcpCaptureDirectAttribute(HANDLE *a1, void *a2, __int64 a3, int a4, int a5)
{
  NTSTATUS result; // eax
  unsigned __int64 v7; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = a2;
  if ( (((a4 & 0x10010) == 0) & _bittest(&a5, 0x1Du)) == 0 )
    return -1073741811;
  result = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    result = ObReferenceObjectByHandle(*a1, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    if ( result < 0 )
      return result;
    v7 = (unsigned __int64)Object | 1;
  }
  else
  {
    v7 = (unsigned __int64)*a1;
  }
  *(_QWORD *)(a3 + 56) = v7;
  return result;
}
