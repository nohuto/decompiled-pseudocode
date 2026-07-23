/*
 * XREFs of CcPerfLogScheduleReadAhead @ 0x14006D574
 * Callers:
 *     CcScheduleReadAheadEx @ 0x14006E990 (CcScheduleReadAheadEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall CcPerfLogScheduleReadAhead(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        int a7)
{
  __int64 v10; // rbx
  __int64 v12; // rdi
  int v13; // ecx
  _QWORD *v15; // [rsp+38h] [rbp-41h] BYREF
  int v16; // [rsp+40h] [rbp-39h]
  int v17; // [rsp+44h] [rbp-35h]
  _QWORD v18[10]; // [rsp+48h] [rbp-31h] BYREF

  v10 = 0LL;
  v12 = 0LL;
  memset(v18, 0, 0x48uLL);
  if ( a2 )
  {
    v10 = a2[6];
    v12 = *(_QWORD *)(a2[5] + 8LL);
    v18[1] = a2[3];
  }
  v18[2] = *a3;
  v18[0] = a1;
  v18[3] = __PAIR64__(a5, a4);
  v13 = (HIDWORD(v18[8]) ^ (a7 == 1)) & 1 ^ HIDWORD(v18[8]);
  HIDWORD(v18[8]) = v13;
  if ( v10 )
  {
    LODWORD(v18[4]) = *(_DWORD *)(v10 + 52);
    v18[5] = *(_QWORD *)(v10 + 56);
    v18[6] = *(_QWORD *)(v10 + 64);
    HIDWORD(v18[8]) = ((unsigned __int8)v13 ^ (unsigned __int8)(*(_DWORD *)v10 >> 15)) & 2 ^ v13;
    HIDWORD(v18[7]) = *(_DWORD *)(v10 + 48);
  }
  if ( v12 )
    LODWORD(v18[8]) = *(_DWORD *)(v12 + 152);
  v17 = 0;
  LOBYTE(v18[7]) = a6;
  v16 = 72;
  v15 = v18;
  return EtwTraceKernelEvent((int)&v15, 1, 0x80020000, 5644, 4200706);
}
