/*
 * XREFs of ?ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0096FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0065924 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::ReserveTemporaryResource(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  _QWORD *v12; // rax
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // esi
  _QWORD *v20; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = a2;
  }
  if ( *((_QWORD *)a2 + 2) > (unsigned __int64)this[5] )
    return 3223191808LL;
  if ( ((_DWORD)this[7] & 0x20) != 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v12[5] = 0LL;
    v12[6] = 0LL;
    v12[7] = 0LL;
    v12[3] = 270LL;
    v12[4] = 13LL;
    WdLogEvent5_WdCriticalError(v12);
  }
  (*((void (__fastcall **)(VIDMM_LINEAR_POOL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  LOBYTE(v13) = 1;
  v14 = VIDMM_LINEAR_POOL::Allocate(
          this[18],
          *((_QWORD *)a2 + 2),
          *((unsigned int *)a2 + 8),
          v13,
          0LL,
          0LL,
          0,
          0,
          a2,
          (union _LARGE_INTEGER *)a2 + 32,
          (void **)a2 + 31);
  v19 = v14;
  if ( v14 < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = v14;
  }
  else
  {
    *((_QWORD *)a2 + 33) = this;
    if ( g_IsInternalReleaseOrDbg )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, v15, v17, v18);
      v20[3] = *((_QWORD *)a2 + 31);
      v20[4] = *((int *)a2 + 65);
      v20[5] = *((unsigned int *)a2 + 64);
    }
  }
  return v19;
}
