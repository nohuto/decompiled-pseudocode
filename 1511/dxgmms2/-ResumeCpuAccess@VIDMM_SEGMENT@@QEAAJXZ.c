/*
 * XREFs of ?ResumeCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C008520C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::ResumeCpuAccess(VIDMM_SEGMENT *this)
{
  char *v1; // rdx
  _QWORD *v2; // rcx
  _QWORD **v3; // r9
  _QWORD *i; // r8

  v1 = (char *)this + 128;
  v2 = (_QWORD *)*((_QWORD *)this + 16);
  while ( v2 != (_QWORD *)v1 )
  {
    v3 = (_QWORD **)(v2 + 2);
    v2 = (_QWORD *)*v2;
    for ( i = *v3; i != v3; i = (_QWORD *)*i )
      ;
  }
  return 0LL;
}
