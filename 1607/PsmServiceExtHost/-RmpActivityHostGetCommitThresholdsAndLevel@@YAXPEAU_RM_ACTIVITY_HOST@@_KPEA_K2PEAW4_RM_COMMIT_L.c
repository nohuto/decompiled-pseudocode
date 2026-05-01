/*
 * XREFs of ?RmpActivityHostGetCommitThresholdsAndLevel@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K2PEAW4_RM_COMMIT_LEVEL@@2@Z @ 0x1800071DC
 * Callers:
 *     RmpActivityHostComputeEnforcementSettings @ 0x180007140 (RmpActivityHostComputeEnforcementSettings.c)
 * Callees:
 *     RmpCommitValuesAdd @ 0x180007008 (RmpCommitValuesAdd.c)
 *     RmpActivityHostComputeCommitEstimate @ 0x180007C20 (RmpActivityHostComputeCommitEstimate.c)
 */

void __fastcall RmpActivityHostGetCommitThresholdsAndLevel(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        enum _RM_COMMIT_LEVEL *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v12; // rsi
  int v13; // r14d
  unsigned __int64 v14; // rcx
  enum _RM_COMMIT_LEVEL *v15; // rax
  unsigned __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v6 = *((_QWORD *)a1 + 119);
  v8 = *((_QWORD *)a1 + 120);
  if ( a2 >= v6 )
  {
    if ( a2 >= v8 )
    {
      if ( a2 >= *((_QWORD *)a1 + 117) )
      {
        v13 = 4;
        v12 = *((_QWORD *)a1 + 117);
        v6 = -1LL;
      }
      else
      {
        v13 = 3;
        v12 = *((_QWORD *)a1 + 120);
        v6 = *((_QWORD *)a1 + 117);
      }
    }
    else
    {
      v12 = *((_QWORD *)a1 + 119);
      v13 = 2;
      v6 = *((_QWORD *)a1 + 120);
    }
  }
  else
  {
    v12 = 0LL;
    v13 = 1;
  }
  RmpActivityHostComputeCommitEstimate(a2, *((_QWORD *)a1 + 121), &v16, &v17);
  if ( v12 <= v16 )
    v12 = v16;
  if ( a2 >= v8 && *((_DWORD *)a1 + 12) == 1 )
  {
    RmpCommitValuesAdd(a2, 0x100000LL, &v16);
    if ( v6 >= v16 )
      v6 = v16;
  }
  v14 = v17;
  if ( a2 <= *((_QWORD *)a1 + 121) && v6 >= v17 )
    v6 = v17;
  v15 = a5;
  *a3 = v12;
  *a4 = v6;
  *(_DWORD *)v15 = v13;
  *a6 = v14;
}
