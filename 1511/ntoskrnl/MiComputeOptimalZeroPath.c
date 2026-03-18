/*
 * XREFs of MiComputeOptimalZeroPath @ 0x14074D98C
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 */

void MiComputeOptimalZeroPath()
{
  __int64 v0; // rsi
  int *v1; // rdi
  unsigned int v2; // r14d
  __int64 i; // rbx
  __int64 Page; // rax
  int v5; // edx
  __int64 v6; // rcx
  unsigned int *v7; // r13
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  unsigned int v11; // r13d
  __int64 v12; // r15
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 *v15; // r14
  unsigned int *v16; // r13
  __int64 v17; // rcx
  __int64 v18; // r15
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  int v22; // edi
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rdi
  unsigned __int64 v26; // rbx
  __int64 v27; // r15
  __int64 v28; // rdi
  unsigned __int64 v29; // rbx
  signed __int32 v30[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+28h] [rbp-50h]
  __int64 v33; // [rsp+30h] [rbp-48h]
  unsigned int *v34; // [rsp+38h] [rbp-40h]
  unsigned __int64 *v35; // [rsp+40h] [rbp-38h]
  unsigned __int64 v36; // [rsp+48h] [rbp-30h]
  ULONG_PTR v37[5]; // [rsp+50h] [rbp-28h]
  unsigned int v38; // [rsp+C0h] [rbp+48h]
  int v39; // [rsp+C8h] [rbp+50h]
  int v40; // [rsp+D0h] [rbp+58h] BYREF
  int v41; // [rsp+D4h] [rbp+5Ch]
  __int64 v42; // [rsp+D8h] [rbp+60h]

  v0 = 0LL;
  v41 = 2;
  v40 = 0;
  v1 = &v40;
  v2 = 0;
  for ( i = 0LL; ; ++i )
  {
    Page = MiGetPage((__int64)MiSystemPartition, v2, 0);
    v37[i + 2] = Page;
    if ( Page == -1 )
      break;
    v5 = *v1;
    v6 = 48 * Page - 0x58000000000LL;
    v37[i] = v6;
    if ( *(unsigned __int8 *)(v6 + 34) >> 6 != v5 )
      MiChangePageAttribute(v6, v5, 0);
    ++v2;
    ++v1;
    if ( v2 >= 2 )
    {
      v39 = 0;
      v7 = (unsigned int *)&v40;
      v35 = (unsigned __int64 *)&unk_1402FE738;
      v34 = (unsigned int *)&v40;
      v8 = 0LL;
      v42 = 0LL;
      do
      {
        v9 = 0LL;
        v38 = *v7;
        v10 = 3LL;
        v11 = *v7;
        v12 = *(ULONG_PTR *)((char *)&v37[2] + v8);
        v31 = v12;
        do
        {
          v13 = __rdtsc();
          _InterlockedOr(v30, 0);
          MiZeroPhysicalPage(v12, 3, v11);
          _InterlockedOr(v30, 0);
          v14 = __rdtsc();
          v9 += (((unsigned __int64)HIDWORD(v14) << 32) | (unsigned int)v14) - v13;
          --v10;
        }
        while ( v10 );
        v15 = v35;
        v16 = v34;
        v17 = *(ULONG_PTR *)((char *)v37 + v42);
        v18 = v31;
        v33 = v17;
        v32 = 3LL;
        v36 = v9 / 3;
        v19 = 0LL;
        do
        {
          v20 = __rdtsc();
          _InterlockedOr(v30, 0);
          MiChangePageAttribute(v17, 1, 0);
          MiZeroPhysicalPage(v18, 3, v38);
          MiChangePageAttribute(v33, v38, 0);
          _InterlockedOr(v30, 0);
          v21 = __rdtsc();
          v17 = v33;
          v19 += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - v20;
          --v32;
        }
        while ( v32 );
        v22 = v39;
        v23 = v42;
        if ( v19 / 3 < 9 * (v36 / 0xA) )
        {
          if ( v39 )
            MiFlags |= 0x4000u;
          else
            MiFlags |= 0x2000u;
        }
        *(v15 - 1) = v36;
        v8 = v23 + 8;
        *v15 = v19 / 3;
        ++v39;
        v7 = v16 + 1;
        v42 = v8;
        v34 = v7;
        v35 = v15 + 2;
      }
      while ( (unsigned int)(v22 + 1) < 2 );
      v24 = 2LL;
      do
      {
        v25 = v37[v0];
        v26 = (unsigned __int8)MiLockPageInline(v25);
        MiInsertPageInFreeOrZeroedList(v37[v0 + 2], 2uLL);
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v26);
        ++v0;
        --v24;
      }
      while ( v24 );
      return;
    }
  }
  if ( v2 )
  {
    v27 = v2;
    do
    {
      v28 = v37[--v27];
      v29 = (unsigned __int8)MiLockPageInline(v28);
      MiInsertPageInFreeOrZeroedList(v37[v27 + 2], 2uLL);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v29);
      --v2;
    }
    while ( v2 );
  }
}
