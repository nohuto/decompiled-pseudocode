/*
 * XREFs of ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C003B0B0
 * Callers:
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C004BB00 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C004C4D0 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 * Callees:
 *     Template_pppxqpq @ 0x1C001DDA8 (Template_pppxqpq.c)
 *     Template_pppxqq @ 0x1C001DE74 (Template_pppxqq.c)
 *     ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1C0079BC8 (-GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::AppendReadyPacket(
        VIDMM_PAGING_QUEUE *this,
        struct VIDMM_PAGING_QUEUE_PACKET *a2,
        unsigned __int64 *a3)
{
  bool v4; // zf
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // cl
  unsigned __int64 v12; // rax
  VIDMM_PAGING_QUEUE **v13; // rcx
  struct VIDMM_DEVICE *VidMmDevice; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx

  v4 = *((_BYTE *)a2 + 24) == 0;
  *((_QWORD *)a2 + 2) = KeGetCurrentThread();
  if ( !v4 )
  {
    v7 = *((_QWORD *)a2 + 8);
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 160));
  }
  v8 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8 + 104, 0LL);
  *(_QWORD *)(v8 + 112) = KeGetCurrentThread();
  if ( *((_BYTE *)a2 + 25) )
  {
    v11 = *((_BYTE *)this + 130);
    *((_QWORD *)this + 12) += *((unsigned int *)this + 33);
    if ( !v11 )
      *((_DWORD *)this + 25) = 0;
    v12 = *((_QWORD *)this + 12);
    *((_QWORD *)a2 + 4) = v12;
    *a3 = v12;
  }
  v13 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 5);
  *(_QWORD *)a2 = (char *)this + 32;
  *((_QWORD *)a2 + 1) = v13;
  if ( *v13 != (VIDMM_PAGING_QUEUE *)((char *)this + 32) )
    __fastfail(3u);
  *v13 = a2;
  *((_QWORD *)this + 5) = a2;
  if ( *((_BYTE *)a2 + 24) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      VidMmDevice = VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(a2);
      Template_pppxqpq(
        *((_QWORD *)a2 + 5),
        v15,
        v16,
        *((_QWORD *)VidMmDevice + 3),
        this,
        a2,
        *((_QWORD *)a2 + 5),
        *((_DWORD *)a2 + 12),
        *((_QWORD *)a2 + 8),
        *((_DWORD *)this + 29));
    }
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    Template_pppxqq(
      (__int64)v13,
      v9,
      v10,
      *(_QWORD *)(**((_QWORD **)this + 10) + 24LL),
      this,
      a2,
      *((_QWORD *)a2 + 5),
      *((_DWORD *)a2 + 12),
      *((_DWORD *)this + 29));
  }
  if ( !*((_DWORD *)this + 28) )
  {
    v17 = (_QWORD *)*((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 1;
    if ( *((_BYTE *)this + 128) )
    {
      v18 = v17[9];
      v19 = v17 + 9;
      *(_QWORD *)this = v18;
      *((_QWORD *)this + 1) = v19;
      if ( *(_QWORD **)(v18 + 8) != v19 )
        __fastfail(3u);
    }
    else if ( *((_BYTE *)this + 129) )
    {
      v18 = v17[7];
      v19 = v17 + 7;
      *(_QWORD *)this = v18;
      *((_QWORD *)this + 1) = v19;
      if ( *(_QWORD **)(v18 + 8) != v19 )
        __fastfail(3u);
    }
    else
    {
      v18 = v17[5];
      v19 = v17 + 5;
      *(_QWORD *)this = v18;
      *((_QWORD *)this + 1) = v19;
      if ( *(_QWORD **)(v18 + 8) != v19 )
        __fastfail(3u);
    }
    *(_QWORD *)(v18 + 8) = this;
    *v19 = this;
    KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 10) + 120LL), 0, 0);
  }
  v20 = *((_QWORD *)this + 10) + 104LL;
  *(_QWORD *)(v20 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v20, 0LL);
  KeLeaveCriticalRegion();
}
