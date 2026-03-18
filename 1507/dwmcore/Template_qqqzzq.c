/*
 * XREFs of Template_qqqzzq @ 0x1800E6A6C
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180064118 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qqqzzq(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8)
{
  __int64 v8; // rcx
  int v9; // r9d
  __int64 v10; // rax
  int v11; // r8d
  const wchar_t *v12; // r10
  const wchar_t *v13; // rax
  bool v14; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-39h] BYREF
  int *v17; // [rsp+30h] [rbp-29h]
  __int64 v18; // [rsp+38h] [rbp-21h]
  char *v19; // [rsp+40h] [rbp-19h]
  __int64 v20; // [rsp+48h] [rbp-11h]
  const wchar_t *v21; // [rsp+50h] [rbp-9h]
  int v22; // [rsp+58h] [rbp-1h]
  int v23; // [rsp+5Ch] [rbp+3h]
  const wchar_t *v24; // [rsp+60h] [rbp+7h]
  int v25; // [rsp+68h] [rbp+Fh]
  int v26; // [rsp+6Ch] [rbp+13h]
  char *v27; // [rsp+70h] [rbp+17h]
  __int64 v28; // [rsp+78h] [rbp+1Fh]
  int v29; // [rsp+B0h] [rbp+57h] BYREF
  int v30; // [rsp+B8h] [rbp+5Fh] BYREF

  v30 = a4;
  v29 = a3;
  UserData.Ptr = (ULONGLONG)&v29;
  *(_QWORD *)&UserData.Size = 4LL;
  v17 = &v30;
  v8 = -1LL;
  v18 = 4LL;
  v19 = &a5;
  v9 = 10;
  v20 = 4LL;
  if ( a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a6[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v22 = v11;
  v12 = L"NULL";
  v23 = 0;
  v13 = L"NULL";
  if ( a6 )
    v13 = a6;
  v21 = v13;
  v14 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v8;
    while ( a7[v8] );
    v9 = 2 * v8 + 2;
    v14 = a7 == 0LL;
  }
  if ( !v14 )
    v12 = a7;
  v25 = v9;
  v24 = v12;
  v27 = &a8;
  v26 = 0;
  v28 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_TELEMETRY_ANIMATION_TTFF_ANALYSIS_EVENT, 6u, &UserData);
}
