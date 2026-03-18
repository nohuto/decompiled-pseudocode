/*
 * XREFs of AlpcpQueryTokenModifiedIdMessage @ 0x14051A738
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x1404A5E90 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1404A61E0 (AlpcpGetEffectiveTokenMessage.c)
 *     SeGetTokenControlInformation @ 0x1406538C0 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall AlpcpQueryTokenModifiedIdMessage(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, _DWORD *a5)
{
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v9[5]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v10; // [rsp+60h] [rbp-58h] BYREF
  PVOID Object; // [rsp+70h] [rbp-48h]
  char v12; // [rsp+D8h] [rbp+20h] BYREF

  if ( a4 < 8 )
  {
    memset(v9, 0, sizeof(v9));
    v7 = -1073741789;
  }
  else
  {
    result = AlpcpGetEffectiveTokenMessage(a1, a2, &v8, (__int64)&v10, &v12);
    v7 = result;
    if ( (int)result < 0 )
      return result;
    SeGetTokenControlInformation(v8, v9);
    if ( v12 )
      ObfDereferenceObject(Object);
  }
  if ( a5 )
    *a5 = 8;
  if ( v7 >= 0 )
    *a3 = v9[2];
  return (unsigned int)v7;
}
