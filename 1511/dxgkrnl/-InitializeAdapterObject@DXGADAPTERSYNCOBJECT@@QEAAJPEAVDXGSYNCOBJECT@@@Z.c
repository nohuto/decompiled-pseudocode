/*
 * XREFs of ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C0093A20
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00949B8 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0150F48 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C00068C4 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     Template_ppqqpqq @ 0x1C0011B4C (Template_ppqqpqq.c)
 *     Template_ppqqpt @ 0x1C0011C10 (Template_ppqqpt.c)
 *     Template_ppqqpx @ 0x1C0011CC4 (Template_ppqqpx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C006A71C (-AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::InitializeAdapterObject(DXGADAPTERSYNCOBJECT *this, struct DXGSYNCOBJECT *a2)
{
  char *v2; // r14
  __int128 *v5; // rsi
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  struct DXGSYNCOBJECT **v18; // rdx
  struct DXGSYNCOBJECT *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 v23; // [rsp+30h] [rbp-21h]
  __int64 v24; // [rsp+38h] [rbp-19h]
  __int128 v25; // [rsp+58h] [rbp+7h]
  __int128 v26; // [rsp+98h] [rbp+47h]

  v2 = (char *)this + 32;
  if ( *((_QWORD *)this + 4) )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v16 + 24) = 1110LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v5 = (__int128 *)((char *)a2 + 152);
  if ( *((_DWORD *)a2 + 38) == 5 )
    MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(a2);
  else
    MonitoredFenceStorage = 0LL;
  if ( (*((_DWORD *)a2 + 39) & 4) != 0 )
    v7 = *((_QWORD *)a2 + 32);
  else
    v7 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct DXGSYNCOBJECT *, char *, __int64, _QWORD, char *, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL) + 8LL) + 520LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
         a2,
         (char *)a2 + 152,
         v7,
         0LL,
         v2,
         MonitoredFenceStorage);
  v13 = v8;
  if ( v8 >= 0 )
  {
    DXGADAPTER::AcquireReference(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL));
    ADAPTER_RENDER::AddSyncObject(*((union _LARGE_INTEGER **)this + 2), this);
    *((_BYTE *)this + 24) = 1;
    *((_BYTE *)this + 26) = (*((_DWORD *)a2 + 39) & 4) != 0;
    if ( (*((_DWORD *)a2 + 39) & 4) != 0 )
    {
      v18 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 31);
      v19 = (DXGADAPTERSYNCOBJECT *)((char *)this + 40);
      *((_QWORD *)this + 5) = (char *)a2 + 240;
      *((_QWORD *)this + 6) = v18;
      if ( *v18 != (struct DXGSYNCOBJECT *)((char *)a2 + 240) )
        __fastfail(3u);
      *v18 = v19;
      *((_QWORD *)a2 + 31) = v19;
    }
    if ( !bTracingEnabled )
      return 0LL;
    v25 = *v5;
    v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v26 = *(_OWORD *)((char *)a2 + 216);
    if ( (unsigned int)*v5 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        LODWORD(v24) = HIDWORD(*(_QWORD *)v5);
        LODWORD(v23) = 0;
        Template_ppqqpt(DWORD2(v26), &EventCreateSynchronizationMutex, v14, v20, a2, v23, v24, DWORD2(v26), DWORD2(v25));
      }
      return 0LL;
    }
    switch ( (_DWORD)v25 )
    {
      case 2:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          LODWORD(v24) = HIDWORD(*(_QWORD *)v5);
          LODWORD(v23) = 0;
          Template_ppqqpqq(
            DWORD2(v26),
            &EventCreateSemaphore,
            v14,
            v20,
            a2,
            v23,
            v24,
            DWORD2(v26),
            DWORD2(v25),
            HIDWORD(v25));
        }
        return 0LL;
      case 3:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
          return 0LL;
        v22 = (const EVENT_DESCRIPTOR *)&EventCreateFence;
        break;
      case 4:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          LODWORD(v24) = HIDWORD(*(_QWORD *)v5);
          LODWORD(v23) = 0;
          Template_ppqqpx(
            DWORD2(v26),
            &EventCreateCPUNotification,
            v14,
            v20,
            a2,
            v23,
            v24,
            DWORD2(v26),
            *((_QWORD *)&v25 + 1));
        }
        return 0LL;
      case 5:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
          return 0LL;
        v22 = (const EVENT_DESCRIPTOR *)&EventCreateMonitoredFence;
        break;
      default:
        v21 = WdLogNewEntry5_WdAssertion((unsigned int)(v25 - 4));
        *(_QWORD *)(v21 + 24) = 864LL;
        WdLogEvent5_WdAssertion(v21);
        return 0LL;
    }
    LODWORD(v24) = HIDWORD(*(_QWORD *)v5);
    LODWORD(v23) = 0;
    Template_ppqqpx(DWORD2(v26), v22, v14, v20, a2, v23, v24, DWORD2(v26), *((_QWORD *)&v25 + 1));
    return 0LL;
  }
  v17 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
  *(_QWORD *)(v17 + 24) = a2;
  *(_QWORD *)(v17 + 32) = v13;
  WdLogEvent5_WdWarning(v17);
  return (unsigned int)v13;
}
