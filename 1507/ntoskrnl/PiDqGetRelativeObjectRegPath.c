/*
 * XREFs of PiDqGetRelativeObjectRegPath @ 0x140416040
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x140415D2C (PiDqOpenUserObjectRegKey.c)
 *     PiDqDeleteUserObject @ 0x140681EA0 (PiDqDeleteUserObject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14043C0E0 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceRegKeyPath @ 0x14043CF8C (_CmGetDeviceRegKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140440044 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1405381D8 (_CmGetDeviceContainerRegKeyPath.c)
 */

__int64 __fastcall PiDqGetRelativeObjectRegPath(int a1, int a2, PVOID *a3)
{
  wchar_t *pszDest; // rax
  int v7; // ecx
  int v8; // r9d
  int v9; // ebx
  int DeviceRegKeyPath; // eax
  unsigned int v11; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // r8d
  int v17; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x58706E50u);
  *a3 = pszDest;
  if ( !pszDest )
  {
    v11 = -1073741670;
    goto LABEL_12;
  }
  v9 = a2 - 1;
  if ( !v9 )
  {
    DeviceRegKeyPath = CmGetDeviceRegKeyPath(PiPnpRtlCtx, a1, 16, 0, 0, pszDest, 1024, 0LL);
    goto LABEL_4;
  }
  v13 = v9 - 1;
  if ( !v13 )
  {
    v16 = 32;
    goto LABEL_17;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(v7, a1, 48, 0, v17, (__int64)pszDest, cchDest, 0LL);
LABEL_4:
    v11 = DeviceRegKeyPath;
    if ( DeviceRegKeyPath >= 0 )
      return v11;
    goto LABEL_12;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v16 = 64;
LABEL_17:
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetCommonClassRegKeyPath(v7, a1, v16, 0, v17, pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  if ( v15 == 1 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceContainerRegKeyPath(v7, a1, 80, v8, v17, pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  v11 = -1073741811;
LABEL_12:
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x58706E50u);
    *a3 = 0LL;
  }
  return v11;
}
