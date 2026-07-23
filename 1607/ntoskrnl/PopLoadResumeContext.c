/*
 * XREFs of PopLoadResumeContext @ 0x140534390
 * Callers:
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x140132AA4 (PopOpenKey.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopLoadResumeContext(__int64 a1)
{
  _DWORD *PoolWithTag; // rdi
  int v3; // ebx
  unsigned int v4; // esi
  char *v5; // rax
  char *v6; // r14
  __int64 v7; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  PoolWithTag = 0LL;
  v3 = PopOpenKey(&KeyHandle, L"Control\\Winresume", 0x2001Fu);
  if ( v3 < 0 )
    return (unsigned int)v3;
  RtlInitUnicodeString(&DestinationString, L"ResumeContext");
  v3 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  if ( v3 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x78744352u);
    if ( !PoolWithTag )
    {
LABEL_15:
      v3 = -1073741801;
      goto LABEL_10;
    }
    v3 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           PoolWithTag,
           ResultLength,
           &ResultLength);
  }
  if ( v3 >= 0 )
  {
    v4 = (PoolWithTag[2] + 4095) & 0xFFFFF000;
    v5 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x78744352u);
    v6 = v5;
    if ( v5 )
    {
      memmove(v5, PoolWithTag + 3, (unsigned int)PoolWithTag[2]);
      v7 = (unsigned int)PoolWithTag[2];
      if ( v4 > (unsigned int)v7 )
        memset(&v6[v7], 0, v4 - (unsigned int)v7);
      *(_DWORD *)(a1 + 256) = v4 >> 12;
      *(_QWORD *)(a1 + 248) = v6;
      goto LABEL_10;
    }
    goto LABEL_15;
  }
LABEL_10:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x78744352u);
  return (unsigned int)v3;
}
