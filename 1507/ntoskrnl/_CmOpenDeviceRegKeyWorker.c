/*
 * XREFs of _CmOpenDeviceRegKeyWorker @ 0x14043CBC8
 * Callers:
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     RtlPrefixUnicodeString @ 0x1404369B0 (RtlPrefixUnicodeString.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegKeyPath @ 0x14043CF8C (_CmGetDeviceRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x1404DE538 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405B3288 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140712414 (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceRegKeyWorker(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8)
{
  int v11; // ebx
  wchar_t *PoolWithTag; // rsi
  void *v13; // r12
  unsigned __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r8
  int DeviceRegKeyPath; // ebx
  char *v18; // rax
  __int64 v19; // rcx
  HANDLE *v20; // r13
  ACCESS_MASK v21; // r14d
  int Tree; // eax
  int DeviceRegKeySecurityDescriptor; // eax
  int v25; // edi
  __int64 v26; // rcx
  HANDLE v27; // rax
  size_t v28; // [rsp+30h] [rbp-50h]
  HANDLE v29; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  void *v31; // [rsp+58h] [rbp-28h] BYREF
  HANDLE v32; // [rsp+60h] [rbp-20h] BYREF
  char *v33; // [rsp+68h] [rbp-18h] BYREF
  HANDLE Handle[2]; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v36; // [rsp+D0h] [rbp+50h] BYREF

  v33 = 0LL;
  v11 = a2;
  v32 = 0LL;
  PoolWithTag = 0LL;
  v29 = 0LL;
  v13 = 0LL;
  Handle[0] = 0LL;
  v31 = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    goto LABEL_64;
  LODWORD(v14) = 240;
  if ( (a3 & 0x200) != 0 )
    LODWORD(v14) = 360;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v14, 0x52504E50u);
  if ( PoolWithTag )
  {
    while ( 1 )
    {
      LODWORD(v28) = (unsigned int)v14 >> 1;
      DeviceRegKeyPath = CmGetDeviceRegKeyPath((_DWORD)a1, v11, a3, a4, a6, PoolWithTag, v28, (__int64)&v36);
      if ( DeviceRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
      v14 = 2LL * v36;
      if ( v14 > 0xFFFFFFFF )
      {
        DeviceRegKeyPath = -1073741675;
        goto LABEL_19;
      }
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v14, 0x52504E50u);
      if ( !PoolWithTag )
        goto LABEL_59;
      v11 = a2;
    }
  }
  else
  {
LABEL_59:
    DeviceRegKeyPath = -1073741801;
  }
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_19;
  if ( (a3 & 0x100) != 0 )
  {
    *(_QWORD *)&DestinationString.Length = PoolWithTag;
    DeviceRegKeyPath = PnpCtxRegOpenCurrentUserKey(a1, v15, v16, &v32);
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_19;
    v18 = (char *)v32;
    goto LABEL_15;
  }
  DeviceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_19;
  if ( DestinationString.Length >= (unsigned int)v14
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(&`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
  {
LABEL_64:
    DeviceRegKeyPath = -1073741811;
    goto LABEL_19;
  }
  *(_QWORD *)&DestinationString.Length = PoolWithTag + 25;
  DeviceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4LL, &v33);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_19;
  v18 = v33;
LABEL_15:
  v33 = v18;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  v20 = a7;
  v21 = a5;
  Tree = SysCtxRegOpenKey(v19, v18, *(const WCHAR **)&DestinationString.Length, 0, a5, a7);
  if ( !Tree )
  {
    *a8 = 2;
    goto LABEL_19;
  }
  if ( Tree == -1073741444 )
    goto LABEL_62;
  if ( Tree != -1073741772 )
    goto LABEL_52;
  if ( !a6 )
  {
    if ( (_BYTE)a3 != 16 || (a3 & 0xF00) != 0 )
      DeviceRegKeyPath = -1073741772;
    else
      DeviceRegKeyPath = -1073741810;
    goto LABEL_19;
  }
  v36 = (unsigned __int8)a3;
  if ( (unsigned __int8)a3 == 16 && (a3 & 0xF00) == 0
    || (DeviceRegKeyPath = CmOpenDeviceRegKey((__int64)a1, a2, 0x10u, 0, 1, 0, (__int64)Handle, 0LL),
        DeviceRegKeyPath >= 0) )
  {
    DeviceRegKeySecurityDescriptor = CmGetDeviceRegKeySecurityDescriptor(a1, a3, &v31);
    v13 = v31;
    DeviceRegKeyPath = DeviceRegKeySecurityDescriptor;
    if ( DeviceRegKeySecurityDescriptor >= 0 )
    {
      v25 = v21;
      if ( v31 )
        v25 = 917510;
      Tree = PnpCtxRegCreateTree(
               (_DWORD)a1,
               (_DWORD)v33,
               *(_DWORD *)&DestinationString.Length,
               v36 == 19,
               v25,
               (__int64)v31,
               (__int64)&v29,
               (__int64)a8);
      if ( Tree != -1073741444 )
      {
        if ( Tree >= 0 )
        {
          if ( v25 == v21 )
          {
            v27 = v29;
            v29 = 0LL;
            *v20 = v27;
            goto LABEL_19;
          }
          if ( a1 )
            v26 = *a1;
          else
            v26 = 0LL;
          Tree = SysCtxRegOpenKey(v26, (char *)v29, 0LL, 0, v21, v20);
          if ( Tree == -1073741444 )
          {
            DeviceRegKeyPath = -1073741772;
            goto LABEL_19;
          }
          if ( Tree >= 0 )
            goto LABEL_19;
        }
LABEL_52:
        DeviceRegKeyPath = Tree;
        goto LABEL_19;
      }
LABEL_62:
      DeviceRegKeyPath = -1073741595;
    }
  }
LABEL_19:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( v32 )
    ZwClose(v32);
  if ( v29 )
    ZwClose(v29);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceRegKeyPath;
}
