/*
 * XREFs of EtwpLogRegistryEvent @ 0x1406A25E8
 * Callers:
 *     EtwpTraceRegistry @ 0x1406A2EE8 (EtwpTraceRegistry.c)
 * Callees:
 *     EtwpLogSystemEventUnsafe @ 0x1400734CC (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpLogRegistryEvent(
        unsigned int a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  __int16 v7; // r10
  unsigned int v8; // r9d
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v11; // rax
  __int64 v13; // [rsp+30h] [rbp-21h] BYREF
  int v14; // [rsp+38h] [rbp-19h]
  int v15; // [rsp+3Ch] [rbp-15h]
  __int64 v16; // [rsp+40h] [rbp-11h]
  __int64 *v17; // [rsp+50h] [rbp-1h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp+7h]
  int v19; // [rsp+68h] [rbp+17h]
  int v20; // [rsp+6Ch] [rbp+1Bh]

  v7 = a2 | 0x900;
  v14 = a3;
  v15 = a4;
  v18[0] = 24LL;
  v8 = 1;
  v13 = *a6;
  v16 = a5;
  v17 = &v13;
  if ( a7 )
  {
    v9 = *(_WORD *)a7 & 0xFFFE;
    if ( *(_QWORD *)(a7 + 8) )
    {
      if ( (*(_WORD *)a7 & 0xFFFE) != 0 )
      {
        v18[1] = *(_QWORD *)(a7 + 8);
        v8 = 2;
        v19 = v9;
        v20 = 0;
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v11 = 2LL * v8;
  v18[v11 - 1] = &EtwpNull;
  v18[v11] = 2LL;
  return EtwpLogSystemEventUnsafe((__int64)&v17, CurrentThread, a1, v8 + 1, v7, 0x501902u);
}
