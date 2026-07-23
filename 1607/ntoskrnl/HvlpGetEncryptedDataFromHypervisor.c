/*
 * XREFs of HvlpGetEncryptedDataFromHypervisor @ 0x1401C04FC
 * Callers:
 *     HvlGetEncryptedData @ 0x1401C038C (HvlGetEncryptedData.c)
 * Callees:
 *     HvlpGetPageList @ 0x1401C1DA8 (HvlpGetPageList.c)
 *     HvlpGetPageListIterator @ 0x1401C1E64 (HvlpGetPageListIterator.c)
 *     HvlpStartPageListIteration @ 0x1401C2078 (HvlpStartPageListIteration.c)
 *     KeFlushCurrentTbImmediately @ 0x1401D5ECC (KeFlushCurrentTbImmediately.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromHypervisor(__int64 a1, _OWORD *a2, unsigned int a3, _DWORD *a4, __int64 *a5)
{
  __int64 *v5; // r13
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 PageListIterator; // rax
  unsigned int v13; // ebp
  unsigned int v14; // esi
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  _OWORD *v20; // rcx
  __int64 v21; // rdx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp+20h]

  v24 = a1;
  v5 = a5;
  *a4 = 0;
  *v5 = 0LL;
  if ( (HvlpRootFlags & 4) == 0 )
    return 3221226021LL;
  if ( HvlpCrashdumpIterationState )
  {
    v10 = dword_140322230;
    v11 = qword_140322228;
  }
  else
  {
    HvlpStartPageListIteration(1LL);
    v10 = 0;
    qword_140322228 = -1LL;
    dword_140322230 = 0;
    v11 = -1LL;
    HvlpCrashdumpIterationState = 1;
  }
  if ( v10 )
  {
    a5 = (__int64 *)v11;
    LODWORD(v24) = v10;
  }
  else
  {
    if ( !(unsigned int)HvlpGetPageList(1LL, &a5, &v24) )
    {
      PageListIterator = HvlpGetPageListIterator(1LL);
      *(_QWORD *)(PageListIterator + 8) = 0LL;
      *(_DWORD *)PageListIterator = 0;
      HvlpCrashdumpIterationState = 0;
      qword_140322228 = -1LL;
      dword_140322230 = 0;
      return 3221226021LL;
    }
    v10 = v24;
    v11 = (__int64)a5;
  }
  v13 = a3 >> 12;
  v14 = v10;
  if ( v13 < v10 )
    v14 = v13;
  if ( v14 )
  {
    v15 = v14;
    v16 = v11 << 12;
    do
    {
      v17 = 0LL;
      v18 = 1LL;
      v19 = 2LL;
      do
      {
        v17 |= v18++;
        --v19;
      }
      while ( v19 );
      v25 = ((v17 | 0x8000000000000000uLL) ^ v16) & 0xFFFFFFFFF000LL ^ (v17 | 0x8000000000000000uLL);
      *(_QWORD *)(8 * (((unsigned __int64)qword_140322200 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = v25;
      KeFlushCurrentTbImmediately();
      v20 = (_OWORD *)qword_140322200;
      v21 = 32LL;
      v22 = a2;
      do
      {
        *v22 = *v20;
        v22[1] = v20[1];
        v22[2] = v20[2];
        v22[3] = v20[3];
        v22[4] = v20[4];
        v22[5] = v20[5];
        v22[6] = v20[6];
        v22 += 8;
        v23 = v20[7];
        v20 += 8;
        *(v22 - 1) = v23;
        --v21;
      }
      while ( v21 );
      a2 += 256;
      v16 += 4096LL;
      --v15;
    }
    while ( v15 );
  }
  *v5 = v11;
  *a4 = v14 << 12;
  dword_140322230 = v10 - v14;
  qword_140322228 = v11 + v14;
  return 0LL;
}
