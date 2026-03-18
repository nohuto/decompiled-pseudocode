/*
 * XREFs of ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01233FC
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00D1E28 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0123780 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?CalcCurrentTableSize@DXGADAPTERSOURCEHASH@@AEAAIXZ @ 0x1C000A9C8 (-CalcCurrentTableSize@DXGADAPTERSOURCEHASH@@AEAAIXZ.c)
 *     DpiSetSchedulerCallbackState @ 0x1C000F590 (DpiSetSchedulerCallbackState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C0017BD4 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C002CBE4 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_DISPLAY::Destroy(ADAPTER_DISPLAY **this, __int64 a2, __int64 a3, __int64 a4)
{
  ADAPTER_DISPLAY **v4; // rbx
  __int64 v5; // rax
  unsigned int i; // edi
  __int64 v7; // rsi
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
  ADAPTER_DISPLAY *v18; // rdi
  struct DXGGLOBAL *Global; // rbx
  unsigned int v20; // eax
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  _BYTE v23[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = this;
  if ( this[23] != (ADAPTER_DISPLAY *)(this + 23) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 18273LL;
    WdLogEvent5_WdAssertion(v5);
  }
  for ( i = 0; i < *((_DWORD *)v4 + 20); *((_BYTE *)v4[14] + v7 + 980) = 0 )
  {
    v7 = 1008LL * i;
    this = *(ADAPTER_DISPLAY ***)((char *)v4[14] + v7 + 968);
    if ( this )
    {
      operator delete(this);
      *(_QWORD *)((char *)v4[14] + v7 + 968) = 0LL;
    }
    ++i;
    *(_DWORD *)((char *)v4[14] + v7 + 976) = 0;
  }
  for ( j = 0; j < *((_DWORD *)v4 + 20); ++j )
  {
    v9 = 1008LL * j;
    this = *(ADAPTER_DISPLAY ***)((char *)v4[14] + v9 + 792);
    if ( this )
    {
      operator delete(this);
      *(_QWORD *)((char *)v4[14] + v9 + 792) = 0LL;
    }
  }
  for ( k = 0; k < *((_DWORD *)v4 + 20); ++k )
  {
    v11 = 1008LL * k;
    v12 = *(void **)((char *)v4[14] + v11 + 736);
    if ( v12 )
    {
      operator delete(v12);
      *(_QWORD *)((char *)v4[14] + v11 + 736) = 0LL;
    }
    this = *(ADAPTER_DISPLAY ***)((char *)v4[14] + v11 + 776);
    if ( this )
    {
      operator delete(this);
      *(_QWORD *)((char *)v4[14] + v11 + 776) = 0LL;
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
  v16 = *((_QWORD *)v15 + 22);
  if ( v16 && !*((_QWORD *)v15 + 248) )
  {
    DpiSetSchedulerCallbackState(v16, 0);
    KeFlushQueuedDpcs();
  }
  v17 = v4[31];
  if ( v17 )
  {
    DXGDODPRESENT::`scalar deleting destructor'(v17);
    v4[31] = 0LL;
  }
  v18 = v4[2];
  Global = DXGGLOBAL::GetGlobal((__int64)v17, a2, a3, a4);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGGLOBAL *)((char *)Global + 808));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v20 = DXGADAPTERSOURCEHASH::CalcCurrentTableSize((struct DXGGLOBAL *)((char *)Global + 808));
  v21 = (_DWORD *)*((_QWORD *)Global + 106);
  if ( v20 )
  {
    v22 = v20;
    do
    {
      if ( *v21 == *((_DWORD *)v18 + 63) && v21[1] == *((_DWORD *)v18 + 64) )
        v21[3] &= ~1u;
      v21 += 4;
      --v22;
    }
    while ( v22 );
  }
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
}
