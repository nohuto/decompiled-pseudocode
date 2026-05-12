/*
 * XREFs of RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C0027290
 * Callers:
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0027158 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C00272F4 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00289EC (RaidAdapterSendSrbIoControlSynchronously.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareGetInfoFromMiniport(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  char v8; // [rsp+28h] [rbp-20h]

  v8 = 0;
  result = RaidAdapterSendSrbIoControlSynchronously(
             a1,
             a2,
             a3,
             a4,
             PortSrbTranslateFirmwareIoctlStatusToNtStatus,
             v8,
             64);
  if ( (int)result >= 0 )
  {
    v7 = *(unsigned int *)(a3 + 44);
    if ( *(_DWORD *)(v7 + a3) == 2 && *(_DWORD *)(v7 + a3 + 4) == 24 )
      *(_DWORD *)(a1 + 5456) = 2;
    else
      *(_DWORD *)(a1 + 5456) = 1;
  }
  return result;
}
