/*
 * XREFs of PpmInfoTraceProfileSettings @ 0x140672BF0
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PpmEventTraceProfileSetting @ 0x140576A4C (PpmEventTraceProfileSetting.c)
 */

char PpmInfoTraceProfileSettings()
{
  unsigned __int8 v0; // bp
  __int64 *v1; // rdi
  char *v2; // rsi
  __int64 v3; // rbx
  unsigned int v4; // r13d
  __int128 *v5; // rax
  unsigned int v6; // r14d
  __int64 *v7; // rbp
  __int64 v8; // r15
  __int64 *v9; // r12
  __int64 v10; // r12
  unsigned __int8 v12; // [rsp+40h] [rbp-58h]
  __int64 v13; // [rsp+48h] [rbp-50h]
  __int128 v14; // [rsp+50h] [rbp-48h] BYREF

  v0 = 0;
  v1 = PpmDefaultProfile;
  while ( 1 )
  {
    v12 = v0;
    v13 = 42LL;
    v2 = (char *)&unk_1403A9B90;
    do
    {
      v3 = 1LL << v2[4];
      v4 = 1;
      if ( (v2[5] & 4) != 0 )
        v4 = 2;
      v5 = (__int128 *)*((_QWORD *)v2 - 3);
      v6 = 0;
      v14 = *v5;
      v7 = v1 + 5;
      v8 = 0LL;
      v9 = v1 + 179;
      do
      {
        if ( (v3 & v7[v8]) != 0 )
          LOBYTE(v5) = PpmEventTraceProfileSetting(
                         *((_BYTE *)v1 + 8),
                         *((_QWORD *)v2 - 4),
                         (__int64)&v14,
                         v6,
                         (__int64)v7 + *((_QWORD *)v2 - 1) + v6 * *(_DWORD *)v2,
                         *(_DWORD *)v2,
                         0,
                         1);
        if ( (v3 & v9[v8]) != 0 )
          LOBYTE(v5) = PpmEventTraceProfileSetting(
                         *((_BYTE *)v1 + 8),
                         *((_QWORD *)v2 - 4),
                         (__int64)&v14,
                         v6,
                         (__int64)v9 + *((_QWORD *)v2 - 1) + v6 * *(_DWORD *)v2,
                         *(_DWORD *)v2,
                         1,
                         1);
        ++HIBYTE(v14);
        ++v6;
        ++v8;
      }
      while ( v6 < v4 );
      v10 = v13;
      v2 += 40;
      --v13;
    }
    while ( v10 != 1 );
    if ( v12 == PpmProfileCount )
      break;
    v1 = (__int64 *)(PpmProfiles + 2864LL * v12);
    v0 = v12 + 1;
  }
  return (char)v5;
}
