/*
 * XREFs of HvlpSetLogicalProcessorProperty @ 0x1401BC3A0
 * Callers:
 *     HvlpUpdateLpcbIndex @ 0x1401BC7BC (HvlpUpdateLpcbIndex.c)
 *     HvlConfigurePcc @ 0x1401BEC40 (HvlConfigurePcc.c)
 *     HvlConfigurePerfStateCap @ 0x1401BEC8C (HvlConfigurePerfStateCap.c)
 *     HvlConfigurePerfStates @ 0x1401BECBC (HvlConfigurePerfStates.c)
 *     HvlConfigureThrottleStates @ 0x1401BED50 (HvlConfigureThrottleStates.c)
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpSetLogicalProcessorProperty(int a1, int a2, _OWORD *a3)
{
  unsigned int v3; // ebp
  _DWORD *v7; // rax
  _OWORD *v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int128 v18; // xmm1
  PHYSICAL_ADDRESS v19; // rdx
  __int128 v20; // xmm0
  PHYSICAL_ADDRESS v22[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  v7 = (_DWORD *)HvlpAcquireHypercallPage(v22, 1, 0LL, 3264LL);
  *v7 = a1;
  v8 = v7 + 2;
  v7[1] = a2;
  v9 = 25LL;
  do
  {
    v10 = a3[1];
    *v8 = *a3;
    v11 = a3[2];
    v8[1] = v10;
    v12 = a3[3];
    v8[2] = v11;
    v13 = a3[4];
    v8[3] = v12;
    v14 = a3[5];
    v8[4] = v13;
    v15 = a3[6];
    v8[5] = v14;
    v16 = a3[7];
    a3 += 8;
    v8[6] = v15;
    v8 += 8;
    *(v8 - 1) = v16;
    --v9;
  }
  while ( v9 );
  v17 = *((_QWORD *)a3 + 6);
  v18 = a3[1];
  v19 = v22[3];
  *v8 = *a3;
  v20 = a3[2];
  v8[1] = v18;
  v8[2] = v20;
  *((_QWORD *)v8 + 6) = v17;
  if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                           121LL,
                           (PHYSICAL_ADDRESS)v19.QuadPart,
                           0LL) )
    v3 = -1073741823;
  HvlpReleaseHypercallPage((__int64)v22);
  return v3;
}
