/*
 * XREFs of FsRtlAddDiskIOCounterInstance @ 0x1405F45B4
 * Callers:
 *     FsRtlDiskIOCounterSetCallback @ 0x1405F4678 (FsRtlDiskIOCounterSetCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PcwAddInstance @ 0x1404B070C (PcwAddInstance.c)
 */

NTSTATUS __fastcall FsRtlAddDiskIOCounterInstance(PPCW_BUFFER Buffer)
{
  ULONG v2; // ebx
  ULONG ActiveProcessorCount; // edi
  __int64 Prcb; // rax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int64 v8; // [rsp+50h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp-18h]

  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v8 = 0LL;
  v9 = 0LL;
  if ( ActiveProcessorCount )
  {
    do
    {
      Prcb = KeGetPrcb(v2++);
      v8 += *(_QWORD *)(Prcb + 25160);
      v9 += *(_QWORD *)(Prcb + 25168);
    }
    while ( v2 < ActiveProcessorCount );
  }
  RtlInitUnicodeString(&DestinationString, L"default");
  Data.Size = 16;
  Data.Data = &v8;
  return PcwAddInstance(Buffer, &DestinationString, 0, 1u, &Data);
}
