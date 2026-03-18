/*
 * XREFs of HvlpSlowFlushListTbEx @ 0x140221CA8
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x1402218E0 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401AE6F0 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpAcquireHypercallPage @ 0x1401AEBD8 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401AF5BC (HvlpReleaseHypercallPage.c)
 *     HvlpFlushSecureAddressSpace @ 0x1401B3718 (HvlpFlushSecureAddressSpace.c)
 *     HvlpSlowFlushSecureRangeList @ 0x1401B3BF0 (HvlpSlowFlushSecureRangeList.c)
 */

char __fastcall HvlpSlowFlushListTbEx(_QWORD *a1, __int64 a2, char a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rbp
  char v10; // si
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  int v15; // r10d
  __int64 v16; // r9
  _QWORD *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v23; // [rsp+20h] [rbp-98h]
  PHYSICAL_ADDRESS v24[3]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v25; // [rsp+40h] [rbp-78h]
  _BYTE v26[64]; // [rsp+48h] [rbp-70h] BYREF

  LODWORD(v5) = 0;
  v6 = a4;
  v10 = 1;
  v11 = (_QWORD *)HvlpAcquireHypercallPage(v24, 1, (__int64)v26, 32LL);
  v12 = v11;
  if ( (v24[0].LowPart & 2) != 0 )
  {
    *v11 = *a1;
    v21 = a1[1];
    v20 = 19LL;
    v12[1] = v21;
    v12[3] = 0LL;
    v12[2] = 1LL;
  }
  else
  {
    *v11 = *a1;
    v13 = a1[1];
    v12[1] = v13;
    if ( (HvlpFlags & 0x8000) == 0 )
      v12[1] = v13 | 8;
    v14 = HvlpAffinityToHvProcessorSet(a2, v12 + 2, 0xFE0u);
    v15 = v14;
    v16 = v6;
    v5 = (unsigned int)(v14 + 32);
    if ( (unsigned __int64)(v5 + 8 * v6) > 0x1000 )
    {
      v23 = ((v14 + 7) << 14) & 0x3FE0000 | 0x13u;
    }
    else
    {
      v17 = (_QWORD *)((char *)v12 + (unsigned int)(v14 + 32));
      if ( (_DWORD)v6 )
      {
        v18 = a5 - (_QWORD)v17;
        do
        {
          v19 = *(_QWORD *)((char *)v17 + v18);
          if ( (HvlpFlags & 0x8000) != 0 )
            v19 &= ~0x800uLL;
          *v17++ = v19;
          --v16;
        }
        while ( v16 );
      }
      LODWORD(v23) = ((v15 + 7) << 14) & 0x3FE0000 | 0x14;
      HIDWORD(v23) = v6 & 0xFFF;
      v10 = 0;
    }
    v20 = v23;
  }
  if ( a3 )
  {
    if ( v10 )
      HvlpFlushSecureAddressSpace();
    else
      HvlpSlowFlushSecureRangeList(v25, (__int64)v12, v6, v5);
  }
  HvcallCodeVa(v20, v25, 0LL);
  return HvlpReleaseHypercallPage((__int64)v24);
}
