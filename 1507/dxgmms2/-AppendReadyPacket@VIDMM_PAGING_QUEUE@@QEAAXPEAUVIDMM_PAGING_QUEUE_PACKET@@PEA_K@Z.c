/*
 * XREFs of ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C003DF4C
 * Callers:
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C003B4F8 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00518BC (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 * Callees:
 *     Template_pppxqpq @ 0x1C0010480 (Template_pppxqpq.c)
 *     Template_pppxqq @ 0x1C001054C (Template_pppxqq.c)
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C003E0BC (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 *     ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1C005B300 (-GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ.c)
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
  __int64 v17; // rcx

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
    v11 = *((_BYTE *)this + 122);
    *((_QWORD *)this + 12) += *((unsigned int *)this + 31);
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
        *((_DWORD *)this + 27));
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
      *((_DWORD *)this + 27));
  }
  if ( !*((_DWORD *)this + 26) )
    VIDMM_PAGING_QUEUE::SetStatus(this, 1LL);
  v17 = *((_QWORD *)this + 10);
  *(_QWORD *)(v17 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v17 + 104, 0LL);
  KeLeaveCriticalRegion();
}
