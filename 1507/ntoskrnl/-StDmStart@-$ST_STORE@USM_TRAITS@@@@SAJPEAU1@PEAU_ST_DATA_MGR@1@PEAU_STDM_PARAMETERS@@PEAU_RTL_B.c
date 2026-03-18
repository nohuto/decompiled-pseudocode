/*
 * XREFs of ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400D8CFC
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400D8828 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 * Callees:
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1400D8F80 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     RtlSetAllBits @ 0x1400D8FF8 (RtlSetAllBits.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017F6B0 (ZwQuerySystemInformation.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SmCalcIoWorkItemSize @ 0x140259C40 (SmCalcIoWorkItemSize.c)
 *     RtlSparseBitmapCtxStart @ 0x1402730F0 (RtlSparseBitmapCtxStart.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ST_STORE<SM_TRAITS>::StDmStart(
        __int128 *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        unsigned int *a5,
        int a6)
{
  __int128 v6; // xmm0
  unsigned int *v7; // r15
  __int128 *v8; // rsi
  _DWORD *v10; // r14
  __int128 v11; // xmm1
  unsigned int v12; // edi
  int v13; // ecx
  int v14; // edx
  PVOID PoolWithTag; // rcx
  int v16; // eax
  __int64 v17; // rax
  NTSTATUS result; // eax
  int v19; // eax
  unsigned int v20; // r13d
  __int64 v21; // rsi
  __int64 v22; // r11
  unsigned int v23; // r9d
  int v24; // ecx
  __int64 v25; // rax
  int v26; // r10d
  __int64 v27; // r11
  unsigned int v28; // r15d
  _QWORD *v29; // rdi
  __int64 i; // rax
  unsigned int v31; // ecx
  unsigned int v32; // r15d
  PVOID v33; // rax
  PVOID v34; // r14
  int v35; // r8d
  unsigned int v36; // r15d
  SIZE_T v37; // r12
  PVOID v38; // rax
  PVOID v39; // r14
  __int64 v40; // rcx
  unsigned int v41; // r15d
  PVOID v42; // rax
  PVOID v43; // r14
  int v44; // eax
  int v45; // [rsp+20h] [rbp-B9h]
  int v47; // [rsp+38h] [rbp-A1h] BYREF
  int v48; // [rsp+3Ch] [rbp-9Dh]
  __int64 (__fastcall *v49)(); // [rsp+40h] [rbp-99h]
  __int64 (__fastcall *v50)(); // [rsp+48h] [rbp-91h]
  __int64 (__fastcall *v51)(); // [rsp+50h] [rbp-89h]
  __int64 (__fastcall *v52)(); // [rsp+58h] [rbp-81h]
  __int64 v53; // [rsp+60h] [rbp-79h]
  __int128 *v54; // [rsp+68h] [rbp-71h]
  _QWORD v55[6]; // [rsp+70h] [rbp-69h] BYREF
  char SystemInformation[12]; // [rsp+A0h] [rbp-39h] BYREF
  unsigned int v57; // [rsp+ACh] [rbp-2Dh]

  v6 = *a1;
  v7 = a5;
  v8 = a1;
  v54 = a1;
  *(_OWORD *)(a2 + 128) = v6;
  v10 = a3;
  v11 = a1[1];
  v12 = -1;
  v53 = a4;
  *(_OWORD *)(a2 + 144) = v11;
  *(_OWORD *)(a2 + 160) = a1[2];
  *(_QWORD *)&v11 = *((_QWORD *)a1 + 6);
  v13 = *a3;
  *(_QWORD *)(a2 + 176) = v11;
  *(_DWORD *)(a2 + 184) = v13;
  *(_QWORD *)(a2 + 360) = *((_QWORD *)v8 + 314);
  *(_QWORD *)(a2 + 1176) = (char *)v8 + 4216;
  *(_QWORD *)(a2 + 440) = *((_QWORD *)v8 + 306);
  *(_QWORD *)(a2 + 456) = v8 + 159;
  *(_QWORD *)(a2 + 1048) = *((_QWORD *)v8 + 336);
  *(_QWORD *)(a2 + 1168) = v8 + 264;
  v14 = *(_DWORD *)(a2 + 128);
  if ( (unsigned __int8)v14 == 1 && (v13 & 2) == 0 )
    *(_QWORD *)(a2 + 1080) = v8 + 171;
  *(_WORD *)(a2 + 432) = *((_WORD *)v8 + 1262);
  *(_QWORD *)(a2 + 384) = *(_QWORD *)(a2 + 360);
  *(_QWORD *)(a2 + 392) = a2 + 24;
  *(_QWORD *)(a2 + 400) = a2 + 88;
  if ( (unsigned __int8)v14 == 1 || (v14 & 0x40000) != 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(
                    NonPagedPoolNx,
                    4 * (unsigned int)(((unsigned __int64)*((unsigned int *)v8 + 3) + 31) >> 5),
                    0x74536D73u);
    if ( !PoolWithTag )
      return -1073741670;
    *(_DWORD *)(a2 + 192) = *((_DWORD *)v8 + 3);
    *(_QWORD *)(a2 + 200) = PoolWithTag;
  }
  v16 = *(_DWORD *)(a2 + 128);
  if ( (v16 & 0x40000) != 0 )
  {
    RtlSetAllBits((PRTL_BITMAP)(a2 + 192));
    goto LABEL_8;
  }
  if ( (_BYTE)v16 == 1 )
  {
    memset(
      *(void **)(a2 + 200),
      0,
      4 * ((unsigned int)((*(_DWORD *)(a2 + 192) & 0x1F) != 0) + (*(_DWORD *)(a2 + 192) >> 5)));
    v19 = a6;
    v20 = *a5;
    v21 = v53;
    while ( 1 )
    {
      v45 = v19;
      if ( !v19 )
      {
        v10 = a3;
        v8 = v54;
        if ( (*a3 & 2) == 0 )
          goto LABEL_46;
        v32 = (*(_DWORD *)(a2 + 176) + 4111) & 0xFFFFFFF0;
        v33 = ExAllocatePoolWithTag(NonPagedPoolNx, v32, 0x74536D73u);
        v34 = v33;
        if ( v33 )
        {
          memset(v33, 0, v32);
          v35 = *(_DWORD *)(a2 + 144);
          *(_QWORD *)(a2 + 1056) = v34;
          v36 = (((_WORD)v35 - 1) & 0xFFF0) - ((v35 - 1) & ((((_WORD)v35 - 1) & 0xFFF0) + v35 + 4111)) + v35 + 4111;
          v37 = v36 + v35 + 28;
          v38 = ExAllocatePoolWithTag(NonPagedPoolNx, v37, 0x74536D73u);
          v39 = v38;
          if ( v38 )
          {
            memset(v38, 0, (unsigned int)v37);
            v40 = *(_QWORD *)(a2 + 152);
            *(_QWORD *)(a2 + 1064) = v39;
            v41 = SmCalcIoWorkItemSize(v40, 4095LL, v36);
            v42 = ExAllocatePoolWithTag(NonPagedPoolNx, v41, 0x74536D73u);
            v43 = v42;
            if ( v42 )
            {
              memset(v42, 0, v41);
              *(_QWORD *)(a2 + 1072) = v43;
              v10 = a3;
LABEL_46:
              v7 = a5;
              break;
            }
          }
        }
        return -1073741670;
      }
      v22 = *(_QWORD *)(v21 + 8);
      v23 = v20 < *(_DWORD *)v21 ? v20 : 0;
      v24 = *(_DWORD *)v21 - 1;
      if ( (v22 & 4) != 0 )
      {
        v25 = 1LL;
        v26 = 32;
      }
      else
      {
        v25 = 0LL;
        v26 = 0;
      }
      v27 = v22 - 4 * v25;
      while ( 1 )
      {
        v28 = v26 + v24;
        if ( v24 - v23 == -1 )
          goto LABEL_29;
        v29 = (_QWORD *)(v27 + 8 * ((unsigned __int64)(v26 + v23) >> 6));
        for ( i = ((1LL << ((v26 + v23) & 0x3F)) - 1) | ~*v29; i == -1; i = ~*v29 )
        {
          if ( (unsigned __int64)++v29 > v27 + 8 * ((unsigned __int64)v28 >> 6) )
            goto LABEL_29;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v12 = i + ((unsigned int)(((__int64)v29 - v27) >> 3) << 6);
        if ( v12 > v28 )
        {
LABEL_29:
          v12 = -1;
          goto LABEL_30;
        }
        if ( v12 != -1 )
          break;
LABEL_30:
        if ( !v23 )
          goto LABEL_40;
        v31 = v20 + 1;
        if ( v20 + 1 > *(_DWORD *)v21 )
          v31 = *(_DWORD *)v21;
        v24 = v31 - 1;
        v23 = 0;
      }
      v12 -= v26;
LABEL_40:
      v20 = v12 + 1;
      v19 = v45 - 1;
      *(_BYTE *)(((unsigned __int64)v12 >> 3) + *(_QWORD *)(a2 + 200)) |= 1 << (v12 & 7);
    }
  }
LABEL_8:
  if ( (*(_DWORD *)(a2 + 128) & 0x100) != 0 )
  {
    memset(v55, 0, sizeof(v55));
    HIDWORD(v55[1]) = 0x8000;
    v55[3] = ST_STORE<SM_TRAITS>::StDmSparseBitmapAlloc;
    v55[0] = 0x10000000LL;
    v55[4] = ExFreePoolEx;
    LODWORD(v55[2]) = -1;
    RtlSparseBitmapCtxStart(a2 + 248, v55);
  }
  v17 = *((_QWORD *)v8 + 7);
  v47 = 0;
  v48 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  *(_QWORD *)(a2 + 472) = v17;
  *(_QWORD *)(a2 + 480) = *((_QWORD *)v8 + 8);
  *(_QWORD *)(a2 + 488) = *((_QWORD *)v8 + 9);
  *(_DWORD *)(a2 + 208) = a6;
  if ( (*v10 & 8) != 0 )
  {
    result = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    if ( result < 0 )
      return result;
    v44 = v57 >> 9;
    v48 = 4;
    if ( v57 >> 9 <= 0x10 )
      v44 = 16;
    v47 = v44;
  }
  else
  {
    v47 = -1;
  }
  v49 = ST_STORE<SM_TRAITS>::StNpEnumBTreeNodes;
  v50 = ST_STORE<SM_TRAITS>::StNpLeafPageOut;
  v51 = ST_STORE<SM_TRAITS>::StNpLeafPageIn;
  v52 = ST_STORE<SM_TRAITS>::StNpLeafDelete;
  result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 776), (struct NP_CONTEXT::_NP_PARAMETERS *)&v47);
  if ( result >= 0 )
  {
    result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 912), (struct NP_CONTEXT::_NP_PARAMETERS *)&v47);
    if ( result >= 0 )
    {
      if ( (unsigned __int8)*(_DWORD *)(a2 + 128) == 1 )
        *v7 = v12;
      return 0;
    }
  }
  return result;
}
