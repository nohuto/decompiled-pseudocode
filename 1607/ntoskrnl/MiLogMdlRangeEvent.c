/*
 * XREFs of MiLogMdlRangeEvent @ 0x1401E4694
 * Callers:
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     MiInitializeMdlPages @ 0x14010480C (MiInitializeMdlPages.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogMdlRangeEvent(_QWORD *a1, __int16 a2, __int64 a3)
{
  __int64 v3; // rsi
  _QWORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]
  _QWORD *v14; // [rsp+48h] [rbp-30h] BYREF
  int v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+54h] [rbp-24h]

  v3 = a3;
  v5 = a1;
  if ( ((*(_QWORD *)(48LL * *a1 - 0x57FFFFFFFD8LL) >> 54) & 7) == 1 )
  {
    result = 9LL;
    v7 = *(_QWORD *)(48LL * *a1 - 0x58000000000LL);
  }
  else
  {
    result = 10LL;
    v7 = 0LL;
  }
  if ( a3 )
  {
    v8 = result & 0xF;
    v9 = 16 * (v7 & 0xFFFFFFFFFFFFLL);
    do
    {
      v10 = *v5;
      v13 = 0LL;
      v12[1] = v10;
      v12[0] = v9 | v8 & 0xFFF000000000000FuLL;
      v11 = v5;
      do
      {
        ++v5;
        --v3;
      }
      while ( v3 && *v5 == *(v5 - 1) + 1LL );
      v16 = 0;
      v15 = 24;
      v13 = v5 - v11;
      v14 = v12;
      result = EtwTraceKernelEvent((int)&v14, 1, 0x20000001u, a2, 289413890);
    }
    while ( v3 );
  }
  return result;
}
