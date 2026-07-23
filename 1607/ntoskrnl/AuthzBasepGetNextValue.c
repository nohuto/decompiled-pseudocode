/*
 * XREFs of AuthzBasepGetNextValue @ 0x14023533C
 * Callers:
 *     AuthzBasepDeviceMemberOf @ 0x140234CC4 (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepEvaluateSetRelationship @ 0x140234F30 (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepMemberOf @ 0x1402354B0 (AuthzBasepMemberOf.c)
 *     AuthzBasepValueInSet @ 0x1402356F4 (AuthzBasepValueInSet.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14000DE00 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepGetConstantOperand @ 0x140235264 (AuthzBasepGetConstantOperand.c)
 */

__int64 __fastcall AuthzBasepGetNextValue(__int64 a1, __int64 a2)
{
  unsigned int ConstantOperand; // ecx
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // eax
  __int64 v8; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  ConstantOperand = 0;
  v10 = 0;
  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    if ( !*(_BYTE *)(a1 + 4) )
    {
      if ( !*(_DWORD *)(a1 + 8) )
      {
        *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 24);
        *(_OWORD *)a2 = *(_OWORD *)a1;
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
        *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
        return ConstantOperand;
      }
      return (unsigned int)-2147483622;
    }
    v5 = *(_DWORD *)(a1 + 8);
    v6 = *(_DWORD *)(a1 + 24);
    if ( v5 >= v6 )
      return (unsigned int)-2147483622;
    ConstantOperand = AuthzBasepGetConstantOperand((char *)(*(_QWORD *)(a1 + 32) + v5), v6 - v5, a2, &v10);
    if ( *(_BYTE *)(a2 + 4) )
      return (unsigned int)-1073741406;
    else
      *(_DWORD *)(a1 + 8) += v10;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 8);
    if ( v7 || !*(_DWORD *)(a1 + 4) )
    {
      if ( v7 >= *(_DWORD *)(a1 + 4) )
        return v7 != 0 ? -2147483622 : -1073741275;
      ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues(*(__int64 **)(a1 + 16));
      *(_WORD *)a2 = *(_WORD *)a1;
      *(_BYTE *)(a2 + 4) = *(_BYTE *)(a1 + 4);
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 24);
      v8 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_QWORD *)(a2 + 16) = v8;
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
    }
    else
    {
      *(_OWORD *)a2 = *(_OWORD *)a1;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
    }
    ++*(_DWORD *)(a1 + 8);
  }
  return ConstantOperand;
}
