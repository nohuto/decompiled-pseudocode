/*
 * XREFs of PiDevCfgMigrateDevice @ 0x140589F68
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x140589A64 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     PiDevCfgSetObjectProperty @ 0x140589E38 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgFreeMigrationContext @ 0x14058A034 (PiDevCfgFreeMigrationContext.c)
 *     PiDevCfgInitMigrationContext @ 0x14058A050 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140682F40 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x140683360 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14068606C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x140686C6C (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgLogDeviceMigrated @ 0x140687A0C (PiDevCfgLogDeviceMigrated.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14068822C (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14068CBF4 (PiDevCfgSetDeviceRegProp.c)
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
  char *v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  const WCHAR *v17; // r14
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  int DeviceMigrationNode; // eax
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // [rsp+30h] [rbp-71h]
  int v26; // [rsp+30h] [rbp-71h]
  int v27; // [rsp+68h] [rbp-39h]
  __int64 v28; // [rsp+70h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-29h] BYREF
  PVOID P; // [rsp+80h] [rbp-21h] BYREF
  char *v31[8]; // [rsp+88h] [rbp-19h] BYREF
  int v32; // [rsp+F8h] [rbp+57h]

  v32 = a1;
  memset(v31, 0, 56);
  v9 = a5;
  v10 = 0LL;
  v28 = 0LL;
  Handle = 0LL;
  v27 = 0;
  P = 0LL;
  if ( a5 )
    *a5 = 0;
  v11 = (__int64)a6;
  if ( a6 )
    *a6 = 0;
  inited = PiDevCfgInitMigrationContext(a3, a4, v31);
  if ( inited < 0 )
    goto LABEL_8;
  if ( !v31[0] )
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
    goto LABEL_75;
  }
  if ( v31[1] )
  {
    inited = PiDevCfgQueryDeviceMigrationNode(v31, *(_QWORD *)(a2 + 8), &v28);
    if ( inited < 0 )
    {
      v28 = 0LL;
      if ( inited == -1073741772 )
        inited = 0;
    }
    else
    {
      v10 = v28;
      *(_QWORD *)(v28 + 184) = 0LL;
    }
    if ( v10 )
      goto LABEL_53;
  }
  if ( *(_QWORD *)(a1 + 16) == IopRootDeviceNode )
  {
LABEL_75:
    PiDevCfgClearDeviceMigrationNode(v31, *(_QWORD *)(a2 + 8));
    goto LABEL_76;
  }
  if ( !*(_QWORD *)(a2 + 64) )
    goto LABEL_46;
  v14 = v31[4];
  if ( !v31[4] )
  {
    v15 = 0LL;
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v15 = **(_QWORD **)&PiPnpRtlCtx;
    v16 = SysCtxRegOpenKey(v15, v31[0], L"Locations", 0, 0x20019u, (HANDLE *)&v31[4]);
    if ( v16 == -1073741772 )
    {
      v31[4] = 0LL;
      goto LABEL_46;
    }
    if ( v16 < 0 )
    {
      inited = v16;
      goto LABEL_8;
    }
    v14 = v31[4];
    if ( !v31[4] )
    {
LABEL_46:
      if ( v31[3] )
      {
        DeviceMigrationNode = PiDevCfgFindDeviceMigrationNode(v31, a2, v31[3], 69665LL, &v28);
        inited = DeviceMigrationNode;
        if ( DeviceMigrationNode >= 0 )
        {
          v10 = v28;
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
      goto LABEL_75;
    }
  }
  v17 = *(const WCHAR **)(a2 + 64);
  v18 = 0LL;
  if ( !*v17 )
    goto LABEL_44;
  while ( 1 )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v18 = **(_QWORD **)&PiPnpRtlCtx;
    v19 = SysCtxRegOpenKey(v18, v14, v17, 0, 0x20019u, &Handle);
    if ( v19 == -1073741772 )
    {
      v18 = 0LL;
      goto LABEL_38;
    }
    if ( v19 < 0 )
      break;
    inited = PiDevCfgFindDeviceMigrationNode(v31, a2, Handle, 70145LL, &v28);
    ZwClose(Handle);
    v18 = 0LL;
    if ( inited >= 0 )
    {
      v10 = v28;
      goto LABEL_45;
    }
    v28 = 0LL;
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
    v14 = v31[4];
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
      if ( IopGetRegistryValue(*(HANDLE *)(v10 + 40), L"ConfigFlags", 0, &P) >= 0 )
      {
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
          v27 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(P, 0);
      }
      v23 = *(_QWORD *)(a2 + 16);
      v24 = *(_QWORD *)(a2 + 8);
      LODWORD(a5) = 0;
      if ( (unsigned int)PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v24,
                           1u,
                           v23,
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
          PiDevCfgSetDeviceRegProp(PiPnpRtlCtx, a2, 9, 1, *((_QWORD *)a3 + 1), *a3 + 2);
        else
          PiDevCfgSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            (_BYTE *)a2,
            *(_QWORD *)(a2 + 8),
            1u,
            *(_QWORD *)(a2 + 16),
            v25,
            (__int64)&DEVPKEY_Device_ClassGuid,
            13,
            v10 + 80,
            0x10u);
      }
      inited = PiDevCfgConfigureDeviceDriverConfiguration(v32, a2, *(_QWORD *)(v10 + 40), -1, v9, v11);
      if ( inited >= 0 )
      {
        if ( v9 )
          *v9 |= v27;
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          (_BYTE *)a2,
          *(_QWORD *)(a2 + 8),
          1u,
          *(_QWORD *)(a2 + 16),
          v26,
          (__int64)&DEVPKEY_Device_MigrationRank,
          9,
          v10 + 184,
          8u);
      }
    }
    PiDevCfgLogDeviceMigrated(a2, v10, (unsigned int)inited);
    if ( (*(_DWORD *)(v10 + 16) & 1) == 0 )
      PiDevCfgClearDeviceMigrationNode(v31, *(_QWORD *)(v10 + 32));
    if ( wcsicmp(*(const wchar_t **)(a2 + 8), *(const wchar_t **)(v10 + 32)) )
      goto LABEL_75;
LABEL_76:
    if ( v10 )
      PiDevCfgFreeDeviceMigrationNode(v10);
  }
LABEL_8:
  PiDevCfgFreeMigrationContext(v31);
  return (unsigned int)inited;
}
