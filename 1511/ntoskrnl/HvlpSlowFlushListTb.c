/*
 * XREFs of HvlpSlowFlushListTb @ 0x140221B58
 * Callers:
 *     HvlpFlushRangeListTb @ 0x140221880 (HvlpFlushRangeListTb.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401AEBD8 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401AF5BC (HvlpReleaseHypercallPage.c)
 *     HvlpFlushSecureAddressSpace @ 0x1401B3718 (HvlpFlushSecureAddressSpace.c)
 *     HvlpSlowFlushSecureRangeList @ 0x1401B3BF0 (HvlpSlowFlushSecureRangeList.c)
 */

char __fastcall HvlpSlowFlushListTb(__int64 a1, char a2, unsigned int a3, __int64 *a4)
{
  __int64 v5; // rsi
  char v8; // bp
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // xmm1_8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // xmm1_8
  __int64 v18; // [rsp+20h] [rbp-78h]
  PHYSICAL_ADDRESS v19[3]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v20; // [rsp+40h] [rbp-58h]
  __int64 v21; // [rsp+48h] [rbp-50h] BYREF

  v5 = a3;
  v8 = 1;
  v9 = HvlpAcquireHypercallPage(v19, 1, (__int64)&v21, 24LL);
  v10 = 2LL;
  v11 = v9;
  if ( (unsigned int)v5 > 0x1FD || (v19[0].LowPart & 2) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)v9 = *(_OWORD *)a1;
    *(_QWORD *)(v9 + 16) = v16;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)v9 = *(_OWORD *)a1;
    LODWORD(v18) = 3;
    *(_QWORD *)(v9 + 16) = v12;
    if ( (HvlpFlags & 0x8000) == 0 )
      *(_QWORD *)(v9 + 8) |= 8uLL;
    if ( (_DWORD)v5 )
    {
      v13 = v5;
      v14 = v9 - (_QWORD)a4;
      do
      {
        v15 = *a4;
        if ( (HvlpFlags & 0x8000) != 0 )
          v15 &= ~0x800uLL;
        *(__int64 *)((char *)a4++ + v14 + 24) = v15;
        --v13;
      }
      while ( v13 );
    }
    HIDWORD(v18) = v5 & 0xFFF;
    v10 = v18;
    v8 = 0;
  }
  if ( a2 )
  {
    if ( v8 )
      HvlpFlushSecureAddressSpace();
    else
      HvlpSlowFlushSecureRangeList(v20, v11, v5, 0x18u);
  }
  HvcallCodeVa(v10, v20, 0LL);
  return HvlpReleaseHypercallPage((__int64)v19);
}
