/*
 * XREFs of ?RmpGenerateUsageLimitsFromRuntimeSettings@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001A748
 * Callers:
 *     RmpGetResourceManagerRuntimeConfiguration @ 0x18001A574 (RmpGetResourceManagerRuntimeConfiguration.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800054D8 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmpGenerateUsageLimitsFromRuntimeSettings(
        struct _RM_RUNTIME_CONFIGURATION *a1,
        struct _RM_SYSTEM_MEMORY_METRICS *a2)
{
  bool v4; // zf
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int128 v11; // xmm6
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned int v16; // r10d
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  int v23; // r11d
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v34; // [rsp+28h] [rbp-79h] BYREF
  __int128 v35; // [rsp+38h] [rbp-69h]
  __int128 v36; // [rsp+48h] [rbp-59h]
  __int128 v37; // [rsp+58h] [rbp-49h]
  __int128 v38; // [rsp+68h] [rbp-39h]
  __int128 v39; // [rsp+78h] [rbp-29h]
  __int128 v40; // [rsp+88h] [rbp-19h]
  __int128 v41; // [rsp+98h] [rbp-9h]
  __int128 v42; // [rsp+A8h] [rbp+7h]
  __int128 v43; // [rsp+B8h] [rbp+17h]
  __int128 v44; // [rsp+C8h] [rbp+27h]
  unsigned __int64 v45; // [rsp+108h] [rbp+67h] BYREF

  memset_0(&v34, 0, 0xB0uLL);
  v4 = (*(_BYTE *)a1 & 0x10) == 0;
  v5 = *((_QWORD *)a1 + 24);
  DWORD2(v44) = *((_DWORD *)a1 + 58);
  *(_QWORD *)&v44 = v5;
  DWORD2(v36) = 6;
  DWORD2(v37) = 6;
  DWORD2(v42) = 0;
  if ( v4 )
  {
    DWORD2(v35) = 4;
    DWORD2(v39) = 2;
    DWORD2(v40) = 3;
    DWORD2(v41) = 3;
    DWORD2(v43) = 1;
  }
  else
  {
    DWORD2(v35) = 0;
    DWORD2(v39) = 0;
    DWORD2(v40) = 0;
    DWORD2(v41) = 0;
    DWORD2(v43) = 0;
  }
  v6 = *((_QWORD *)a1 + 23);
  if ( v6 >= *(_QWORD *)a2 )
    return (unsigned int)-1073741811;
  v7 = v6 + v5;
  if ( v7 < v6 )
    return (unsigned int)-1073741675;
  if ( v7 >= *(_QWORD *)a2 )
    return (unsigned int)-1073741811;
  RtlULongLongMult(*(_QWORD *)a2, *((unsigned int *)a1 + 52), &v45);
  v8 = *(_QWORD *)a2;
  v9 = *((unsigned int *)a1 + 50);
  v10 = v45 / 0x64;
  if ( v45 / 0x64 >= *(_QWORD *)a2 - *((_QWORD *)a1 + 23) )
    v10 = *(_QWORD *)a2 - *((_QWORD *)a1 + 23);
  *(_QWORD *)&v37 = v10;
  v11 = v37;
  v36 = v37;
  RtlULongLongMult(v8, v9, &v45);
  RtlULongLongMult(*((_QWORD *)a2 + 3), *((unsigned int *)a1 + 51), &v45);
  v13 = v45 / 0x64;
  if ( v12 < v45 / 0x64 )
    v13 = v12;
  if ( v10 > v13 )
  {
    *(_QWORD *)&v35 = v13;
  }
  else
  {
    v13 = v10;
    v35 = v11;
  }
  v14 = *(_QWORD *)a2 - v13;
  v15 = v14 + *((_QWORD *)a1 + 24);
  if ( v15 < v14 )
    return (unsigned int)-1073741675;
  if ( v15 >= *(_QWORD *)a2 )
    return (unsigned int)-1073741811;
  v17 = *((_DWORD *)a1 + 53);
  v18 = *((_DWORD *)a1 + 54);
  if ( v17 > v18 || v18 > *((_DWORD *)a1 + 55) )
    return (unsigned int)-1073741811;
  RtlULongLongMult(*((_QWORD *)a2 + 3), v17, &v45);
  v19 = *((_QWORD *)a2 + 3);
  v20 = *((unsigned int *)a1 + 54);
  *(_QWORD *)&v39 = v45 / 0x64;
  RtlULongLongMult(v19, v20, &v45);
  v21 = *((_QWORD *)a2 + 3);
  v22 = *((unsigned int *)a1 + 55);
  *(_QWORD *)&v40 = v45 / 0x64;
  RtlULongLongMult(v21, v22, &v45);
  *(_QWORD *)&v41 = v45 / 0x64;
  if ( v23 )
  {
    RtlULongLongMult(*((_QWORD *)a2 + 3), *((unsigned int *)a1 + 57), &v45);
    *(_QWORD *)&v43 = v45 / 0x64;
  }
  v24 = v35;
  *(_OWORD *)((char *)a1 + 8) = v34;
  v25 = v36;
  *(_OWORD *)((char *)a1 + 24) = v24;
  v26 = v37;
  *(_OWORD *)((char *)a1 + 40) = v25;
  v27 = v38;
  *(_OWORD *)((char *)a1 + 56) = v26;
  v28 = v39;
  *(_OWORD *)((char *)a1 + 72) = v27;
  v29 = v40;
  *(_OWORD *)((char *)a1 + 88) = v28;
  v30 = v42;
  *(_OWORD *)((char *)a1 + 104) = v29;
  *(_OWORD *)((char *)a1 + 120) = v41;
  v31 = v43;
  *(_OWORD *)((char *)a1 + 136) = v30;
  v32 = v44;
  *(_OWORD *)((char *)a1 + 152) = v31;
  *(_OWORD *)((char *)a1 + 168) = v32;
  return v16;
}
