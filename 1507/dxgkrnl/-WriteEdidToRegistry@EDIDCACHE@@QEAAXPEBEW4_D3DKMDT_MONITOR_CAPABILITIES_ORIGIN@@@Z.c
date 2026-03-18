/*
 * XREFs of ?WriteEdidToRegistry@EDIDCACHE@@QEAAXPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C014194C
 * Callers:
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00DBF78 (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C009F3E8 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

void __fastcall EDIDCACHE::WriteEdidToRegistry(
        EDIDCACHE *this,
        unsigned __int8 *a2,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN a3)
{
  __int64 v4; // rdx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  const WCHAR *v14; // rdi
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  NTSTATUS v21; // eax
  _QWORD *v22; // rax
  unsigned __int8 *ValueData; // [rsp+20h] [rbp-38h]
  struct _UNICODE_STRING v24; // [rsp+30h] [rbp-28h] BYREF
  EDIDCACHE *v25; // [rsp+60h] [rbp+8h] BYREF
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v26; // [rsp+70h] [rbp+18h] BYREF
  PCWSTR Path; // [rsp+78h] [rbp+20h] BYREF

  v26 = a3;
  v25 = this;
  Path = 0LL;
  RtlInitUnicodeString(
    &v24,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid");
  v5 = OpenRegistrySubkey((PHANDLE)&Path, v4, 0LL, &v24, (unsigned int *)&v25);
  v10 = v5;
  if ( v5 >= 0 )
  {
    v12 = Path;
    if ( !Path )
    {
      v13 = WdLogNewEntry5_WdAssertion(v7, 0LL, v8, v9);
      *(_QWORD *)(v13 + 24) = 209LL;
      WdLogEvent5_WdAssertion(v13);
      v12 = Path;
    }
    ValueData = a2;
    v14 = L"EDID";
    v15 = RtlWriteRegistryValue(0x40000000u, v12, L"EDID", 3u, ValueData, 0x80u);
    v20 = v15;
    if ( v15 < 0
      || (v14 = L"Origin", v21 = RtlWriteRegistryValue(0x40000000u, Path, L"Origin", 4u, &v26, 4u), v20 = v21, v21 < 0) )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      v22[3] = v20;
      v22[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
      v22[5] = v14;
      WdLogEvent5_WdWarning(v22);
    }
    ZwClose((HANDLE)Path);
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = v10;
    *(_QWORD *)(v11 + 32) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
    WdLogEvent5_WdWarning(v11);
  }
}
