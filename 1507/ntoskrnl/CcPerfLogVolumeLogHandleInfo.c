/*
 * XREFs of CcPerfLogVolumeLogHandleInfo @ 0x14012DC88
 * Callers:
 *     CcPerfLogLoggedStreamsStats @ 0x14012DBD8 (CcPerfLogLoggedStreamsStats.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void *__fastcall CcPerfLogVolumeLogHandleInfo(__int64 a1, char a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ecx
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+38h] [rbp-38h]
  int v10; // [rsp+3Ch] [rbp-34h]
  __int64 v11; // [rsp+40h] [rbp-30h]
  __int64 v12; // [rsp+48h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-20h]
  __int64 *v14; // [rsp+58h] [rbp-18h] BYREF
  int v15; // [rsp+60h] [rbp-10h]
  int v16; // [rsp+64h] [rbp-Ch]

  v11 = a5;
  v8 = a1;
  v12 = a6;
  v10 = a3;
  v13 = a4;
  v6 = (a2 & 1) != 0;
  v9 = v6;
  if ( (a2 & 2) != 0 )
  {
    v6 |= 2u;
    v9 = v6;
  }
  if ( (a2 & 4) != 0 )
  {
    v6 |= 4u;
    v9 = v6;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v6 |= 0x10u;
    v9 = v6;
  }
  if ( (a2 & 8) != 0 )
    v9 = v6 | 8;
  v16 = 0;
  v14 = &v8;
  v15 = 40;
  return EtwTraceKernelEvent((int)&v14, 1, 0x80020000, 0x160Du, 4200706);
}
