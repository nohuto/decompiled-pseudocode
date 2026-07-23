/*
 * XREFs of HvlpSlowFlushListTb @ 0x1401C1A10
 * Callers:
 *     HvlpFlushRangeListTb @ 0x1401C17FC (HvlpFlushRangeListTb.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpCopyFlushVaList @ 0x1401C14B4 (HvlpCopyFlushVaList.c)
 *     VslFlushSecureAddressSpace @ 0x1401C28B8 (VslFlushSecureAddressSpace.c)
 *     VslSlowFlushSecureRangeList @ 0x1401C30AC (VslSlowFlushSecureRangeList.c)
 */

char __fastcall HvlpSlowFlushListTb(__int64 a1, char a2, unsigned int a3, __int64 *a4, unsigned int a5)
{
  char v9; // bp
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // xmm1_8
  __int16 v14; // ax
  __int64 v15; // xmm1_8
  __int64 v17; // [rsp+20h] [rbp-88h]
  PHYSICAL_ADDRESS v18[3]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v19; // [rsp+40h] [rbp-68h]
  __int64 v20; // [rsp+48h] [rbp-60h] BYREF

  v9 = 1;
  v10 = HvlpAcquireHypercallPage(v18, 1, (__int64)&v20, 24LL);
  v11 = 2LL;
  v12 = v10;
  if ( a5 > 0x1FD || (v18[0].LowPart & 2) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)v10 = *(_OWORD *)a1;
    *(_QWORD *)(v10 + 16) = v15;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)v10 = *(_OWORD *)a1;
    LODWORD(v17) = 3;
    *(_QWORD *)(v10 + 16) = v13;
    v14 = HvlpFlags;
    if ( (HvlpFlags & 0x2000) == 0 )
    {
      *(_QWORD *)(v12 + 8) |= 8uLL;
      v14 = HvlpFlags;
    }
    HvlpCopyFlushVaList(a3, a4, (v14 & 0x2000) != 0, (__int64 *)(v12 + 24));
    HIDWORD(v17) = a5 & 0xFFF;
    v11 = v17;
    v9 = 0;
  }
  if ( a2 )
  {
    if ( v9 )
      VslFlushSecureAddressSpace();
    else
      VslSlowFlushSecureRangeList(v19, v12, a5, 24LL);
  }
  HvcallCodeVa(v11, v19, 0LL);
  return HvlpReleaseHypercallPage((__int64)v18);
}
