/*
 * XREFs of ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001CBE8
 * Callers:
 *     ?VidMmSetSegmentPowerState@@YAXPEAVVIDMM_GLOBAL@@IIIE@Z @ 0x1C001C5E0 (-VidMmSetSegmentPowerState@@YAXPEAVVIDMM_GLOBAL@@IIIE@Z.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C0055BC0 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C0062020 (-NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyMemorySegmentIdle(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  _DWORD *v4; // rbp
  char *v5; // rbx
  int v6; // r14d
  int v7; // eax
  int v8; // eax
  struct _KEVENT *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = (_DWORD *)(*((_QWORD *)this + 5006) + 456LL * *((unsigned int *)a2 + 93));
  v5 = (char *)this + 40728;
  v6 = 1 << *((_DWORD *)a2 + 5);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 5091, &LockHandle);
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  if ( !*((_QWORD *)a2 + 28) && !*((_BYTE *)a2 + 364) )
  {
    v4[104] &= ~v6;
    if ( ((*((_DWORD *)a2 + 14) >> 12) & 1) != 0 )
      v7 = 0;
    else
      v7 = *((_DWORD *)a2 + 4) + 1;
    if ( v4[12] != v7 )
    {
      v8 = ((*((_DWORD *)a2 + 14) >> 12) & 1) != 0 ? 0 : *((_DWORD *)a2 + 4) + 1;
      if ( v4[8] != v8 )
        (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))this + 4997))(
          *((_QWORD *)this + 4998),
          *((unsigned int *)a2 + 90),
          0LL);
    }
    if ( !v4[104] )
    {
      v9 = (struct _KEVENT *)*((_QWORD *)this + 5107);
      *((_BYTE *)this + 40610) = 1;
      KeSetEvent(v9, 0, 0);
    }
  }
  *((_QWORD *)this + 5092) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
