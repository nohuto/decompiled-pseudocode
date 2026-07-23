/*
 * XREFs of ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1400056CC
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14000545C (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall NP_CONTEXT::NpStart(struct NP_CONTEXT *a1, struct NP_CONTEXT::_NP_PARAMETERS *a2)
{
  PVOID *p_P; // r8
  bool v3; // zf
  PVOID *v6; // rcx
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  unsigned int v9; // ebx
  PVOID *PoolWithTag; // rax
  unsigned __int64 v12; // rcx
  char *v13; // rdx
  PVOID *v14; // rcx
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *v16; // [rsp+28h] [rbp-8h]

  P = 0LL;
  p_P = &P;
  v3 = *((_DWORD *)a2 + 1) == 0;
  v16 = &P;
  if ( !v3 )
  {
    do
    {
      PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x704E6D73u);
      p_P = PoolWithTag;
      if ( !PoolWithTag )
      {
        v9 = -1073741670;
        goto LABEL_12;
      }
      *PoolWithTag = (char *)*v16 + 1;
      *v16 = PoolWithTag;
      v12 = *((unsigned int *)a2 + 1);
      v16 = PoolWithTag;
    }
    while ( (unsigned __int64)*PoolWithTag < v12 );
  }
  v6 = (PVOID *)((char *)a1 + 64);
  if ( *p_P )
  {
    v13 = (char *)*p_P + **((_QWORD **)a1 + 9);
    *p_P = *v6;
    *v6 = P;
    if ( *((struct NP_CONTEXT **)a1 + 9) == (struct NP_CONTEXT *)((char *)a1 + 64) )
      *((_QWORD *)a1 + 9) = v16;
    p_P = &P;
    **((_QWORD **)a1 + 9) = v13;
    P = 0LL;
    v16 = &P;
  }
  v7 = *((_OWORD *)a2 + 1);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v8 = *((_QWORD *)a2 + 4);
  v9 = 0;
  *((_OWORD *)a1 + 1) = v7;
  *((_QWORD *)a1 + 4) = v8;
  while ( p_P != &P )
  {
    v14 = (PVOID *)P;
    P = *(PVOID *)P;
    if ( v14 == p_P )
    {
      P = 0LL;
      v16 = &P;
    }
    else
    {
      *p_P = (char *)*p_P - 1;
    }
    ExFreePoolWithTag(v14, 0);
LABEL_12:
    p_P = v16;
  }
  return v9;
}
