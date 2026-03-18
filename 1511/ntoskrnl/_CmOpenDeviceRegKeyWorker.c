/*
 * XREFs of _CmOpenDeviceRegKeyWorker @ 0x14043B720
 * Callers:
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegKeyPath @ 0x14043BAF8 (_CmGetDeviceRegKeyPath.c)
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043BFA8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x14043C2B0 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x140444C98 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14053F248 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140692874 (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceRegKeyWorker(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        char a6,
        _QWORD *a7,
        _DWORD *a8)
{
  __int64 v8; // rsi
  int v9; // ebx
  void *v12; // r13
  unsigned __int64 v13; // r12
  wchar_t *PoolWithTag; // rdi
  int DeviceRegKeyPath; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  int inited; // ebx
  int v19; // r12d
  __int64 v20; // rcx
  int v21; // eax
  int DeviceRegKeySecurityDescriptor; // eax
  int v24; // r14d
  int v25; // ecx
  int v26; // r9d
  int Tree; // eax
  int v28; // eax
  HANDLE v29; // rax
  size_t v30; // [rsp+38h] [rbp-49h]
  void *v31; // [rsp+48h] [rbp-39h] BYREF
  HANDLE v32; // [rsp+50h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-29h] BYREF
  HANDLE v34; // [rsp+68h] [rbp-19h] BYREF
  __int64 v35; // [rsp+70h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v38; // [rsp+D8h] [rbp+57h] BYREF
  int v39; // [rsp+E0h] [rbp+5Fh]

  v39 = a4;
  LODWORD(v8) = 0;
  v9 = a4;
  v35 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v12 = 0LL;
  Handle = 0LL;
  v31 = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    return 3221225485LL;
  LODWORD(v13) = 240;
  if ( (a3 & 0x200) != 0 )
    LODWORD(v13) = 360;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x52504E50u);
  if ( PoolWithTag )
  {
    while ( 1 )
    {
      LODWORD(v30) = (unsigned int)v13 >> 1;
      DeviceRegKeyPath = CmGetDeviceRegKeyPath((_DWORD)a1, a2, a3, v9, a6, PoolWithTag, v30, (__int64)&v38);
      inited = DeviceRegKeyPath;
      if ( DeviceRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(PoolWithTag, 0);
      v13 = 2LL * v38;
      PoolWithTag = 0LL;
      if ( v13 > 0xFFFFFFFF )
      {
        inited = -1073741675;
        goto LABEL_19;
      }
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x52504E50u);
      if ( !PoolWithTag )
        goto LABEL_65;
      v9 = v39;
    }
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_19;
    if ( (a3 & 0x100) != 0 )
    {
      *(_QWORD *)&DestinationString.Length = PoolWithTag;
      inited = PnpCtxRegOpenCurrentUserKey(a1, v16, v17, &v34);
      if ( inited >= 0 )
      {
        v19 = (int)v34;
        goto LABEL_15;
      }
    }
    else
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
      if ( inited < 0 )
        goto LABEL_19;
      if ( DestinationString.Length < (unsigned int)v13
        && DestinationString.Length > 0x32u
        && RtlPrefixUnicodeString(
             &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
             &DestinationString,
             1u) )
      {
        *(_QWORD *)&DestinationString.Length = PoolWithTag + 25;
        inited = PnpCtxGetCachedContextBaseKey(a1, 4LL, &v35);
        if ( inited < 0 )
          goto LABEL_19;
        v19 = v35;
LABEL_15:
        if ( a1 )
          v20 = *a1;
        else
          LODWORD(v20) = 0;
        v21 = SysCtxRegOpenKey(v20, v19, *(_DWORD *)&DestinationString.Length, 0, a5, (__int64)a7);
        switch ( v21 )
        {
          case 0:
            *a8 = 2;
            goto LABEL_19;
          case -1073741444:
            inited = -1073741595;
            break;
          case -1073741772:
            if ( !a6 )
            {
              if ( (_BYTE)a3 == 16 && (a3 & 0xF00) == 0 )
              {
                inited = -1073741810;
                goto LABEL_19;
              }
              goto LABEL_37;
            }
            v38 = (unsigned __int8)a3;
            if ( (unsigned __int8)a3 == 16 && (a3 & 0xF00) == 0
              || (inited = CmOpenDeviceRegKey((__int64)a1, a2, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL), inited >= 0) )
            {
              DeviceRegKeySecurityDescriptor = CmGetDeviceRegKeySecurityDescriptor(a1, a3, &v31);
              v12 = v31;
              inited = DeviceRegKeySecurityDescriptor;
              if ( DeviceRegKeySecurityDescriptor >= 0 )
              {
                v24 = a5;
                v25 = a5;
                v26 = 0;
                if ( v31 )
                  v25 = 917510;
                LOBYTE(v26) = v38 == 19;
                LODWORD(v31) = v25;
                Tree = PnpCtxRegCreateTree(
                         (_DWORD)a1,
                         v19,
                         *(_DWORD *)&DestinationString.Length,
                         v26,
                         v25,
                         (__int64)v12,
                         (__int64)&v32,
                         (__int64)a8);
                if ( Tree == -1073741444 )
                {
                  inited = -1073741595;
                }
                else if ( Tree < 0 )
                {
                  inited = Tree;
                }
                else
                {
                  if ( (_DWORD)v31 == v24 )
                  {
                    v29 = v32;
                    v32 = 0LL;
                    *a7 = v29;
                    goto LABEL_19;
                  }
                  if ( a1 )
                    v8 = *a1;
                  v28 = SysCtxRegOpenKey(v8, (_DWORD)v32, 0, 0, v24, (__int64)a7);
                  if ( v28 == -1073741444 )
                  {
LABEL_37:
                    inited = -1073741772;
                    goto LABEL_19;
                  }
                  if ( v28 < 0 )
                    inited = v28;
                }
              }
            }
            break;
          default:
            inited = v21;
            break;
        }
        goto LABEL_19;
      }
      inited = -1073741811;
    }
  }
  else
  {
LABEL_65:
    inited = -1073741801;
  }
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
  if ( v34 )
    ZwClose(v34);
  if ( v32 )
    ZwClose(v32);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)inited;
}
