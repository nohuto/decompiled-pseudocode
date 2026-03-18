/*
 * XREFs of MiCheckPoolForContiguousPages @ 0x140137FA4
 * Callers:
 *     MiScanLeafNonPagedPool @ 0x1400B3980 (MiScanLeafNonPagedPool.c)
 * Callees:
 *     RtlFindNextForwardRunClearCappedEx @ 0x1400B3810 (RtlFindNextForwardRunClearCappedEx.c)
 *     RtlSetBitsEx @ 0x1400B4BC4 (RtlSetBitsEx.c)
 *     MiPhysicalPoolCheck @ 0x1401380C8 (MiPhysicalPoolCheck.c)
 */

__int64 __fastcall MiCheckPoolForContiguousPages(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 *a4,
        __int64 a5,
        int a6)
{
  __int64 *v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rbp
  unsigned __int64 NextForwardRunClearCapped; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r14
  _OWORD v18[4]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v20; // [rsp+A8h] [rbp+20h]

  v20 = a4;
  v6 = a4;
  v7 = a3 >> 9;
  v9 = *a1 >> 9;
  v18[0] = *(_OWORD *)a1;
  *(_QWORD *)&v18[0] = 512LL;
  if ( a3 >> 9 < v9 )
  {
    v10 = a5;
    v11 = *((_QWORD *)&v18[0] + 1);
    while ( 1 )
    {
      while ( 1 )
      {
        NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx((__int64)v18, a3, a3, &v19);
        v13 = NextForwardRunClearCapped;
        if ( NextForwardRunClearCapped )
          break;
        v11 += 64LL;
        v10 += 512LL;
        a3 = 0LL;
        *((_QWORD *)&v18[0] + 1) = v11;
        if ( ++v7 >= v9 )
          return -1LL;
      }
      v14 = v19;
      if ( NextForwardRunClearCapped >= a2 )
      {
        v15 = MiPhysicalPoolCheck(v19, v10, NextForwardRunClearCapped, a2, v6[1], v6[2], v6[3], a6);
        v16 = v15;
        if ( v15 != -1LL )
        {
          RtlSetBitsEx((__int64)v18, v15, a2);
          return v16 + v10;
        }
        v6 = v20;
      }
      a3 = v13 + v14;
    }
  }
  return -1LL;
}
