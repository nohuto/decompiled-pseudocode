/*
 * XREFs of ParseNameObj @ 0x1C0016A2C
 * Callers:
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 *     ParseOpcode @ 0x1C00166B0 (ParseOpcode.c)
 * Callees:
 *     ParseAndGetNameSpaceObject @ 0x1C000CD58 (ParseAndGetNameSpaceObject.c)
 *     ReadObject @ 0x1C000D298 (ReadObject.c)
 *     PushCall @ 0x1C001308C (PushCall.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     GetBaseObject @ 0x1C0016AE0 (GetBaseObject.c)
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
      Object = ReadObject((__int64)a1, BaseObject + 56, a2);
    NameSpaceObject = Object;
    DereferenceObjectEx(v6);
    DereferenceObjectEx(v9);
  }
  return NameSpaceObject;
}
