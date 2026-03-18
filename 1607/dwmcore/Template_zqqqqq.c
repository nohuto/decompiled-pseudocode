/*
 * XREFs of Template_zqqqqq @ 0x180118730
 * Callers:
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x180117CC0 (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

ULONG __fastcall Template_zqqqqq(__int64 a1, __int64 a2, const wchar_t *a3, int a4, char a5, char a6, char a7, char a8)
{
  __int64 v8; // rax
  ULONG v9; // ecx
  const wchar_t *v10; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-39h] BYREF
  int *v13; // [rsp+30h] [rbp-29h]
  __int64 v14; // [rsp+38h] [rbp-21h]
  char *v15; // [rsp+40h] [rbp-19h]
  __int64 v16; // [rsp+48h] [rbp-11h]
  char *v17; // [rsp+50h] [rbp-9h]
  __int64 v18; // [rsp+58h] [rbp-1h]
  char *v19; // [rsp+60h] [rbp+7h]
  __int64 v20; // [rsp+68h] [rbp+Fh]
  char *v21; // [rsp+70h] [rbp+17h]
  __int64 v22; // [rsp+78h] [rbp+1Fh]
  int v23; // [rsp+B8h] [rbp+5Fh] BYREF

  v23 = a4;
  if ( a3 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a3[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  UserData.Size = v9;
  v10 = L"NULL";
  if ( a3 )
    v10 = a3;
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)v10;
  v14 = 4LL;
  v13 = &v23;
  v16 = 4LL;
  v15 = &a5;
  v18 = 4LL;
  v17 = &a6;
  v19 = &a7;
  v21 = &a8;
  v20 = 4LL;
  v22 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_TELEMETRY_AGGREGATED_VSYNC_ANALYSIS_EVENT, 6u, &UserData);
}
