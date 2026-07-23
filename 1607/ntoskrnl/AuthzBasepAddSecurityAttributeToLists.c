/*
 * XREFs of AuthzBasepAddSecurityAttributeToLists @ 0x14007C810
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x14007C440 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x14007C854 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x140233F9C (AuthzBasepDeleteAllSecurityAttributes.c)
 * Callees:
 *     <none>
 */

void __fastcall AuthzBasepAddSecurityAttributeToLists(__int64 a1, __int64 a2, char a3, char a4)
{
  _QWORD *v5; // r9
  _QWORD *v6; // r8
  _QWORD *v7; // r8

  if ( a4 && (*(_DWORD *)(a2 + 56) & 2) == 0 )
  {
    v5 = *(_QWORD **)(a1 + 40);
    v6 = (_QWORD *)(a2 + 16);
    if ( *v5 != a1 + 32 )
      __fastfail(3u);
    *v6 = a1 + 32;
    *(_QWORD *)(a2 + 24) = v5;
    *v5 = v6;
    *(_QWORD *)(a1 + 40) = v6;
    *(_DWORD *)(a2 + 56) |= 2u;
    ++*(_DWORD *)(a1 + 24);
  }
  if ( a3 && (*(_DWORD *)(a2 + 56) & 1) == 0 )
  {
    v7 = *(_QWORD **)(a1 + 16);
    if ( *v7 != a1 + 8 )
      __fastfail(3u);
    *(_QWORD *)a2 = a1 + 8;
    *(_QWORD *)(a2 + 8) = v7;
    *v7 = a2;
    *(_QWORD *)(a1 + 16) = a2;
    *(_DWORD *)(a2 + 56) |= 1u;
    ++*(_DWORD *)a1;
  }
}
