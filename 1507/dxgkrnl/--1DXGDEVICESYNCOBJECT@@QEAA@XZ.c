/*
 * XREFs of ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00A8BC4
 * Callers:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000973C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C0002830 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00848F0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00A8AE0 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(DXGDEVICESYNCOBJECT *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  DXGDEVICESYNCOBJECT *v8; // rcx
  DXGDEVICESYNCOBJECT **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGPROCESS *Current; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  struct DXGSYNCOBJECT *v22; // rbx
  PERESOURCE *Global; // rax
  __int64 v24; // r9
  _BYTE v25[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*((_BYTE *)this + 68) & 2) != 0 )
  {
    v2 = *((_QWORD *)this + 2);
    if ( !*(_DWORD *)(v2 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 80)) )
    {
      v7 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
      *(_QWORD *)(v7 + 24) = 6931LL;
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = *(DXGDEVICESYNCOBJECT **)this;
    v9 = (DXGDEVICESYNCOBJECT **)*((_QWORD *)this + 1);
    if ( *(DXGDEVICESYNCOBJECT **)(*(_QWORD *)this + 8LL) != this || *v9 != this )
      __fastfail(3u);
    *v9 = v8;
    *((_QWORD *)v8 + 1) = v9;
  }
  DXGDEVICESYNCOBJECT::DestroyCoreState(this);
  if ( *((_DWORD *)this + 10) )
  {
    Current = DXGPROCESS::GetCurrent(v11);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25, Current);
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 216), *((unsigned int *)this + 10), v15, v16);
    *((_DWORD *)this + 10) = 0;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  }
  if ( *((_QWORD *)this + 7) )
  {
    v17 = *((_QWORD *)this + 2);
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 72LL);
    if ( v18 )
      v19 = *(_QWORD *)(v18 + 8);
    else
      v19 = 0LL;
    v20 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 400LL);
    MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
    (*(void (__fastcall **)(__int64, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v20 + 8) + 920LL))(
      v19,
      MonitoredFenceStorage);
  }
  v22 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 4);
  if ( v22 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v11, v10, v12, v13);
    DXGGLOBAL::DestroySyncObject(Global, v22, 0LL, v24);
  }
  *((_QWORD *)this + 2) = 0LL;
}
