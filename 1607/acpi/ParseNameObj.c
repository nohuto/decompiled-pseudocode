/*
 * XREFs of ParseNameObj @ 0x1C001DEBC
 * Callers:
 *     ParseOpcode @ 0x1C001DD10 (ParseOpcode.c)
 *     ParseScope @ 0x1C001F120 (ParseScope.c)
 * Callees:
 *     PushCall @ 0x1C0019B5C (PushCall.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     ReadObject @ 0x1C001ECD0 (ReadObject.c)
 *     GetBaseObject @ 0x1C001EDC0 (GetBaseObject.c)
 *     ParseAndGetNameSpaceObject @ 0x1C001EDE8 (ParseAndGetNameSpaceObject.c)
 */

__int64 __fastcall ParseNameObj(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int NameSpaceObject; // edi
  __int64 BaseObject; // rax
  _QWORD *v7; // rbx
  unsigned int Object; // eax
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1[10];
  v10 = 0LL;
  NameSpaceObject = ParseAndGetNameSpaceObject((_DWORD)a1, (int)a1 + 120, v2, (unsigned int)&v10, 0);
  if ( !NameSpaceObject )
  {
    BaseObject = GetBaseObject(v10);
    v7 = (_QWORD *)BaseObject;
    if ( *(_WORD *)(BaseObject + 66) == 8 )
      Object = PushCall(a1, BaseObject, a2);
    else
      Object = ReadObject(a1, BaseObject + 64, a2);
    NameSpaceObject = Object;
    DereferenceObjectEx(v7);
    DereferenceObjectEx(v10);
  }
  return NameSpaceObject;
}
