/*
 * XREFs of _PnpValidatePropertyData @ 0x140511B44
 * Callers:
 *     PiDqQueryValidateQueryData @ 0x14048CD48 (PiDqQueryValidateQueryData.c)
 *     _PnpGetObjectPropertyWorker @ 0x1404E251C (_PnpGetObjectPropertyWorker.c)
 *     _PnpSetObjectPropertyWorker @ 0x140511864 (_PnpSetObjectPropertyWorker.c)
 *     PiSwValidatePropertyArray @ 0x140511A1C (PiSwValidatePropertyArray.c)
 *     ValidFilter @ 0x140511A74 (ValidFilter.c)
 * Callees:
 *     _GetBaseTypeSize @ 0x14010B0C8 (_GetBaseTypeSize.c)
 *     _IsFixedSizeType @ 0x14010B168 (_IsFixedSizeType.c)
 *     RtlUnalignedStringCbLengthW @ 0x14010B188 (RtlUnalignedStringCbLengthW.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1403F5F04 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14041EEA0 (RtlLengthSecurityDescriptor.c)
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
  unsigned int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // ecx
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
  if ( BaseTypeSize )
  {
    if ( v9 == 4096 )
    {
      if ( v6 <= 1 || !IsFixedSizeType(v8) || (unsigned int)v4 < v20 )
        return (unsigned int)-1073741811;
      v17 = (unsigned int)v4 % v20 == 0;
LABEL_52:
      if ( !v17 )
        return (unsigned int)-1073741811;
      goto LABEL_8;
    }
    if ( v9 != 0x2000 )
    {
      if ( (v8 & 0xF000) != 0 || IsFixedSizeType(v8) && (_DWORD)v4 != v11 )
        return (unsigned int)-1073741811;
      goto LABEL_8;
    }
    if ( v6 != 18 )
    {
      v17 = v6 == 20;
      goto LABEL_52;
    }
  }
LABEL_8:
  if ( v6 <= 1 )
  {
    v16 = (_DWORD)v4 == 0;
    goto LABEL_36;
  }
  switch ( v6 )
  {
    case 0x12u:
      goto LABEL_11;
    case 0x10u:
      if ( SecurityDescriptor )
      {
        v13 = (unsigned int)v4 >> 3;
        v14 = 0;
        if ( !v13 )
          return v3;
        while ( *SecurityDescriptor >= 0 )
        {
          ++v14;
          ++SecurityDescriptor;
          if ( v14 >= v13 )
            return v3;
        }
      }
      return (unsigned int)-1073741811;
    case 0x11u:
      if ( SecurityDescriptor )
      {
        v15 = 0;
        if ( !(_DWORD)v4 )
          return v3;
        while ( *(_BYTE *)SecurityDescriptor == 0xFF || *(_BYTE *)SecurityDescriptor == 0 )
        {
          ++v15;
          SecurityDescriptor = (__int64 *)((char *)SecurityDescriptor + 1);
          if ( v15 >= (unsigned int)v4 )
            return v3;
        }
      }
      return (unsigned int)-1073741811;
    case 0x13u:
      if ( !SecurityDescriptor || !RtlValidRelativeSecurityDescriptor(SecurityDescriptor, v4, 0) )
        return (unsigned int)-1073741811;
      v16 = RtlLengthSecurityDescriptor(SecurityDescriptor) == (_DWORD)v4;
      goto LABEL_36;
    case 0x19u:
    case 0x14u:
LABEL_11:
      if ( !SecurityDescriptor || (unsigned int)v4 < 2 )
        return (unsigned int)-1073741811;
      if ( (v9 & v10) == 0 )
      {
        pcbLength = 0LL;
        if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)SecurityDescriptor, v4, &pcbLength) >= 0
          && pcbLength + 2 <= 0xFFFE
          && pcbLength + 2 == v4 )
        {
          return v3;
        }
        return (unsigned int)-1073741811;
      }
      v18 = 0LL;
      while ( *(_WORD *)SecurityDescriptor )
      {
        if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)SecurityDescriptor, v4 - v18, &pcbLength) < 0 )
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
LABEL_36:
      if ( v16 )
        return v3;
      return (unsigned int)-1073741811;
  }
  return v3;
}
