/*
 * XREFs of ?WriteDpiToRegistry@@YAJAEBU_LUID@@IK@Z @ 0x1C018D024
 * Callers:
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C018D1A0 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C00B8CA0 (-WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00B9FF8 (-AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall WriteDpiToRegistry(const struct _LUID *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rdi
  const unsigned __int16 *v5; // r9
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  const unsigned __int16 *v23; // r9
  int v24; // eax
  __int64 v25; // rcx
  struct _UNICODE_STRING v27; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING v28; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING v29; // [rsp+50h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-20h] BYREF
  struct _UNICODE_STRING v31; // [rsp+70h] [rbp-10h] BYREF

  LODWORD(v4) = AllocateMonitorSetIdFromAdapterSource(a1, a2, &v27);
  if ( (int)v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v29, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    v6 = WriteDwordToParticularRegValue(&DestinationString, &v29, &v27, v5, a3);
    v4 = v6;
    if ( v6 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v8 + 24) = v4;
      WdLogEvent5_WdError(v8);
    }
    Global = DXGGLOBAL::GetGlobal(v7);
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( !SessionData )
    {
      v15 = WdLogNewEntry5_WdError(v12);
      LODWORD(v4) = -1073741811;
      *(_QWORD *)(v15 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v17, v16, v18, v19);
      v20 = v15;
      *(_QWORD *)(v15 + 32) = -1073741811LL;
LABEL_12:
      WdLogEvent5_WdError(v20);
      goto LABEL_13;
    }
    v28 = *(struct _UNICODE_STRING *)((char *)SessionData + 18600);
    if ( _mm_srli_si128((__m128i)v28, 8).m128i_u64[0] )
    {
      RtlInitUnicodeString(&v31, L"Control Panel\\Desktop\\PerMonitorSettings\\");
      v24 = WriteDwordToParticularRegValue(&v28, &v31, &v27, v23, a3);
      v4 = v24;
      if ( v24 < 0 )
      {
        v20 = WdLogNewEntry5_WdError(v25);
        *(_QWORD *)(v20 + 24) = v4;
        goto LABEL_12;
      }
    }
    else
    {
      if ( v28.Length )
      {
        v21 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v21 + 24) = 872LL;
        WdLogEvent5_WdAssertion(v21);
      }
      v22 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v22 + 24) = 873LL;
      WdLogEvent5_WdWarning(v22);
    }
  }
LABEL_13:
  operator delete(v27.Buffer);
  return (unsigned int)v4;
}
