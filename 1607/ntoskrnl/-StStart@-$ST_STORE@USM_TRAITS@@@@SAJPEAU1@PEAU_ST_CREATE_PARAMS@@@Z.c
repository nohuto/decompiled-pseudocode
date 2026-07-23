/*
 * XREFs of ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140005158
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140004B28 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14000545C (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z @ 0x1400057A0 (-StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x1400064BC (RtlGetCompressionWorkSpaceSize.c)
 *     RtlNumberOfSetBits @ 0x140076850 (RtlNumberOfSetBits.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SmCrEncStart @ 0x140699C50 (SmCrEncStart.c)
 */

int __fastcall ST_STORE<SM_TRAITS>::StStart(__int64 a1, int *a2)
{
  unsigned int v4; // edx
  int v5; // r10d
  int v6; // ecx
  int v7; // r8d
  SIZE_T v8; // rsi
  PVOID PoolWithTag; // rax
  int result; // eax
  ULONG v11; // eax
  ULONG v12; // ecx
  bool v13; // cc
  PVOID v14; // rax
  __int64 v15; // rax
  SIZE_T v16; // rdx
  PVOID v17; // rax
  int v18; // r9d
  int v19; // esi
  int v20; // edx
  bool v21; // al
  int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  int v25; // r9d
  unsigned int v26; // r8d
  _DWORD *v27; // rax
  unsigned int v28; // esi
  PVOID v29; // rax
  unsigned int v30; // esi
  PVOID v31; // rax
  ULONG CompressFragmentWorkSpaceSize[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v33; // [rsp+88h] [rbp+48h] BYREF
  ULONG CompressBufferWorkSpaceSize; // [rsp+90h] [rbp+50h] BYREF
  int v35; // [rsp+98h] [rbp+58h]

  v4 = a2[2];
  if ( !v4 || ((v4 - 1) & v4) != 0 || v4 - 4096 > 0x1F000 )
    return -1073741453;
  v5 = a2[3];
  if ( (unsigned int)(v5 - 1) > 0x3FFFF )
    return -1073741811;
  v6 = *a2;
  if ( (*a2 & 0x100) != 0 )
    return -1073741811;
  if ( (unsigned __int8)v6 == 1 )
  {
    v26 = a2[4];
    if ( !v26 )
      return -1073741811;
    if ( ((v26 - 1) & v26) != 0 )
      return -1073741811;
    if ( v26 > v4 )
      return -1073741811;
    v27 = (_DWORD *)*((_QWORD *)a2 + 7);
    if ( !v27 || *v27 != v5 )
      return -1073741811;
  }
  if ( !(_BYTE)v6 && (a2[4] || *((_QWORD *)a2 + 7))
    || (unsigned __int8)v6 >= 2u
    || (v6 & 0xFFF80000) != 0
    || (*a2 & 0x600) == 0x600
    || (v6 & 0x10400) == 0x10400
    || (a2[10] == 0) != (*((_QWORD *)a2 + 4) == 0LL) )
  {
    return -1073741811;
  }
  v7 = 0;
  if ( v4 > 0x10 )
  {
    do
      ++v7;
    while ( 16 << v7 < v4 );
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
    *(_WORD *)(a1 + 3932) = 3;
  else
    *(_WORD *)(a1 + 3932) = 4;
  result = RtlGetCompressionWorkSpaceSize(
             *(_WORD *)(a1 + 3932),
             &CompressBufferWorkSpaceSize,
             CompressFragmentWorkSpaceSize);
  if ( result >= 0 )
  {
    v11 = CompressFragmentWorkSpaceSize[0];
    v12 = CompressBufferWorkSpaceSize;
    v13 = CompressBufferWorkSpaceSize <= CompressFragmentWorkSpaceSize[0];
    *(_DWORD *)(a1 + 3928) = CompressFragmentWorkSpaceSize[0];
    if ( v13 )
      v12 = v11;
    CompressBufferWorkSpaceSize = v12;
    if ( v12 )
    {
      v14 = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x74536D73u);
      *(_QWORD *)(a1 + 3920) = v14;
      if ( !v14 )
        return -1073741670;
    }
    v15 = *((_QWORD *)a2 + 6);
    if ( v15 )
    {
      *(_QWORD *)(a1 + 3856) = v15;
    }
    else
    {
      result = StEtaHelper::StartHelper((struct _ST_ETA_CONTEXT *)(a1 + 3864), 0);
      if ( result < 0 )
        return result;
      *(_QWORD *)(a1 + 3856) = a1 + 3864;
    }
    if ( !(unsigned __int8)*a2 )
    {
      if ( a2[10] )
        return -1073741066;
      goto LABEL_36;
    }
    if ( !a2[10] )
      goto LABEL_36;
    result = SmCrEncStart(a1 + 3952, *((_QWORD *)a2 + 4));
    if ( result < 0 )
      return result;
    if ( ((*(_DWORD *)(a1 + 3960) + 15) & ~(*(_DWORD *)(a1 + 3960) - 1)) == 0x10 )
    {
LABEL_36:
      v16 = 4096LL;
      if ( (*a2 & 0x8000) != 0 )
        v16 = 0x2000LL;
      v17 = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x74536D73u);
      *(_QWORD *)(a1 + 4096) = v17;
      if ( v17 )
      {
        if ( (unsigned __int8)*a2 != 1 )
        {
          v19 = 0;
LABEL_41:
          v20 = *a2;
          v21 = v19 && (v20 & 0x4000) == 0;
          v22 = (BYTE1(*a2) & 1 ^ (unsigned __int8)(8 * v21)) & 8 ^ ((unsigned int)*a2 >> 8) & 1;
          if ( (_BYTE)v20 )
          {
            v24 = v22 & 0xFFFFFF9F;
          }
          else
          {
            v23 = v22 & 0xFFFFFF9F | 0x40;
            v33 = v23;
            if ( (v20 & 0x40000) == 0 )
            {
LABEL_47:
              v35 = 0;
              result = ST_STORE<SM_TRAITS>::StDmStart(a1, (int)a1 + 80, (unsigned int)&v33, v18);
              if ( result >= 0 )
              {
                if ( !v19 )
                  return 0;
                ++v35;
                v33 = v33 & 0xFFFFFFE0 | 0x16;
                result = ST_STORE<SM_TRAITS>::StDmStart(a1, (int)a1 + 1968, (unsigned int)&v33, v25);
                if ( result >= 0 )
                  return 0;
              }
              return result;
            }
            v24 = v23 | 0x60;
          }
          v33 = v24;
          goto LABEL_47;
        }
        v19 = 1;
        if ( RtlNumberOfSetBits(*((PRTL_BITMAP *)a2 + 7)) > 1 )
          goto LABEL_41;
        return -1073741811;
      }
      return -1073741670;
    }
    return -1073741453;
  }
  return result;
}
