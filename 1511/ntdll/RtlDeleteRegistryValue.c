/*
 * XREFs of RtlDeleteRegistryValue @ 0x180089A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlpGetRegistryHandle @ 0x180046F68 (RtlpGetRegistryHandle.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwDeleteValueKey @ 0x1800A69D0 (ZwDeleteValueKey.c)
 */

__int64 __fastcall RtlDeleteRegistryValue(int a1, _WORD *a2, const WCHAR *a3)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  result = RtlpGetRegistryHandle(a1, a2, 1, &Handle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    v6 = ZwDeleteValueKey(Handle, &DestinationString);
    if ( (a1 & 0x40000000) == 0 )
      NtClose(Handle);
    return v6;
  }
  return result;
}
