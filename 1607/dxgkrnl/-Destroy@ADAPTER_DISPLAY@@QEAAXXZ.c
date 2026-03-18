/*
 * XREFs of ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0147394
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00E7778 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01451AC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DpiSetSchedulerCallbackState @ 0x1C0010170 (DpiSetSchedulerCallbackState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C001ECFC (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C0034E24 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_DISPLAY::Destroy(ADAPTER_DISPLAY **this, __int64 a2, __int64 a3, __int64 a4)
{
  ADAPTER_DISPLAY **v4; // rbx
  __int64 v5; // rax
  unsigned int i; // esi
  __int64 v7; // rdi
  unsigned int j; // edi
  __int64 v9; // rsi
  unsigned int k; // edi
  __int64 v11; // rsi
  void *v12; // rcx
  ADAPTER_DISPLAY *v13; // rdi
  MONITOR_MGR *v14; // rcx
  ADAPTER_DISPLAY *v15; // rax
  __int64 v16; // rcx
  DXGDODPRESENT *v17; // rcx
  ADAPTER_DISPLAY *v18; // rbx
  struct DXGGLOBAL *Global; // rax

  v4 = this;
  if ( this[23] != (ADAPTER_DISPLAY *)(this + 23) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 3955LL;
    WdLogEvent5_WdAssertion(v5);
  }
  for ( i = 0; i < *((_DWORD *)v4 + 20); *(_DWORD *)((char *)v4[14] + v7 + 1004) = -1 )
  {
    v7 = 1016LL * i;
    this = *(ADAPTER_DISPLAY ***)((char *)v4[14] + v7 + 976);
    if ( this )
    {
      operator delete(this);
      *(_QWORD *)((char *)v4[14] + v7 + 976) = 0LL;
    }
    ++i;
    *(_DWORD *)((char *)v4[14] + v7 + 984) = 0;
    *((_BYTE *)v4[14] + v7 + 988) = 0;
    *(_DWORD *)((char *)v4[14] + v7 + 1000) = -1;
  }
  for ( j = 0; j < *((_DWORD *)v4 + 20); ++j )
  {
    v9 = 1016LL * j;
    this = *(ADAPTER_DISPLAY ***)((char *)v4[14] + v9 + 800);
    if ( this )
    {
      operator delete(this);
      *(_QWORD *)((char *)v4[14] + v9 + 800) = 0LL;
    }
  }
  for ( k = 0; k < *((_DWORD *)v4 + 20); ++k )
  {
    v11 = 1016LL * k;
    v12 = *(void **)((char *)v4[14] + v11 + 744);
    if ( v12 )
    {
      operator delete(v12);
      *(_QWORD *)((char *)v4[14] + v11 + 744) = 0LL;
    }
    this = *(ADAPTER_DISPLAY ***)((char *)v4[14] + v11 + 784);
    if ( this )
    {
      operator delete(this);
      *(_QWORD *)((char *)v4[14] + v11 + 784) = 0LL;
    }
  }
  v13 = v4[11];
  if ( v13 )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v13 + 5));
    (**(void (__fastcall ***)(ADAPTER_DISPLAY *, __int64))v13)(v13, 1LL);
    v4[11] = 0LL;
  }
  if ( v4[12] )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = v4;
    v14 = v4[12];
    if ( v14 )
      MONITOR_MGR::`scalar deleting destructor'(v14);
    v4[12] = 0LL;
  }
  v15 = v4[2];
  v16 = *((_QWORD *)v15 + 24);
  if ( v16 && !*((_QWORD *)v15 + 267) )
  {
    DpiSetSchedulerCallbackState(v16, 0);
    KeFlushQueuedDpcs();
  }
  v17 = v4[32];
  if ( v17 )
  {
    DXGDODPRESENT::`scalar deleting destructor'(v17);
    v4[32] = 0LL;
  }
  v18 = v4[2];
  Global = DXGGLOBAL::GetGlobal((__int64)v17);
  DXGADAPTERSOURCEHASH::RemoveAdapter(
    (struct DXGGLOBAL *)((char *)Global + 792),
    (const struct _LUID *)((char *)v18 + 268));
}
