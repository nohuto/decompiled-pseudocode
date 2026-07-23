/*
 * XREFs of EtwWriteString @ 0x1402248AC
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1400D6090 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
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
  _QWORD *v15; // r15
  int v16; // edx
  __int16 v17; // r9
  char v18; // r10
  int v19; // edx
  __int64 v20; // r9
  char v21; // r10
  unsigned __int64 v22; // [rsp+98h] [rbp-11h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-9h] BYREF
  _QWORD v24[2]; // [rsp+A8h] [rbp-1h] BYREF
  PCWSTR v25; // [rsp+B8h] [rbp+Fh] BYREF
  int v26; // [rsp+C0h] [rbp+17h]
  int v27; // [rsp+C4h] [rbp+1Bh]

  v22 = 0LL;
  v23 = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( !RegHandle )
    return -1073741816;
  v12 = *(_QWORD *)(RegHandle + 104);
  if ( v12 )
    v9 = (unsigned __int16 *)(v12 + 28);
  v24[0] = 0LL;
  v13 = -1LL;
  BYTE4(v24[0]) = Level;
  v24[1] = Keyword;
  v25 = String;
  do
    ++v13;
  while ( String[v13] );
  v14 = *(_BYTE *)(RegHandle + 100);
  v26 = 2 * v13 + 2;
  v27 = 0;
  if ( v14 )
  {
    v15 = *(_QWORD **)(RegHandle + 32);
    if ( EtwpLevelKeywordEnabled((__int64)(v15 + 10), Level, Keyword) )
    {
      LOBYTE(v16) = v18;
      v10 = EtwpEventWriteFull(
              v15,
              v16,
              0,
              0,
              (unsigned __int16 *)v24,
              v17,
              0,
              (GUID *)ActivityId,
              0LL,
              1u,
              (__int64)&v25,
              0LL,
              &v23,
              0LL,
              *(_BYTE *)(RegHandle + 102),
              v9,
              &v22);
    }
  }
  if ( *(_BYTE *)(RegHandle + 101) )
  {
    if ( EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 40) + 80LL, Level, Keyword) )
    {
      LOBYTE(v19) = v21;
      return EtwpEventWriteFull(
               *(_QWORD **)(RegHandle + 32),
               v19,
               0,
               0,
               (unsigned __int16 *)v24,
               4,
               0,
               (GUID *)ActivityId,
               0LL,
               1u,
               (__int64)&v25,
               0LL,
               &v23,
               v20,
               *(_BYTE *)(RegHandle + 102),
               v9,
               &v22);
    }
  }
  return v10;
}
