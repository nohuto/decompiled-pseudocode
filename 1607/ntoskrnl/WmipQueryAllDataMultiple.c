/*
 * XREFs of WmipQueryAllDataMultiple @ 0x14069E570
 * Callers:
 *     WmipIoControl @ 0x140473894 (WmipIoControl.c)
 *     IoWMIQueryAllDataMultiple @ 0x14069CC44 (IoWMIQueryAllDataMultiple.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EvaluateCurrentState @ 0x1401B8EC0 (EvaluateCurrentState.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     WmipQueryAllData @ 0x1404E7C28 (WmipQueryAllData.c)
 */

__int64 __fastcall WmipQueryAllDataMultiple(
        unsigned int a1,
        void **a2,
        IRP *a3,
        KPROCESSOR_MODE a4,
        _DWORD *a5,
        unsigned int a6,
        char *a7,
        _DWORD *a8)
{
  _DWORD *v8; // r12
  unsigned int v9; // r13d
  void **v10; // rax
  _DWORD *v12; // r14
  __int64 v13; // rsi
  char *PoolWithTag; // rax
  char *v15; // rbp
  _QWORD *v16; // rcx
  int v17; // esi
  char *v18; // r15
  char *v19; // rcx
  char *v20; // rbx
  void **v22; // r12
  char *v23; // rbp
  unsigned int v24; // edi
  void **v26; // rax
  void *v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  unsigned int v31; // edi
  unsigned int v32; // r13d
  char v33; // [rsp+30h] [rbp-F8h]
  int v35; // [rsp+34h] [rbp-F4h]
  void **v36; // [rsp+38h] [rbp-F0h] BYREF
  char *v37; // [rsp+40h] [rbp-E8h]
  void **v38; // [rsp+48h] [rbp-E0h]
  void *v39; // [rsp+50h] [rbp-D8h]
  __int64 v40; // [rsp+58h] [rbp-D0h]
  char *v41; // [rsp+60h] [rbp-C8h]
  IRP *v42; // [rsp+70h] [rbp-B8h]
  _DWORD *v43; // [rsp+78h] [rbp-B0h]
  __int64 v44; // [rsp+80h] [rbp-A8h]
  _BYTE v45[80]; // [rsp+90h] [rbp-98h] BYREF

  v8 = a5;
  v9 = 0;
  v39 = 0LL;
  v10 = a2;
  v35 = 0;
  v12 = a8;
  v42 = a3;
  v36 = a2;
  v43 = a5;
  v44 = (__int64)a8;
  if ( a2 )
  {
    v15 = 0LL;
    v41 = 0LL;
  }
  else
  {
    a1 = *(_DWORD *)a7;
    v13 = *(unsigned int *)a7;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v13, 0x70696D57u);
    v41 = PoolWithTag;
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( a1 )
    {
      v16 = PoolWithTag;
      do
      {
        *v16 = *(_QWORD *)((char *)v16 + a7 - PoolWithTag + 8);
        ++v16;
        --v13;
      }
      while ( v13 );
    }
    v10 = v36;
  }
  v17 = 0;
  v18 = 0LL;
  v33 = 0;
  v19 = (char *)a5;
  v37 = (char *)a5;
  v20 = (char *)a5;
  if ( !a1 )
    goto LABEL_26;
  v22 = v36;
  v38 = v10;
  v23 = (char *)(v15 - (char *)v10);
  v40 = a1;
  do
  {
    if ( v20 == v45 || a6 < 0x48 )
    {
      v20 = v45;
      v24 = 72;
      v18 = 0LL;
    }
    else
    {
      v20 = v19;
      v24 = a6;
    }
    memset(v20, 0, 0x48uLL);
    v26 = v38;
    *((_DWORD *)v20 + 11) = 1;
    *(_DWORD *)v20 = 48;
    if ( v22 )
    {
      v27 = *v26;
      v39 = v27;
    }
    else
    {
      *((_QWORD *)v20 + 2) = *(_QWORD *)&v23[(_QWORD)v26];
      v27 = v39;
    }
    if ( (int)WmipQueryAllData(v27, v42, a4, (unsigned int *)v20, v24, (unsigned int *)&v36) < 0 )
      goto LABEL_23;
    v28 = *((_DWORD *)v20 + 11);
    if ( (v28 & 0x100) != 0 )
      goto LABEL_23;
    ++v35;
    if ( (v28 & 0x20) != 0 )
    {
      v29 = *((_DWORD *)v20 + 12);
      v20 = v45;
LABEL_22:
      v33 = 1;
      v17 += (v29 + 7) & 0xFFFFFFF8;
LABEL_23:
      v19 = v37;
      goto LABEL_24;
    }
    if ( v20 == v45 )
    {
      v29 = (int)v36;
      goto LABEL_22;
    }
    if ( v18 )
      *((_DWORD *)v18 + 3) = v9;
    v30 = *((unsigned int *)v20 + 3);
    v18 = v20;
    while ( (_DWORD)v30 )
    {
      v18 += v30;
      v30 = *((unsigned int *)v18 + 3);
    }
    v31 = ((_DWORD)v36 + 7) & 0xFFFFFFF8;
    v17 += v31;
    if ( EvaluateCurrentState((_DWORD **)&g_Feature_1380967736_61197642_FeatureDescriptorDetails) && a6 <= v31 )
      a6 = 0;
    else
      a6 -= v31;
    v19 = &v37[v31];
    v32 = v31 + (_DWORD)v37;
    v37 = v19;
    v9 = v32 - (_DWORD)v18;
LABEL_24:
    ++v38;
    --v40;
  }
  while ( v40 );
  v15 = v41;
  v8 = v43;
  v12 = (_DWORD *)v44;
LABEL_26:
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( !v35 )
    return 3221226133LL;
  if ( v33 )
  {
    v8[11] = 32;
    *v8 = 56;
    v8[12] = v17;
    *v12 = 56;
  }
  else
  {
    *v12 = v17;
  }
  return 0LL;
}
