/*
 * XREFs of ??1DXGCOPYPROTECTION@@QEAA@XZ @ 0x1C0133110
 * Callers:
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0017BB4 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGCOPYPROTECTION::~DXGCOPYPROTECTION(DXGCOPYPROTECTION *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax

  v5 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2, a3, a4);
  v5[3] = this;
  v5[4] = *((unsigned int *)this + 12);
  v5[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v5);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
