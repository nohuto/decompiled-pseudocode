/*
 * XREFs of ?InitializeCpuManager@@YAJXZ @ 0x140017434
 * Callers:
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140014C0C (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140016F80 (--$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ @ 0x140017348 (-InternalRelease@-$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 InitializeCpuManager(void)
{
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  pcbData = 4;
  NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
  dword_140055DA0 = 50000;
  pcbData = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"CpuManagementThresholdHns",
    0x18u,
    0LL,
    &dword_140055DA0,
    &pcbData);
  pcbData = 8;
  g_UserConfiguredAudioReservedCpu = 0;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"CpuManagementAudioReservedCpuMask",
    0x48u,
    0LL,
    &qword_140055E08,
    &pcbData);
  Microsoft::WRL::ComPtr<CpuManager>::InternalRelease((CpuManager **)&qword_140055BE8);
  return Microsoft::WRL::Details::MakeAndInitialize<CpuManager,CpuManager>((CpuManager **)&qword_140055BE8);
}
