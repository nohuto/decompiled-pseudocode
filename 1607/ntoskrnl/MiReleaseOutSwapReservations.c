/*
 * XREFs of MiReleaseOutSwapReservations @ 0x1400B4EE4
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x1400B4E74 (MiProcessWsInSwapRanges.c)
 * Callees:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 */

_QWORD *__fastcall MiReleaseOutSwapReservations(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rbx
  _QWORD *result; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  _QWORD v7[2]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v8; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *i; // [rsp+38h] [rbp-60h]
  __int64 v10; // [rsp+40h] [rbp-58h]
  __int64 v11; // [rsp+48h] [rbp-50h]
  __int64 v12; // [rsp+50h] [rbp-48h]

  v8 = 3;
  v2 = a1;
  v7[1] = 4096LL;
  v10 = 1LL;
  v11 = 0LL;
  v12 = 0LL;
  result = v7;
  for ( i = v7; (unsigned __int64)v2 <= a2; v2 += 2 )
  {
    v5 = *v2;
    v6 = *v2 + v2[1];
    while ( v5 < v6 )
    {
      v7[0] = v5;
      result = (_QWORD *)MmAccessFault(0LL, v5, 0, (ULONG_PTR)&v8 + 1);
      v5 += 4096LL;
    }
  }
  return result;
}
