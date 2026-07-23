/*
 * XREFs of PiFindDevInstMatch @ 0x14053951C
 * Callers:
 *     PiProcessDriverInstance @ 0x140538D04 (PiProcessDriverInstance.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x140539704 (PnpRegSzToString.c)
 */

__int64 __fastcall PiFindDevInstMatch(void *a1, const UNICODE_STRING *a2, unsigned int *a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // rax
  unsigned int v6; // ebx
  ULONG v9; // r13d
  unsigned int v10; // r15d
  NTSTATUS RegistryValue; // eax
  PVOID v13; // rcx
  unsigned __int16 *PoolWithTag; // rdi
  PVOID v15; // r14
  int v16; // esi
  __int64 v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  wchar_t *v20; // rax
  UNICODE_STRING v21; // xmm0
  unsigned __int16 *v22; // rcx
  __int64 v23; // [rsp+30h] [rbp-48h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-20h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+58h] BYREF
  PVOID P; // [rsp+D8h] [rbp+60h] BYREF

  v5 = a5;
  v6 = 0;
  *(_WORD *)a4 = 0;
  *(_QWORD *)(a4 + 8) = 0LL;
  v9 = 256;
  *v5 = -1;
  *a3 = 0;
  v10 = 0;
  P = 0LL;
  RegistryValue = IopGetRegistryValue(a1, L"Count", 0, &P);
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741772 )
      return (unsigned int)RegistryValue;
    return v6;
  }
  v13 = P;
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
  {
    v10 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    *a3 = v10;
  }
  ExFreePoolWithTag(v13, 0);
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x20207050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v15 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20207050u);
  if ( !v15 )
  {
    v22 = PoolWithTag;
    goto LABEL_23;
  }
  v16 = 0;
  if ( !v10 )
  {
LABEL_18:
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( !*(_WORD *)a4 )
      ExFreePoolWithTag(v15, 0);
    return 0LL;
  }
  while ( 1 )
  {
    LODWORD(v23) = v16;
    ppszDestEnd = (NTSTRSAFE_PWSTR)v15;
    RtlStringCchPrintfExW((NTSTRSAFE_PWSTR)v15, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", v23);
    ValueName.MaximumLength = 20;
    v17 = ((char *)ppszDestEnd - (_BYTE *)v15) >> 1;
    ValueName.Length = (_DWORD)v17 == -1 ? 20 : 2 * v17;
    ValueName.Buffer = (wchar_t *)v15;
    v18 = ZwQueryValueKey(a1, &ValueName, KeyValueFullInformation, PoolWithTag, v9, &ResultLength);
    if ( v18 < 0 )
      break;
    if ( *((_DWORD *)PoolWithTag + 1) == 1 )
    {
      v19 = *((unsigned int *)PoolWithTag + 3);
      if ( (unsigned int)v19 > 2 )
      {
        PnpRegSzToString((char *)PoolWithTag + *((unsigned int *)PoolWithTag + 2), v19, &P);
        String1.MaximumLength = PoolWithTag[6];
        v20 = (unsigned __int16 *)((char *)PoolWithTag + *((unsigned int *)PoolWithTag + 2));
        String1.Length = (unsigned __int16)P;
        String1.Buffer = v20;
        if ( RtlEqualUnicodeString(&String1, a2, 1u) )
        {
          v21 = ValueName;
          *a5 = v16;
          *(UNICODE_STRING *)a4 = v21;
          goto LABEL_18;
        }
      }
    }
LABEL_17:
    if ( ++v16 >= v10 )
      goto LABEL_18;
  }
  if ( v18 != -2147483643 && v18 != -1073741789 )
    goto LABEL_17;
  ExFreePoolWithTag(PoolWithTag, 0);
  v9 = ResultLength;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x20207050u);
  if ( PoolWithTag )
  {
    --v16;
    goto LABEL_17;
  }
  v22 = (unsigned __int16 *)v15;
LABEL_23:
  ExFreePoolWithTag(v22, 0);
  return 3221225626LL;
}
