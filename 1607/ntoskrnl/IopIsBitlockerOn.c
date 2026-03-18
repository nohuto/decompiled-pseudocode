/*
 * XREFs of IopIsBitlockerOn @ 0x14014B8DC
 * Callers:
 *     IopInitDumpCapsuleSupport @ 0x14014B880 (IopInitDumpCapsuleSupport.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14049F430 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x1404E6780 (IopOpenRegistryKey.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 */

char IopIsBitlockerOn()
{
  int v0; // edi
  char v1; // bl
  char v3; // [rsp+20h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h]

  v0 = 1;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\BitlockerStatus");
  v1 = 0;
  v3 = 0;
  if ( (int)IopOpenRegistryKey(&Handle, 0LL, &DestinationString, 131097LL, v3) < 0 )
    return 1;
  if ( (int)IopGetRegistryValue(Handle) >= 0 )
  {
    if ( *((_DWORD *)P + 3) )
      v0 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
  }
  ObCloseHandle(Handle, 0);
  if ( v0 == 1 )
    return 1;
  return v1;
}
