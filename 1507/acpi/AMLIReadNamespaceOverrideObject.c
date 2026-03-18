/*
 * XREFs of AMLIReadNamespaceOverrideObject @ 0x1C0044D34
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     ReadObject @ 0x1C0016CF8 (ReadObject.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0044BC8 (AMLIGetNamespaceOverrideObject.c)
 */

__int64 __fastcall AMLIReadNamespaceOverrideObject(__int64 a1, __int64 a2, __int64 a3)
{
  int Object; // edi
  __int64 v7; // [rsp+48h] [rbp+20h]

  Object = AMLIGetNamespaceOverrideObject(a2);
  if ( Object >= 0 )
  {
    Object = ReadObject(a1, v7 + 56, a3);
    DereferenceObjectEx(v7);
  }
  return (unsigned int)Object;
}
