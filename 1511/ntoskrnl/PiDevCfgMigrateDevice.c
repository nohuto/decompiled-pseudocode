/*
 * XREFs of PiDevCfgMigrateDevice @ 0x140514B9C
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x140609150 (PiDevCfgMigrateRootDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x14060D8F8 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x14012C1B4 (PnpValidateRegistryDword.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     PiDevCfgSetObjectProperty @ 0x140512D8C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x140513F58 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgFreeMigrationContext @ 0x140514C64 (PiDevCfgFreeMigrationContext.c)
 *     PiDevCfgInitMigrationContext @ 0x140514C80 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140514F8C (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140607C34 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140608318 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x140608C88 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgLogDeviceMigrated @ 0x140608E74 (PiDevCfgLogDeviceMigrated.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140609340 (PiDevCfgQueryDeviceMigrationNode.c)
 */

__int64 __fastcall PiDevCfgMigrateDevice(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6)
{
  _DWORD *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // r12
  int inited; // ebx
  __int64 v14; // rdx
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
  int v27; // [rsp+30h] [rbp-71h]
  int v28; // [rsp+30h] [rbp-71h]
  int v29; // [rsp+68h] [rbp-39h]
  __int64 v30; // [rsp+70h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-29h] BYREF
  __int64 v32; // [rsp+80h] [rbp-21h] BYREF
  __int64 v33[8]; // [rsp+88h] [rbp-19h] BYREF

  memset(v33, 0, 56);
  v9 = a5;
  v10 = 0LL;
  v30 = 0LL;
  Handle = 0LL;
  v29 = 0;
  v32 = 0LL;
  if ( a5 )
    *a5 = 0;
  v11 = (__int64)a6;
  if ( a6 )
    *a6 = 0;
  inited = PiDevCfgInitMigrationContext(a3, a4, v33);
  if ( inited < 0 )
    goto LABEL_8;
  if ( !v33[0] )
  {
    inited = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(a2 + 8),
                       1u,
                       *(_QWORD *)(a2 + 16),
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
    goto LABEL_74;
  }
  if ( v33[1] )
  {
    inited = PiDevCfgQueryDeviceMigrationNode(v33, *(_QWORD *)(a2 + 8), &v30);
    if ( inited < 0 )
    {
      v30 = 0LL;
      if ( inited == -1073741772 )
        inited = 0;
    }
    else
    {
      v10 = v30;
      *(_QWORD *)(v30 + 184) = 0LL;
    }
    if ( v10 )
      goto LABEL_53;
  }
  if ( *(_QWORD *)(a1 + 16) == IopRootDeviceNode )
  {
LABEL_74:
    PiDevCfgClearDeviceMigrationNode(v33, *(_QWORD *)(a2 + 8));
    goto LABEL_75;
  }
  if ( !*(_QWORD *)(a2 + 64) )
    goto LABEL_46;
  v14 = v33[4];
  if ( !v33[4] )
  {
    v15 = 0LL;
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v15 = **(_QWORD **)&PiPnpRtlCtx;
    v16 = SysCtxRegOpenKey(v15, v33[0], (__int64)L"Locations", 0, 0x20019u, (__int64)&v33[4]);
    if ( v16 == -1073741772 )
    {
      v33[4] = 0LL;
      goto LABEL_46;
    }
    if ( v16 < 0 )
    {
      inited = v16;
      goto LABEL_8;
    }
    v14 = v33[4];
    if ( !v33[4] )
    {
LABEL_46:
      if ( v33[3] )
      {
        DeviceMigrationNode = PiDevCfgFindDeviceMigrationNode(v33, a2, v33[3], 69665LL, &v30);
        inited = DeviceMigrationNode;
        if ( DeviceMigrationNode >= 0 )
        {
          v10 = v30;
        }
        else
        {
          v10 = 0LL;
          if ( DeviceMigrationNode == -1073741275 )
            inited = 0;
        }
        if ( v10 )
          goto LABEL_53;
      }
      goto LABEL_74;
    }
  }
  v17 = *(_WORD **)(a2 + 64);
  v18 = 0LL;
  if ( !*v17 )
    goto LABEL_44;
  while ( 1 )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v18 = **(_QWORD **)&PiPnpRtlCtx;
    v19 = SysCtxRegOpenKey(v18, v14, (__int64)v17, 0, 0x20019u, (__int64)&Handle);
    if ( v19 == -1073741772 )
    {
      v18 = 0LL;
      goto LABEL_38;
    }
    if ( v19 < 0 )
      break;
    inited = PiDevCfgFindDeviceMigrationNode(v33, a2, Handle, 70145LL, &v30);
    ZwClose(Handle);
    v18 = 0LL;
    if ( inited >= 0 )
    {
      v10 = v30;
      goto LABEL_45;
    }
    v30 = 0LL;
    v10 = 0LL;
    if ( inited == -1073741275 )
      inited = 0;
LABEL_38:
    v20 = -1LL;
    do
      ++v20;
    while ( v17[v20] );
    v17 += v20 + 1;
    if ( !*v17 )
      goto LABEL_44;
    v14 = v33[4];
  }
  inited = v19;
LABEL_44:
  if ( inited >= 0 )
  {
LABEL_45:
    if ( !v10 )
      goto LABEL_46;
LABEL_53:
    v22 = *(_DWORD *)(v10 + 16);
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
      if ( IopGetRegistryValue(*(HANDLE *)(v10 + 40), L"ConfigFlags", 0, &v32) >= 0 )
      {
        if ( PnpValidateRegistryDword(v32) )
          v29 = *(unsigned int *)((char *)v23 + v23[2]);
        ExFreePoolWithTag(v23, 0);
      }
      v24 = *(_QWORD *)(a2 + 16);
      v25 = *(_QWORD *)(a2 + 8);
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
          PiDevCfgSetDeviceRegProp(v26, a2, 9, 1, *((_QWORD *)a3 + 1), *a3 + 2);
        else
          PiDevCfgSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            (_BYTE *)a2,
            *(_QWORD *)(a2 + 8),
            1u,
            *(_QWORD *)(a2 + 16),
            v27,
            (__int64)&DEVPKEY_Device_ClassGuid,
            13,
            v10 + 80,
            0x10u);
      }
      inited = PiDevCfgConfigureDeviceDriverConfiguration(a1, a2, *(_QWORD *)(v10 + 40), -1, (__int64)v9, v11);
      if ( inited >= 0 )
      {
        if ( v9 )
          *v9 |= v29;
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          (_BYTE *)a2,
          *(_QWORD *)(a2 + 8),
          1u,
          *(_QWORD *)(a2 + 16),
          v28,
          (__int64)&DEVPKEY_Device_MigrationRank,
          9,
          v10 + 184,
          8u);
      }
    }
    PiDevCfgLogDeviceMigrated(a2, v10, (unsigned int)inited);
    if ( (*(_DWORD *)(v10 + 16) & 1) == 0 )
      PiDevCfgClearDeviceMigrationNode(v33, *(_QWORD *)(v10 + 32));
    if ( wcsicmp(*(const wchar_t **)(a2 + 8), *(const wchar_t **)(v10 + 32)) )
      goto LABEL_74;
LABEL_75:
    if ( v10 )
      PiDevCfgFreeDeviceMigrationNode(v10);
  }
LABEL_8:
  PiDevCfgFreeMigrationContext(v33);
  return (unsigned int)inited;
}
