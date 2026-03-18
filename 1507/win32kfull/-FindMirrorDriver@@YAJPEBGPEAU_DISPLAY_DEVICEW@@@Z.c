/*
 * XREFs of ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C02027C0
 * Callers:
 *     xxxRemoteConsoleShadowStart @ 0x1C0202F90 (xxxRemoteConsoleShadowStart.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C013AC8C (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall FindMirrorDriver(PCWSTR SourceString, struct _DISPLAY_DEVICEW *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  __int64 v5; // rax
  unsigned __int64 i; // rcx
  UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+78h] [rbp-88h]
  int v11; // [rsp+80h] [rbp-80h]
  __int64 v12; // [rsp+88h] [rbp-78h]
  __int64 v13; // [rsp+90h] [rbp-70h]
  int v14; // [rsp+98h] [rbp-68h]
  __int64 v15; // [rsp+A0h] [rbp-60h]
  int v16; // [rsp+A8h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR Path[133]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v19[6]; // [rsp+1CAh] [rbp+CAh] BYREF
  _BYTE v20[256]; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = 0;
  v4 = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  a2->cb = 840;
  if ( (int)DrvEnumDisplayDevices(0LL, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88LL) + 160LL), 0LL, a2, 0, 0) < 0 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    while ( 1 )
    {
      ++v4;
      if ( (a2->StateFlags & 8) != 0
        && (int)RtlStringCchCopyNW((char *)Path, 133LL, (char *)a2->DeviceKey, 0x80uLL) >= 0 )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( Path[v5] );
        for ( i = (unsigned __int64)&DestinationString.Buffer + 2 * v5 + 6; i > (unsigned __int64)Path; i -= 2LL )
        {
          if ( *(_WORD *)i == 92 )
            goto LABEL_11;
        }
        if ( *(_WORD *)i != 92 )
          goto LABEL_14;
LABEL_11:
        QueryTable.QueryRoutine = 0LL;
        QueryTable.Name = L"Service";
        QueryTable.Flags = 32;
        QueryTable.EntryContext = &String1;
        QueryTable.DefaultType = 0;
        QueryTable.DefaultData = 0LL;
        QueryTable.DefaultLength = 0;
        v10 = 0LL;
        v11 = 0;
        v12 = 0LL;
        v13 = 0LL;
        v14 = 0;
        v15 = 0LL;
        v16 = 0;
        if ( (int)RtlStringCchCopyW((char *)(i + 2), (__int64)&v19[-i - 2] >> 1, (char *)L"Video") >= 0 )
        {
          memset(v20, 0, sizeof(v20));
          *(_DWORD *)&String1.Length = 0x1000000;
          String1.Buffer = (PWSTR)v20;
          if ( RtlQueryRegistryValues(0, Path, &QueryTable, 0LL, 0LL) >= 0
            && !RtlCompareUnicodeString(&String1, &DestinationString, 1u) )
          {
            break;
          }
        }
      }
LABEL_14:
      if ( (int)DrvEnumDisplayDevices(0LL, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88LL) + 160LL), v4, a2, 0, 0) < 0 )
        return (unsigned int)-1073741823;
    }
  }
  return v3;
}
