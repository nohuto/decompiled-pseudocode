/*
 * XREFs of ParseNameObj @ 0x1C0015A18
 * Callers:
 *     ParseOpcode @ 0x1C000D910 (ParseOpcode.c)
 *     ParseScope @ 0x1C0017240 (ParseScope.c)
 * Callees:
 *     ParseAndGetNameSpaceObject @ 0x1C000C7C8 (ParseAndGetNameSpaceObject.c)
 *     PushCall @ 0x1C0012168 (PushCall.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     GetBaseObject @ 0x1C0015AAC (GetBaseObject.c)
 *     ReadObject @ 0x1C0016CF8 (ReadObject.c)
 */

__int64 __fastcall ParseNameObj(_QWORD *a1, __int64 a2)
{
  unsigned int NameSpaceObject; // edi
  __int64 BaseObject; // rax
  __int64 v6; // rbx
  unsigned int Object; // eax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  NameSpaceObject = ParseAndGetNameSpaceObject((__int64)(a1 + 15), a1[10], &v9, 0);
  if ( !NameSpaceObject )
  {
    BaseObject = GetBaseObject(v9);
    v6 = BaseObject;
    if ( *(_WORD *)(BaseObject + 58) == 8 )
      Object = PushCall(a1, BaseObject, a2);
    else
      Object = ReadObject(a1, BaseObject + 56, a2);
    NameSpaceObject = Object;
    DereferenceObjectEx(v6);
    DereferenceObjectEx(v9);
  }
  return NameSpaceObject;
}
