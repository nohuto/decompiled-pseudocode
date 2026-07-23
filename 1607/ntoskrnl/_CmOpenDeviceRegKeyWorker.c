/*
 * XREFs of _CmOpenDeviceRegKeyWorker @ 0x1404E0410
 * Callers:
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpCtxRegCreateTree @ 0x1404DD744 (_PnpCtxRegCreateTree.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegKeyPath @ 0x1404E07C8 (_CmGetDeviceRegKeyPath.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140571390 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x1406D7244 (_PnpCtxRegOpenCurrentUserKey.c)
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
  int Tree; // eax
  int v27; // eax
  HANDLE v28; // rax
  size_t v29; // [rsp+38h] [rbp-49h]
  void *v30; // [rsp+48h] [rbp-39h] BYREF
  HANDLE v31; // [rsp+50h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-29h] BYREF
  HANDLE v33; // [rsp+68h] [rbp-19h] BYREF
  __int64 v34; // [rsp+70h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-9h] BYREF
  __int64 v37; // [rsp+D8h] [rbp+57h] BYREF
  int v38; // [rsp+E0h] [rbp+5Fh]

  v38 = a4;
  LODWORD(v8) = 0;
  v9 = a4;
  v34 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  v12 = 0LL;
  Handle = 0LL;
  v30 = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    return 3221225485LL;
  LODWORD(v13) = 240;
  if ( (a3 & 0x200) != 0 )
    LODWORD(v13) = 360;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x52504E50u);
  if ( !PoolWithTag )
  {
LABEL_65:
    inited = -1073741801;
    goto LABEL_19;
  }
  while ( 1 )
  {
    LODWORD(v29) = (unsigned int)v13 >> 1;
    DeviceRegKeyPath = CmGetDeviceRegKeyPath((int)a1, a2, a3, v9, a6, PoolWithTag, v29, (__int64)&v37);
    inited = DeviceRegKeyPath;
    if ( DeviceRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0);
    v13 = 2LL * (unsigned int)v37;
    PoolWithTag = 0LL;
    if ( v13 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_19;
    }
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x52504E50u);
    if ( !PoolWithTag )
      goto LABEL_65;
    v9 = v38;
  }
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_19;
  if ( (a3 & 0x100) != 0 )
  {
    *(_QWORD *)&DestinationString.Length = PoolWithTag;
    inited = PnpCtxRegOpenCurrentUserKey(a1, v16, v17, &v33);
    if ( inited < 0 )
      goto LABEL_19;
    v19 = (int)v33;
  }
  else
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
    if ( inited < 0 )
      goto LABEL_19;
    if ( DestinationString.Length >= (unsigned int)v13
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(
            &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
            &DestinationString,
            1u) )
    {
      inited = -1073741811;
      goto LABEL_19;
    }
    *(_QWORD *)&DestinationString.Length = PoolWithTag + 25;
    inited = PnpCtxGetCachedContextBaseKey(a1, 4LL, &v34);
    if ( inited < 0 )
      goto LABEL_19;
    v19 = v34;
  }
  if ( a1 )
    v20 = *a1;
  else
    LODWORD(v20) = 0;
  v21 = SysCtxRegOpenKey(v20, v19, *(_DWORD *)&DestinationString.Length, 0, a5, (__int64)a7);
  if ( !v21 )
  {
    *a8 = 2;
    goto LABEL_19;
  }
  if ( v21 == -1073741444 )
  {
    inited = -1073741595;
    goto LABEL_19;
  }
  if ( v21 != -1073741772 )
  {
    inited = v21;
    goto LABEL_19;
  }
  if ( a6 )
  {
    LODWORD(v37) = (unsigned __int8)a3;
    if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
    {
      inited = CmOpenDeviceRegKey((__int64)a1, a2, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL);
      if ( inited < 0 )
        goto LABEL_19;
    }
    DeviceRegKeySecurityDescriptor = CmGetDeviceRegKeySecurityDescriptor(a1, a3, &v30);
    v12 = v30;
    inited = DeviceRegKeySecurityDescriptor;
    if ( DeviceRegKeySecurityDescriptor < 0 )
      goto LABEL_19;
    v24 = a5;
    v25 = a5;
    if ( v30 )
      v25 = 917510;
    LODWORD(v30) = v25;
    Tree = PnpCtxRegCreateTree(a1);
    if ( Tree == -1073741444 )
    {
      inited = -1073741595;
      goto LABEL_19;
    }
    if ( Tree < 0 )
    {
      inited = Tree;
      goto LABEL_19;
    }
    if ( (_DWORD)v30 == v24 )
    {
      v28 = v31;
      v31 = 0LL;
      *a7 = v28;
      goto LABEL_19;
    }
    if ( a1 )
      v8 = *a1;
    v27 = SysCtxRegOpenKey(v8, (_DWORD)v31, 0, 0, v24, (__int64)a7);
    if ( v27 != -1073741444 )
    {
      if ( v27 < 0 )
        inited = v27;
      goto LABEL_19;
    }
LABEL_37:
    inited = -1073741772;
    goto LABEL_19;
  }
  if ( (_BYTE)a3 != 16 || (a3 & 0xF00) != 0 )
    goto LABEL_37;
  inited = -1073741810;
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
  if ( v33 )
    ZwClose(v33);
  if ( v31 )
    ZwClose(v31);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)inited;
}
