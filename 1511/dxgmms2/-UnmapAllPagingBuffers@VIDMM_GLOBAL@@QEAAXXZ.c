/*
 * XREFs of ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00628B8
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::UnmapAllPagingBuffers(VIDMM_GLOBAL *this)
{
  __int64 i; // rdi
  __int64 v3; // rbp
  _QWORD *v4; // rsi
  __int64 v5; // rdx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1604); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + i + 79);
    if ( (*(_DWORD *)(v3 + 32) & 4) != 0 )
    {
      v4 = *(_QWORD **)(v3 + 96);
      while ( v4 != (_QWORD *)(v3 + 96) )
      {
        v5 = v4[7];
        v4 = (_QWORD *)*v4;
        if ( v5 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 128) + 160LL))(*(_QWORD *)(v5 + 128));
      }
      *(_DWORD *)(v3 + 32) &= ~4u;
    }
  }
  *((_DWORD *)this + 10000) = 0;
}
