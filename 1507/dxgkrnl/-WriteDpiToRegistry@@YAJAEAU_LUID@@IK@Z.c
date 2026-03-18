/*
 * XREFs of ?WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0160DB8
 * Callers:
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C0160F30 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005EEAC (-AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?WriteDpiToParticularRegKey@@YAJAEBU_UNICODE_STRING@@00K@Z @ 0x1C009F47C (-WriteDpiToParticularRegKey@@YAJAEBU_UNICODE_STRING@@00K@Z.c)
 */

__int64 __fastcall WriteDpiToRegistry(struct _LUID *a1, unsigned int a2, int a3)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  struct _UNICODE_STRING v31; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING v32; // [rsp+30h] [rbp-40h] BYREF
  struct _UNICODE_STRING v33; // [rsp+40h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING v35; // [rsp+60h] [rbp-10h] BYREF

  LODWORD(v4) = AllocateMonitorSetIdFromAdapterSource(a1, a2, &v31);
  if ( (int)v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v33, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    v5 = WriteDpiToParticularRegKey(&DestinationString, &v33, &v31, a3);
    v4 = v5;
    if ( v5 < 0 )
    {
      v10 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v10 + 24) = v4;
      WdLogEvent5_WdError(v10);
    }
    Global = DXGGLOBAL::GetGlobal(v7, v6, v8, v9);
    SessionData = DXGGLOBAL::GetSessionData(Global, v12, v13, v14);
    if ( !SessionData )
    {
      v20 = WdLogNewEntry5_WdError(v17);
      LODWORD(v4) = -1073741811;
      *(_QWORD *)(v20 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v22, v21, v23, v24);
      v25 = v20;
      *(_QWORD *)(v20 + 32) = -1073741811LL;
LABEL_12:
      WdLogEvent5_WdError(v25);
      goto LABEL_13;
    }
    v32 = (struct _UNICODE_STRING)*((_OWORD *)SessionData + 1161);
    if ( _mm_srli_si128((__m128i)v32, 8).m128i_u64[0] )
    {
      RtlInitUnicodeString(&v35, L"Control Panel\\Desktop\\PerMonitorSettings\\");
      v28 = WriteDpiToParticularRegKey(&v32, &v35, &v31, a3);
      v4 = v28;
      if ( v28 < 0 )
      {
        v25 = WdLogNewEntry5_WdError(v29);
        *(_QWORD *)(v25 + 24) = v4;
        goto LABEL_12;
      }
    }
    else
    {
      if ( v32.Length )
      {
        v26 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        *(_QWORD *)(v26 + 24) = 834LL;
        WdLogEvent5_WdAssertion(v26);
      }
      v27 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v27 + 24) = 835LL;
      WdLogEvent5_WdWarning(v27);
    }
  }
LABEL_13:
  operator delete(v31.Buffer);
  return (unsigned int)v4;
}
