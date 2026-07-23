/*
 * XREFs of PiDevCfgMigrateDevice @ 0x14063A918
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x14063AE00 (PiDevCfgMigrateRootDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x140641DE4 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpValidateRegistryDword @ 0x1401CF3AC (PnpValidateRegistryDword.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140632F6C (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x1406351EC (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406383DC (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x140638D48 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgFreeMigrationContext @ 0x140638F50 (PiDevCfgFreeMigrationContext.c)
 *     PiDevCfgInitMigrationContext @ 0x1406396C4 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgLogDeviceMigrated @ 0x14063A210 (PiDevCfgLogDeviceMigrated.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14063BAA8 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140641064 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgSetObjectProperty @ 0x1406410B0 (PiDevCfgSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgMigrateDevice(
        __int64 a1,
        __int64 *a2,
        unsigned __int16 *a3,
        void *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  _DWORD *v10; // r15
  __int64 *v11; // rdi
  __int64 v12; // r12
  int inited; // ebx
  void *v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  _WORD *v17; // r14
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  int DeviceMigrationNode; // eax
  int v22; // eax
  unsigned int *v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rdx
  int v26; // ecx
  int v28; // [rsp+30h] [rbp-71h]
  int v29; // [rsp+30h] [rbp-71h]
  int v30; // [rsp+68h] [rbp-39h]
  __int64 *v31; // [rsp+70h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-29h] BYREF
  __int64 v33; // [rsp+80h] [rbp-21h] BYREF
  void *v34[8]; // [rsp+88h] [rbp-19h] BYREF

  memset(v34, 0, 0x38uLL);
  v10 = a5;
  v31 = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v30 = 0;
  v33 = 0LL;
  if ( a5 )
    *a5 = 0;
  v12 = (__int64)a6;
  if ( a6 )
    *a6 = 0;
  inited = PiDevCfgInitMigrationContext((UNICODE_STRING *)a3, a4, v34);
  if ( inited < 0 )
    goto LABEL_76;
  if ( !v34[0] )
  {
    inited = 0;
    goto LABEL_76;
  }
  if ( (unsigned int)PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       a2[1],
                       1u,
                       a2[2],
                       0LL,
                       (__int64)&DEVPKEY_Device_MigrationRank,
                       (__int64)&a6,
                       0LL,
                       0,
                       (__int64)&a5,
                       0) == -1073741789
    && (_DWORD)a6 == 9
    && (_DWORD)a5 == 8 )
  {
    goto LABEL_73;
  }
  if ( v34[1] )
  {
    inited = PiDevCfgQueryDeviceMigrationNode(v34, a2[1], &v31);
    if ( inited < 0 )
    {
      v31 = 0LL;
      if ( inited == -1073741772 )
        inited = 0;
    }
    else
    {
      v11 = v31;
      v31[23] = 0LL;
    }
    if ( v11 )
      goto LABEL_52;
  }
  if ( *(_QWORD *)(a1 + 16) == IopRootDeviceNode )
  {
LABEL_73:
    PiDevCfgClearDeviceMigrationNode((__int64 *)v34, (const WCHAR *)a2[1]);
    goto LABEL_74;
  }
  if ( !a2[8] )
    goto LABEL_45;
  v14 = v34[4];
  if ( !v34[4] )
  {
    v15 = 0LL;
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v15 = **(_QWORD **)&PiPnpRtlCtx;
    v16 = SysCtxRegOpenKey(v15, (__int64)v34[0], (__int64)L"Locations", 0, 0x20019u, (__int64)&v34[4]);
    if ( v16 == -1073741772 )
    {
      v34[4] = 0LL;
      goto LABEL_45;
    }
    if ( v16 < 0 )
    {
      inited = v16;
      goto LABEL_76;
    }
    v14 = v34[4];
    if ( !v34[4] )
    {
LABEL_45:
      if ( v34[3] )
      {
        DeviceMigrationNode = PiDevCfgFindDeviceMigrationNode((__int64 *)v34, (__int64)a2, v34[3], 69665, &v31);
        inited = DeviceMigrationNode;
        if ( DeviceMigrationNode >= 0 )
        {
          v11 = v31;
        }
        else
        {
          v11 = 0LL;
          if ( DeviceMigrationNode == -1073741275 )
            inited = 0;
        }
        if ( v11 )
          goto LABEL_52;
      }
      goto LABEL_73;
    }
  }
  v17 = (_WORD *)a2[8];
  v18 = 0LL;
  if ( !*v17 )
    goto LABEL_43;
  while ( 1 )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v18 = **(_QWORD **)&PiPnpRtlCtx;
    v19 = SysCtxRegOpenKey(v18, (__int64)v14, (__int64)v17, 0, 0x20019u, (__int64)&Handle);
    if ( v19 == -1073741772 )
    {
      v18 = 0LL;
      goto LABEL_37;
    }
    if ( v19 < 0 )
      break;
    inited = PiDevCfgFindDeviceMigrationNode((__int64 *)v34, (__int64)a2, Handle, 70145, &v31);
    ZwClose(Handle);
    v18 = 0LL;
    if ( inited >= 0 )
    {
      v11 = v31;
      goto LABEL_44;
    }
    v31 = 0LL;
    v11 = 0LL;
    if ( inited == -1073741275 )
      inited = 0;
LABEL_37:
    v20 = -1LL;
    do
      ++v20;
    while ( v17[v20] );
    v17 += v20 + 1;
    if ( !*v17 )
      goto LABEL_43;
    v14 = v34[4];
  }
  inited = v19;
LABEL_43:
  if ( inited >= 0 )
  {
LABEL_44:
    if ( !v11 )
      goto LABEL_45;
LABEL_52:
    v22 = *((_DWORD *)v11 + 4);
    if ( (v22 & 1) != 0 )
    {
      inited = -1073740007;
    }
    else if ( (v22 & 2) != 0 )
    {
      inited = -1073740719;
    }
    else
    {
      if ( IopGetRegistryValue((HANDLE)v11[5], L"ConfigFlags", 0, &v33) >= 0 )
      {
        if ( PnpValidateRegistryDword(v33) )
          v30 = *(unsigned int *)((char *)v23 + v23[2]);
        ExFreePoolWithTag(v23, 0);
      }
      v24 = a2[2];
      v25 = a2[1];
      LODWORD(a5) = 0;
      if ( (unsigned int)PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v25,
                           1u,
                           v24,
                           0LL,
                           (__int64)&DEVPKEY_Device_ClassGuid,
                           (__int64)&a6,
                           0LL,
                           0,
                           (__int64)&a5,
                           0) != -1073741789
        || (_DWORD)a6 != 13
        || (_DWORD)a5 != 16 )
      {
        if ( a3 )
          PiDevCfgSetDeviceRegProp(v26, (_DWORD)a2, 9, 1, *((_QWORD *)a3 + 1), *a3 + 2);
        else
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            (_DWORD)a2,
            a2[1],
            1,
            a2[2],
            v28,
            (__int64)&DEVPKEY_Device_ClassGuid,
            13,
            (__int64)(v11 + 10),
            16);
      }
      inited = PiDevCfgConfigureDeviceDriverConfiguration(a1, (__int64)a2, v11[5], -1, (__int64)v10, v12);
      if ( inited >= 0 )
      {
        if ( v10 )
          *v10 |= v30;
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          (_DWORD)a2,
          a2[1],
          1,
          a2[2],
          v29,
          (__int64)&DEVPKEY_Device_MigrationRank,
          9,
          (__int64)(v11 + 23),
          8);
      }
    }
    PiDevCfgLogDeviceMigrated((__int64)a2, (__int64)v11, (unsigned int)inited);
    if ( (v11[2] & 1) == 0 )
      PiDevCfgClearDeviceMigrationNode((__int64 *)v34, (const WCHAR *)v11[4]);
    if ( wcsicmp((const wchar_t *)a2[1], (const wchar_t *)v11[4]) )
      goto LABEL_73;
LABEL_74:
    if ( v11 )
      PiDevCfgFreeDeviceMigrationNode((__int64)v11);
  }
LABEL_76:
  PiDevCfgFreeMigrationContext((__int64)v34);
  return (unsigned int)inited;
}
