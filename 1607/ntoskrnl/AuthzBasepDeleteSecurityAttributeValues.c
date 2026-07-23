/*
 * XREFs of AuthzBasepDeleteSecurityAttributeValues @ 0x140233FEC
 * Callers:
 *     AuthzBasepDeleteSecurityAttribute @ 0x14007C854 (AuthzBasepDeleteSecurityAttribute.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1400014CC (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x14007C684 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x14007C7CC (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttributeValues(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int16 v3; // ax
  unsigned __int64 SecurityAttributeValue; // rsi
  int v5; // edi
  __int64 i; // r14
  int v10; // r8d
  __int16 *v11; // rdx
  int v12; // eax
  unsigned int v13; // eax

  v3 = *(_WORD *)(a2 + 16);
  SecurityAttributeValue = 0LL;
  v5 = 0;
  *a3 = 0;
  if ( *(_WORD *)(a1 + 48) != v3 )
    return (unsigned int)-1073741811;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 24); i = (unsigned int)(i + 1) )
  {
    v10 = *(unsigned __int16 *)(a1 + 48);
    if ( *(_WORD *)(a1 + 48) )
    {
      if ( *(unsigned __int16 *)(a1 + 48) <= 2u )
        goto LABEL_13;
      switch ( v10 )
      {
        case 3:
LABEL_11:
          v11 = (__int16 *)(*(_QWORD *)(a2 + 32) + 16LL * (unsigned int)i);
LABEL_14:
          SecurityAttributeValue = AuthzBasepFindSecurityAttributeValue(a1, v11, v10);
          goto LABEL_16;
        case 4:
          v11 = (__int16 *)(*(_QWORD *)(a2 + 32) + 24 * i);
          goto LABEL_14;
        case 5:
          goto LABEL_11;
        case 6:
LABEL_13:
          v11 = *(__int16 **)(*(_QWORD *)(a2 + 32) + 8 * i);
          goto LABEL_14;
        case 16:
          goto LABEL_11;
      }
    }
    v5 = -1073741811;
LABEL_16:
    if ( v5 < 0 )
      return (unsigned int)v5;
    if ( !SecurityAttributeValue )
      return (unsigned int)-1073741275;
    v12 = *(_DWORD *)(SecurityAttributeValue + 32);
    if ( (v12 & 4) != 0 )
      return (unsigned int)-1073741275;
    if ( (v12 & 1) != 0 )
    {
      *(_DWORD *)(SecurityAttributeValue + 32) = v12 | 4;
      AuthzBasepAddSecurityAttributeValueToLists(a1, SecurityAttributeValue, 0, 1);
      ++*(_DWORD *)(a1 + 64);
    }
    else
    {
      AuthzBasepRemoveSecurityAttributeValueFromLists((_DWORD *)a1, (__int64 *)SecurityAttributeValue, 0);
      ExFreePoolWithTag((PVOID)SecurityAttributeValue, 0);
    }
  }
  v13 = *(_DWORD *)(a1 + 60);
  if ( v13 == *(_DWORD *)(a1 + 64) && *(_DWORD *)(a1 + 88) <= v13 )
    *a3 = 1;
  return (unsigned int)v5;
}
