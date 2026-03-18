/*
 * XREFs of Template_xzqqqz @ 0x1800E6F04
 * Callers:
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180064E98 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xzqqqz(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        const wchar_t *a8)
{
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rax
  int v11; // r8d
  const wchar_t *v12; // r10
  const wchar_t *v13; // rax
  bool v14; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-39h] BYREF
  const wchar_t *v17; // [rsp+30h] [rbp-29h]
  int v18; // [rsp+38h] [rbp-21h]
  int v19; // [rsp+3Ch] [rbp-1Dh]
  char *v20; // [rsp+40h] [rbp-19h]
  __int64 v21; // [rsp+48h] [rbp-11h]
  char *v22; // [rsp+50h] [rbp-9h]
  __int64 v23; // [rsp+58h] [rbp-1h]
  char *v24; // [rsp+60h] [rbp+7h]
  __int64 v25; // [rsp+68h] [rbp+Fh]
  const wchar_t *v26; // [rsp+70h] [rbp+17h]
  int v27; // [rsp+78h] [rbp+1Fh]
  int v28; // [rsp+7Ch] [rbp+23h]
  __int64 v29; // [rsp+B0h] [rbp+57h] BYREF

  v29 = a3;
  *(_QWORD *)&UserData.Size = 8LL;
  v8 = -1LL;
  UserData.Ptr = (ULONGLONG)&v29;
  v9 = 10;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v18 = v11;
  v12 = L"NULL";
  v19 = 0;
  v13 = L"NULL";
  v21 = 4LL;
  if ( a4 )
    v13 = a4;
  v23 = 4LL;
  v17 = v13;
  v20 = &a5;
  v22 = &a6;
  v24 = &a7;
  v25 = 4LL;
  v14 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v8;
    while ( a8[v8] );
    v9 = 2 * v8 + 2;
    v14 = a8 == 0LL;
  }
  if ( !v14 )
    v12 = a8;
  v27 = v9;
  v26 = v12;
  v28 = 0;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ANIMATION_FIRST_FRAME_EVENT, 6u, &UserData);
}
