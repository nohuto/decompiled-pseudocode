/*
 * XREFs of ShouldSetNoOwner @ 0x1C0010E20
 * Callers:
 *     <none>
 * Callees:
 *     IsDesktopApp @ 0x1C0010E70 (IsDesktopApp.c)
 */

__int64 __fastcall ShouldSetNoOwner(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  int v5; // edx

  if ( !(unsigned int)IsDesktopApp() )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v3 = *(_QWORD *)(a2 + 24);
  if ( a2 == *(_QWORD *)(v3 + 96) )
    return 0LL;
  if ( a2 == *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL) )
    return 0LL;
  v5 = *(_DWORD *)(a2 + 304);
  result = 1LL;
  if ( (unsigned int)(v5 - 1) <= 1 || v5 == 16 )
    return 0LL;
  return result;
}
