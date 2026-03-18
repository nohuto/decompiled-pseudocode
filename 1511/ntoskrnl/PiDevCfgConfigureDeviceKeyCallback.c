/*
 * XREFs of PiDevCfgConfigureDeviceKeyCallback @ 0x140514FDC
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140515030 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceProperties @ 0x140608220 (PiDevCfgCopyDeviceProperties.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceKeyCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  if ( *(_DWORD *)(a3 + 16) == 16 && !wcsicmp(*(const wchar_t **)a3, L"Properties") )
    return PiDevCfgCopyDeviceProperties(a4, a5, *(_QWORD *)(a2 + 8), 1, 1, a6);
  else
    return PiDevCfgCopyDeviceKeys(a4, a5, 1LL, a6);
}
