/*
 * XREFs of Template_qqsp @ 0x1C00B8928
 * Callers:
 *     EtwTraceQueueMessage @ 0x1C0073D50 (EtwTraceQueueMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqsp(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, const char *a6, char a7)
{
  __int64 v7; // rcx
  int v8; // ecx
  const char *v9; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  char *v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  const char *v14; // [rsp+50h] [rbp-30h]
  int v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-24h]
  char *v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+A8h] [rbp+28h] BYREF

  v19 = a4;
  UserData.Ptr = (ULONGLONG)&v19;
  *(_QWORD *)&UserData.Size = 4LL;
  v12 = &a5;
  v13 = 4LL;
  if ( a6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a6[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v8 = 5;
  }
  v15 = v8;
  v16 = 0;
  v9 = "NULL";
  if ( a6 )
    v9 = a6;
  v18 = 8LL;
  v14 = v9;
  v17 = &a7;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &QueueNullPostMessage, &W32kControlGuid, 4u, &UserData);
}
