/*
 * XREFs of AuthzBasepAddSecurityAttributeValues @ 0x14007C4D8
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x14007C440 (AuthzBasepAddSecurityAttribute.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1400014CC (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x14000EDE8 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x14007C684 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x14007C7CC (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttributeValues(__int64 a1, __int64 a2)
{
  _WORD *SecurityAttributeValue; // rdi
  int v5; // ebp
  __int64 i; // rsi
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  void *v13; // rcx
  size_t v14; // r8
  const void *v15; // rdx
  int v16; // eax
  unsigned int v17; // edx

  SecurityAttributeValue = 0LL;
  if ( *(_WORD *)(a1 + 48) == *(_WORD *)(a2 + 16) )
  {
    v5 = 0;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 24); i = (unsigned int)(i + 1) )
    {
      v7 = *(unsigned __int16 *)(a1 + 48);
      if ( *(_WORD *)(a1 + 48) )
      {
        if ( *(unsigned __int16 *)(a1 + 48) <= 2u )
          goto LABEL_5;
        switch ( v7 )
        {
          case 3:
LABEL_21:
            v8 = *(_QWORD *)(a2 + 32) + 16LL * (unsigned int)i;
            goto LABEL_6;
          case 6:
LABEL_5:
            v8 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * i);
LABEL_6:
            SecurityAttributeValue = (_WORD *)AuthzBasepFindSecurityAttributeValue(a1, v8);
            goto LABEL_7;
          case 4:
            v8 = *(_QWORD *)(a2 + 32) + 24 * i;
            goto LABEL_6;
          case 5:
          case 16:
            goto LABEL_21;
        }
      }
      v5 = -1073741811;
LABEL_7:
      if ( v5 < 0 )
        return (unsigned int)v5;
      if ( !SecurityAttributeValue )
      {
        v9 = 0LL;
        switch ( *(_WORD *)(a2 + 16) )
        {
          case 3:
            v9 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 16LL * (unsigned int)i);
            break;
          case 4:
            v9 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 24 * i + 8);
            break;
          case 5:
          case 0x10:
            v9 = *(unsigned int *)(*(_QWORD *)(a2 + 32) + 16LL * (unsigned int)i + 8);
            break;
        }
        SecurityAttributeValue = AuthzBasepAllocateSecurityAttributeValue(v9, v9);
        if ( !SecurityAttributeValue )
          return (unsigned int)-1073741670;
        v11 = *(unsigned __int16 *)(a2 + 16);
        if ( *(_WORD *)(a2 + 16) )
        {
          if ( *(unsigned __int16 *)(a2 + 16) <= 2u )
            goto LABEL_16;
          switch ( v11 )
          {
            case 3:
              v13 = SecurityAttributeValue + 32;
              v14 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 16LL * (unsigned int)i);
              SecurityAttributeValue[20] = v14;
              SecurityAttributeValue[21] = v14;
              *((_QWORD *)SecurityAttributeValue + 6) = SecurityAttributeValue + 32;
              v15 = *(const void **)(*(_QWORD *)(a2 + 32) + 16LL * (unsigned int)i + 8);
              goto LABEL_24;
            case 6:
LABEL_16:
              *((_QWORD *)SecurityAttributeValue + 5) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * i);
              break;
            case 4:
              *((_QWORD *)SecurityAttributeValue + 5) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 24 * i);
              v13 = SecurityAttributeValue + 32;
              v17 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 24 * i + 8);
              SecurityAttributeValue[24] = v17;
              v14 = v17;
              *((_QWORD *)SecurityAttributeValue + 7) = SecurityAttributeValue + 32;
              v15 = *(const void **)(*(_QWORD *)(a2 + 32) + 24 * i + 16);
LABEL_24:
              memmove(v13, v15, v14);
              break;
            case 5:
            case 16:
              v13 = SecurityAttributeValue + 32;
              v14 = *(unsigned int *)(*(_QWORD *)(a2 + 32) + 16LL * (unsigned int)i + 8);
              *((_DWORD *)SecurityAttributeValue + 12) = v14;
              *((_QWORD *)SecurityAttributeValue + 5) = SecurityAttributeValue + 32;
              v15 = *(const void **)(*(_QWORD *)(a2 + 32) + 16LL * (unsigned int)i);
              goto LABEL_24;
          }
        }
        LOBYTE(v10) = 1;
        AuthzBasepAddSecurityAttributeValueToLists(a1, SecurityAttributeValue, 0LL, v10);
        continue;
      }
      v16 = *((_DWORD *)SecurityAttributeValue + 8);
      if ( (v16 & 4) == 0 )
        return (unsigned int)-1073741771;
      *((_DWORD *)SecurityAttributeValue + 8) = v16 & 0xFFFFFFFB;
      AuthzBasepRemoveSecurityAttributeValueFromLists((_DWORD *)a1, (__int64 *)SecurityAttributeValue, 0);
      --*(_DWORD *)(a1 + 64);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
