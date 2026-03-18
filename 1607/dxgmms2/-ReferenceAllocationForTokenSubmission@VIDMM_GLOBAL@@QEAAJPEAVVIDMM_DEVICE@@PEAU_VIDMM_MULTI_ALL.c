/*
 * XREFs of ?ReferenceAllocationForTokenSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008A8B8
 * Callers:
 *     VidMmReferenceAllocationForTokenSubmission @ 0x1C001D5E0 (VidMmReferenceAllocationForTokenSubmission.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceAllocationForTokenSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        __int64 **a3,
        __int64 ***a4)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax

  *a4 = 0LL;
  v6 = **a3;
  if ( *(_BYTE *)(v6 + 96) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this, a2, a3, a4);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = v6;
    }
    return 3223191814LL;
  }
  else if ( *(_DWORD *)(v6 + 164) )
  {
    if ( a3[1] == (__int64 *)a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a3 + 26);
      *a4 = a3;
      return 0LL;
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdAssertion(this, a2);
      v16[3] = a2;
      v16[4] = a3;
      v16[5] = a3[1];
      WdLogEvent5_WdAssertion(v16);
      return 3223191829LL;
    }
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this, a2, a3, a4);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = v6;
    }
    return 3223191812LL;
  }
}
