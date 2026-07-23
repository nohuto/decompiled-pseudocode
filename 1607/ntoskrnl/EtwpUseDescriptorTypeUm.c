/*
 * XREFs of EtwpUseDescriptorTypeUm @ 0x1406A0738
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
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
    if ( v4 < 2u )
      *((_BYTE *)Object + 102) = v4;
    else
      v3 = -1073741811;
    ObfDereferenceObject(v5);
    return v3;
  }
  return result;
}
