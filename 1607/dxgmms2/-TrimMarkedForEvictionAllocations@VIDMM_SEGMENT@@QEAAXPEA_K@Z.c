/*
 * XREFs of ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x1C009A82C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C008B008 (-TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_SEGMENT::TrimMarkedForEvictionAllocations(VIDMM_SEGMENT *this, unsigned __int64 *a2, __int64 a3)
{
  _QWORD *v4; // rsi
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rcx
  int v8; // [rsp+20h] [rbp-28h]

  v4 = (_QWORD *)((char *)this + 168);
  while ( (_QWORD *)*v4 != v4 )
  {
    v6 = (_QWORD *)*v4;
    LOBYTE(a3) = 1;
    LOBYTE(v8) = 0;
    (*(void (__fastcall **)(VIDMM_SEGMENT *, __int64, __int64, _QWORD, int, _QWORD))(*(_QWORD *)this + 48LL))(
      this,
      *v4 - 400LL,
      a3,
      0LL,
      v8,
      0LL);
    v7 = *(v6 - 48);
    if ( v7 >= *a2 )
    {
      *a2 = 0LL;
      return;
    }
    *a2 -= v7;
  }
}
