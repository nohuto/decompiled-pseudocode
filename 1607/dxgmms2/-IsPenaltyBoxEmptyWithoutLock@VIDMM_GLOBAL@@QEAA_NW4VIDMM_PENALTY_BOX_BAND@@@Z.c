/*
 * XREFs of ?IsPenaltyBoxEmptyWithoutLock@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C001DB8C
 * Callers:
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C000F9A0 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock(__int64 a1, int a2)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)(16LL * (unsigned int)(a2 - 1) + a1 + 41544);
  return *v2 == (_QWORD)v2;
}
