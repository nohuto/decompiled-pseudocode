/*
 * XREFs of AMLIReadNamespaceOverrideObject @ 0x1C005BEE0
 * Callers:
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     ReadObject @ 0x1C001ECD0 (ReadObject.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C005BD70 (AMLIGetNamespaceOverrideObject.c)
 */

__int64 __fastcall AMLIReadNamespaceOverrideObject(__int64 a1, __int64 a2, __int64 a3)
{
  int Object; // edi
  _QWORD *v7; // [rsp+48h] [rbp+20h]

  Object = AMLIGetNamespaceOverrideObject(a2);
  if ( Object >= 0 )
  {
    Object = ReadObject(a1, (__int64)(v7 + 8), a3);
    DereferenceObjectEx(v7);
  }
  return (unsigned int)Object;
}
