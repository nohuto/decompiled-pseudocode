/*
 * XREFs of HvlQueryNumaDistance @ 0x1401BAE2C
 * Callers:
 *     KiComputeNumaCosts @ 0x1407927E0 (KiComputeNumaCosts.c)
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlQueryNumaDistance(unsigned __int16 a1, unsigned __int16 a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rsi
  __int64 v6; // rbx
  _DWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  _BYTE v14[24]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h]
  _BYTE v16[24]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+58h] [rbp-20h]

  v3 = 0;
  v4 = a2;
  v6 = a1;
  v7 = (_DWORD *)HvlpAcquireHypercallPage(v14, 1LL, 0LL, 8LL);
  v8 = HvlpAcquireHypercallPage(v16, 2LL, 0LL, 8LL);
  v9 = v17;
  v10 = (_QWORD *)v8;
  v11 = KeNodeBlock[v4];
  *v7 = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(KeNodeBlock[v6] + 148)] + 160);
  v12 = v15;
  v7[1] = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(v11 + 148)] + 160);
  if ( (unsigned __int16)HvcallCodeVa(120LL, v12, v9) )
  {
    *a3 = -1LL;
    v3 = -1073741823;
  }
  else
  {
    *a3 = *v10;
  }
  HvlpReleaseHypercallPage(v14);
  HvlpReleaseHypercallPage(v16);
  return v3;
}
