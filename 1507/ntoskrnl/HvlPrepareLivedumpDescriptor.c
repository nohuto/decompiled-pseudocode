/*
 * XREFs of HvlPrepareLivedumpDescriptor @ 0x1401EF3C4
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140677378 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall HvlPrepareLivedumpDescriptor(
        PHYSICAL_ADDRESS **a1,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        PHYSICAL_ADDRESS **a6)
{
  PHYSICAL_ADDRESS **v6; // r15
  __int64 v8; // rbp
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  PHYSICAL_ADDRESS *v16; // r12
  __int64 v17; // r13
  PHYSICAL_ADDRESS *v18; // r14
  PHYSICAL_ADDRESS *v19; // r14
  PHYSICAL_ADDRESS *v20; // r12
  unsigned __int64 v21; // rdi
  PHYSICAL_ADDRESS **v22; // rsi
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // r13
  void **v27; // rdx
  char *v28; // r14
  PHYSICAL_ADDRESS *v29; // rbx
  PHYSICAL_ADDRESS **v30; // r13
  unsigned __int64 v31; // rsi
  void **v32; // r15
  unsigned __int64 v33; // rbx
  PHYSICAL_ADDRESS **v34; // r12
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbx
  PHYSICAL_ADDRESS *v37; // r14
  unsigned __int64 v38; // rbp
  PHYSICAL_ADDRESS **v39; // r15
  PHYSICAL_ADDRESS *v40; // rdi
  unsigned __int64 v41; // [rsp+20h] [rbp-68h]
  unsigned __int64 v42; // [rsp+28h] [rbp-60h]
  unsigned __int64 v43; // [rsp+28h] [rbp-60h]
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]
  unsigned __int64 v45; // [rsp+50h] [rbp-38h]
  PHYSICAL_ADDRESS *v46; // [rsp+58h] [rbp-30h]

  v6 = a1;
  if ( !is_mul_ok(a2, 0x40uLL) )
    return 3221225485LL;
  if ( a2 << 6 < 5 )
    return 3221225507LL;
  v8 = 2LL;
  v9 = (a2 << 6) - 2;
  v10 = v9 / 0x40201;
  if ( v9 / 0x40201 >= 0x200 )
    v10 = 512LL;
  v11 = v10 << 9;
  v42 = v10 << 9;
  v12 = v10 << 18;
  v41 = v10 << 18;
  v13 = v9 - 262657 * v10;
  if ( v13 >= 3 && v10 < 0x200 )
  {
    v14 = v13 - 1;
    ++v10;
    v11 += v14 / 0x201;
    v12 += (v14 / 0x201) << 9;
    v42 = v11;
    v41 = v12;
    v15 = v14 % 0x201;
    if ( v15 >= 2 )
    {
      ++v11;
      v12 = v15 + v12 - 1;
      v42 = v11;
      v41 = v12;
    }
  }
  v16 = *a1;
  *a4 = v10 + 2;
  v17 = 1LL;
  v46 = v16;
  v16[1].LowPart = 3;
  v16->QuadPart = v12;
  v18 = *a1;
  *a5 = v10 + 2 + v11;
  v19 = v18 + 512;
  v16[2].QuadPart = MmGetPhysicalAddress(v19).QuadPart >> 12;
  v20 = *v6 + 1024;
  if ( v10 )
  {
    v21 = 0LL;
    v22 = v6;
    do
    {
      *v19 = MmGetPhysicalAddress(v20);
      v20 += 512;
      ++v19;
      if ( (++v21 & 0x1FF) == 0 && (++v17 & 0x3F) == 0 )
      {
        ++v22;
        v17 = 0LL;
        v19 = *v22;
      }
      if ( (++v8 & 0x3F) == 0 )
      {
        ++v6;
        v8 = 0LL;
        v20 = *v6;
      }
    }
    while ( v21 < v10 );
    v11 = v42;
    v8 = 2LL;
    v12 = v41;
    v6 = a1;
  }
  v23 = v10 + 2;
  v43 = v23;
  v24 = v23 / 0x40;
  v25 = v23 % 0x40;
  v44 = v23 % 0x40;
  v45 = v23 / 0x40;
  v26 = v23 % 0x40;
  v27 = (void **)&v6[v23 >> 6];
  v28 = (char *)*v27 + 4096 * (v23 % 0x40);
  if ( v11 )
  {
    v29 = *v6 + 1024;
    v30 = v6;
    v31 = 0LL;
    v32 = v27;
    do
    {
      *v29 = MmGetPhysicalAddress(v28);
      v28 += 4096;
      ++v29;
      if ( (++v31 & 0x1FF) == 0 && (++v8 & 0x3F) == 0 )
      {
        ++v30;
        v8 = 0LL;
        v29 = *v30;
      }
      if ( (++v25 & 0x3F) == 0 )
      {
        ++v32;
        v25 = 0LL;
        v28 = (char *)*v32;
      }
    }
    while ( v31 < v11 );
    v12 = v41;
    v23 = v43;
    v6 = a1;
    v26 = v44;
    v24 = v45;
  }
  v33 = v11 + v23;
  v34 = &v6[v24];
  v35 = v33 >> 6;
  v36 = v33 & 0x3F;
  v37 = &(*v34)[512 * v26];
  v38 = 0LL;
  v39 = &v6[v35];
  v40 = &(*v39)[512 * (unsigned __int64)(unsigned int)v36];
  while ( v38 < v12 )
  {
    *v37 = MmGetPhysicalAddress(v40);
    v40 += 512;
    ++v37;
    if ( (++v38 & 0x1FF) == 0 && (++v26 & 0x3F) == 0 )
    {
      ++v34;
      v26 = 0LL;
      v37 = *v34;
    }
    if ( (++v36 & 0x3F) == 0 )
    {
      if ( v38 >= v12 )
        break;
      ++v39;
      v36 = 0LL;
      v40 = *v39;
    }
  }
  *a6 = v46;
  return 0LL;
}
