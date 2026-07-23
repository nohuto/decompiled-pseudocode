/*
 * XREFs of AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1400014CC
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x14007C4D8 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x14010C9B0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140233FEC (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140234198 (AuthzBasepRollbackSecurityAttributeChanges.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall AuthzBasepRemoveSecurityAttributeValueFromLists(_DWORD *a1, __int64 *a2, char a3)
{
  __int64 **result; // rax
  __int64 **v4; // r10
  __int64 ***v5; // r9
  __int64 *v6; // r8

  result = (__int64 **)*((unsigned int *)a2 + 8);
  if ( ((unsigned __int8)result & 2) != 0 )
  {
    result = (__int64 **)(a2 + 2);
    v4 = (__int64 **)a2[2];
    v5 = (__int64 ***)a2[3];
    if ( v4[1] != a2 + 2 || *v5 != result )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (__int64 *)v5;
    *((_DWORD *)a2 + 8) &= ~2u;
    if ( a1 )
      --a1[22];
  }
  if ( a3 )
  {
    result = (__int64 **)*((unsigned int *)a2 + 8);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      v6 = (__int64 *)*a2;
      result = (__int64 **)a2[1];
      if ( *(__int64 **)(*a2 + 8) != a2 || *result != a2 )
        __fastfail(3u);
      *result = v6;
      v6[1] = (__int64)result;
      *((_DWORD *)a2 + 8) &= ~1u;
      if ( a1 )
      {
        --a1[15];
        result = (__int64 **)*((unsigned int *)a2 + 8);
        if ( ((unsigned __int8)result & 4) != 0 )
          --a1[16];
      }
    }
  }
  return result;
}
