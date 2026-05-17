/*
 * XREFs of RtlpCreateUserProcess @ 0x180080478
 * Callers:
 *     RtlCreateUserProcess @ 0x180080380 (RtlCreateUserProcess.c)
 *     RtlCloneUserProcess @ 0x1800C2340 (RtlCloneUserProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtCreateUserProcess @ 0x1800944A0 (NtCreateUserProcess.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpCreateUserProcess(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        _DWORD *a11)
{
  _DWORD *v11; // r14
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+98h] [rbp-68h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C0h] [rbp-40h]
  _QWORD v39[12]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v40; // [rsp+130h] [rbp+30h] BYREF
  __int64 v41; // [rsp+138h] [rbp+38h]
  __int64 v42; // [rsp+140h] [rbp+40h]
  _DWORD *v43; // [rsp+148h] [rbp+48h]
  _QWORD v44[34]; // [rsp+150h] [rbp+50h]

  v11 = a11;
  memset(a11, 0, 0x68uLL);
  v31 = a3;
  v27 = 48;
  v33 = 48;
  *v11 = 104;
  v30 = 512;
  v28 = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  v36 = 512;
  v35 = 0LL;
  v37 = a4;
  v38 = 0LL;
  memset(v39, 0, 0x58uLL);
  LOBYTE(v39[2]) |= 4u;
  v43 = v11 + 6;
  v44[3] = v11 + 10;
  v39[0] = 88LL;
  v16 = 2;
  v41 = 65539LL;
  v42 = 16LL;
  v44[0] = 0LL;
  v44[1] = 6LL;
  v44[2] = 64LL;
  v44[4] = 0LL;
  if ( a1 )
  {
    v16 = 4;
    v44[6] = *a1;
    v44[7] = *((_QWORD *)a1 + 1);
    v44[5] = 131077LL;
    v44[8] = 0LL;
    v26 = v26 & 0xFFFFFFE0 | 2;
    v44[11] = &v26;
    v44[9] = 131082LL;
    v44[10] = 8LL;
    v44[12] = 0LL;
  }
  if ( a5 )
  {
    v23 = 4LL * v16++;
    *(__int64 *)((char *)&v41 + v23 * 8) = 393216LL;
    *(__int64 *)((char *)&v42 + v23 * 8) = 8LL;
    v44[v23] = 0LL;
    v44[v23 - 1] = a5;
  }
  v17 = a9;
  if ( a9 )
  {
    v24 = 4LL * v16++;
    *(__int64 *)((char *)&v41 + v24 * 8) = 393217LL;
    *(__int64 *)((char *)&v42 + v24 * 8) = 8LL;
    v44[v24] = 0LL;
    v44[v24 - 1] = v17;
  }
  v18 = a10;
  if ( a10 )
  {
    v25 = 4LL * v16++;
    *(__int64 *)((char *)&v41 + v25 * 8) = 393218LL;
    *(__int64 *)((char *)&v42 + v25 * 8) = 8LL;
    v44[v25] = 0LL;
    v44[v25 - 1] = v18;
  }
  if ( a6 )
  {
    --a6;
    v22 = 4LL * v16++;
    *(__int64 *)((char *)&v42 + v22 * 8) = 2LL;
    v19 = a7;
    *(__int64 *)((char *)&v41 + v22 * 8) = 131085LL;
    v44[v22] = 0LL;
    v44[v22 - 1] = &a6;
  }
  else
  {
    v19 = a7 | 0x100;
  }
  if ( (v19 & 0x40) != 0 )
  {
    v20 = 4LL * v16++;
    *(__int64 *)((char *)&v41 + v20 * 8) = 393233LL;
    *(__int64 *)((char *)&v42 + v20 * 8) = 1LL;
    v44[v20] = 0LL;
    v44[v20 - 1] = 97LL;
  }
  v40 = 32LL * v16 + 8;
  return NtCreateUserProcess(v11 + 2, v11 + 4, 0x2000000LL, 0x2000000LL, &v27, &v33, v19, a8, a2, v39, &v40);
}
