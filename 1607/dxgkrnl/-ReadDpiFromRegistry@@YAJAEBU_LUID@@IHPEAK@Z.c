/*
 * XREFs of ?ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C00B8DD0
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00C5BF0 (DxgkUpdateGdiInfo.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C00DBAF0 (DxgkGetDpiOverrideForSource.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00B8C0C (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C00B8CA0 (-WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00B9FF8 (-AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall ReadDpiFromRegistry(const struct _LUID *a1, unsigned int a2, int a3, unsigned int *a4)
{
  struct DXGSESSIONDATA *v5; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  const WCHAR *v16; // rdx
  __int64 v17; // rdx
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  HANDLE v21; // r8
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  const unsigned __int16 *v26; // r9
  HANDLE v28; // r8
  NTSTATUS v29; // eax
  HANDLE v30; // rbx
  int v31; // eax
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  HANDLE v39; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-69h] BYREF
  struct _UNICODE_STRING v41; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v42; // [rsp+60h] [rbp-49h] BYREF
  __int64 v43; // [rsp+70h] [rbp-39h] BYREF
  int v44; // [rsp+78h] [rbp-31h]
  const WCHAR *v45; // [rsp+80h] [rbp-29h]
  unsigned int *v46; // [rsp+88h] [rbp-21h]
  int v47; // [rsp+90h] [rbp-19h]
  unsigned int *v48; // [rsp+98h] [rbp-11h]
  int v49; // [rsp+A0h] [rbp-9h]
  __int64 v50; // [rsp+A8h] [rbp-1h]
  int v51; // [rsp+B0h] [rbp+7h]
  _BYTE v52[40]; // [rsp+B8h] [rbp+Fh] BYREF
  unsigned int v53; // [rsp+120h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+7Fh] BYREF

  v53 = 0;
  *a4 = 0;
  v5 = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v39 = 0LL;
  LODWORD(v8) = AllocateMonitorSetIdFromAdapterSource(a1, a2, &v42);
  if ( (int)v8 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v7);
    SessionData = DXGGLOBAL::GetSessionData(Global);
    v5 = SessionData;
    if ( !SessionData )
    {
      v32 = WdLogNewEntry5_WdError(v12);
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v32 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
      *(_QWORD *)(v32 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v32);
      goto LABEL_12;
    }
    if ( *((_QWORD *)SessionData + 2326) )
    {
      v15 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
      v16 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
      *(_QWORD *)(v15 + 24) = 961LL;
      v41 = *(struct _UNICODE_STRING *)((char *)v5 + 18600);
    }
    else
    {
      if ( *((_WORD *)SessionData + 9300) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v33 + 24) = 952LL;
        WdLogEvent5_WdAssertion(v33);
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = 953LL;
      RtlInitUnicodeString(&v41, L"\\Registry\\Machine\\System");
      v16 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
    }
    RtlInitUnicodeString(&DestinationString, v16);
    v18 = OpenRegistrySubkey(&Handle, v17, 0LL, &v41, 0LL);
    v8 = v18;
    if ( v18 >= 0 )
    {
      v21 = Handle;
      if ( !Handle )
      {
        v34 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v34 + 24) = 981LL;
        WdLogEvent5_WdAssertion(v34);
        v21 = Handle;
      }
      v22 = OpenRegistrySubkey(&KeyHandle, v19, v21, &DestinationString, 0LL);
      v8 = v22;
      if ( v22 < 0 )
        goto LABEL_9;
      v28 = KeyHandle;
      if ( !KeyHandle )
      {
        v35 = WdLogNewEntry5_WdAssertion(v24);
        *(_QWORD *)(v35 + 24) = 997LL;
        WdLogEvent5_WdAssertion(v35);
        v28 = KeyHandle;
      }
      v29 = OpenRegistrySubkey(&v39, v23, v28, &v42, 0LL);
      v8 = v29;
      if ( v29 < 0 )
      {
LABEL_9:
        v25 = WdLogNewEntry5_WdEvent(v24);
        *(_QWORD *)(v25 + 24) = v8;
        WdLogEvent5_WdEvent(v25);
        goto LABEL_10;
      }
      v30 = v39;
      if ( !v39 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v24);
        *(_QWORD *)(v36 + 24) = 1013LL;
        WdLogEvent5_WdAssertion(v36);
        v30 = v39;
      }
      v43 = 0LL;
      v44 = 288;
      v45 = L"DpiValue";
      v46 = a4;
      v47 = 67108868;
      v48 = &v53;
      v49 = 4;
      v50 = 0LL;
      v51 = 0;
      memset(v52, 0, sizeof(v52));
      v31 = RtlQueryRegistryValuesEx(0x40000000LL, v30, &v43, 0LL, 0LL);
      v8 = v31;
      if ( v31 >= 0 )
        goto LABEL_10;
    }
    v37 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v37 + 24) = v8;
    WdLogEvent5_WdError(v37);
  }
LABEL_10:
  if ( (_DWORD)v8 == -1073741772 )
  {
    LODWORD(v8) = 0;
    *a4 = v53;
  }
LABEL_12:
  if ( a3 && (int)v8 >= 0 && v5 && *((_QWORD *)v5 + 2326) )
  {
    RtlInitUnicodeString(&v41, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&DestinationString, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    WriteDwordToParticularRegValue(&v41, &DestinationString, &v42, v26, *a4);
  }
  operator delete(v42.Buffer);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v39 )
    ZwClose(v39);
  return (unsigned int)v8;
}
