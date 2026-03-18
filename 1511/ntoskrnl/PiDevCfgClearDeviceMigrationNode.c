/*
 * XREFs of PiDevCfgClearDeviceMigrationNode @ 0x140607C34
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x140514B9C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140608318 (PiDevCfgFindDeviceMigrationNode.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x14012F998 (PnpValidateMultiSzData.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x1404C87C0 (RtlpQueryRegistryValues.c)
 *     _PnpCtxRegDeleteValue @ 0x1404EBE98 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegDeletePath @ 0x140692830 (_PnpCtxRegDeletePath.c)
 */

__int64 __fastcall PiDevCfgClearDeviceMigrationNode(__int64 *a1, const WCHAR *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  int v6; // eax
  int RegistryValues; // esi
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  wchar_t *Buffer; // rbx
  __int64 *v17; // rdi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING v26; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v28; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v29; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v30[28]; // [rsp+70h] [rbp-90h] BYREF

  v3 = a1[1];
  Handle = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v26.Length = 0;
  v26.Buffer = 0LL;
  v25 = 0;
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v5 = **(_QWORD **)&PiPnpRtlCtx;
  else
    v5 = 0LL;
  v6 = SysCtxRegOpenKey(v5, v3, (__int64)a2, 0, 0x20019u, (__int64)&Handle);
  RegistryValues = v6;
  if ( v6 == -1073741772 )
  {
LABEL_5:
    RegistryValues = 0;
    goto LABEL_42;
  }
  if ( v6 >= 0 )
  {
    memset(v30, 0, sizeof(v30));
    v30[2] = L"ClassGuid";
    LODWORD(v30[4]) = 0x1000000;
    LODWORD(v30[1]) = 288;
    v30[3] = &UnicodeString;
    LODWORD(v30[15]) = 288;
    v30[9] = L"LocationPaths";
    LODWORD(v30[11]) = 117440512;
    v30[10] = &v26;
    v30[16] = L"Persist";
    v30[17] = &v25;
    LODWORD(v30[8]) = 304;
    LODWORD(v30[18]) = 0x4000000;
    RegistryValues = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)Handle, (__int64)v30, 0LL);
    if ( RegistryValues >= 0 )
    {
      if ( !UnicodeString.Length && UnicodeString.Buffer )
        RtlFreeAnsiString(&UnicodeString);
      if ( v26.Buffer && !(unsigned __int8)PnpValidateMultiSzData(v26.Buffer, v26.Length) )
        RtlFreeAnsiString(&v26);
      if ( v25 )
        goto LABEL_5;
      ZwClose(Handle);
      v8 = a1[1];
      LOBYTE(v9) = 1;
      Handle = 0LL;
      PnpCtxRegDeletePath(v10, v8, a2, v9);
      v12 = (void *)a1[3];
      if ( v12 )
        PnpCtxRegDeleteValue(v11, v12, a2);
      v13 = a1[2];
      if ( v13 && UnicodeString.Buffer )
      {
        v14 = 0LL;
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v14 = **(_QWORD **)&PiPnpRtlCtx;
        if ( (int)SysCtxRegOpenKey(v14, v13, (__int64)UnicodeString.Buffer, 0, 0xF003Fu, (__int64)&v29) >= 0 )
        {
          PnpCtxRegDeleteValue(v15, v29, a2);
          ZwClose(v29);
        }
        PnpCtxRegDeletePath(v15, a1[2], UnicodeString.Buffer, 0LL);
      }
      Buffer = v26.Buffer;
      if ( v26.Buffer )
      {
        v17 = a1 + 4;
        if ( !a1[4] )
        {
          v18 = 0LL;
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v18 = **(_QWORD **)&PiPnpRtlCtx;
          v19 = SysCtxRegOpenKey(v18, *a1, (__int64)L"Locations", 0, 0xF003Fu, (__int64)(a1 + 4));
          if ( v19 == -1073741772 )
          {
            *v17 = 0LL;
          }
          else if ( v19 < 0 )
          {
            RegistryValues = v19;
            goto LABEL_42;
          }
          Buffer = v26.Buffer;
          if ( !*v17 )
            goto LABEL_42;
        }
        while ( *Buffer )
        {
          v20 = 0LL;
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v20 = **(_QWORD **)&PiPnpRtlCtx;
          if ( (int)SysCtxRegOpenKey(v20, *v17, (__int64)Buffer, 0, 0xF003Fu, (__int64)&v28) >= 0 )
          {
            PnpCtxRegDeleteValue(v21, v28, a2);
            ZwClose(v28);
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
  RtlFreeAnsiString(&v26);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegistryValues;
}
