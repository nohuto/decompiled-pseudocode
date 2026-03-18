/*
 * XREFs of PiDevCfgClearDeviceMigrationNode @ 0x140682F40
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x140589F68 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14068606C (PiDevCfgFindDeviceMigrationNode.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x1404AA43C (RtlpQueryRegistryValues.c)
 *     _PnpCtxRegDeleteValue @ 0x140564078 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegDeletePath @ 0x1407123D0 (_PnpCtxRegDeletePath.c)
 */

__int64 __fastcall PiDevCfgClearDeviceMigrationNode(__int64 a1, const WCHAR *a2)
{
  char *v3; // rdx
  __int64 v5; // rcx
  int v6; // eax
  int RegistryValues; // esi
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rdx
  char *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  wchar_t *Buffer; // rbx
  char **v17; // rdi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v24; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING v27; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v29; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v30; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v31[28]; // [rsp+70h] [rbp-90h] BYREF

  v3 = *(char **)(a1 + 8);
  Handle = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v27.Length = 0;
  v27.Buffer = 0LL;
  v26 = 0;
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v5 = **(_QWORD **)&PiPnpRtlCtx;
  else
    v5 = 0LL;
  v6 = SysCtxRegOpenKey(v5, v3, a2, 0, 0x20019u, &Handle);
  RegistryValues = v6;
  if ( v6 == -1073741772 )
  {
LABEL_5:
    RegistryValues = 0;
    goto LABEL_42;
  }
  if ( v6 >= 0 )
  {
    memset(v31, 0, sizeof(v31));
    v31[2] = L"ClassGuid";
    LOBYTE(v24) = 1;
    LODWORD(v31[1]) = 288;
    v31[3] = &UnicodeString;
    LODWORD(v31[15]) = 288;
    v31[9] = L"LocationPaths";
    LODWORD(v31[4]) = 0x1000000;
    v31[10] = &v27;
    v31[16] = L"Persist";
    v31[17] = &v26;
    LODWORD(v31[11]) = 117440512;
    LODWORD(v31[8]) = 304;
    LODWORD(v31[18]) = 0x4000000;
    RegistryValues = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)Handle, (__int64)v31, 0LL, 0LL, v24);
    if ( RegistryValues >= 0 )
    {
      if ( !UnicodeString.Length && UnicodeString.Buffer )
        RtlFreeAnsiString(&UnicodeString);
      if ( v27.Length <= 2u && v27.Buffer )
        RtlFreeAnsiString(&v27);
      if ( v26 )
        goto LABEL_5;
      ZwClose(Handle);
      v8 = *(_QWORD *)(a1 + 8);
      LOBYTE(v9) = 1;
      Handle = 0LL;
      PnpCtxRegDeletePath(v10, v8, a2, v9);
      v12 = *(void **)(a1 + 24);
      if ( v12 )
        PnpCtxRegDeleteValue(v11, v12, a2);
      v13 = *(char **)(a1 + 16);
      if ( v13 && UnicodeString.Buffer )
      {
        v14 = 0LL;
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v14 = **(_QWORD **)&PiPnpRtlCtx;
        if ( (int)SysCtxRegOpenKey(v14, v13, UnicodeString.Buffer, 0, 0xF003Fu, &v30) >= 0 )
        {
          PnpCtxRegDeleteValue(v15, v30, a2);
          ZwClose(v30);
        }
        PnpCtxRegDeletePath(v15, *(_QWORD *)(a1 + 16), UnicodeString.Buffer, 0LL);
      }
      Buffer = v27.Buffer;
      if ( v27.Buffer )
      {
        v17 = (char **)(a1 + 32);
        if ( !*(_QWORD *)(a1 + 32) )
        {
          v18 = 0LL;
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v18 = **(_QWORD **)&PiPnpRtlCtx;
          v19 = SysCtxRegOpenKey(v18, *(char **)a1, L"Locations", 0, 0xF003Fu, (HANDLE *)(a1 + 32));
          if ( v19 == -1073741772 )
          {
            *v17 = 0LL;
          }
          else if ( v19 < 0 )
          {
            RegistryValues = v19;
            goto LABEL_42;
          }
          Buffer = v27.Buffer;
          if ( !*v17 )
            goto LABEL_42;
        }
        while ( *Buffer )
        {
          v20 = 0LL;
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v20 = **(_QWORD **)&PiPnpRtlCtx;
          if ( (int)SysCtxRegOpenKey(v20, *v17, Buffer, 0, 0xF003Fu, &v29) >= 0 )
          {
            PnpCtxRegDeleteValue(v21, v29, a2);
            ZwClose(v29);
          }
          PnpCtxRegDeletePath(v21, *v17, Buffer, 0LL);
          v22 = -1LL;
          do
            ++v22;
          while ( Buffer[v22] );
          Buffer += v22 + 1;
        }
      }
    }
  }
LABEL_42:
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v27);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegistryValues;
}
