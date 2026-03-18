/*
 * XREFs of ?ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052DC0
 * Callers:
 *     VidMmReferencePrimaryAllocationForSubmission @ 0x1C000E790 (VidMmReferencePrimaryAllocationForSubmission.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::ReferencePrimaryAllocationForSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        __int64 **a3,
        __int64 ***a4)
{
  __int64 v6; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _QWORD *v15; // rax

  *a4 = 0LL;
  v6 = **a3;
  if ( *(_BYTE *)(v6 + 93) )
    return 3223191814LL;
  v8 = **(unsigned int **)(v6 + 472);
  if ( (v8 & 0x40000100) == 0 && (int)v8 >= 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 7656LL;
    WdLogEvent5_WdAssertion(v9);
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = v6;
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
  if ( !*(_DWORD *)(v6 + 156) )
    return 3221225485LL;
  if ( a3[1] == (__int64 *)a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a3 + 26);
    *a4 = a3;
    return 0LL;
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
    v15[3] = a2;
    v15[4] = a3;
    v15[5] = a3[1];
    WdLogEvent5_WdAssertion(v15);
    return 3223191829LL;
  }
}
