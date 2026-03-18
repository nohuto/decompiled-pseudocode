/*
 * XREFs of ?GetBudgetAndVisibilityState@VIDMM_DEVICE@@QEAAXPEA_NPEAW4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C0087550
 * Callers:
 *     ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C008F5EC (-CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_P.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::GetBudgetAndVisibilityState(
        VIDMM_DEVICE *this,
        bool *a2,
        enum VIDMM_BUDGET_PRIORITY_BAND *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r9d
  _QWORD *v5; // r10
  __int64 v6; // rcx

  v3 = *((_QWORD *)this + 2);
  *a2 = 0;
  if ( v3 )
  {
    v4 = 0;
    if ( *(_DWORD *)(*(_QWORD *)this + 6416LL) )
    {
      while ( 1 )
      {
        v5 = (_QWORD *)(*(_QWORD *)(v3 + 48) + 264LL * v4);
        if ( v5[25] > v5[3] || v5[26] > v5[4] )
          break;
        if ( ++v4 >= *(_DWORD *)(*(_QWORD *)this + 6416LL) )
          goto LABEL_8;
      }
      *a2 = 1;
    }
LABEL_8:
    v6 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 32LL);
    if ( *(_BYTE *)(v6 + 290) )
      *(_DWORD *)a3 = 0;
    else
      *(_DWORD *)a3 = 2 - ((*(_DWORD *)(v6 + 292) & 1) != 0);
  }
  else
  {
    *(_DWORD *)a3 = 2;
  }
}
