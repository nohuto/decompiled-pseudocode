/*
 * XREFs of _PnpValidatePropertyData @ 0x1404D90AC
 * Callers:
 *     _PnpGetObjectPropertyWorker @ 0x14043A628 (_PnpGetObjectPropertyWorker.c)
 *     _PnpSetObjectPropertyWorker @ 0x1404D8C64 (_PnpSetObjectPropertyWorker.c)
 *     PiDqQueryValidateQueryData @ 0x1404D8E28 (PiDqQueryValidateQueryData.c)
 *     PiSwValidatePropertyArray @ 0x1404D8F80 (PiSwValidatePropertyArray.c)
 *     ValidFilter @ 0x1404D8FD8 (ValidFilter.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140025FE8 (RtlStringCbLengthW.c)
 *     _GetBaseTypeSize @ 0x1400CF7CC (_GetBaseTypeSize.c)
 *     _IsFixedSizeType @ 0x1400CF86C (_IsFixedSizeType.c)
 *     RtlLengthSecurityDescriptor @ 0x140486820 (RtlLengthSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1404FE3F0 (RtlValidRelativeSecurityDescriptor.c)
 */

__int64 __fastcall PnpValidatePropertyData(__int64 *SecurityDescriptor, ULONG SecurityDescriptorLength, int a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  unsigned int v6; // ebp
  int BaseTypeSize; // eax
  __int16 v8; // r8
  int v9; // r10d
  int v10; // r11d
  int v11; // r9d
  unsigned int v13; // ecx
  unsigned int v14; // esi
  unsigned int v15; // eax
  bool v16; // zf
  bool v17; // zf
  size_t v18; // rbp
  size_t v19; // rax
  unsigned int v20; // r9d
  size_t pcbLength; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = SecurityDescriptorLength;
  if ( (a3 & 0xFFFF0000) != 0 )
    return (unsigned int)-1073741811;
  v6 = a3 & 0xFFF;
  if ( v6 > 0x19 )
    return (unsigned int)-1073741811;
  BaseTypeSize = GetBaseTypeSize(a3 & 0xFFF);
  v9 = v8 & 0xF000;
  v10 = 0x2000;
  if ( !BaseTypeSize )
    goto LABEL_9;
  if ( v9 == 4096 )
  {
    if ( v6 <= 1 || !IsFixedSizeType(v8) || (unsigned int)v4 < v20 )
      return (unsigned int)-1073741811;
    v17 = (unsigned int)v4 % v20 == 0;
  }
  else
  {
    if ( v9 != 0x2000 )
    {
      if ( (v8 & 0xF000) != 0 || IsFixedSizeType(v8) && (_DWORD)v4 != v11 )
        return (unsigned int)-1073741811;
      goto LABEL_9;
    }
    if ( v6 == 18 )
      goto LABEL_9;
    v17 = v6 == 20;
  }
  if ( !v17 )
    return (unsigned int)-1073741811;
LABEL_9:
  if ( v6 <= 1 )
  {
    v16 = (_DWORD)v4 == 0;
    goto LABEL_35;
  }
  if ( v6 != 18 )
  {
    if ( v6 == 17 )
    {
      if ( SecurityDescriptor )
      {
        v13 = 0;
        if ( !(_DWORD)v4 )
          return v3;
        while ( *(_BYTE *)SecurityDescriptor == 0xFF || *(_BYTE *)SecurityDescriptor == 0 )
        {
          ++v13;
          SecurityDescriptor = (__int64 *)((char *)SecurityDescriptor + 1);
          if ( v13 >= (unsigned int)v4 )
            return v3;
        }
      }
    }
    else
    {
      if ( v6 != 16 )
      {
        if ( v6 != 25 )
        {
          if ( v6 == 19 )
          {
            if ( !SecurityDescriptor || !RtlValidRelativeSecurityDescriptor(SecurityDescriptor, v4, 0) )
              return (unsigned int)-1073741811;
            v16 = RtlLengthSecurityDescriptor(SecurityDescriptor) == (_DWORD)v4;
            goto LABEL_35;
          }
          if ( v6 != 20 )
            return v3;
        }
        goto LABEL_17;
      }
      if ( SecurityDescriptor )
      {
        v14 = (unsigned int)v4 >> 3;
        v15 = 0;
        if ( !v14 )
          return v3;
        while ( *SecurityDescriptor >= 0 )
        {
          ++v15;
          ++SecurityDescriptor;
          if ( v15 >= v14 )
            return v3;
        }
      }
    }
    return (unsigned int)-1073741811;
  }
LABEL_17:
  if ( !SecurityDescriptor || (unsigned int)v4 < 2 )
    return (unsigned int)-1073741811;
  if ( (v9 & v10) != 0 )
  {
    v18 = 0LL;
    while ( *(_WORD *)SecurityDescriptor )
    {
      if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)SecurityDescriptor, v4 - v18, &pcbLength) < 0 )
        return (unsigned int)-1073741811;
      if ( (pcbLength & 1) != 0 )
        return (unsigned int)-1073741811;
      v19 = pcbLength + 2;
      pcbLength = v19;
      if ( v19 > 0xFFFE )
        return (unsigned int)-1073741811;
      v18 += v19;
      if ( v18 > v4 )
        return (unsigned int)-1073741811;
      SecurityDescriptor = (__int64 *)((char *)SecurityDescriptor + 2 * (v19 >> 1));
    }
    v16 = v18 + 2 == v4;
LABEL_35:
    if ( v16 )
      return v3;
    return (unsigned int)-1073741811;
  }
  pcbLength = 0LL;
  if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)SecurityDescriptor, v4, &pcbLength) < 0
    || pcbLength + 2 > 0xFFFE
    || pcbLength + 2 != v4 )
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
