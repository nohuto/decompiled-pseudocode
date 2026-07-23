/*
 * XREFs of HvlSetupLiveDumpBuffer @ 0x1401C218C
 * Callers:
 *     HvlPrepareLivedumpDescriptor @ 0x1401C0430 (HvlPrepareLivedumpDescriptor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 */

__int64 __fastcall HvlSetupLiveDumpBuffer(
        PHYSICAL_ADDRESS **a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        PHYSICAL_ADDRESS **a6)
{
  PHYSICAL_ADDRESS **v6; // r15
  unsigned __int64 v7; // r8
  __int64 v9; // rbp
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  PHYSICAL_ADDRESS *v17; // r12
  __int64 v18; // r13
  PHYSICAL_ADDRESS *v19; // r14
  PHYSICAL_ADDRESS *v20; // r14
  PHYSICAL_ADDRESS *v21; // r12
  unsigned __int64 v22; // rdi
  PHYSICAL_ADDRESS **v23; // rsi
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r13
  void **v28; // rdx
  char *v29; // r14
  PHYSICAL_ADDRESS *v30; // rbx
  PHYSICAL_ADDRESS **v31; // rsi
  unsigned __int64 v32; // r15
  void **v33; // r13
  unsigned __int64 v34; // rbx
  PHYSICAL_ADDRESS **v35; // r12
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  PHYSICAL_ADDRESS *v38; // r14
  unsigned __int64 v39; // rbp
  PHYSICAL_ADDRESS **v40; // r15
  PHYSICAL_ADDRESS *v41; // rdi
  unsigned __int64 v42; // [rsp+20h] [rbp-68h]
  unsigned __int64 v43; // [rsp+20h] [rbp-68h]
  unsigned __int64 v44; // [rsp+40h] [rbp-48h]
  unsigned __int64 v45; // [rsp+48h] [rbp-40h]
  PHYSICAL_ADDRESS *v46; // [rsp+50h] [rbp-38h]
  unsigned __int64 v48; // [rsp+C0h] [rbp+38h]

  v6 = a1;
  v7 = (unsigned __int64)a2 << 6;
  if ( v7 < 5 )
    return 3221225507LL;
  v9 = 2LL;
  v10 = v7 - 2;
  v11 = v10 / 0x40201;
  if ( v10 / 0x40201 >= 0x200 )
    v11 = 512LL;
  v12 = v11 << 9;
  v42 = v11 << 9;
  v13 = v11 << 18;
  v48 = v11 << 18;
  v14 = v10 - 262657 * v11;
  if ( v14 >= 3 && v11 < 0x200 )
  {
    v15 = v14 - 1;
    ++v11;
    v12 += v15 / 0x201;
    v13 += (v15 / 0x201) << 9;
    v42 = v12;
    v48 = v13;
    v16 = v15 % 0x201;
    if ( v16 >= 2 )
    {
      ++v12;
      v13 = v16 + v13 - 1;
      v42 = v12;
      v48 = v13;
    }
  }
  v17 = *a1;
  *a4 = v11 + 2;
  v18 = 1LL;
  v46 = v17;
  v17[1].LowPart = 3;
  v17->QuadPart = v13;
  v19 = *a1;
  *a5 = v11 + 2 + v12;
  v20 = v19 + 512;
  v17[2].QuadPart = (unsigned __int64)MmGetPhysicalAddress(v20).QuadPart >> 12;
  v21 = *v6 + 1024;
  if ( v11 )
  {
    v22 = 0LL;
    v23 = v6;
    do
    {
      *v20 = MmGetPhysicalAddress(v21);
      v21 += 512;
      ++v20;
      if ( (++v22 & 0x1FF) == 0 && (++v18 & 0x3F) == 0 )
      {
        ++v23;
        v18 = 0LL;
        v20 = *v23;
      }
      if ( (++v9 & 0x3F) == 0 )
      {
        ++v6;
        v9 = 0LL;
        v21 = *v6;
      }
    }
    while ( v22 < v11 );
    v12 = v42;
    v9 = 2LL;
    v13 = v48;
    v6 = a1;
  }
  v24 = v11 + 2;
  v43 = v24;
  v25 = v24 / 0x40;
  v26 = v24 % 0x40;
  v44 = v24 % 0x40;
  v45 = v24 / 0x40;
  v27 = v24 % 0x40;
  v28 = (void **)&v6[v24 >> 6];
  v29 = (char *)*v28 + 4096 * (v24 % 0x40);
  if ( v12 )
  {
    v30 = *v6 + 1024;
    v31 = v6;
    v32 = 0LL;
    v33 = v28;
    do
    {
      *v30 = MmGetPhysicalAddress(v29);
      v29 += 4096;
      ++v30;
      if ( (++v32 & 0x1FF) == 0 && (++v9 & 0x3F) == 0 )
      {
        ++v31;
        v9 = 0LL;
        v30 = *v31;
      }
      if ( (++v26 & 0x3F) == 0 )
      {
        ++v33;
        v26 = 0LL;
        v29 = (char *)*v33;
      }
    }
    while ( v32 < v12 );
    v13 = v48;
    v24 = v43;
    v6 = a1;
    v27 = v44;
    v25 = v45;
  }
  v34 = v12 + v24;
  v35 = &v6[v25];
  v36 = v34 >> 6;
  v37 = v34 & 0x3F;
  v38 = &(*v35)[512 * v27];
  v39 = 0LL;
  v40 = &v6[v36];
  v41 = &(*v40)[512 * (unsigned __int64)(unsigned int)v37];
  while ( v39 < v13 )
  {
    *v38 = MmGetPhysicalAddress(v41);
    v41 += 512;
    ++v38;
    if ( (++v39 & 0x1FF) == 0 && (++v27 & 0x3F) == 0 )
    {
      ++v35;
      v27 = 0LL;
      v38 = *v35;
    }
    if ( (++v37 & 0x3F) == 0 )
    {
      if ( v39 >= v13 )
        break;
      ++v40;
      v37 = 0LL;
      v41 = *v40;
    }
  }
  *a6 = v46;
  return 0LL;
}
