/*
 * XREFs of ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C0045C30
 * Callers:
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0053A70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C0054610 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 * Callees:
 *     Template_pppxqpq @ 0x1C001F83C (Template_pppxqpq.c)
 *     Template_pppxqq @ 0x1C001F908 (Template_pppxqq.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C005BB70 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1C0087964 (-GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::AppendReadyPacket(
        VIDMM_PAGING_QUEUE *this,
        struct VIDMM_PAGING_QUEUE_PACKET *a2,
        unsigned __int64 *a3)
{
  bool v4; // zf
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // cl
  unsigned __int64 v13; // rax
  VIDMM_PAGING_QUEUE **v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  VIDMM_DEVICE *v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rax
  struct VIDMM_DEVICE *VidMmDevice; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  VIDMM_PAGING_QUEUE *v32; // rcx
  VIDMM_PAGING_QUEUE **v33; // rax

  v4 = *((_BYTE *)a2 + 24) == 0;
  *((_QWORD *)a2 + 2) = KeGetCurrentThread();
  if ( !v4 )
  {
    v7 = *((_QWORD *)a2 + 8);
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 176));
  }
  v8 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8 + 128, 0LL);
  *(_QWORD *)(v8 + 136) = KeGetCurrentThread();
  if ( *((_BYTE *)a2 + 25) )
  {
    v12 = *((_BYTE *)this + 130);
    *((_QWORD *)this + 12) += *((unsigned int *)this + 33);
    if ( !v12 )
      *((_DWORD *)this + 25) = 0;
    v13 = *((_QWORD *)this + 12);
    *((_QWORD *)a2 + 4) = v13;
    *a3 = v13;
  }
  v14 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 5);
  if ( *v14 != (VIDMM_PAGING_QUEUE *)((char *)this + 32) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)this + 32;
  *((_QWORD *)a2 + 1) = v14;
  *v14 = a2;
  *((_QWORD *)this + 5) = a2;
  if ( *((_BYTE *)a2 + 24) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      VidMmDevice = VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(a2);
      Template_pppxqpq(
        *((_QWORD *)a2 + 5),
        v30,
        v31,
        *((_QWORD *)VidMmDevice + 3),
        this,
        a2,
        *((_QWORD *)a2 + 5),
        *((_DWORD *)a2 + 12),
        *((_QWORD *)a2 + 8),
        *((_DWORD *)this + 29));
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v9, v10, v11);
      v15[3] = a2;
      v15[4] = *((int *)a2 + 12);
      v15[5] = *((_QWORD *)a2 + 8);
      v15[6] = *((_QWORD *)a2 + 7);
      v14 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 4);
      v15[7] = v14;
    }
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pppxqq(
        (__int64)v14,
        v9,
        v10,
        *(_QWORD *)(**((_QWORD **)this + 10) + 24LL),
        this,
        a2,
        *((_QWORD *)a2 + 5),
        *((_DWORD *)a2 + 12),
        *((_DWORD *)this + 29));
    if ( g_IsInternalReleaseOrDbg )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v9, v10, v11);
      v27[3] = a2;
      v27[4] = *((int *)a2 + 12);
      v27[5] = *((unsigned __int8 *)a2 + 25);
      v14 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 4);
      v27[6] = v14;
    }
  }
  if ( !*((_DWORD *)this + 28) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v9, v10, v11);
      v16[3] = this;
      v16[4] = *((int *)this + 28);
      v16[5] = 1LL;
    }
    if ( *((_DWORD *)this + 28) == 2 )
    {
      v32 = *(VIDMM_PAGING_QUEUE **)this;
      v33 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 1);
      if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)this + 8LL) != this || *v33 != this )
        __fastfail(3u);
      *v33 = v32;
      *((_QWORD *)v32 + 1) = v33;
      *(_QWORD *)this = 0LL;
      *((_QWORD *)this + 1) = 0LL;
    }
    v17 = (_QWORD *)*((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 1;
    if ( *((_BYTE *)this + 128) )
    {
      if ( *((_DWORD *)this + 29) == 3 )
      {
        v18 = (_QWORD *)v17[9];
        v19 = v17 + 8;
        if ( (_QWORD *)*v18 != v19 )
          __fastfail(3u);
      }
      else
      {
        v18 = (_QWORD *)v17[13];
        v19 = v17 + 12;
        if ( (_QWORD *)*v18 != v19 )
          __fastfail(3u);
      }
    }
    else if ( *((_BYTE *)this + 129) )
    {
      v18 = (_QWORD *)v17[11];
      v19 = v17 + 10;
      if ( (_QWORD *)*v18 != v19 )
        __fastfail(3u);
    }
    else
    {
      v18 = (_QWORD *)v17[9];
      v19 = v17 + 8;
      if ( (_QWORD *)*v18 != v19 )
        __fastfail(3u);
    }
    *(_QWORD *)this = v19;
    *((_QWORD *)this + 1) = v18;
    *v18 = this;
    v19[1] = this;
    KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 10) + 152LL), 0, 0);
    if ( *((_BYTE *)a2 + 24) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v24 = WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
        *(_QWORD *)(v24 + 24) = this;
        *(_QWORD *)(v24 + 32) = *((_QWORD *)a2 + 7);
      }
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      v28 = WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
      *(_QWORD *)(v28 + 24) = this;
      *(_QWORD *)(v28 + 32) = **((_QWORD **)this + 18);
    }
  }
  v25 = (VIDMM_DEVICE *)*((_QWORD *)this + 18);
  ++*((_DWORD *)v25 + 16);
  VIDMM_DEVICE::EnsureSchedulable(v25, 1);
  ++*(_DWORD *)(*((_QWORD *)this + 10) + 144LL);
  v26 = *((_QWORD *)this + 10);
  ++*((_DWORD *)this + 34);
  v26 += 128LL;
  *(_QWORD *)(v26 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v26, 0LL);
  KeLeaveCriticalRegion();
}
