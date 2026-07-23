/*
 * XREFs of MiComputeOptimalZeroPath @ 0x1407A6288
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 */

ULONG_PTR MiComputeOptimalZeroPath()
{
  __int64 v0; // rsi
  unsigned int *v1; // rdi
  unsigned int v2; // r14d
  __int64 v3; // rbx
  ULONG_PTR result; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  int *v7; // r12
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  ULONG_PTR v11; // r12
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 *v16; // rdi
  int *v17; // r12
  ULONG_PTR v18; // r14
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  __int64 v22; // r14
  unsigned __int64 v23; // kr08_8
  unsigned __int64 v24; // r15
  bool v25; // zf
  __int64 v26; // r14
  __int64 v27; // rdi
  unsigned __int64 v28; // rbx
  __int64 v29; // r15
  __int64 v30; // rdi
  unsigned __int64 v31; // rbx
  signed __int32 v32[8]; // [rsp+0h] [rbp-78h] BYREF
  int *v33; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v34; // [rsp+28h] [rbp-50h]
  __int64 v35; // [rsp+30h] [rbp-48h]
  ULONG_PTR v36; // [rsp+38h] [rbp-40h]
  unsigned __int64 v37; // [rsp+40h] [rbp-38h]
  ULONG_PTR v38[6]; // [rsp+48h] [rbp-30h]
  int v39; // [rsp+C0h] [rbp+48h] BYREF
  int v40; // [rsp+C4h] [rbp+4Ch]
  __int64 v41; // [rsp+C8h] [rbp+50h]
  __int64 v42; // [rsp+D0h] [rbp+58h]
  __int64 v43; // [rsp+D8h] [rbp+60h]

  v0 = 0LL;
  v1 = (unsigned int *)&v39;
  v39 = 0;
  v2 = 0;
  v3 = 0LL;
  v40 = 2;
  while ( 1 )
  {
    result = MiGetPage((__int64)MiSystemPartition, v2, 0);
    v38[v3 + 2] = result;
    if ( result == -1LL )
      break;
    v5 = *v1;
    v6 = 48 * result - 0x58000000000LL;
    v38[v3] = v6;
    if ( *(unsigned __int8 *)(v6 + 34) >> 6 != v5 )
      MiChangePageAttribute(v6, v5, 0);
    ++v2;
    ++v3;
    ++v1;
    if ( v2 >= 2 )
    {
      v43 = 0LL;
      v7 = &v39;
      v34 = (unsigned __int64 *)&unk_140326AB0;
      v33 = &v39;
      v8 = 0LL;
      v35 = 2LL;
      do
      {
        v9 = *v7;
        v10 = 0LL;
        v11 = *(ULONG_PTR *)((char *)&v38[2] + v8);
        v12 = 3LL;
        v36 = v11;
        do
        {
          v13 = __rdtsc();
          _InterlockedOr(v32, 0);
          MiZeroPhysicalPage(v11, 3, (unsigned int)v9);
          _InterlockedOr(v32, 0);
          v14 = __rdtsc();
          v10 += (((unsigned __int64)HIDWORD(v14) << 32) | (unsigned int)v14) - v13;
          --v12;
        }
        while ( v12 );
        v15 = *(ULONG_PTR *)((char *)v38 + v8);
        v16 = v34;
        v17 = v33;
        v18 = v36;
        v42 = v15;
        v41 = 3LL;
        v37 = v10 / 3;
        v19 = 0LL;
        do
        {
          v20 = __rdtsc();
          _InterlockedOr(v32, 0);
          MiChangePageAttribute(v15, 1u, 0);
          MiZeroPhysicalPage(v18, 3, (unsigned int)v9);
          MiChangePageAttribute(v42, v9, 0);
          _InterlockedOr(v32, 0);
          v21 = __rdtsc();
          v15 = v42;
          v19 += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - v20;
          --v41;
        }
        while ( v41 );
        v22 = v43;
        v23 = v19;
        v24 = v37;
        if ( v23 / 3 < 9 * (v37 / 0xA) )
          dword_140326A64[4 * v9] = 1;
        v8 = v22 + 8;
        *(v16 - 1) = v24;
        v7 = v17 + 1;
        *v16 = v23 / 3;
        v43 = v8;
        v25 = v35-- == 1;
        v33 = v7;
        v34 = v16 + 2;
      }
      while ( !v25 );
      v26 = 2LL;
      do
      {
        v27 = v38[v0];
        v28 = (unsigned __int8)MiLockPageInline(v27);
        result = (ULONG_PTR)MiInsertPageInFreeOrZeroedList(v38[v0 + 2], 2);
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v28);
        ++v0;
        --v26;
      }
      while ( v26 );
      return result;
    }
  }
  if ( v2 )
  {
    v29 = v2;
    do
    {
      v30 = v38[--v29];
      v31 = (unsigned __int8)MiLockPageInline(v30);
      result = (ULONG_PTR)MiInsertPageInFreeOrZeroedList(v38[v29 + 2], 2);
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v31);
      --v2;
    }
    while ( v2 );
  }
  return result;
}
