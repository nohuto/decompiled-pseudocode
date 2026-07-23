/*
 * XREFs of MiCheckPoolForContiguousPages @ 0x14009C0C8
 * Callers:
 *     MiScanLeafNonPagedPool @ 0x14001A960 (MiScanLeafNonPagedPool.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14001757C (RtlSetBitsEx.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x14001A800 (RtlFindNextForwardRunClearCappedEx.c)
 *     MiPhysicalPoolCheck @ 0x14009C20C (MiPhysicalPoolCheck.c)
 */

__int64 MiCheckPoolForContiguousPages(__int128 *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 *a4, ...)
{
  unsigned __int64 v4; // xmm0_8
  unsigned __int64 v5; // rdi
  __int64 *v6; // r14
  __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // r8
  unsigned __int64 i; // rdx
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 NextForwardRunClearCapped; // rax
  unsigned __int64 v16; // rbx
  __int128 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  __int64 v22; // [rsp+A8h] [rbp+30h]
  va_list va1; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v20 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _QWORD);
  v5 = a3 >> 9;
  v6 = a4;
  v18 = *a1;
  v4 = v18;
  *(_QWORD *)&v18 = 512LL;
  v8 = (a3 >> 9 << 9) + v20;
  v9 = (a3 >> 9 << 6) + *((_QWORD *)&v18 + 1);
  v10 = a3 & 0x1FF;
LABEL_2:
  *((_QWORD *)&v18 + 1) = v9;
  if ( v5 < v4 >> 9 )
  {
    for ( i = v10; ; i = v12 + v16 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx((__int64)&v18, i, v10, (unsigned __int64 *)va);
      v16 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
      {
        v9 += 64LL;
        v8 += 512LL;
        v10 = 0LL;
        ++v5;
        goto LABEL_2;
      }
      v12 = v20;
      if ( NextForwardRunClearCapped >= a2 )
      {
        v13 = MiPhysicalPoolCheck(v20, v8, NextForwardRunClearCapped, a2, v6[1], v6[2], v6[3], v22);
        v14 = v13;
        if ( v13 != -1LL )
        {
          RtlSetBitsEx((__int64)&v18, v13, a2);
          return v14 + v8;
        }
        v6 = a4;
      }
    }
  }
  return -1LL;
}
