/*
 * XREFs of _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405622A8
 * Callers:
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1404D946C (_CmGetMatchingFilteredDeviceInterfaceList.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     _PnpIsValidGuidString @ 0x1404DAE44 (_PnpIsValidGuidString.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1405634B4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall CmGetMatchingFilteredDeviceInterfaceListWorker(
        __int64 *a1,
        const WCHAR *a2,
        const wchar_t *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _WORD *a7,
        unsigned int a8,
        unsigned int *a9,
        __int16 a10)
{
  wchar_t *v13; // rdi
  int CachedContextBaseKey; // ebx
  __int64 v15; // rcx
  int v16; // eax
  wchar_t *PoolWithTag; // rax
  int v18; // eax
  void *v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // eax
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-10h] BYREF
  bool v27; // [rsp+A8h] [rbp+58h]
  int v28; // [rsp+C8h] [rbp+78h]

  v24 = 0LL;
  *a9 = 0;
  v13 = 0LL;
  Handle = 0LL;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  if ( a8 )
    *a7 = 0;
  if ( (a4 & 0xFFFFFFFE) != 0 || a10 )
    goto LABEL_27;
  v27 = (a4 & 1) != 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 8, &v24);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_20;
  if ( !a2 )
  {
    v28 = 0;
    goto LABEL_8;
  }
  if ( !PnpIsValidGuidString(a2) )
  {
LABEL_27:
    CachedContextBaseKey = -1073741811;
    goto LABEL_20;
  }
  v28 = 1;
LABEL_8:
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  v16 = SysCtxRegOpenKey(v15, v24, (__int64)a2, 0, 8u, (__int64)&Handle);
  CachedContextBaseKey = v16;
  if ( v16 == -1073741444 )
  {
    CachedContextBaseKey = -1073741595;
  }
  else if ( v16 >= 0 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x5B8uLL, 0x52504E50u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x5B8uLL);
      *(_DWORD *)v13 = v28 + 1;
      RtlStringCchCopyExW(v13 + 506, 0xC8uLL, a3, 0LL, 0LL, 0x900u);
      *((_BYTE *)v13 + 1428) = v27;
      *((_QWORD *)v13 + 179) = a5;
      *((_QWORD *)v13 + 180) = a6;
      *((_QWORD *)v13 + 177) = 0LL;
      *((_DWORD *)v13 + 356) = 0;
      *((_QWORD *)v13 + 181) = a7;
      *((_DWORD *)v13 + 364) = a8;
      *((_DWORD *)v13 + 365) = 0;
      v18 = PnpCtxRegEnumKeyWithCallback(a1, Handle, &CmDeviceClassesSubkeyCallback, v13);
      v19 = (void *)*((_QWORD *)v13 + 177);
      CachedContextBaseKey = v18;
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      if ( CachedContextBaseKey >= 0 )
      {
        v20 = *((_DWORD *)v13 + 365);
        *a9 = v20;
        if ( v20 )
        {
          v21 = v20 + 1;
          *a9 = v21;
          if ( a7 && a8 >= v21 )
            a7[v21 - 1] = 0;
          else
            CachedContextBaseKey = -1073741789;
        }
      }
    }
    else
    {
      CachedContextBaseKey = -1073741801;
    }
  }
LABEL_20:
  RtlFreeAnsiString(&UnicodeString);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}
