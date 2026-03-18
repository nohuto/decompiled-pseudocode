/*
 * XREFs of ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C000F9E0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C005B900 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall VIDMM_GLOBAL::InsertToPenaltyBox(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v7; // rdx
  __int64 *result; // rax
  __int64 **v9; // rcx
  __int64 v10; // rdi
  _QWORD *v11; // rax

  v4 = a3;
  if ( (_DWORD)a3 == 4 )
  {
    v10 = *(unsigned int *)(a2 + 64);
    if ( (_DWORD)v10 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3, a4);
      v11[7] = 0LL;
      v11[3] = 270LL;
      v11[4] = 57LL;
      v11[5] = a2;
      v11[6] = v10;
      WdLogEvent5_WdCriticalError(v11);
    }
  }
  v7 = 16LL * (unsigned int)(v4 - 1) + a1 + 41544;
  result = (__int64 *)(a2 + 176);
  v9 = *(__int64 ***)(v7 + 8);
  if ( *v9 != (__int64 *)v7 )
    __fastfail(3u);
  *result = v7;
  *(_QWORD *)(a2 + 184) = v9;
  *v9 = result;
  *(_QWORD *)(v7 + 8) = result;
  return result;
}
