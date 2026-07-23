/*
 * XREFs of PiDqGetRelativeObjectRegPath @ 0x140631854
 * Callers:
 *     PiDqDeleteUserObject @ 0x140631648 (PiDqDeleteUserObject.c)
 *     PiDqOpenUserObjectRegKey @ 0x140631E3C (PiDqOpenUserObjectRegKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1404DAD18 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1404DE090 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceRegKeyPath @ 0x1404E07C8 (_CmGetDeviceRegKeyPath.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140513790 (_CmGetDeviceContainerRegKeyPath.c)
 */

__int64 __fastcall PiDqGetRelativeObjectRegPath(const WCHAR *a1, int a2, PVOID *a3)
{
  wchar_t *pszDest; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int DeviceRegKeyPath; // eax
  __int16 v15; // r8
  int v17; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x58706E50u);
  *a3 = pszDest;
  if ( !pszDest )
  {
    v9 = -1073741670;
    goto LABEL_16;
  }
  v10 = a2 - 1;
  if ( !v10 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceRegKeyPath(*(__int64 *)&PiPnpRtlCtx, (__int64)a1, 16, 0, 0, pszDest, cchDest, 0LL);
LABEL_15:
    v9 = DeviceRegKeyPath;
    if ( DeviceRegKeyPath >= 0 )
      return v9;
    goto LABEL_16;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v15 = 32;
    goto LABEL_11;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(v7, (__int64)a1, 48, 0, v17, pszDest, cchDest, 0LL);
    goto LABEL_15;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v15 = 64;
LABEL_11:
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetCommonClassRegKeyPath(v7, a1, v15, 0, v17, pszDest, cchDest, 0LL);
    goto LABEL_15;
  }
  if ( v13 == 1 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceContainerRegKeyPath(v7, (__int64)a1, 80LL, v8, v17, pszDest, cchDest, 0LL);
    goto LABEL_15;
  }
  v9 = -1073741811;
LABEL_16:
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x58706E50u);
    *a3 = 0LL;
  }
  return v9;
}
