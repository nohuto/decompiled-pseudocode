/*
 * XREFs of HvlpGetLogicalProcessorProperty @ 0x1401BB6E4
 * Callers:
 *     HvlPhase2Initialize @ 0x14014CA18 (HvlPhase2Initialize.c)
 *     HvlLpGetMachineCheckContext @ 0x1401BCD98 (HvlLpGetMachineCheckContext.c)
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpGetLogicalProcessorProperty(int a1, int a2, _OWORD *a3)
{
  unsigned int v3; // r15d
  _DWORD *v7; // rbx
  __int64 v8; // rax
  PHYSICAL_ADDRESS v9; // r8
  PHYSICAL_ADDRESS v10; // rdx
  _OWORD *v11; // r14
  __int64 v12; // rax
  __int128 v13; // xmm1
  PHYSICAL_ADDRESS v15[4]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v16[4]; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  v7 = (_DWORD *)HvlpAcquireHypercallPage(v15, 1, 0LL, 8LL);
  v8 = HvlpAcquireHypercallPage(v16, 2, 0LL, 3256LL);
  v9 = v16[3];
  v10 = v15[3];
  v11 = (_OWORD *)v8;
  *v7 = a1;
  v7[1] = a2;
  if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                           122LL,
                           (PHYSICAL_ADDRESS)v10.QuadPart,
                           (PHYSICAL_ADDRESS)v9.QuadPart) )
  {
    v3 = -1073741823;
  }
  else
  {
    v12 = 25LL;
    do
    {
      *a3 = *v11;
      a3[1] = v11[1];
      a3[2] = v11[2];
      a3[3] = v11[3];
      a3[4] = v11[4];
      a3[5] = v11[5];
      a3[6] = v11[6];
      a3 += 8;
      v13 = v11[7];
      v11 += 8;
      *(a3 - 1) = v13;
      --v12;
    }
    while ( v12 );
    *a3 = *v11;
    a3[1] = v11[1];
    a3[2] = v11[2];
    *((_QWORD *)a3 + 6) = *((_QWORD *)v11 + 6);
  }
  HvlpReleaseHypercallPage(v15);
  HvlpReleaseHypercallPage(v16);
  return v3;
}
