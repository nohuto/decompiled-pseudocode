/*
 * XREFs of ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C005895C
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C003228C (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     VidSchDestroyDeviceSyncObject @ 0x1C0004A50 (VidSchDestroyDeviceSyncObject.c)
 *     VidSchDestroySyncObject @ 0x1C0032480 (VidSchDestroySyncObject.c)
 */

void __fastcall VIDMM_DEVICE_PAGING_QUEUE::DestroyState(
        VIDMM_DEVICE_PAGING_QUEUE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdx

  v5 = *((_QWORD *)this + 18);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 16) + 32LL);
    if ( v6 )
      VidSchDestroyDeviceSyncObject(v5, v6, 1, 0LL);
    VidSchDestroySyncObject(*((_QWORD *)this + 18), v6, a3, a4);
  }
}
