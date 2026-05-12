/*
 * XREFs of RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C0023EA4
 * Callers:
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0023D6C (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0023F08 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0024FE0 (RaidAdapterSendSrbIoControlSynchronously.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareGetInfoFromMiniport(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v7; // rcx

  result = RaidAdapterSendSrbIoControlSynchronously(
             a1,
             a2,
             a3,
             a4,
             (__int64)PortSrbTranslateFirmwareIoctlStatusToNtStatus,
             0,
             64);
  if ( (int)result >= 0 )
  {
    v7 = *(unsigned int *)(a3 + 44);
    if ( *(_DWORD *)(v7 + a3) == 2 && *(_DWORD *)(v7 + a3 + 4) == 24 )
      *(_DWORD *)(a1 + 5444) = 2;
    else
      *(_DWORD *)(a1 + 5444) = 1;
  }
  return result;
}
