/*
 * XREFs of RtlConnectToSm @ 0x180080910
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtAlpcConnectPort @ 0x180094050 (NtAlpcConnectPort.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlConnectToSm(const void **a1, __int64 a2, int a3, __int64 a4)
{
  size_t v9; // rbx
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  int v11; // [rsp+68h] [rbp-98h] BYREF
  __int64 v12; // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  int v14; // [rsp+80h] [rbp-80h]
  __int128 v15; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  __int64 v17[3]; // [rsp+B0h] [rbp-50h] BYREF
  int v18; // [rsp+C8h] [rbp-38h]
  int v19; // [rsp+D8h] [rbp-28h]
  _WORD v20[122]; // [rsp+DCh] [rbp-24h] BYREF
  _QWORD v21[10]; // [rsp+1D0h] [rbp+D0h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\SmApiPort");
  memset(v21, 0, 0x48uLL);
  LODWORD(v21[0]) = 0x10000;
  LODWORD(v21[1]) = 2;
  WORD2(v21[1]) = 257;
  v21[2] = 328LL;
  v21[4] = 10496LL;
  if ( !a1 )
  {
    v20[0] = 0;
    v19 = 0;
LABEL_3:
    v11 = 48;
    v12 = 0LL;
    v14 = 512;
    v13 = 0LL;
    v15 = 0LL;
    v18 = 0;
    v17[0] = 18612468LL;
    v10 = 288LL;
    return NtAlpcConnectPort(a4, &DestinationString, &v11, v21, 0x20000, 0LL, v17, &v10, 0LL, 0LL, 0LL);
  }
  if ( !a2 || !a3 )
    return 3221225520LL;
  if ( *(_WORD *)a1 < 0xF0u )
  {
    v9 = *(unsigned __int16 *)a1;
    memmove(v20, a1[1], v9);
    v20[v9 >> 1] = 0;
    v19 = a3;
    goto LABEL_3;
  }
  return 3221225485LL;
}
