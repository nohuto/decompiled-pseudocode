/*
 * XREFs of ?ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0083960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0059180 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::ReserveTemporaryResource(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  _QWORD *v7; // rax

  if ( *((_QWORD *)a2 + 2) > *((_QWORD *)this + 5) )
    return 3223191808LL;
  if ( (*((_DWORD *)this + 14) & 0x20) != 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v7[5] = 0LL;
    v7[6] = 0LL;
    v7[7] = 0LL;
    v7[3] = 270LL;
    v7[4] = 13LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 56LL))(this, a2);
  result = VIDMM_LINEAR_POOL::Allocate(
             *((VIDMM_LINEAR_POOL **)this + 18),
             *((_QWORD *)a2 + 2),
             *((_DWORD *)a2 + 8),
             1,
             0LL,
             0LL,
             0,
             0,
             a2,
             (union _LARGE_INTEGER *)a2 + 31,
             (void **)a2 + 30);
  if ( (int)result >= 0 )
    *((_QWORD *)a2 + 32) = this;
  return result;
}
