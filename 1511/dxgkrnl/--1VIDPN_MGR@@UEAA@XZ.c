/*
 * XREFs of ??1VIDPN_MGR@@UEAA@XZ @ 0x1C002AEF4
 * Callers:
 *     ??_GVIDPN_MGR@@UEAAPEAXI@Z @ 0x1C002B690 (--_GVIDPN_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C000E140 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00194D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C001E7B0 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??1?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ @ 0x1C002AE28 (--1-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ.c)
 *     ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C002AE68 (--1-$Queue@VDMMVIDPN@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3374 (MonitorReleaseMonitorHandle.c)
 *     ??1Lockable@@QEAA@XZ @ 0x1C0180240 (--1Lockable@@QEAA@XZ.c)
 *     MonitorUnregisterMonitorEventCallback @ 0x1C0187224 (MonitorUnregisterMonitorEventCallback.c)
 */

void __fastcall VIDPN_MGR::~VIDPN_MGR(VIDPN_MGR *this)
{
  bool v1; // zf
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdi
  struct DMMVIDEOPRESENTTARGET *i; // rdi
  struct HDXGMONITOR__ *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // ebp
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  DXGDIAGNOSTICS *v21; // rcx

  v1 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  *((_QWORD *)this + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  *((_QWORD *)this + 6) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  if ( v1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v3);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v8);
    }
    v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( !*(_BYTE *)(v5 + 169) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v9);
    }
  }
  if ( *((VIDPN_MGR **)this + 16) != (VIDPN_MGR *)((char *)this + 128) )
  {
    v10 = WdLogNewEntry5_WdWarning(v5, v4, v6, v7);
    WdLogEvent5_WdWarning(v10);
  }
  *(_QWORD *)(*((_QWORD *)this + 11) + 88LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 12) + 88LL) = 0LL;
  v11 = (_QWORD *)(*((_QWORD *)this + 12) + 24LL);
  if ( (_QWORD *)*v11 != v11 )
  {
    for ( i = (struct DMMVIDEOPRESENTTARGET *)(*v11 - 8LL);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*((DMMVIDEOPRESENTTARGETSET **)this + 12), i) )
    {
      v13 = (struct HDXGMONITOR__ *)*((_QWORD *)i + 12);
      if ( v13 )
      {
        if ( !*((_QWORD *)this + 1) )
        {
          v14 = WdLogNewEntry5_WdAssertion(v5);
          WdLogEvent5_WdAssertion(v14);
        }
        MonitorReleaseMonitorHandle(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), v13, i);
      }
      *((_QWORD *)i + 12) = 0LL;
    }
  }
  if ( !*((_QWORD *)this + 59) )
    goto LABEL_24;
  if ( !*((_QWORD *)this + 1) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v15);
  }
  v17 = MonitorUnregisterMonitorEventCallback(*((_QWORD *)this + 1), *((_QWORD *)this + 59));
  if ( v17 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v16);
    if ( !*((_QWORD *)this + 1) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v20);
    }
    *(_QWORD *)(v19 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdError(v19);
    *((_DWORD *)this + 14) = v17;
  }
  else
  {
LABEL_24:
    v21 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 63);
    if ( v21 )
      DXGDIAGNOSTICS::`scalar deleting destructor'(v21);
  }
  operator delete(*((void **)this + 57));
  operator delete(*((void **)this + 56));
  operator delete(*((void **)this + 55));
  operator delete(*((void **)this + 54));
  operator delete(*((void **)this + 53));
  operator delete(*((void **)this + 52));
  operator delete(*((void **)this + 51));
  operator delete(*((void **)this + 50));
  operator delete(*((void **)this + 49));
  operator delete(*((void **)this + 48));
  operator delete(*((void **)this + 47));
  operator delete(*((void **)this + 46));
  operator delete(*((void **)this + 45));
  operator delete(*((void **)this + 44));
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::~Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>((_QWORD *)this + 36);
  Queue<DMMVIDPN>::~Queue<DMMVIDPN>((_QWORD *)this + 28);
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::~Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>((_QWORD *)this + 20);
  Queue<DMMVIDPN>::~Queue<DMMVIDPN>((_QWORD *)this + 13);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)this + 12, 0LL);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)this + 11, 0LL);
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 10, 0LL);
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 9, 0LL);
  Lockable::~Lockable((VIDPN_MGR *)((char *)this + 16));
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
}
