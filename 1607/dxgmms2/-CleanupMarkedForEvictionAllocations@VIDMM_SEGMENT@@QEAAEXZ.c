/*
 * XREFs of ?CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ @ 0x1C0064CC4
 * Callers:
 *     ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C0051EE0 (-CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C004BF90 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 */

bool __fastcall VIDMM_SEGMENT::CleanupMarkedForEvictionAllocations(VIDMM_GLOBAL **this)
{
  _QWORD *v2; // rdi
  bool v3; // zf
  __int64 v4; // r8
  _QWORD *v5; // rbx
  VIDMM_GLOBAL *v6; // rcx
  int v8; // [rsp+20h] [rbp-28h]

  v2 = this + 21;
  while ( 1 )
  {
    v3 = *v2 == (_QWORD)v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    if ( !VIDMM_GLOBAL::UnderCleanupLimit(this[1]) )
    {
      v3 = *v2 == (_QWORD)v2;
      return !v3;
    }
    v5 = (_QWORD *)*v2;
    LOBYTE(v4) = 1;
    LOBYTE(v8) = 0;
    (*((void (__fastcall **)(VIDMM_GLOBAL **, __int64, __int64, _QWORD, int, _QWORD))*this + 6))(
      this,
      *v2 - 400LL,
      v4,
      0LL,
      v8,
      0LL);
    v6 = this[1];
    *((_QWORD *)v6 + 888) += *(v5 - 49);
    ++*((_DWORD *)v6 + 1778);
  }
  return !v3;
}
