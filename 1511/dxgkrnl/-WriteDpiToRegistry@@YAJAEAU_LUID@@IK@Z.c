/*
 * XREFs of ?WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0165198
 * Callers:
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C0165560 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005D684 (-AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0165318 (-WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 */

__int64 __fastcall WriteDpiToRegistry(struct _LUID *a1, unsigned int a2, char a3)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  DXGGLOBAL *Global; // rax
  struct _UNICODE_STRING *SessionData; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  struct _UNICODE_STRING v25; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING v26; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING v27; // [rsp+50h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-20h] BYREF
  struct _UNICODE_STRING v29; // [rsp+70h] [rbp-10h] BYREF

  LODWORD(v4) = AllocateMonitorSetIdFromAdapterSource(a1, a2, &v25);
  if ( (int)v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v27, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    v5 = WriteDwordToParticularRegValue(&DestinationString, &v27, &v25, L"DpiValue", a3);
    v4 = v5;
    if ( v5 < 0 )
    {
      v7 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v7 + 24) = v4;
      WdLogEvent5_WdError(v7);
    }
    Global = DXGGLOBAL::GetGlobal(v6);
    SessionData = (struct _UNICODE_STRING *)DXGGLOBAL::GetSessionData(Global);
    if ( !SessionData )
    {
      v14 = WdLogNewEntry5_WdError(v11);
      LODWORD(v4) = -1073741811;
      *(_QWORD *)(v14 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v16, v15, v17, v18);
      v19 = v14;
      *(_QWORD *)(v14 + 32) = -1073741811LL;
LABEL_12:
      WdLogEvent5_WdError(v19);
      goto LABEL_13;
    }
    v26 = SessionData[1163];
    if ( _mm_srli_si128((__m128i)v26, 8).m128i_u64[0] )
    {
      RtlInitUnicodeString(&v29, L"Control Panel\\Desktop\\PerMonitorSettings\\");
      v22 = WriteDwordToParticularRegValue(&v26, &v29, &v25, L"DpiValue", a3);
      v4 = v22;
      if ( v22 < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v19 + 24) = v4;
        goto LABEL_12;
      }
    }
    else
    {
      if ( v26.Length )
      {
        v20 = WdLogNewEntry5_WdAssertion(v11);
        *(_QWORD *)(v20 + 24) = 888LL;
        WdLogEvent5_WdAssertion(v20);
      }
      v21 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      *(_QWORD *)(v21 + 24) = 889LL;
      WdLogEvent5_WdWarning(v21);
    }
  }
LABEL_13:
  operator delete(v25.Buffer);
  return (unsigned int)v4;
}
