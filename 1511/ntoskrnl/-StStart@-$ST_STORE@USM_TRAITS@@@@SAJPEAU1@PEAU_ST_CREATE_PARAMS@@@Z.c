/*
 * XREFs of ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400F9550
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400F9010 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140021E20 (RtlNumberOfSetBits.c)
 *     StEtaStart @ 0x1400F98F4 (StEtaStart.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400F9A24 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x1400FA8AC (RtlGetCompressionWorkSpaceSize.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     SmCrEncStart @ 0x14065BF44 (SmCrEncStart.c)
 */

NTSTATUS __fastcall ST_STORE<SM_TRAITS>::StStart(__int64 a1, int *a2)
{
  unsigned int v3; // edx
  int v5; // r10d
  int v6; // ecx
  int v7; // r8d
  SIZE_T v8; // rsi
  PVOID PoolWithTag; // rax
  NTSTATUS result; // eax
  ULONG v11; // eax
  ULONG v12; // ecx
  bool v13; // cc
  PVOID v14; // rax
  __int64 v15; // rax
  unsigned int v16; // esi
  PVOID v17; // rax
  ULONG v18; // r8d
  int v19; // esi
  int v20; // edx
  char v21; // al
  int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  __int64 v25; // r9
  unsigned int v26; // r8d
  _DWORD *v27; // rax
  unsigned int v28; // esi
  PVOID v29; // rax
  unsigned int v30; // esi
  PVOID v31; // rax
  __int64 v32; // r9
  __int64 v33; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v34[2]; // [rsp+38h] [rbp-41h] BYREF
  ULONG CompressBufferWorkSpaceSize; // [rsp+40h] [rbp-39h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+44h] [rbp-35h] BYREF
  _DWORD v37[2]; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-29h] BYREF
  int v39; // [rsp+60h] [rbp-19h]
  int v40; // [rsp+64h] [rbp-15h]
  __int64 v41; // [rsp+68h] [rbp-11h]
  __int64 v42; // [rsp+70h] [rbp-9h]
  __int64 v43; // [rsp+78h] [rbp-1h]
  __int64 v44; // [rsp+80h] [rbp+7h]
  __int64 v45; // [rsp+88h] [rbp+Fh]
  int v46; // [rsp+90h] [rbp+17h]
  int v47; // [rsp+94h] [rbp+1Bh]

  v3 = a2[2];
  if ( !v3 || ((v3 - 1) & v3) != 0 || v3 - 4096 > 0x1F000 )
    return -1073741453;
  v5 = a2[3];
  if ( (unsigned int)(v5 - 1) > 0x3FFFF )
    return -1073741811;
  v6 = *a2;
  if ( (unsigned __int8)*a2 == 1 )
  {
    v26 = a2[4];
    if ( !v26 )
      return -1073741811;
    if ( ((v26 - 1) & v26) != 0 )
      return -1073741811;
    if ( v26 > v3 )
      return -1073741811;
    v27 = (_DWORD *)*((_QWORD *)a2 + 7);
    if ( !v27 || *v27 != v5 || (v6 & 0x100) != 0 )
      return -1073741811;
  }
  if ( !(_BYTE)v6 && (a2[4] || *((_QWORD *)a2 + 7))
    || (unsigned __int8)*a2 >= 2u
    || (v6 & 0xFFF80000) != 0
    || (*a2 & 0x600) == 0x600
    || (v6 & 0x10400) == 0x10400
    || (a2[10] == 0) != (*((_QWORD *)a2 + 4) == 0LL) )
  {
    return -1073741811;
  }
  v7 = 0;
  if ( v3 > 0x10 )
  {
    do
      ++v7;
    while ( 16 << v7 < v3 );
  }
  *(_DWORD *)(a1 + 36) = v7;
  *(_DWORD *)(a1 + 40) = 1 << v7;
  *(_DWORD *)(a1 + 32) = (1 << v7) - 1;
  if ( a2[2] == 0x20000 )
    *(_DWORD *)(a1 + 40) = (1 << v7) - 1;
  if ( (unsigned __int8)*a2 )
    *(_DWORD *)(a1 + 48) = a2[10] != 0 ? 16 : 4;
  *(_DWORD *)(a1 + 44) = (unsigned int)(*(_DWORD *)(a1 + 48) + 4111) >> 4;
  if ( a2[3] > (unsigned int)(1 << (32 - v7)) )
    return -1073741306;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  v8 = (unsigned int)(2 * a2[3]);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x74536D73u);
  *(_QWORD *)(a1 + 56) = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, (unsigned int)v8);
  if ( (unsigned __int8)*a2 == 1 )
  {
    v28 = a2[3];
    v29 = ExAllocatePoolWithTag(NonPagedPoolNx, v28, 0x74536D73u);
    *(_QWORD *)(a1 + 64) = v29;
    if ( !v29 )
      return -1073741670;
    memset(v29, 0, v28);
    v30 = a2[3];
    v31 = ExAllocatePoolWithTag(NonPagedPoolNx, v30, 0x74536D73u);
    *(_QWORD *)(a1 + 72) = v31;
    if ( !v31 )
      return -1073741670;
    memset(v31, 0, v30);
  }
  if ( (*((_BYTE *)a2 + 2) & 1) != 0 )
    *(_WORD *)(a1 + 2524) = 3;
  else
    *(_WORD *)(a1 + 2524) = 4;
  result = RtlGetCompressionWorkSpaceSize(
             *(_WORD *)(a1 + 2524),
             &CompressBufferWorkSpaceSize,
             &CompressFragmentWorkSpaceSize);
  if ( result >= 0 )
  {
    v11 = CompressFragmentWorkSpaceSize;
    v12 = CompressBufferWorkSpaceSize;
    v13 = CompressBufferWorkSpaceSize <= CompressFragmentWorkSpaceSize;
    *(_DWORD *)(a1 + 2520) = CompressFragmentWorkSpaceSize;
    if ( v13 )
      v12 = v11;
    CompressBufferWorkSpaceSize = v12;
    if ( v12 )
    {
      v14 = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x74536D73u);
      *(_QWORD *)(a1 + 2512) = v14;
      if ( !v14 )
        return -1073741670;
    }
    v15 = *((_QWORD *)a2 + 6);
    v16 = 4096;
    if ( v15 )
    {
      *(_QWORD *)(a1 + 2448) = v15;
    }
    else
    {
      v41 = 2048LL;
      v46 = -1;
      v39 = -1;
      v34[0] = -1;
      v37[0] = -1;
      v42 = 4096LL;
      v38[0] = v34;
      v38[1] = v37;
      v43 = 0x2000LL;
      v44 = 0x4000LL;
      v45 = 0x8000LL;
      v47 = 0;
      v40 = 100000000;
      v34[1] = 0;
      v37[1] = 0;
      v33 = 983104LL;
      result = StEtaStart(a1 + 2456, v38, &v33);
      if ( result < 0 )
        return result;
      *(_QWORD *)(a1 + 2448) = a1 + 2456;
    }
    if ( !(unsigned __int8)*a2 )
    {
      if ( a2[10] )
        return -1073741066;
      goto LABEL_35;
    }
    if ( !a2[10] )
      goto LABEL_35;
    result = SmCrEncStart(a1 + 2544, *((_QWORD *)a2 + 4));
    if ( result < 0 )
      return result;
    if ( ((*(_DWORD *)(a1 + 2552) + 15) & ~(*(_DWORD *)(a1 + 2552) - 1)) == 0x10 )
    {
LABEL_35:
      if ( (*a2 & 0x8000) != 0 )
        v16 = 0x2000;
      v17 = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x74536D73u);
      *(_QWORD *)(a1 + 2688) = v17;
      if ( v17 )
      {
        if ( (unsigned __int8)*a2 != 1 )
        {
          v18 = a2[3];
          v19 = 0;
LABEL_40:
          v20 = *a2;
          if ( !v19 || (v21 = 1, (v20 & 0x4000) != 0) )
            v21 = 0;
          v22 = (BYTE1(*a2) & 1 ^ (unsigned __int8)(8 * v21)) & 8 ^ ((unsigned int)*a2 >> 8) & 1;
          if ( (_BYTE)v20 )
          {
            v24 = v22 & 0xFFFFFF9F;
          }
          else
          {
            v23 = v22 & 0xFFFFFF9F | 0x40;
            v34[0] = v23;
            if ( (v20 & 0x40000) == 0 )
            {
LABEL_46:
              v25 = *((_QWORD *)a2 + 7);
              LODWORD(v33) = 0;
              result = ST_STORE<SM_TRAITS>::StDmStart(
                         a1,
                         (int)a1 + 80,
                         (unsigned int)v34,
                         v25,
                         (__int64)&v33,
                         v18 - v19);
              if ( result >= 0 )
              {
                if ( !v19 )
                  return 0;
                v32 = *((_QWORD *)a2 + 7);
                LODWORD(v33) = v33 + 1;
                v34[0] = v34[0] & 0xFFFFFFE0 | 0x16;
                result = ST_STORE<SM_TRAITS>::StDmStart(a1, (int)a1 + 1264, (unsigned int)v34, v32, (__int64)&v33, v19);
                if ( result >= 0 )
                  return 0;
              }
              return result;
            }
            v24 = v23 | 0x60;
          }
          v34[0] = v24;
          goto LABEL_46;
        }
        v19 = 1;
        v18 = RtlNumberOfSetBits(*((PRTL_BITMAP *)a2 + 7));
        if ( v18 > 1 )
          goto LABEL_40;
        return -1073741811;
      }
      return -1073741670;
    }
    return -1073741453;
  }
  return result;
}
