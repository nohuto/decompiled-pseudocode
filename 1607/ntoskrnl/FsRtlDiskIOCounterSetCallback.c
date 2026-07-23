/*
 * XREFs of FsRtlDiskIOCounterSetCallback @ 0x14061EA88
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     PcwAddInstance @ 0x1404D4324 (PcwAddInstance.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14061E9C4 (FsRtlAddDiskIOCounterInstance.c)
 */

int __fastcall FsRtlDiskIOCounterSetCallback(int a1, __int64 a2)
{
  int v3; // ecx
  int result; // eax
  struct _PCW_BUFFER *v5; // rcx
  struct _PCW_DATA Data; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  v3 = a1 - 2;
  if ( v3 )
  {
    if ( v3 == 1 )
      return FsRtlAddDiskIOCounterInstance(*(PPCW_BUFFER *)(a2 + 24));
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"default");
    v5 = *(struct _PCW_BUFFER **)(a2 + 24);
    Data.Data = 0LL;
    Data.Size = 16;
    result = PcwAddInstance(v5, &DestinationString, 0, 1u, &Data);
    if ( result < 0 )
      return result;
  }
  return 0;
}
