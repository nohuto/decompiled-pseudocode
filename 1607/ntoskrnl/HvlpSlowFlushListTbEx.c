/*
 * XREFs of HvlpSlowFlushListTbEx @ 0x1401C1B5C
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x1401C1880 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401BFCC8 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpCopyFlushVaList @ 0x1401C14B4 (HvlpCopyFlushVaList.c)
 *     VslFlushSecureAddressSpace @ 0x1401C28B8 (VslFlushSecureAddressSpace.c)
 *     VslSlowFlushSecureRangeList @ 0x1401C30AC (VslSlowFlushSecureRangeList.c)
 */

char __fastcall HvlpSlowFlushListTbEx(_QWORD *a1, __int64 a2, char a3, unsigned int a4, __int64 *a5, unsigned int a6)
{
  __int64 v6; // rbp
  char v11; // si
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  int v14; // eax
  int v15; // r14d
  __int16 v16; // cx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v20; // [rsp+20h] [rbp-98h]
  PHYSICAL_ADDRESS v21[3]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v22; // [rsp+40h] [rbp-78h]
  _BYTE v23[64]; // [rsp+48h] [rbp-70h] BYREF

  LODWORD(v6) = 0;
  v11 = 1;
  v12 = (_QWORD *)HvlpAcquireHypercallPage(v21, 1, (__int64)v23, 32LL);
  v13 = v12;
  if ( (v21[0].LowPart & 2) != 0 )
  {
    *v12 = *a1;
    v18 = a1[1];
    v17 = 19LL;
    v13[1] = v18;
    v13[3] = 0LL;
    v13[2] = 1LL;
  }
  else
  {
    *v12 = *a1;
    v12[1] = a1[1];
    v14 = HvlpAffinityToHvProcessorSet(a2, v12 + 2, 0xFE0u);
    v15 = v14;
    v6 = (unsigned int)(v14 + 32);
    if ( v6 + 8 * (unsigned __int64)a6 > 0x1000 )
    {
      v20 = ((v14 + 7) << 14) & 0x3FE0000 | 0x13u;
    }
    else
    {
      v16 = HvlpFlags;
      if ( (HvlpFlags & 0x2000) == 0 )
      {
        v13[1] |= 8uLL;
        v16 = HvlpFlags;
      }
      HvlpCopyFlushVaList(a4, a5, (v16 & 0x2000) != 0, (_QWORD *)((char *)v13 + v6));
      LODWORD(v20) = ((v15 + 7) << 14) & 0x3FE0000 | 0x14;
      HIDWORD(v20) = a6 & 0xFFF;
      v11 = 0;
    }
    v17 = v20;
  }
  if ( a3 )
  {
    if ( v11 )
      VslFlushSecureAddressSpace();
    else
      VslSlowFlushSecureRangeList(v22, v13, a6, (unsigned int)v6);
  }
  HvcallCodeVa(v17, v22, 0LL);
  return HvlpReleaseHypercallPage((__int64)v21);
}
