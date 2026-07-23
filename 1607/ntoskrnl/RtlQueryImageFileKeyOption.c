/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x140472194
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x14020E9FC (PspReadDfssConfigurationValues.c)
 *     SepIsImageInMinTcbList @ 0x14045CC9C (SepIsImageInMinTcbList.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspReadIFEOMitigationOptions @ 0x140471080 (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOPerfOptions @ 0x1404720CC (PspReadIFEOPerfOptions.c)
 *     PspReadIFEONodeOptions @ 0x140472344 (PspReadIFEONodeOptions.c)
 *     PspDetectComplusILImage @ 0x1404C4B2C (PspDetectComplusILImage.c)
 *     RtlQueryImageFileExecutionOptions @ 0x14055E7A0 (RtlQueryImageFileExecutionOptions.c)
 *     PspIsDfssEnabled @ 0x14055FC68 (PspIsDfssEnabled.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToInteger @ 0x1404A31F0 (RtlUnicodeStringToInteger.c)
 */

NTSTATUS __fastcall RtlQueryImageFileKeyOption(
        HANDLE KeyHandle,
        const WCHAR *a2,
        int a3,
        ULONG *a4,
        unsigned int a5,
        unsigned int *a6)
{
  NTSTATUS result; // eax
  _BYTE *v10; // rsi
  NTSTATUS v11; // ebx
  ULONG Length; // ebx
  SIZE_T i; // rdx
  PVOID PoolWithQuotaTag; // rax
  void *v15; // r12
  NTSTATUS v16; // eax
  int v17; // ecx
  unsigned int v18; // edi
  size_t v19; // r8
  unsigned int v20; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v23; // [rsp+48h] [rbp-28h]
  _BYTE KeyValueInformation[24]; // [rsp+50h] [rbp-20h] BYREF

  v23 = a6;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result < 0 )
    return result;
  if ( a5 < 8 )
  {
    v10 = KeyValueInformation;
    result = ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength);
    v11 = result;
    if ( result < 0 )
    {
      if ( result != -2147483643 )
        return result;
      Length = ResultLength;
      goto LABEL_7;
    }
    v15 = 0LL;
LABEL_15:
    v17 = *((_DWORD *)v10 + 1);
    if ( ((v17 - 3) & 0xFFFFFFFB) != 0 )
    {
      v18 = 4;
      if ( v17 == 4 )
      {
        if ( a3 == 4 )
        {
          if ( a5 == 4 && *((_DWORD *)v10 + 2) == 4 )
          {
            ResultLength = 4;
            if ( a4 )
            {
              *a4 = *((_DWORD *)v10 + 3);
LABEL_22:
              if ( v23 && ((int)(v11 + 0x80000000) < 0 || v11 == -2147483643) )
                *v23 = v18;
              goto LABEL_11;
            }
            goto LABEL_31;
          }
          goto LABEL_30;
        }
LABEL_50:
        v11 = -1073741788;
        goto LABEL_11;
      }
      if ( v17 == 11 )
      {
        if ( a3 == 11 )
        {
          if ( a5 == 8 && *((_DWORD *)v10 + 2) == 8 )
          {
            ResultLength = 8;
            v18 = 8;
            if ( a4 )
            {
              *(_QWORD *)a4 = *(_QWORD *)(v10 + 12);
              goto LABEL_22;
            }
LABEL_31:
            v11 = -2147483643;
            goto LABEL_22;
          }
          goto LABEL_30;
        }
        goto LABEL_50;
      }
      if ( v17 != 1 )
      {
        v11 = -1073741788;
        goto LABEL_36;
      }
      if ( a3 == 4 )
      {
        if ( a5 != 4 )
        {
LABEL_30:
          v11 = -1073741820;
LABEL_11:
          if ( v15 )
            ExFreePoolWithTag(v15, 0);
          return v11;
        }
        if ( ((unsigned __int8)a4 & 3) != 0 )
        {
          v11 = -2147483646;
          goto LABEL_11;
        }
        ResultLength = 4;
        if ( !a4 )
          goto LABEL_31;
        DestinationString.Buffer = (wchar_t *)(v10 + 12);
        DestinationString.Length = *((_WORD *)v10 + 4);
        DestinationString.MaximumLength = *((_WORD *)v10 + 4);
        v11 = RtlUnicodeStringToInteger(&DestinationString, 0, a4);
LABEL_36:
        v18 = ResultLength;
        goto LABEL_22;
      }
      v18 = *((_DWORD *)v10 + 2);
      ResultLength = v18;
      if ( v18 > a5 )
        goto LABEL_31;
      v19 = v18;
    }
    else
    {
      if ( a3 != v17 )
        goto LABEL_50;
      v18 = *((_DWORD *)v10 + 2);
      ResultLength = v18;
      if ( !a4 )
        goto LABEL_31;
      v20 = *((_DWORD *)v10 + 2);
      if ( v20 > a5 )
        goto LABEL_31;
      v19 = v20;
    }
    memmove(a4, v10 + 12, v19);
    goto LABEL_22;
  }
  Length = a5 + 12;
LABEL_7:
  for ( i = Length; ; i = ResultLength )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, i, 0x6B497452u);
    v15 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      break;
    v10 = PoolWithQuotaTag;
    v16 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            PoolWithQuotaTag,
            Length,
            &ResultLength);
    v11 = v16;
    if ( v16 >= 0 )
      goto LABEL_15;
    if ( v16 != -2147483643 )
      goto LABEL_11;
    ExFreePoolWithTag(v15, 0);
    Length = ResultLength;
  }
  return -1073741801;
}
