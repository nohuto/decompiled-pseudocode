/*
 * XREFs of ?ReferenceAllocationForTokenSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00521A8
 * Callers:
 *     VidMmReferenceAllocationForTokenSubmission @ 0x1C000E780 (VidMmReferenceAllocationForTokenSubmission.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceAllocationForTokenSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_ALLOC **a4)
{
  __int64 v6; // rcx
  _QWORD *v8; // rax

  *a4 = 0LL;
  v6 = **(_QWORD **)a3;
  if ( *(_BYTE *)(v6 + 93) )
    return 3223191814LL;
  if ( !*(_DWORD *)(v6 + 156) )
    return 3223191812LL;
  if ( *((struct VIDMM_DEVICE **)a3 + 1) == a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a3 + 26);
    *a4 = a3;
    return 0LL;
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdAssertion(v6, a2, a3, a4);
    v8[3] = a2;
    v8[4] = a3;
    v8[5] = *((_QWORD *)a3 + 1);
    WdLogEvent5_WdAssertion(v8);
    return 3223191829LL;
  }
}
