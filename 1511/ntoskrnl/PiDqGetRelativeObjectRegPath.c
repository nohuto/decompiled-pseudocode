/*
 * XREFs of PiDqGetRelativeObjectRegPath @ 0x1404F9140
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x1404F8E2C (PiDqOpenUserObjectRegKey.c)
 *     PiDqDeleteUserObject @ 0x14060717C (PiDqDeleteUserObject.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegKeyPath @ 0x14043BAF8 (_CmGetDeviceRegKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140442490 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1404DD4B4 (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1404DE404 (_CmGetCommonClassRegKeyPath.c)
 */

__int64 __fastcall PiDqGetRelativeObjectRegPath(const wchar_t *a1, int a2, PVOID *a3)
{
  wchar_t *pszDest; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // ebx
  int DeviceRegKeyPath; // eax
  unsigned int v11; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  __int16 v16; // r8
  int v17; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x58706E50u);
  *a3 = pszDest;
  if ( !pszDest )
  {
    v11 = -1073741670;
    goto LABEL_13;
  }
  v9 = a2 - 1;
  if ( !v9 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceRegKeyPath(PiPnpRtlCtx, (int)a1, 16, 0, 0, pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  v13 = v9 - 1;
  if ( !v13 )
  {
    v16 = 32;
    goto LABEL_18;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(v7, a1, 48, 0, v17, pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v16 = 64;
LABEL_18:
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetCommonClassRegKeyPath(v7, a1, v16, 0, v17, pszDest, cchDest, 0LL);
LABEL_4:
    v11 = DeviceRegKeyPath;
    if ( DeviceRegKeyPath >= 0 )
      return v11;
    goto LABEL_13;
  }
  if ( v15 == 1 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceContainerRegKeyPath(v7, (__int64)a1, 80LL, v8, v17, pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  v11 = -1073741811;
LABEL_13:
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x58706E50u);
    *a3 = 0LL;
  }
  return v11;
}
