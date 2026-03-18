/*
 * XREFs of PiDevCfgQueryDeviceMigrationNode @ 0x14068822C
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x140589F68 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14068606C (PiDevCfgFindDeviceMigrationNode.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x1404AA43C (RtlpQueryRegistryValues.c)
 *     RtlCreateUnicodeString @ 0x1404FFE30 (RtlCreateUnicodeString.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x140686C6C (PiDevCfgFreeDeviceMigrationNode.c)
 */

__int64 __fastcall PiDevCfgQueryDeviceMigrationNode(__int64 a1, const WCHAR *a2, __int64 *a3)
{
  unsigned int v3; // r14d
  char *v5; // rdx
  __int64 v6; // rcx
  int RegistryValues; // edi
  PVOID PoolWithTag; // rax
  __int64 v9; // rbx
  _DWORD *v10; // rcx
  __int64 v11; // r9
  wchar_t **v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  _QWORD *v15; // rsi
  __int64 v17; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING GuidString; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v20; // [rsp+48h] [rbp-B8h]
  _QWORD v21[70]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = 0;
  v20 = a3;
  Handle = 0LL;
  v5 = *(char **)(a1 + 8);
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v6 = **(_QWORD **)&PiPnpRtlCtx;
  else
    v6 = 0LL;
  RegistryValues = SysCtxRegOpenKey(v6, v5, a2, 0, 0x20019u, &Handle);
  if ( RegistryValues >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xC0uLL, 0x63647050u);
    v9 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      RegistryValues = -1073741670;
      goto LABEL_34;
    }
    memset(PoolWithTag, 0, 0xC0uLL);
    *(_QWORD *)(v9 + 184) = -1LL;
    if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v9 + 24), a2) )
    {
      RegistryValues = -1073741670;
LABEL_33:
      PiDevCfgFreeDeviceMigrationNode(v9);
      goto LABEL_34;
    }
    *(_QWORD *)(v9 + 40) = Handle;
    Handle = 0LL;
    memset(v21, 0, sizeof(v21));
    v10 = &v21[4];
    v11 = 2LL;
    v12 = &off_140721EF0;
    v13 = v9 + 48;
    do
    {
      v14 = (__int64)*v12++;
      *((_QWORD *)v10 - 1) = v13;
      v13 += 16LL;
      *((_QWORD *)v10 - 2) = v14;
      *v10 = 117440512;
      *(v10 - 6) = 304;
      v10 += 14;
      --v11;
    }
    while ( v11 );
    LODWORD(v21[46]) = 117440512;
    LODWORD(v21[15]) = 288;
    LODWORD(v21[22]) = 288;
    LODWORD(v21[25]) = 0x4000000;
    v21[16] = L"ClassGuid";
    LODWORD(v21[29]) = 288;
    v21[17] = &GuidString;
    LODWORD(v21[36]) = 288;
    v21[23] = L"Capabilities";
    LODWORD(v21[50]) = 288;
    v21[24] = v9 + 96;
    v21[30] = L"BusDeviceDesc";
    v21[37] = L"LocationInfo";
    v21[38] = v9 + 120;
    v21[44] = L"LocationPaths";
    v21[51] = L"DriverInfName";
    v21[58] = L"Present";
    LODWORD(v21[60]) = 0x4000000;
    LODWORD(v21[57]) = 288;
    v21[59] = v9 + 176;
    LODWORD(v21[18]) = 0x1000000;
    LODWORD(v21[32]) = 0x1000000;
    v21[31] = v9 + 104;
    LODWORD(v21[39]) = 0x1000000;
    v21[45] = v9 + 136;
    LODWORD(v21[43]) = 304;
    LODWORD(v21[53]) = 0x1000000;
    v21[52] = v9 + 160;
    LOBYTE(v17) = 1;
    RegistryValues = RtlpQueryRegistryValues(3221225472LL, *(const WCHAR **)(v9 + 40), (__int64)v21, 0LL, 0LL, v17);
    if ( RegistryValues < 0 )
      goto LABEL_33;
    if ( !GuidString.Buffer || RtlGUIDFromString(&GuidString, (GUID *)(v9 + 80)) < 0 )
    {
      RegistryValues = -1073741772;
      goto LABEL_33;
    }
    v15 = (_QWORD *)(v9 + 56);
    do
    {
      if ( *((_WORD *)v15 - 4) <= 2u && *v15 )
        RtlFreeAnsiString((PUNICODE_STRING)(v9 + 16 * (v3 + 3LL)));
      ++v3;
      v15 += 2;
    }
    while ( v3 < 2 );
    if ( !*(_WORD *)(v9 + 104) && *(_QWORD *)(v9 + 112) )
      RtlFreeAnsiString((PUNICODE_STRING)(v9 + 104));
    if ( !*(_WORD *)(v9 + 120) && *(_QWORD *)(v9 + 128) )
      RtlFreeAnsiString((PUNICODE_STRING)(v9 + 120));
    if ( *(_WORD *)(v9 + 136) <= 2u && *(_QWORD *)(v9 + 144) )
      RtlFreeAnsiString((PUNICODE_STRING)(v9 + 136));
    if ( !*(_WORD *)(v9 + 160) && *(_QWORD *)(v9 + 168) )
      RtlFreeAnsiString((PUNICODE_STRING)(v9 + 160));
    *v20 = v9;
  }
LABEL_34:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeAnsiString(&GuidString);
  return (unsigned int)RegistryValues;
}
