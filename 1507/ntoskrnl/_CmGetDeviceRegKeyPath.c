/*
 * XREFs of _CmGetDeviceRegKeyPath @ 0x14043CF8C
 * Callers:
 *     PiDqGetRelativeObjectRegPath @ 0x140416040 (PiDqGetRelativeObjectRegPath.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14043CBC8 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140713210 (_CmDeleteDeviceRegKeyWorker.c)
 * Callees:
 *     _CmValidateDeviceName @ 0x14043D110 (_CmValidateDeviceName.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x14043D5F0 (_CmGetDeviceInstanceKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x140549804 (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140549914 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x14054CC68 (_CmGetDeviceLogConfKeyPath.c)
 *     _CmGetDeviceControlKeyPath @ 0x1405B7E34 (_CmGetDeviceControlKeyPath.c)
 */

__int64 __fastcall CmGetDeviceRegKeyPath(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t a7,
        __int64 a8)
{
  int v9; // ebx
  int v10; // edi
  int v11; // ebp
  __int64 result; // rax
  int v13; // ecx
  int v14; // r9d
  int v15; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  v9 = a3;
  v10 = a2;
  v11 = a1;
  if ( !(_DWORD)a3 || (a3 & 0xFFFFFCE8) != 0 )
    return 3221225485LL;
  result = CmValidateDeviceName(a1, a2, a3);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned __int8)v9 != 16 )
  {
    switch ( (unsigned __int8)v9 )
    {
      case 0x12u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceSoftwareKeyPath(v11, v10, v9, a4, a5, pszDest, cchDest, a8);
      case 0x11u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceHardwareKeyPath(v13, v10, v9, a4, v15, pszDest, cchDest, a8);
      case 0x13u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceControlKeyPath(v13, v10, v9, v14, v15, pszDest, cchDest, a8);
      case 0x14u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceLogConfKeyPath(v13, v10, v9, v14, v15, pszDest, cchDest, a8);
    }
    return 3221225485LL;
  }
  LODWORD(cchDest) = a7;
  return CmGetDeviceInstanceKeyPath(v13, v10, v9, a4, v15, pszDest, cchDest, a8);
}
