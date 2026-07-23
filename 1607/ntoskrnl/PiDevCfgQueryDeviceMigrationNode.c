/*
 * XREFs of PiDevCfgQueryDeviceMigrationNode @ 0x14063BAA8
 * Callers:
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406383DC (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMigrateDevice @ 0x14063A918 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpValidateMultiSzData @ 0x1401CF37C (PnpValidateMultiSzData.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1403F64A4 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x140638D48 (PiDevCfgFreeDeviceMigrationNode.c)
 */

__int64 __fastcall PiDevCfgQueryDeviceMigrationNode(__int64 a1, const WCHAR *a2, __int64 *a3)
{
  unsigned int v3; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  int RegistryValues; // edi
  PVOID PoolWithTag; // rax
  __int64 v9; // rbx
  _DWORD *v10; // rcx
  __int64 v11; // r9
  wchar_t **v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  const WCHAR *v15; // rdx
  _QWORD *v16; // rsi
  _WORD *v17; // rcx
  UNICODE_STRING *v18; // r9
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING GuidString; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v22; // [rsp+48h] [rbp-B8h]
  _QWORD v23[70]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = 0;
  v22 = a3;
  Handle = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v6 = **(_QWORD **)&PiPnpRtlCtx;
  else
    v6 = 0LL;
  RegistryValues = SysCtxRegOpenKey(v6, v5, (__int64)a2, 0, 0x20019u, (__int64)&Handle);
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
    memset(v23, 0, sizeof(v23));
    v10 = &v23[4];
    v11 = 2LL;
    v12 = &off_1406E9E68;
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
    LODWORD(v23[46]) = 117440512;
    LODWORD(v23[15]) = 288;
    LODWORD(v23[18]) = 0x1000000;
    LODWORD(v23[25]) = 0x4000000;
    v23[16] = L"ClassGuid";
    LODWORD(v23[22]) = 288;
    v23[17] = &GuidString;
    LODWORD(v23[32]) = 0x1000000;
    v23[23] = L"Capabilities";
    LODWORD(v23[29]) = 288;
    v23[24] = v9 + 96;
    v23[30] = L"BusDeviceDesc";
    v23[37] = L"LocationInfo";
    v23[44] = L"LocationPaths";
    v23[45] = v9 + 136;
    v23[51] = L"DriverInfName";
    v23[58] = L"Present";
    LODWORD(v23[39]) = 0x1000000;
    LODWORD(v23[36]) = 288;
    LODWORD(v23[53]) = 0x1000000;
    v15 = *(const WCHAR **)(v9 + 40);
    LODWORD(v23[50]) = 288;
    LODWORD(v23[60]) = 0x4000000;
    LODWORD(v23[57]) = 288;
    v23[59] = v9 + 176;
    v23[31] = v9 + 104;
    v23[38] = v9 + 120;
    LODWORD(v23[43]) = 304;
    v23[52] = v9 + 160;
    RegistryValues = RtlpQueryRegistryValues(3221225472LL, v15, (__int64)v23, 0LL);
    if ( RegistryValues < 0 )
      goto LABEL_33;
    if ( !GuidString.Buffer || RtlGUIDFromString(&GuidString, (GUID *)(v9 + 80)) < 0 )
    {
      RegistryValues = -1073741772;
      goto LABEL_33;
    }
    v16 = (_QWORD *)(v9 + 56);
    do
    {
      if ( *((_WORD *)v16 - 4) <= 2u && *v16 )
        RtlFreeAnsiString((PUNICODE_STRING)(v9 + 16 * (v3 + 3LL)));
      ++v3;
      v16 += 2;
    }
    while ( v3 < 2 );
    if ( !*(_WORD *)(v9 + 104) && *(_QWORD *)(v9 + 112) )
      RtlFreeAnsiString((PUNICODE_STRING)(v9 + 104));
    if ( !*(_WORD *)(v9 + 120) && *(_QWORD *)(v9 + 128) )
      RtlFreeAnsiString((PUNICODE_STRING)(v9 + 120));
    v17 = *(_WORD **)(v9 + 144);
    if ( v17 && !(unsigned __int8)PnpValidateMultiSzData(v17, *(unsigned __int16 *)(v9 + 136)) )
      RtlFreeAnsiString(v18);
    if ( !*(_WORD *)(v9 + 160) && *(_QWORD *)(v9 + 168) )
      RtlFreeAnsiString((PUNICODE_STRING)(v9 + 160));
    *v22 = v9;
  }
LABEL_34:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeAnsiString(&GuidString);
  return (unsigned int)RegistryValues;
}
