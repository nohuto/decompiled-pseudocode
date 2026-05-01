/*
 * XREFs of ?RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K22@Z @ 0x180004898
 * Callers:
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x180015204 (RmpHandlePsmRetrieveHostMemoryLimit.c)
 * Callees:
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18000450C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z @ 0x180005D20 (-RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z.c)
 */

void __fastcall RmpActivityHostGetCommitThresholds(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v9; // rbp
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v5 = *((_QWORD *)a1 + 123);
  v7 = *((_QWORD *)a1 + 126);
  v9 = *((_QWORD *)a1 + 124);
  if ( a2 >= v5 )
  {
    if ( a2 >= v9 )
    {
      if ( a2 >= *((_QWORD *)a1 + 125) )
      {
        v12 = *((_QWORD *)a1 + 125);
        v5 = -1LL;
      }
      else
      {
        v12 = *((_QWORD *)a1 + 124);
        v5 = *((_QWORD *)a1 + 125);
      }
    }
    else
    {
      v12 = *((_QWORD *)a1 + 123);
      v5 = *((_QWORD *)a1 + 124);
    }
  }
  else
  {
    v12 = 0LL;
  }
  RmpActivityHostComputeCommitEstimate(a2, *((_QWORD *)a1 + 126), &v15, &v16);
  if ( v12 <= v15 )
    v12 = v15;
  if ( a2 >= v9 && *((_DWORD *)a1 + 14) == 1 )
  {
    RmpCommitValuesAdd(a2, 0x100000LL, &v15);
    if ( v5 >= v15 )
      v5 = v15;
  }
  v13 = v16;
  if ( a2 <= v7 && v5 >= v16 )
    v5 = v16;
  v14 = a5;
  *a3 = v12;
  *a4 = v5;
  *v14 = v13;
}
