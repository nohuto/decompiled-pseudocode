/*
 * XREFs of DbgkpLkmdSnapKernelStack @ 0x1401B75D8
 * Callers:
 *     DbgkpLkmdSnapThreadInContext @ 0x14061B760 (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x1400EE9A8 (KeEnumerateKernelStackSegments.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall DbgkpLkmdSnapKernelStack(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5, __int64 a6)
{
  __int64 v10; // rbx
  _QWORD *v11; // rcx
  _QWORD v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v14; // [rsp+40h] [rbp-C0h]
  __int64 v15; // [rsp+48h] [rbp-B8h]
  _QWORD v16[8]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v17[154]; // [rsp+90h] [rbp-70h] BYREF

  if ( a5 )
    v10 = a5[19];
  else
    v10 = *(_QWORD *)(a3 + 88);
  if ( !a5 && a4 )
  {
    memset(v17, 0, sizeof(v17));
    v17[19] = v10;
    v17[20] = v10;
  }
  v13[0] = a1;
  v13[1] = v10;
  v14 = a4;
  v15 = a6;
  KeEnumerateKernelStackSegments(
    a2,
    (__int64 (__fastcall *)(__int64, _OWORD *, __int64))DbgkpLkmdSnapKernelStackSegmentCallback,
    (__int64)v13);
  if ( a4 )
  {
    v11 = v17;
    if ( a5 )
      v11 = a5;
    v16[0] = 0LL;
    v16[7] = v11[31];
    v16[6] = v11[20];
    (*(void (__fastcall **)(__int64, _QWORD *, __int64))(a1 + 5184))(a1 + 5120, v16, 64LL);
    *(_QWORD *)(a3 + 88) = v10 - 64;
    *(_BYTE *)(a3 + 388) = -1;
  }
  return 0LL;
}
