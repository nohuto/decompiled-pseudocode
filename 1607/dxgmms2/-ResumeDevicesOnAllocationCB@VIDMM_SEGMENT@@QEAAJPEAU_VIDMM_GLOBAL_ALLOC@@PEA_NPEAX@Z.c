/*
 * XREFs of ?ResumeDevicesOnAllocationCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C009A210
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchiUpdateFlipQueueEntriesForMove @ 0x1C00259A4 (VidSchiUpdateFlipQueueEntriesForMove.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C005C074 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAX_N@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ResumeDevicesOnAllocationCB(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        bool *a3,
        void *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _VIDMM_GLOBAL_ALLOC *v8; // rdi
  _QWORD **v9; // r15
  _QWORD *v10; // rsi
  _QWORD *v11; // rax
  VIDMM_DEVICE *v12; // rcx

  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 20) & 0x400) != 0 || *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 63) + 16LL) + 8LL) > 0 )
    {
      VidSchiUpdateFlipQueueEntriesForMove(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 384LL), a2);
      *((_DWORD *)a2 + 20) &= ~0x400u;
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
    v8 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
    while ( v8 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296) )
    {
      v9 = (_QWORD **)((char *)v8 - 16);
      v8 = *(struct _VIDMM_GLOBAL_ALLOC **)v8;
      v10 = *v9;
      while ( v10 != v9 )
      {
        v11 = v10 - 5;
        v10 = (_QWORD *)*v10;
        v12 = (VIDMM_DEVICE *)v11[1];
        if ( (*((_DWORD *)v12 + 13) & 7) == 0 )
          VIDMM_DEVICE::ResumeSchedulerDevice(v12, 1);
      }
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v5, v6, v7);
  }
  return 0LL;
}
