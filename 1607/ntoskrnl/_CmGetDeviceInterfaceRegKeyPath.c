/*
 * XREFs of _CmGetDeviceInterfaceRegKeyPath @ 0x1404DE090
 * Callers:
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404DBB94 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140631854 (PiDqGetRelativeObjectRegPath.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406D815C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCatExW @ 0x14013C270 (RtlStringCchCatExW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1404DF0E0 (_CmGetDeviceInterfaceSubkeyPath.c)
 */

__int64 __fastcall CmGetDeviceInterfaceRegKeyPath(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        wchar_t *a6,
        size_t cchDest,
        _DWORD *a8)
{
  __int16 v9; // r14
  _WORD *v11; // rsi
  int v12; // r13d
  char v13; // bp
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  _WORD *PoolWithTag; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  NTSTATUS DeviceInterfaceSubkeyPath; // ebx
  NTSTRSAFE_PWSTR *v21; // r9
  int v22; // r14d
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  NTSTATUS v26; // eax
  NTSTRSAFE_PWSTR *v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  size_t *dwFlags; // [rsp+20h] [rbp-E8h]
  size_t *dwFlagsa; // [rsp+20h] [rbp-E8h]
  ULONG pszFormat; // [rsp+28h] [rbp-E0h]
  ULONG pszFormata; // [rsp+28h] [rbp-E0h]
  _WORD v35[40]; // [rsp+70h] [rbp-98h] BYREF

  v9 = a3;
  v11 = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_54;
  v12 = (unsigned __int8)a3;
  if ( (((unsigned __int8)a3 - 48) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned __int8)a3 != 49 )
      return (unsigned int)-1073741811;
    v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  v14 = -1LL;
  v15 = -1LL;
  do
    ++v15;
  while ( *(_WORD *)(a2 + 2 * v15) );
  v16 = 2 * v15 + 6;
  if ( v16 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v16, 0x52504E50u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  LOBYTE(v19) = v13;
  DeviceInterfaceSubkeyPath = CmGetDeviceInterfaceSubkeyPath(v18, a2, v19, v35, PoolWithTag, (unsigned int)v16 >> 1);
  if ( DeviceInterfaceSubkeyPath < 0 )
    goto LABEL_27;
  v22 = v9 & 0x200;
  if ( !v22 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v35[v23] );
    v24 = v23 + 48;
    goto LABEL_14;
  }
  if ( !a4 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v35[v29] );
    v24 = v29 + 99;
    goto LABEL_14;
  }
  if ( a4 == -1 )
  {
LABEL_54:
    DeviceInterfaceSubkeyPath = -1073741811;
    goto LABEL_27;
  }
  v30 = -1LL;
  do
    ++v30;
  while ( v35[v30] );
  v24 = v30 + 96;
  do
LABEL_14:
    ++v14;
  while ( v11[v14] );
  v25 = v24 + v14 + 1;
  if ( v12 < 48 )
    goto LABEL_49;
  if ( v12 <= 49 )
    goto LABEL_17;
  if ( v12 == 50 )
    v25 += 18LL;
  else
LABEL_49:
    DeviceInterfaceSubkeyPath = -1073741811;
LABEL_17:
  if ( DeviceInterfaceSubkeyPath >= 0 )
  {
    if ( v25 > 0xFFFFFFFF )
    {
      DeviceInterfaceSubkeyPath = -1073741675;
    }
    else
    {
      DeviceInterfaceSubkeyPath = 0;
      if ( a8 )
        *a8 = v25;
      if ( (unsigned int)v25 <= (unsigned int)cchDest )
      {
        if ( v22 )
        {
          if ( a4 )
          {
            if ( a4 == -1 )
              goto LABEL_25;
            v26 = RtlStringCchPrintfExW(a6, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%04u\\%s\\%s\\%s");
          }
          else
          {
            v26 = RtlStringCchPrintfExW(a6, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%s\\%s\\%s");
          }
        }
        else
        {
          v26 = RtlStringCchPrintfExW(a6, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%s\\%s");
        }
        DeviceInterfaceSubkeyPath = v26;
LABEL_25:
        if ( DeviceInterfaceSubkeyPath >= 0 && v12 == 50 )
        {
          DeviceInterfaceSubkeyPath = RtlStringCchCatExW(a6, (unsigned int)cchDest, L"\\", v21, dwFlags, pszFormat);
          if ( DeviceInterfaceSubkeyPath >= 0 )
            DeviceInterfaceSubkeyPath = RtlStringCchCatExW(
                                          a6,
                                          (unsigned int)cchDest,
                                          L"Device Parameters",
                                          v28,
                                          dwFlagsa,
                                          pszFormata);
        }
        goto LABEL_27;
      }
      DeviceInterfaceSubkeyPath = -1073741789;
    }
  }
LABEL_27:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)DeviceInterfaceSubkeyPath;
}
