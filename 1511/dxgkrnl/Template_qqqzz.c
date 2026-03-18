/*
 * XREFs of Template_qqqzz @ 0x1C0027918
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0024CF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0026540 (DxgkMiracastStartMiracastSession.c)
 *     sub_1C00293AC @ 0x1C00293AC (sub_1C00293AC.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C016DE70 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqzz(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7,
        const wchar_t *a8)
{
  __int64 v8; // rcx
  int v10; // r9d
  __int64 v11; // rax
  int v12; // edx
  const wchar_t *v13; // r10
  const wchar_t *v14; // rax
  bool v15; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-29h] BYREF
  char *v18; // [rsp+48h] [rbp-19h]
  __int64 v19; // [rsp+50h] [rbp-11h]
  char *v20; // [rsp+58h] [rbp-9h]
  __int64 v21; // [rsp+60h] [rbp-1h]
  const wchar_t *v22; // [rsp+68h] [rbp+7h]
  int v23; // [rsp+70h] [rbp+Fh]
  int v24; // [rsp+74h] [rbp+13h]
  const wchar_t *v25; // [rsp+78h] [rbp+17h]
  int v26; // [rsp+80h] [rbp+1Fh]
  int v27; // [rsp+84h] [rbp+23h]
  int v28; // [rsp+C0h] [rbp+5Fh] BYREF

  v28 = a4;
  UserData.Ptr = (ULONGLONG)&v28;
  v8 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v18 = &a5;
  v20 = &a6;
  v19 = 4LL;
  v10 = 10;
  v21 = 4LL;
  if ( a7 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a7[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v23 = v12;
  v13 = L"NULL";
  v24 = 0;
  v14 = L"NULL";
  if ( a7 )
    v14 = a7;
  v22 = v14;
  v15 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v8;
    while ( a8[v8] );
    v10 = 2 * v8 + 2;
    v15 = a8 == 0LL;
  }
  if ( !v15 )
    v13 = a8;
  v26 = v10;
  v25 = v13;
  v27 = 0;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 5u, &UserData);
}
