/*
 * XREFs of Alias @ 0x1C00214E0
 * Callers:
 *     <none>
 * Callees:
 *     GetNameSpaceObject @ 0x1C000D6F8 (GetNameSpaceObject.c)
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 */

__int64 __fastcall Alias(__int64 a1, __int64 a2)
{
  unsigned int NameSpaceObject; // edi
  __int64 v5; // rbx
  __int64 v7; // [rsp+40h] [rbp+8h]

  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(*(_QWORD *)(a2 + 80) + 32LL));
  if ( !NameSpaceObject )
  {
    v5 = a2 + 64;
    NameSpaceObject = CreateNameSpaceObject(
                        *(_QWORD *)(a1 + 320),
                        *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 72LL),
                        *(_QWORD *)(a1 + 80),
                        *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                        (struct _EX_RUNDOWN_REF **)(a2 + 64),
                        0);
    if ( !NameSpaceObject )
    {
      *(_WORD *)(*(_QWORD *)v5 + 58LL) = 128;
      *(_QWORD *)(*(_QWORD *)v5 + 72LL) = v7;
    }
    DereferenceObjectEx(v7);
  }
  return NameSpaceObject;
}
