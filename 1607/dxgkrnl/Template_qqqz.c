/*
 * XREFs of Template_qqqz @ 0x1C002E85C
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002C100 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C002D594 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastPerfRetireFrame @ 0x1C0030760 (DpiMiracastPerfRetireFrame.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C019766C (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqz(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7)
{
  __int64 v7; // rax
  int v8; // ecx
  const wchar_t *v9; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  char *v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  char *v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-28h]
  const wchar_t *v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]
  int v19; // [rsp+A8h] [rbp+28h] BYREF

  v19 = a4;
  UserData.Ptr = (ULONGLONG)&v19;
  *(_QWORD *)&UserData.Size = 4LL;
  v12 = &a5;
  v14 = &a6;
  v13 = 4LL;
  v15 = 4LL;
  if ( a7 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a7[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v17 = v8;
  v9 = L"NULL";
  v18 = 0;
  if ( a7 )
    v9 = a7;
  v16 = v9;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 4u, &UserData);
}
