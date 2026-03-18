/*
 * XREFs of ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C0090BD0
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C005B580 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     VidSchDestroyDeviceSyncObject @ 0x1C000E640 (VidSchDestroyDeviceSyncObject.c)
 *     VidSchDestroySyncObject @ 0x1C00443F0 (VidSchDestroySyncObject.c)
 */

void __fastcall VIDMM_DEVICE_PAGING_QUEUE::DestroyState(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  v2 = *((_QWORD *)this + 20);
  if ( v2 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 18) + 32LL);
    if ( v3 )
      VidSchDestroyDeviceSyncObject(v2, v3, 1, 0LL);
    VidSchDestroySyncObject(*((_QWORD *)this + 20), v3);
  }
}
