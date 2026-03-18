/*
 * XREFs of EtwpUseDescriptorTypeUm @ 0x14040998C
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall EtwpUseDescriptorTypeUm(__int64 a1)
{
  NTSTATUS result; // eax
  int v3; // ebx
  unsigned __int8 v4; // al
  PVOID v5; // rcx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  result = ObReferenceObjectByHandle(*(HANDLE *)a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v3 = result;
  if ( result >= 0 )
  {
    v4 = *(_BYTE *)(a1 + 8);
    v5 = Object;
    if ( v4 >= 2u )
      v3 = -1073741811;
    else
      *((_BYTE *)Object + 101) = v4;
    ObfDereferenceObject(v5);
    return v3;
  }
  return result;
}
