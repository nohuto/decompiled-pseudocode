/*
 * XREFs of RtlIdnToUnicode @ 0x1406893D8
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchLengthW @ 0x1400C2600 (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     punycode_decode @ 0x140689C58 (punycode_decode.c)
 *     RtlIsNormalizedString @ 0x14068BF8C (RtlIsNormalizedString.c)
 */

NTSTATUS __stdcall RtlIdnToUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  PWSTR v5; // rsi
  LONG v6; // r10d
  wchar_t *v7; // r11
  char v8; // r12
  char v9; // di
  NTSTATUS result; // eax
  LONG v11; // ebx
  __int64 v12; // r15
  __int64 v13; // rdx
  LONG v14; // r13d
  _BYTE *PoolWithTag; // rax
  _BYTE *v16; // rdi
  __int64 i; // rcx
  __int16 v18; // dx
  __int64 j; // rax
  BOOLEAN Normalized[8]; // [rsp+40h] [rbp-C0h] BYREF
  size_t pcchLength; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  PWSTR v23; // [rsp+58h] [rbp-A8h]
  WCHAR SourceStringa[512]; // [rsp+60h] [rbp-A0h] BYREF

  v23 = DestinationString;
  v5 = DestinationString;
  v6 = SourceStringLength;
  v7 = (wchar_t *)SourceString;
  v8 = Flags;
  v9 = 0;
  if ( !SourceString
    || !DestinationStringLength
    || *DestinationStringLength < 0
    || SourceStringLength < -1
    || *DestinationStringLength > 0 && !DestinationString
    || (Flags & 0xFFFFFFF0) != 0 )
  {
    return -1073741811;
  }
  if ( SourceStringLength == -1 )
  {
    if ( RtlStringCchLengthW(SourceString, 0x203uLL, &pcchLength) < 0 )
      return -1073740010;
    v6 = pcchLength + 1;
  }
  if ( !v7[v6 - 1] )
    v9 = 1;
  LODWORD(pcchLength) = 511;
  result = punycode_decode(v7, (v8 & 4) != 0, (v8 & 2) != 0, (__int64)Normalized, (__int64)&v22);
  if ( result >= 0 )
  {
    if ( v9 )
    {
      if ( (unsigned __int64)(int)pcchLength >= 0x1FF )
        return -1073740010;
      v11 = pcchLength + 1;
      if ( (unsigned __int64)(2LL * (int)pcchLength) >= 0x3FE )
        _report_rangecheckfailure();
      SourceStringa[(int)pcchLength] = 0;
    }
    else
    {
      v11 = pcchLength;
    }
    if ( (v8 & 8) == 0 && !Normalized[0] )
    {
      v12 = v22;
      if ( (v8 & 4) != 0
        && (RtlIsNormalizedString(1u, SourceStringa, (v22 - (__int64)SourceStringa) >> 1, Normalized) < 0
         || !Normalized[0]) )
      {
        return -1073740010;
      }
      v13 = (v12 - (__int64)SourceStringa) >> 1;
      if ( v13 < v11 - (v9 != 0) )
      {
        v14 = v11 - ((v9 != 0) + 1) - v13;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x456E6449u);
        v16 = PoolWithTag;
        if ( !PoolWithTag )
          return -1073741801;
        memset(PoolWithTag, 0, v14);
        for ( i = 0LL; i < v14; ++i )
        {
          v18 = *(_WORD *)(v12 + 2 * i + 2);
          if ( (unsigned __int16)(v18 - 65) <= 0x19u )
          {
            *(_WORD *)(v12 + 2 * i + 2) = v18 + 32;
            v16[i] = 1;
          }
        }
        if ( RtlIsNormalizedString((((v8 & 1) == 0) << 8) | 0xD, (PCWSTR)(v12 + 2), v14, Normalized) < 0
          || !Normalized[0] )
        {
          ExFreePoolWithTag(v16, 0);
          return -1073740010;
        }
        for ( j = 0LL; j < v14; ++j )
        {
          if ( v16[j] == 1 )
            *(_WORD *)(v12 + 2 * j + 2) -= 32;
        }
        ExFreePoolWithTag(v16, 0);
        v5 = v23;
      }
    }
    if ( v5 && *DestinationStringLength )
    {
      if ( v11 > *DestinationStringLength )
        return -1073741789;
      memmove(v5, SourceStringa, 2LL * v11);
    }
    *DestinationStringLength = v11;
    return 0;
  }
  return result;
}
