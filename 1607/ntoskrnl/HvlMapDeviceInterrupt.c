/*
 * XREFs of HvlMapDeviceInterrupt @ 0x1401BD188
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x1401BB508 (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401BFCC8 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpHvToNtStatus @ 0x1401BFEA4 (HvlpHvToNtStatus.c)
 *     HvlpLogIommuEvent @ 0x1401C0DC8 (HvlpLogIommuEvent.c)
 */

__int64 __fastcall HvlMapDeviceInterrupt(__int64 a1, _OWORD *a2, __int64 *a3, _OWORD *a4)
{
  unsigned int v4; // r15d
  unsigned __int16 v8; // cx
  __int64 v9; // rdx
  char v10; // r14
  __int64 v11; // rdi
  _QWORD *v12; // rbx
  int v13; // eax
  unsigned int v14; // eax
  PHYSICAL_ADDRESS v15; // r8
  PHYSICAL_ADDRESS v16; // rdx
  __int64 v17; // rax
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // bx
  __int64 v20; // xmm0_8
  int v21; // edi
  PHYSICAL_ADDRESS v24[4]; // [rsp+30h] [rbp-D0h] BYREF
  PHYSICAL_ADDRESS v25[4]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v26[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h]
  _DWORD v28[44]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v29[112]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v30[256]; // [rsp+1C0h] [rbp+C0h] BYREF

  v4 = 0;
  if ( a3 )
  {
    v28[0] = 1310721;
    memset(&v28[1], 0, 0xA4uLL);
    v8 = *((_WORD *)a3 + 4);
    v9 = *a3;
    if ( v8 )
      LOWORD(v28[0]) = v8 + 1;
    *(_QWORD *)&v28[2 * v8 + 2] |= v9;
  }
  v10 = 0;
  while ( 1 )
  {
    v11 = HvlpAcquireHypercallPage(v25, 2, (__int64)v29, 56LL);
    v12 = (_QWORD *)HvlpAcquireHypercallPage(v24, 1, (__int64)v30, 128LL);
    memset(v12, 0, 0x38uLL);
    *(_OWORD *)(v12 + 3) = *a2;
    *(_OWORD *)(v12 + 5) = a2[1];
    if ( a3 )
    {
      v13 = HvlpAffinityToHvProcessorSet(v28, v12 + 6, (v24[0].LowPart & 2) != 0 ? 64 : 4032);
      if ( v13 == -1 )
      {
        HvlpReleaseHypercallPage((__int64)v24);
        v12 = (_QWORD *)HvlpAcquireHypercallPage(v24, 1, 0LL, 0LL);
        memset(v12, 0, 0x38uLL);
        *(_OWORD *)(v12 + 3) = *a2;
        *(_OWORD *)(v12 + 5) = a2[1];
        v13 = HvlpAffinityToHvProcessorSet(v28, v12 + 6, 4032LL);
      }
      v14 = v13 + 64;
      if ( v14 > 0x38 )
        v4 = v14 - 56;
      *((_DWORD *)v12 + 11) |= 2u;
    }
    else
    {
      v12[5] = 0LL;
      v12[6] = 0LL;
    }
    *v12 = -1LL;
    v15 = v25[3];
    v16 = v24[3];
    v12[1] = a1;
    v12[2] = 1LL;
    v17 = v12[2];
    if ( v10 )
      v17 = 3LL;
    v12[2] = v17;
    v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
            ((v4 + 7) << 14) & 0x3FE0000 | 0x7CLL,
            (PHYSICAL_ADDRESS)v16.QuadPart,
            (PHYSICAL_ADDRESS)v15.QuadPart);
    v4 = 0;
    v19 = v18;
    if ( v18 )
    {
      v21 = HvlpHvToNtStatus(v18);
    }
    else
    {
      *a4 = *(_OWORD *)v11;
      v26[0] = *(_OWORD *)(v11 + 16);
      v26[1] = *(_OWORD *)(v11 + 32);
      v20 = *(_QWORD *)(v11 + 48);
      v21 = 0;
      v27 = v20;
    }
    HvlpReleaseHypercallPage((__int64)v24);
    HvlpReleaseHypercallPage((__int64)v25);
    if ( v19 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      v10 = 1;
  }
  if ( v21 >= 0 )
    HvlpLogIommuEvent(v26);
  return (unsigned int)v21;
}
