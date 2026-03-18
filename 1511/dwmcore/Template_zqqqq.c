/*
 * XREFs of Template_zqqqq @ 0x1801030A8
 * Callers:
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x180102718 (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

ULONG __fastcall Template_zqqqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const wchar_t *a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  __int64 v7; // rax
  ULONG v8; // ecx
  const wchar_t *v9; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-60h] BYREF
  int *v12; // [rsp+30h] [rbp-50h]
  __int64 v13; // [rsp+38h] [rbp-48h]
  char *v14; // [rsp+40h] [rbp-40h]
  __int64 v15; // [rsp+48h] [rbp-38h]
  char *v16; // [rsp+50h] [rbp-30h]
  __int64 v17; // [rsp+58h] [rbp-28h]
  char *v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+A8h] [rbp+28h] BYREF

  v20 = a4;
  if ( a3 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  UserData.Size = v8;
  v9 = L"NULL";
  if ( a3 )
    v9 = a3;
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)v9;
  v13 = 4LL;
  v12 = &v20;
  v15 = 4LL;
  v14 = &a5;
  v16 = &a6;
  v18 = &a7;
  v17 = 4LL;
  v19 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 5u, &UserData);
}
