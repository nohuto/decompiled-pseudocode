/*
 * XREFs of AuthzBasepAddSecurityAttributeValueToLists @ 0x14002C000
 * Callers:
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x140005990 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400156C0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x14002BD14 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140269BEC (AuthzBasepDeleteSecurityAttributeValues.c)
 * Callees:
 *     <none>
 */

void __fastcall AuthzBasepAddSecurityAttributeValueToLists(__int64 a1, __int64 a2, char a3, char a4)
{
  _QWORD *v4; // r9
  __int64 v5; // rax
  _QWORD *v6; // r8

  if ( a4 && (*(_DWORD *)(a2 + 32) & 2) == 0 )
  {
    v4 = *(_QWORD **)(a1 + 104);
    v5 = a2 + 16;
    *(_QWORD *)(a2 + 16) = a1 + 96;
    *(_QWORD *)(a2 + 24) = v4;
    if ( *v4 != a1 + 96 )
      __fastfail(3u);
    *v4 = v5;
    *(_QWORD *)(a1 + 104) = v5;
    *(_DWORD *)(a2 + 32) |= 2u;
    ++*(_DWORD *)(a1 + 88);
  }
  if ( a3 && (*(_DWORD *)(a2 + 32) & 1) == 0 )
  {
    v6 = *(_QWORD **)(a1 + 80);
    *(_QWORD *)a2 = a1 + 72;
    *(_QWORD *)(a2 + 8) = v6;
    if ( *v6 != a1 + 72 )
      __fastfail(3u);
    *v6 = a2;
    *(_QWORD *)(a1 + 80) = a2;
    *(_DWORD *)(a2 + 32) |= 1u;
    ++*(_DWORD *)(a1 + 60);
  }
}
