/*
 * XREFs of RtlpCreateUserProcess @ 0x1407BC7DC
 * Callers:
 *     RtlCreateUserProcess @ 0x1407BC774 (RtlCreateUserProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwCreateUserProcess @ 0x140180730 (ZwCreateUserProcess.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall RtlpCreateUserProcess(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        int a8,
        int a9,
        int a10,
        char *a11)
{
  unsigned int v12; // ecx
  __int64 v13; // rax
  _DWORD v15[4]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v16; // [rsp+78h] [rbp-88h]
  __int64 v17; // [rsp+80h] [rbp-80h]
  int v18; // [rsp+88h] [rbp-78h]
  __int128 v19; // [rsp+90h] [rbp-70h]
  int v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  int v23; // [rsp+B8h] [rbp-48h]
  __int128 v24; // [rsp+C0h] [rbp-40h]
  _QWORD v25[13]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v26; // [rsp+138h] [rbp+38h]
  __int64 v27; // [rsp+140h] [rbp+40h]
  char *v28; // [rsp+148h] [rbp+48h]
  _QWORD v29[34]; // [rsp+150h] [rbp+50h]

  memset(a11, 0, 0x68uLL);
  *(_DWORD *)a11 = 104;
  v20 = 48;
  v15[2] = 48;
  v21 = 0LL;
  v23 = 512;
  v22 = 0LL;
  v24 = 0LL;
  v16 = 0LL;
  v18 = 512;
  v17 = 0LL;
  v19 = 0LL;
  memset(v25, 0, 0x58uLL);
  LOBYTE(v25[2]) |= 4u;
  v28 = a11 + 24;
  v29[3] = a11 + 40;
  v12 = 2;
  v25[0] = 88LL;
  v26 = 65539LL;
  v27 = 16LL;
  v29[0] = 0LL;
  v29[1] = 6LL;
  v29[2] = 64LL;
  v29[4] = 0LL;
  if ( a1 )
  {
    v29[6] = *a1;
    v29[7] = *((_QWORD *)a1 + 1);
    v29[5] = 131077LL;
    v29[8] = 0LL;
    v15[0] = v15[0] & 0xFFFFFFE0 | 2;
    v12 = 4;
    v29[9] = 131082LL;
    v29[11] = v15;
    v29[10] = 8LL;
    v29[12] = 0LL;
  }
  if ( (a7 & 0x40) != 0 )
  {
    v13 = 4LL * v12++;
    *(__int64 *)((char *)&v26 + v13 * 8) = 393233LL;
    *(__int64 *)((char *)&v27 + v13 * 8) = 1LL;
    v29[v13] = 0LL;
    v29[v13 - 1] = 97LL;
  }
  v25[12] = 32LL * v12 + 8;
  return ZwCreateUserProcess((__int64)(a11 + 8), (__int64)(a11 + 16), 0x2000000LL);
}
