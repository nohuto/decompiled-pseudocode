/*
 * XREFs of ?ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z @ 0x1C005DAA8
 * Callers:
 *     DxgkGetDpiOverrideForSource @ 0x1C005CC20 (DxgkGetDpiOverrideForSource.c)
 *     DxgkUpdateGdiInfo @ 0x1C00AD640 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005D684 (-AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C005DDD0 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0165318 (-WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 */

__int64 __fastcall ReadDpiFromRegistry(struct _LUID *a1, unsigned int a2, int a3, unsigned int *a4)
{
  struct _UNICODE_STRING *v5; // rsi
  __int64 v7; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rax
  const WCHAR *v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rcx
  HANDLE v22; // r8
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rcx
  HANDLE v27; // r8
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  HANDLE v32; // rbx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-89h] BYREF
  HANDLE v38; // [rsp+38h] [rbp-81h] BYREF
  struct _UNICODE_STRING v39; // [rsp+40h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING v41; // [rsp+60h] [rbp-59h] BYREF
  __int64 v42; // [rsp+70h] [rbp-49h] BYREF
  int v43; // [rsp+78h] [rbp-41h]
  const WCHAR *v44; // [rsp+80h] [rbp-39h]
  unsigned int *v45; // [rsp+88h] [rbp-31h]
  int v46; // [rsp+90h] [rbp-29h]
  unsigned int *v47; // [rsp+98h] [rbp-21h]
  int v48; // [rsp+A0h] [rbp-19h]
  __int64 v49; // [rsp+A8h] [rbp-11h]
  int v50; // [rsp+B0h] [rbp-9h]
  __int64 v51; // [rsp+B8h] [rbp-1h]
  _BYTE v52[32]; // [rsp+C0h] [rbp+7h] BYREF
  unsigned int v53; // [rsp+130h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+138h] [rbp+7Fh] BYREF

  v53 = 0;
  *a4 = 0;
  v5 = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v38 = 0LL;
  LODWORD(v7) = AllocateMonitorSetIdFromAdapterSource(a1, a2, &v41);
  if ( (int)v7 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    v5 = (struct _UNICODE_STRING *)SessionData;
    if ( !SessionData )
    {
      v14 = WdLogNewEntry5_WdError(v11);
      LODWORD(v7) = -1073741811;
      *(_QWORD *)(v14 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
      *(_QWORD *)(v14 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v14);
      goto LABEL_23;
    }
    if ( *((_QWORD *)SessionData + 2327) )
    {
      v17 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
      v16 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
      *(_QWORD *)(v17 + 24) = 1009LL;
      DestinationString = v5[1163];
    }
    else
    {
      if ( *((_WORD *)SessionData + 9304) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v11);
        *(_QWORD *)(v15 + 24) = 1000LL;
        WdLogEvent5_WdAssertion(v15);
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v12, v13) + 24) = 1001LL;
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
      v16 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
    }
    RtlInitUnicodeString(&v39, v16);
    v19 = OpenRegistrySubkey(&Handle, v18, 0LL, &DestinationString, 0LL);
    v7 = v19;
    if ( v19 >= 0 )
    {
      v22 = Handle;
      if ( !Handle )
      {
        v23 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v23 + 24) = 1029LL;
        WdLogEvent5_WdAssertion(v23);
        v22 = Handle;
      }
      v24 = OpenRegistrySubkey(&KeyHandle, v20, v22, &v39, 0LL);
      v7 = v24;
      if ( v24 < 0 )
        goto LABEL_16;
      v27 = KeyHandle;
      if ( !KeyHandle )
      {
        v28 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v28 + 24) = 1045LL;
        WdLogEvent5_WdAssertion(v28);
        v27 = KeyHandle;
      }
      v29 = OpenRegistrySubkey(&v38, v25, v27, &v41, 0LL);
      v7 = v29;
      if ( v29 < 0 )
      {
LABEL_16:
        v31 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v31 + 24) = v7;
        WdLogEvent5_WdEvent(v31);
        goto LABEL_21;
      }
      v32 = v38;
      if ( !v38 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v30);
        *(_QWORD *)(v33 + 24) = 1061LL;
        WdLogEvent5_WdAssertion(v33);
        v32 = v38;
      }
      v42 = 0LL;
      v43 = 288;
      v44 = L"DpiValue";
      v45 = a4;
      v46 = 67108868;
      v47 = &v53;
      v48 = 4;
      v49 = 0LL;
      v50 = 0;
      v51 = 0LL;
      memset(v52, 0, sizeof(v52));
      v34 = RtlQueryRegistryValuesEx(0x40000000LL, v32, &v42, 0LL, 0LL);
      v7 = v34;
      if ( v34 >= 0 )
        goto LABEL_21;
    }
    v35 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v35 + 24) = v7;
    WdLogEvent5_WdError(v35);
  }
LABEL_21:
  if ( (_DWORD)v7 == -1073741772 )
  {
    LODWORD(v7) = 0;
    *a4 = v53;
  }
LABEL_23:
  if ( a3 && (int)v7 >= 0 && v5 && v5[1163].Buffer )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v39, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    WriteDwordToParticularRegValue(&DestinationString, &v39, &v41, L"DpiValue", *a4);
  }
  operator delete(v41.Buffer);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v38 )
    ZwClose(v38);
  return (unsigned int)v7;
}
