/*
 * XREFs of ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C004697C
 * Callers:
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C0046924 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 */

void __fastcall VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter(VIDMM_GLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  int v6; // eax
  _QWORD *v7; // rax

  v5 = (unsigned int)a2;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_p((__int64)this, &EventPagingStartPreparation, a3, *((_QWORD *)this + (unsigned int)a2 + 143));
  if ( *((_DWORD *)this + v5 + 414) != *((_DWORD *)this + v5 + 478)
    || *((_DWORD *)this + v5 + 542) != *((_DWORD *)this + v5 + 606) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v7[3] = 270LL;
    v7[4] = 33LL;
    v7[5] = this;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  v6 = *((_DWORD *)this + v5 + 414);
  *((_DWORD *)this + v5 + 958) = 0;
  *((_DWORD *)this + v5 + 1022) = v6;
  *((_DWORD *)this + v5 + 1086) = *((_DWORD *)this + v5 + 542);
}
