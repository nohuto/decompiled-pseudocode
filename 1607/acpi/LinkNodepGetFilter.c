/*
 * XREFs of LinkNodepGetFilter @ 0x1C0027534
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C0021C44 (LinkNodeCrackPrt.c)
 *     LinkNodepGetFilter @ 0x1C0027534 (LinkNodepGetFilter.c)
 * Callees:
 *     LinkNodepGetFilter @ 0x1C0027534 (LinkNodepGetFilter.c)
 */

__int64 __fastcall LinkNodepGetFilter(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v4; // r8
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(v2 + 8) & 0x60) != 0 && *(_QWORD *)(v2 + 736) == a2 )
    return a1;
  v4 = (_QWORD *)(v2 + 752);
  if ( (_QWORD *)*v4 == v4 )
    return 0LL;
  v6 = *v4 - 768LL;
  v7 = v6;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v7 + 720);
    if ( v8 )
    {
      result = LinkNodepGetFilter(v8, a2);
      if ( result )
        break;
    }
    v7 = *(_QWORD *)(v7 + 768) - 768LL;
    if ( v7 == v6 )
      return 0LL;
  }
  return result;
}
