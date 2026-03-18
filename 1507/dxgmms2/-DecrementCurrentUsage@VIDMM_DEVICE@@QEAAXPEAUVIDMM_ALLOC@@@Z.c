/*
 * XREFs of ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00588E0
 * Callers:
 *     ?CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00321E8 (-CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0058D2C (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::DecrementCurrentUsage(VIDMM_DEVICE *this, __int64 **a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // eax
  __int64 v5; // rcx

  v2 = **a2;
  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 240LL * (*(_DWORD *)(v2 + 76) & 0x3F);
  if ( (*((_BYTE *)a2 + 36) & 1) != 0 && (*(_DWORD *)(v2 + 76) & 0x78000) == 0x10000 )
    v4 = 0;
  else
    v4 = (*(_DWORD *)(v2 + 76) >> 15) & 0xF;
  *(_QWORD *)(v3 + 8LL * v4 + 72) -= *(_QWORD *)(v2 + 16);
  v5 = (*(_DWORD *)(v2 + 76) >> 11) & 0xF;
  *(_QWORD *)(v3 + 8 * v5 + 136) -= *(_QWORD *)(v2 + 16);
}
