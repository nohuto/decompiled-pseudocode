/*
 * XREFs of RtlConvertSidToUnicodeString @ 0x1403F8710
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x14021091C (RtlGetAppContainerNamedObjectPath.c)
 *     CmpGetVirtualizationID @ 0x1403E1B4C (CmpGetVirtualizationID.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1403F7A20 (RtlFormatCurrentUserKeyPath.c)
 *     SepValidateReferencedLowBoxHandles @ 0x14047513C (SepValidateReferencedLowBoxHandles.c)
 *     PspReadUserQuotaLimits @ 0x1404D7B68 (PspReadUserQuotaLimits.c)
 *     PiDqOpenUserObjectRegKey @ 0x140631D88 (PiDqOpenUserObjectRegKey.c)
 *     LocalConvertSidToStringSidW @ 0x1406CB414 (LocalConvertSidToStringSidW.c)
 *     AdtpBuildSidListString @ 0x1406D0F58 (AdtpBuildSidListString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1406DF998 (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14002DD60 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     wcscat_s @ 0x140152FF8 (wcscat_s.c)
 *     wcscpy_s @ 0x140153094 (wcscpy_s.c)
 *     RtlCreateUnicodeString @ 0x1403F75E4 (RtlCreateUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x1403F88DC (RtlIntegerToUnicode.c)
 *     RtlValidSid @ 0x1404217D0 (RtlValidSid.c)
 *     RtlLargeIntegerToUnicode @ 0x140688398 (RtlLargeIntegerToUnicode.c)
 */

NTSTATUS __stdcall RtlConvertSidToUnicodeString(
        PUNICODE_STRING UnicodeString,
        PSID Sid,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // edi
  WCHAR *v7; // rbx
  NTSTATUS result; // eax
  unsigned __int8 v9; // r14
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-E0h] BYREF
  wchar_t Dst; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR String[2]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v16[496]; // [rsp+3Ch] [rbp-C4h] BYREF
  WCHAR v17; // [rsp+22Ch] [rbp+12Ch] BYREF
  WCHAR v18; // [rsp+22Eh] [rbp+12Eh] BYREF

  if ( RtlValidSid(Sid) != 1 || *(_BYTE *)Sid != 1 )
    return -1073741704;
  wcscpy_s(&Dst, 0x100uLL, L"S-1-");
  v6 = 0;
  v7 = String;
  if ( *((_BYTE *)Sid + 2) || *((_BYTE *)Sid + 3) )
  {
    wcscat_s(&Dst, 0x100uLL, L"0x");
    v7 = (WCHAR *)v16;
    v11 = *((unsigned __int8 *)Sid + 5);
    *(_DWORD *)(&SourceString.MaximumLength + 1) = *((unsigned __int8 *)Sid + 3) + (*((unsigned __int8 *)Sid + 2) << 8);
    *(_DWORD *)&SourceString.Length = *((unsigned __int8 *)Sid + 7)
                                    + (*((unsigned __int8 *)Sid + 6) << 8)
                                    + (v11 << 16)
                                    + (*((unsigned __int8 *)Sid + 4) << 24);
    result = ((__int64 (__fastcall *)(UNICODE_STRING *, __int64, __int64, _BYTE *))RtlLargeIntegerToUnicode)(
               &SourceString,
               v12,
               250LL,
               v16);
  }
  else
  {
    result = RtlIntegerToUnicode(
               *((unsigned __int8 *)Sid + 7)
             + (*((unsigned __int8 *)Sid + 6) << 8)
             + (*((unsigned __int8 *)Sid + 5) << 16)
             + (*((unsigned __int8 *)Sid + 4) << 24),
               0xAu,
               0xFCu,
               String);
  }
  if ( result >= 0 )
  {
    v9 = 0;
    if ( *((_BYTE *)Sid + 1) )
    {
      while ( 1 )
      {
        while ( v7 < &v17 && *v7 )
          ++v7;
        *v7++ = 45;
        result = RtlIntegerToUnicode(*((_DWORD *)Sid + v9 + 2), 0xAu, 256 - (v7 - &Dst), v7);
        if ( result < 0 )
          break;
        if ( ++v9 >= *((_BYTE *)Sid + 1) )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      if ( AllocateDestinationString )
        return RtlCreateUnicodeString(UnicodeString, &Dst) == 0 ? 0xC0000017 : 0;
      while ( v7 < &v18 && *v7 )
        ++v7;
      v10 = 2 * (v7 - &Dst);
      if ( v10 >= UnicodeString->MaximumLength )
        return -2147483643;
      SourceString.Length = v10;
      SourceString.Buffer = &Dst;
      SourceString.MaximumLength = v10 + 2;
      RtlCopyUnicodeString(UnicodeString, &SourceString);
      return v6;
    }
  }
  return result;
}
