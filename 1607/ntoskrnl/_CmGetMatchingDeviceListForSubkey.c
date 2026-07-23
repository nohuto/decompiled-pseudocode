/*
 * XREFs of _CmGetMatchingDeviceListForSubkey @ 0x140561FD8
 * Callers:
 *     _CmGetMatchingDeviceList @ 0x140561EC4 (_CmGetMatchingDeviceList.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x1406DBA58 (_CmGetMatchingFilteredDeviceListWorker.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1405634B4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall CmGetMatchingDeviceListForSubkey(
        __int64 *a1,
        const wchar_t *a2,
        char a3,
        __int64 a4,
        __int64 a5,
        _WORD *a6,
        unsigned int a7,
        unsigned int *a8)
{
  int CachedContextBaseKey; // ebx
  const wchar_t *v11; // rax
  int v12; // ebp
  __int64 v13; // rcx
  int v14; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // eax
  wchar_t *v20; // rax
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22[8]; // [rsp+38h] [rbp-40h] BYREF

  v22[0] = 0LL;
  *a8 = 0;
  Handle = 0LL;
  if ( a7 )
    *a6 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 5, v22);
  if ( CachedContextBaseKey >= 0 )
  {
    v11 = a2;
    v12 = 0;
    if ( a2 )
    {
      while ( *v11 && *v11 != 92 )
      {
        if ( (unsigned int)++v12 > 2 )
        {
          CachedContextBaseKey = -1073741811;
          goto LABEL_17;
        }
        v20 = wcschr(v11, 0x5Cu);
        if ( v20 )
        {
          v11 = v20 + 1;
          if ( v11 )
            continue;
        }
        goto LABEL_5;
      }
      CachedContextBaseKey = -1073741811;
    }
LABEL_5:
    if ( CachedContextBaseKey >= 0 )
    {
      v13 = 0LL;
      if ( a1 )
        v13 = *a1;
      v14 = SysCtxRegOpenKey(v13, v22[0], (__int64)a2, 0, 8u, (__int64)&Handle);
      CachedContextBaseKey = v14;
      if ( v14 == -1073741444 )
      {
        CachedContextBaseKey = -1073741595;
      }
      else if ( v14 >= 0 )
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1B8uLL, 0x52504E50u);
        v16 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x1B8uLL);
          *(_DWORD *)v16 = v12 + 1;
          RtlStringCchCopyExW(v16 + 2, 0xC8uLL, a2, 0LL, 0LL, 0x900u);
          *((_BYTE *)v16 + 404) = a3;
          *((_QWORD *)v16 + 51) = a4;
          *((_QWORD *)v16 + 52) = a5;
          *((_QWORD *)v16 + 53) = a6;
          *((_DWORD *)v16 + 108) = a7;
          *((_DWORD *)v16 + 109) = 0;
          CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(a1, Handle, &CmEnumSubkeyCallback, v16);
          if ( CachedContextBaseKey >= 0 )
          {
            v17 = *((_DWORD *)v16 + 109);
            *a8 = v17;
            if ( v17 )
            {
              v18 = v17 + 1;
              *a8 = v18;
              if ( a6 && a7 >= v18 )
                a6[v18 - 1] = 0;
              else
                CachedContextBaseKey = -1073741789;
            }
          }
          ExFreePoolWithTag(v16, 0);
        }
        else
        {
          CachedContextBaseKey = -1073741801;
        }
      }
    }
  }
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}
