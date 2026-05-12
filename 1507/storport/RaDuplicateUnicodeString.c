/*
 * XREFs of RaDuplicateUnicodeString @ 0x1C0008ECC
 * Callers:
 *     RaidCreateDeviceName @ 0x1C0008E38 (RaidCreateDeviceName.c)
 *     RaInitializeDriver @ 0x1C004CBF0 (RaInitializeDriver.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 */

__int64 __fastcall RaDuplicateUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        __int64 a3,
        __int64 a4)
{
  unsigned __int16 v6; // ax
  unsigned __int16 *Pool; // rax

  DestinationString->Length = SourceString->Length;
  v6 = SourceString->Length + 2;
  DestinationString->MaximumLength = v6;
  Pool = (unsigned __int16 *)RaidAllocatePool(NonPagedPoolNx, v6, 0x53446152u, a4);
  DestinationString->Buffer = Pool;
  if ( !Pool )
    return 3221225495LL;
  RtlCopyUnicodeString(DestinationString, SourceString);
  DestinationString->Buffer[(unsigned __int64)DestinationString->Length >> 1] = 0;
  return 0LL;
}
