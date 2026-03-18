/*
 * XREFs of MiLogMdlRangeEvent @ 0x140215348
 * Callers:
 *     MiInitializeMdlPages @ 0x140076FA8 (MiInitializeMdlPages.c)
 *     MiFreePagesFromMdl @ 0x1400E2D98 (MiFreePagesFromMdl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogMdlRangeEvent(_QWORD *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // rsi
  _QWORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  _QWORD v11[3]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v12; // [rsp+48h] [rbp-30h] BYREF
  int v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+54h] [rbp-24h]

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
      v11[1] = *v5;
      v10 = v5;
      v11[0] = v9 | v8 & 0xFFF000000000000FuLL;
      do
      {
        ++v5;
        --v3;
      }
      while ( v3 && *v5 == *(v5 - 1) + 1LL );
      v14 = 0;
      v13 = 24;
      v11[2] = v5 - v10;
      v12 = v11;
      result = (__int64)EtwTraceKernelEvent((int)&v12, 1, 0x20000001u, a2, 289413890);
    }
    while ( v3 );
  }
  return result;
}
