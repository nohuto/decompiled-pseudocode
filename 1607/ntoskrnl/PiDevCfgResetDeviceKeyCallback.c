/*
 * XREFs of PiDevCfgResetDeviceKeyCallback @ 0x14063D98C
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x14014D79C (_wcsicmp.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140636E74 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceProperties @ 0x140636F74 (PiDevCfgCopyDeviceProperties.c)
 */

__int64 __fastcall PiDevCfgResetDeviceKeyCallback(__int64 a1, __int64 a2, __int64 a3, void *a4, void *a5)
{
  if ( *(_DWORD *)(a3 + 16) != 16 || wcsicmp(*(const wchar_t **)a3, L"Properties") )
    return PiDevCfgCopyDeviceKeys(a4, a5, 0, 0LL);
  else
    return PiDevCfgCopyDeviceProperties(a4, a5, *(_QWORD *)(a2 + 8), 1u, 0, 0LL);
}
