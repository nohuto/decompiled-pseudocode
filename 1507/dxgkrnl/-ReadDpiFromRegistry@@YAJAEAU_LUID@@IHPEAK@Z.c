/*
 * XREFs of ?ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z @ 0x1C009F5A8
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00AAEC0 (DxgkUpdateGdiInfo.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C00DF670 (DxgkGetDpiOverrideForSource.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005EEAC (-AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C009F3E8 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?WriteDpiToParticularRegKey@@YAJAEBU_UNICODE_STRING@@00K@Z @ 0x1C009F47C (-WriteDpiToParticularRegKey@@YAJAEBU_UNICODE_STRING@@00K@Z.c)
 */

__int64 __fastcall ReadDpiFromRegistry(struct _LUID *a1, unsigned int a2, int a3, unsigned int *a4)
{
  struct _UNICODE_STRING *v5; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  DXGGLOBAL *Global; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  const WCHAR *v22; // rdx
  __int64 v23; // rdx
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  HANDLE v28; // r8
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  HANDLE v36; // r8
  NTSTATUS v37; // eax
  HANDLE v38; // rbx
  int v39; // eax
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  HANDLE v51; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-69h] BYREF
  struct _UNICODE_STRING v53; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v54; // [rsp+60h] [rbp-49h] BYREF
  __int64 v55; // [rsp+70h] [rbp-39h] BYREF
  int v56; // [rsp+78h] [rbp-31h]
  const WCHAR *v57; // [rsp+80h] [rbp-29h]
  unsigned int *v58; // [rsp+88h] [rbp-21h]
  int v59; // [rsp+90h] [rbp-19h]
  unsigned int *v60; // [rsp+98h] [rbp-11h]
  int v61; // [rsp+A0h] [rbp-9h]
  __int64 v62; // [rsp+A8h] [rbp-1h]
  int v63; // [rsp+B0h] [rbp+7h]
  __int64 v64; // [rsp+B8h] [rbp+Fh]
  _BYTE v65[32]; // [rsp+C0h] [rbp+17h] BYREF
  unsigned int v66; // [rsp+120h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+7Fh] BYREF

  v66 = 0;
  *a4 = 0;
  v5 = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v51 = 0LL;
  LODWORD(v9) = AllocateMonitorSetIdFromAdapterSource(a1, a2, &v54);
  if ( (int)v9 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v8, v7, v10, v11);
    SessionData = DXGGLOBAL::GetSessionData(Global, v13, v14, v15);
    v5 = (struct _UNICODE_STRING *)SessionData;
    if ( !SessionData )
    {
      v40 = WdLogNewEntry5_WdError(v18);
      LODWORD(v9) = -1073741811;
      *(_QWORD *)(v40 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v42, v41, v43, v44);
      *(_QWORD *)(v40 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v40);
      goto LABEL_12;
    }
    if ( *((_QWORD *)SessionData + 2323) )
    {
      v21 = WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
      v22 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
      *(_QWORD *)(v21 + 24) = 923LL;
      v53 = v5[1161];
    }
    else
    {
      if ( *((_WORD *)SessionData + 9288) )
      {
        v45 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        *(_QWORD *)(v45 + 24) = 914LL;
        WdLogEvent5_WdAssertion(v45);
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v19, v20) + 24) = 915LL;
      RtlInitUnicodeString(&v53, L"\\Registry\\Machine\\System");
      v22 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
    }
    RtlInitUnicodeString(&DestinationString, v22);
    v24 = OpenRegistrySubkey(&Handle, v23, 0LL, &v53, 0LL);
    v9 = v24;
    if ( v24 >= 0 )
    {
      v28 = Handle;
      if ( !Handle )
      {
        v46 = WdLogNewEntry5_WdAssertion(v26, v25, 0LL, v27);
        *(_QWORD *)(v46 + 24) = 943LL;
        WdLogEvent5_WdAssertion(v46);
        v28 = Handle;
      }
      v29 = OpenRegistrySubkey(&KeyHandle, v25, v28, &DestinationString, 0LL);
      v9 = v29;
      if ( v29 < 0 )
        goto LABEL_9;
      v36 = KeyHandle;
      if ( !KeyHandle )
      {
        v47 = WdLogNewEntry5_WdAssertion(v31, v30, 0LL, v33);
        *(_QWORD *)(v47 + 24) = 959LL;
        WdLogEvent5_WdAssertion(v47);
        v36 = KeyHandle;
      }
      v37 = OpenRegistrySubkey(&v51, v30, v36, &v54, 0LL);
      v9 = v37;
      if ( v37 < 0 )
      {
LABEL_9:
        v34 = WdLogNewEntry5_WdEvent(v31, v30, v32, v33);
        *(_QWORD *)(v34 + 24) = v9;
        WdLogEvent5_WdEvent(v34);
        goto LABEL_10;
      }
      v38 = v51;
      if ( !v51 )
      {
        v48 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
        *(_QWORD *)(v48 + 24) = 975LL;
        WdLogEvent5_WdAssertion(v48);
        v38 = v51;
      }
      v55 = 0LL;
      v56 = 288;
      v57 = L"DpiValue";
      v58 = a4;
      v59 = 67108868;
      v60 = &v66;
      v61 = 4;
      v62 = 0LL;
      v63 = 0;
      v64 = 0LL;
      memset(v65, 0, sizeof(v65));
      v39 = RtlQueryRegistryValuesEx(0x40000000LL, v38, &v55, 0LL, 0LL);
      v9 = v39;
      if ( v39 >= 0 )
        goto LABEL_10;
    }
    v49 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v49 + 24) = v9;
    WdLogEvent5_WdError(v49);
  }
LABEL_10:
  if ( (_DWORD)v9 == -1073741772 )
  {
    LODWORD(v9) = 0;
    *a4 = v66;
  }
LABEL_12:
  if ( a3 && (int)v9 >= 0 && v5 && v5[1161].Buffer )
  {
    RtlInitUnicodeString(&v53, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&DestinationString, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    WriteDpiToParticularRegKey(&v53, &DestinationString, &v54, *a4);
  }
  operator delete(v54.Buffer);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v51 )
    ZwClose(v51);
  return (unsigned int)v9;
}
