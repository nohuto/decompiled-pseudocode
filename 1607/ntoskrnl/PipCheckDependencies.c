/*
 * XREFs of PipCheckDependencies @ 0x14079C1A4
 * Callers:
 *     IopInitializeSystemDrivers @ 0x14079AE5C (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PipLookupGroupName @ 0x14079C1EC (PipLookupGroupName.c)
 */

__int64 __fastcall PipCheckDependencies(void *a1)
{
  PVOID v2; // rsi
  unsigned int v3; // ebx
  int v4; // ebp
  const WCHAR *v5; // rdi
  unsigned __int16 MaximumLength; // r14
  __int64 v7; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF

  if ( IopGetRegistryValue(a1, L"DependOnGroup", 0, &P) < 0 )
    return 1LL;
  v2 = P;
  v3 = 1;
  v4 = *((_DWORD *)P + 3);
  v5 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
  while ( v4 )
  {
    RtlInitUnicodeString(&DestinationString, v5);
    MaximumLength = DestinationString.MaximumLength;
    DestinationString.Length = DestinationString.MaximumLength;
    v7 = PipLookupGroupName(&DestinationString);
    if ( v7 && !*(_DWORD *)(v7 + 28) )
    {
      v3 = 0;
      break;
    }
    v4 -= MaximumLength;
    v5 = (const WCHAR *)((char *)v5 + MaximumLength);
  }
  ExFreePoolWithTag(v2, 0);
  return v3;
}
