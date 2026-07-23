/*
 * XREFs of RtlpGetWindowsPolicy @ 0x140561DC4
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x140140B0C (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x14015C9F0 (ZwQueryLicenseValue.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, PULONG Type, PULONG ResultDataSize, _QWORD *a4)
{
  void *v4; // rbx
  NTSTATUS v8; // eax
  unsigned int v9; // edi
  ULONG v10; // eax
  ULONG v11; // edi
  PVOID PoolWithTag; // rax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( !Type || !ResultDataSize || !a4 || !SourceString )
  {
    v9 = -1073741811;
    goto LABEL_14;
  }
  RtlInitUnicodeString(&ValueName, SourceString);
  v8 = ZwQueryLicenseValue(&ValueName, Type, 0LL, 0, ResultDataSize);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = *ResultDataSize;
    if ( !*ResultDataSize )
    {
      *a4 = 0LL;
      return v9;
    }
LABEL_8:
    v11 = v10;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x72746C6Du);
    v4 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v11);
    goto LABEL_10;
  }
  if ( v8 != -1073741789 )
    goto LABEL_11;
  v10 = *ResultDataSize;
  if ( *ResultDataSize )
    goto LABEL_8;
LABEL_10:
  if ( !v4 )
    return (unsigned int)-1073741801;
LABEL_11:
  v9 = ZwQueryLicenseValue(&ValueName, Type, v4, *ResultDataSize, ResultDataSize);
  if ( (v9 & 0x80000000) == 0 )
  {
    *a4 = v4;
    return v9;
  }
LABEL_14:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v9;
}
