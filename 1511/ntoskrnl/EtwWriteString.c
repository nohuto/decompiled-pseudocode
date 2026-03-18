/*
 * XREFs of EtwWriteString @ 0x14020CF14
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140076480 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS __stdcall EtwWriteString(
        REGHANDLE RegHandle,
        UCHAR Level,
        ULONGLONG Keyword,
        LPCGUID ActivityId,
        PCWSTR String)
{
  unsigned __int16 *v9; // r14
  NTSTATUS v10; // r11d
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // r10
  __int64 v15; // r15
  __int16 v16; // r9
  unsigned __int8 v17; // r10
  __int64 v18; // r9
  unsigned __int8 v19; // r10
  __int64 v20; // [rsp+98h] [rbp-11h] BYREF
  _QWORD v21[2]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v22; // [rsp+B0h] [rbp+7h] BYREF
  PCWSTR v23; // [rsp+B8h] [rbp+Fh] BYREF
  int v24; // [rsp+C0h] [rbp+17h]
  int v25; // [rsp+C4h] [rbp+1Bh]

  v22 = 0LL;
  v20 = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( !RegHandle )
    return -1073741816;
  v12 = *(_QWORD *)(RegHandle + 104);
  if ( v12 )
    v9 = (unsigned __int16 *)(v12 + 28);
  v21[0] = 0LL;
  v13 = -1LL;
  BYTE4(v21[0]) = Level;
  v21[1] = Keyword;
  v23 = String;
  do
    ++v13;
  while ( String[v13] );
  v14 = *(_BYTE *)(RegHandle + 99);
  v24 = 2 * v13 + 2;
  v25 = 0;
  if ( v14 )
  {
    v15 = *(_QWORD *)(RegHandle + 32);
    if ( EtwpLevelKeywordEnabled(v15 + 80, Level, Keyword) )
      v10 = EtwpEventWriteFull(
              v15,
              v17,
              0,
              0,
              (unsigned __int16 *)v21,
              v16,
              0,
              (GUID *)ActivityId,
              0LL,
              1u,
              (__int64)&v23,
              0LL,
              &v20,
              0LL,
              *(_BYTE *)(RegHandle + 101),
              v9,
              &v22);
  }
  if ( *(_BYTE *)(RegHandle + 100) )
  {
    if ( EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 40) + 80LL, Level, Keyword) )
      return EtwpEventWriteFull(
               *(_QWORD *)(RegHandle + 32),
               v19,
               0,
               0,
               (unsigned __int16 *)v21,
               4,
               0,
               (GUID *)ActivityId,
               0LL,
               1u,
               (__int64)&v23,
               0LL,
               &v20,
               v18,
               *(_BYTE *)(RegHandle + 101),
               v9,
               &v22);
  }
  return v10;
}
