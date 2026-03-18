/*
 * XREFs of ?ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0057FD0
 * Callers:
 *     VidMmReferencePrimaryAllocationForSubmission @ 0x1C000FE30 (VidMmReferencePrimaryAllocationForSubmission.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::ReferencePrimaryAllocationForSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_ALLOC **a4)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax

  *a4 = 0LL;
  v6 = **(_QWORD **)a3;
  if ( !*(_BYTE *)(v6 + 96) )
  {
    v7 = **(unsigned int **)(v6 + 504);
    if ( (v7 & 0x40000100) != 0 || (int)v7 < 0 )
    {
      if ( *(_DWORD *)(v6 + 164) )
      {
        if ( *((struct VIDMM_DEVICE **)a3 + 1) == a2 )
        {
          _InterlockedIncrement((volatile signed __int32 *)a3 + 26);
          *a4 = a3;
          return 0LL;
        }
        else
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7, a2);
          v21[3] = a2;
          v21[4] = a3;
          v21[5] = *((_QWORD *)a3 + 1);
          WdLogEvent5_WdAssertion(v21);
          return 3223191829LL;
        }
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v7, a2, a3, a4);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v19, v20) + 24) = v6;
      }
    }
    else
    {
      v13 = WdLogNewEntry5_WdAssertion(v7, a2);
      *(_QWORD *)(v13 + 24) = 7919LL;
      WdLogEvent5_WdAssertion(v13);
      v16 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v16 + 24) = v6;
      WdLogEvent5_WdAssertion(v16);
    }
    return 3221225485LL;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = v6;
  }
  return 3223191814LL;
}
