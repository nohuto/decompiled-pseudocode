/*
 * XREFs of Scope @ 0x1C0005C00
 * Callers:
 *     <none>
 * Callees:
 *     PushScope @ 0x1C0005DD0 (PushScope.c)
 *     GetNameSpaceObject @ 0x1C000DDCC (GetNameSpaceObject.c)
 */

__int64 __fastcall Scope(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = GetNameSpaceObject(*(void **)(a2[10] + 32LL));
  if ( !(_DWORD)result )
    return PushScope((_DWORD)a1, a1[15], a2[5], 0, a2[8], a1[11], a1[40], a2[11]);
  return result;
}
