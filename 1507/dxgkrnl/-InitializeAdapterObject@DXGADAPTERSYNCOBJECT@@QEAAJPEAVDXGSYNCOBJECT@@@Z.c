/*
 * XREFs of ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C00DC4CC
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00DC5D4 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C014C920 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C0002830 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     Template_ppqqpqq @ 0x1C00103DC (Template_ppqqpqq.c)
 *     Template_ppqqpt @ 0x1C00104A0 (Template_ppqqpt.c)
 *     Template_ppqqpx @ 0x1C0010554 (Template_ppqqpx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00C2234 (-AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::InitializeAdapterObject(
        DXGADAPTERSYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // r14
  __int128 *v7; // rsi
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  struct DXGSYNCOBJECT **v16; // rdx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  struct DXGSYNCOBJECT *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rax
  const EVENT_DESCRIPTOR *v24; // rdx
  __int64 v25; // [rsp+30h] [rbp-21h]
  __int64 v26; // [rsp+38h] [rbp-19h]
  __int128 v27; // [rsp+58h] [rbp+7h]
  __int128 v28; // [rsp+98h] [rbp+47h]

  v4 = (char *)this + 32;
  if ( *((_QWORD *)this + 4) )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = 1053LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v7 = (__int128 *)((char *)a2 + 128);
  if ( *((_DWORD *)a2 + 32) == 5 )
    MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(a2);
  else
    MonitoredFenceStorage = 0LL;
  if ( (*((_DWORD *)a2 + 33) & 4) != 0 )
    v9 = *((_QWORD *)a2 + 29);
  else
    v9 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, struct DXGSYNCOBJECT *, char *, __int64, _QWORD, char *, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 376LL) + 8LL) + 520LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 384LL),
          a2,
          (char *)a2 + 128,
          v9,
          0LL,
          v4,
          MonitoredFenceStorage);
  v15 = v10;
  if ( v10 >= 0 )
  {
    DXGADAPTER::AcquireReference(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL));
    ADAPTER_RENDER::AddSyncObject(*((ADAPTER_RENDER **)this + 2), this);
    *((_BYTE *)this + 24) = 1;
    *((_BYTE *)this + 26) = (*((_DWORD *)a2 + 33) & 4) != 0;
    if ( (*((_DWORD *)a2 + 33) & 4) != 0 )
    {
      v16 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 28);
      v21 = (DXGADAPTERSYNCOBJECT *)((char *)this + 40);
      *((_QWORD *)this + 5) = (char *)a2 + 216;
      *((_QWORD *)this + 6) = v16;
      if ( *v16 != (struct DXGSYNCOBJECT *)((char *)a2 + 216) )
        __fastfail(3u);
      *v16 = v21;
      *((_QWORD *)a2 + 28) = v21;
    }
    if ( !bTracingEnabled )
      return 0LL;
    v27 = *v7;
    v22 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v28 = *((_OWORD *)a2 + 12);
    if ( (unsigned int)*v7 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        LODWORD(v26) = HIDWORD(*(_QWORD *)v7);
        LODWORD(v25) = 0;
        Template_ppqqpt(DWORD2(v28), &EventCreateSynchronizationMutex, v17, v22, a2, v25, v26, DWORD2(v28), DWORD2(v27));
      }
      return 0LL;
    }
    switch ( (_DWORD)v27 )
    {
      case 2:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          LODWORD(v26) = HIDWORD(*(_QWORD *)v7);
          LODWORD(v25) = 0;
          Template_ppqqpqq(
            DWORD2(v28),
            &EventCreateSemaphore,
            v17,
            v22,
            a2,
            v25,
            v26,
            DWORD2(v28),
            DWORD2(v27),
            HIDWORD(v27));
        }
        return 0LL;
      case 3:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
          return 0LL;
        v24 = (const EVENT_DESCRIPTOR *)&EventCreateFence;
        break;
      case 4:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          LODWORD(v26) = HIDWORD(*(_QWORD *)v7);
          LODWORD(v25) = 0;
          Template_ppqqpx(
            DWORD2(v28),
            &EventCreateCPUNotification,
            v17,
            v22,
            a2,
            v25,
            v26,
            DWORD2(v28),
            *((_QWORD *)&v27 + 1));
        }
        return 0LL;
      case 5:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
          return 0LL;
        v24 = (const EVENT_DESCRIPTOR *)&EventCreateMonitoredFence;
        break;
      default:
        v23 = WdLogNewEntry5_WdAssertion((unsigned int)(v27 - 4), v16, v17, v22);
        *(_QWORD *)(v23 + 24) = 864LL;
        WdLogEvent5_WdAssertion(v23);
        return 0LL;
    }
    LODWORD(v26) = HIDWORD(*(_QWORD *)v7);
    LODWORD(v25) = 0;
    Template_ppqqpx(DWORD2(v28), v24, v17, v22, a2, v25, v26, DWORD2(v28), *((_QWORD *)&v27 + 1));
    return 0LL;
  }
  v20 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
  *(_QWORD *)(v20 + 24) = a2;
  *(_QWORD *)(v20 + 32) = v15;
  WdLogEvent5_WdWarning(v20);
  return (unsigned int)v15;
}
