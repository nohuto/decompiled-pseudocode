/*
 * XREFs of ShouldSetNoOwner @ 0x1C0078070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShouldSetNoOwner(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  int v4; // r8d

  if ( (*(_DWORD *)(a1 + 768) & 0x30) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v3 = *(_QWORD *)(a2 + 24);
  if ( a2 == *(_QWORD *)(v3 + 96) )
    return 0LL;
  if ( a2 == *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL) )
    return 0LL;
  v4 = *(_DWORD *)(a2 + 304);
  result = 1LL;
  if ( (unsigned int)(v4 - 1) <= 1 || v4 == 16 )
    return 0LL;
  return result;
}
