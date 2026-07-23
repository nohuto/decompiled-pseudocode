/*
 * XREFs of PiDevCfgLogDeviceMigrated @ 0x14063A210
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x14063A918 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     Template_zzjzxtq @ 0x1401CF760 (Template_zzjzxtq.c)
 */

int __fastcall PiDevCfgLogDeviceMigrated(__int64 a1, __int64 a2, __int64 a3)
{
  int result; // eax
  __int64 v5; // rax
  const wchar_t *v6; // r9
  __int64 v7; // rcx

  result = Microsoft_Windows_Kernel_PnPEnableBits;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x80000) != 0
    && (Microsoft_Windows_Kernel_PnPEnableBits & 0x100000) != 0 )
  {
    v5 = *(_QWORD *)(a2 + 152);
    v6 = (const wchar_t *)&dword_1406EEB64;
    v7 = a2 + 80;
    if ( (int)a3 < 0 )
    {
      if ( v5 )
        v6 = *(const wchar_t **)(a2 + 152);
      return Template_zzjzxtq(
               v7,
               &KMPnPEvt_DeviceMigrate_Failure,
               a3,
               *(const wchar_t **)(a1 + 8),
               *(const wchar_t **)(a2 + 32),
               v7,
               v6,
               *(_QWORD *)(a2 + 184),
               *(_DWORD *)(a2 + 176),
               a3);
    }
    else
    {
      if ( v5 )
        v6 = *(const wchar_t **)(a2 + 152);
      return Template_zzjzxtq(
               v7,
               &KMPnPEvt_DeviceMigrate_Success,
               a3,
               *(const wchar_t **)(a1 + 8),
               *(const wchar_t **)(a2 + 32),
               v7,
               v6,
               *(_QWORD *)(a2 + 184),
               *(_DWORD *)(a2 + 176),
               a3);
    }
  }
  return result;
}
