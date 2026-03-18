/*
 * XREFs of FsRtlAddDiskIOCounterInstance @ 0x14066D64C
 * Callers:
 *     FsRtlDiskIOCounterSetCallback @ 0x14066D714 (FsRtlDiskIOCounterSetCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PcwAddInstance @ 0x14053C6D4 (PcwAddInstance.c)
 */

NTSTATUS __fastcall FsRtlAddDiskIOCounterInstance(PPCW_BUFFER Buffer)
{
  unsigned int v2; // ecx
  __int64 *v3; // r8
  __int64 v4; // rdx
  struct _PCW_DATA Data; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int64 v8; // [rsp+50h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp-18h]

  v8 = 0LL;
  v2 = 0;
  v9 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v3 = KiProcessorBlock;
    do
    {
      if ( v2 >= (unsigned int)KeNumberProcessors_0 )
        v4 = 0LL;
      else
        v4 = *v3;
      ++v2;
      v8 += *(_QWORD *)(v4 + 25160);
      ++v3;
      v9 += *(_QWORD *)(v4 + 25168);
    }
    while ( v2 < (unsigned int)KeNumberProcessors_0 );
  }
  RtlInitUnicodeString(&DestinationString, L"default");
  Data.Size = 16;
  Data.Data = &v8;
  return PcwAddInstance(Buffer, &DestinationString, 0, 1u, &Data);
}
