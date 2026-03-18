/*
 * XREFs of ??1VIDPN_MGR@@UEAA@XZ @ 0x1C002B238
 * Callers:
 *     ??_GVIDPN_MGR@@UEAAPEAXI@Z @ 0x1C002B950 (--_GVIDPN_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C000E508 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00179B0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C001E6F0 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??1?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ @ 0x1C002B16C (--1-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ.c)
 *     ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C002B1AC (--1-$Queue@VDMMVIDPN@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AF9EC (MonitorReleaseMonitorHandle.c)
 *     ??1Lockable@@QEAA@XZ @ 0x1C017C500 (--1Lockable@@QEAA@XZ.c)
 *     MonitorUnregisterMonitorEventCallback @ 0x1C0182B74 (MonitorUnregisterMonitorEventCallback.c)
 */

void __fastcall VIDPN_MGR::~VIDPN_MGR(VIDPN_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdi
  struct DMMVIDEOPRESENTTARGET *i; // rdi
  struct HDXGMONITOR__ *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // ebp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  DXGDIAGNOSTICS *v26; // rcx

  v4 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  *((_QWORD *)this + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  *((_QWORD *)this + 6) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  if ( v4 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *((VIDPN_MGR **)this + 16) != (VIDPN_MGR *)((char *)this + 128) )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    WdLogEvent5_WdWarning(v12);
  }
  *(_QWORD *)(*((_QWORD *)this + 11) + 88LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 12) + 88LL) = 0LL;
  v13 = (_QWORD *)(*((_QWORD *)this + 12) + 24LL);
  if ( (_QWORD *)*v13 != v13 )
  {
    for ( i = (struct DMMVIDEOPRESENTTARGET *)(*v13 - 8LL);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*((DMMVIDEOPRESENTTARGETSET **)this + 12), i) )
    {
      v15 = (struct HDXGMONITOR__ *)*((_QWORD *)i + 12);
      if ( v15 )
      {
        if ( !*((_QWORD *)this + 1) )
        {
          v16 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
          WdLogEvent5_WdAssertion(v16);
        }
        MonitorReleaseMonitorHandle(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), v15, i);
      }
      *((_QWORD *)i + 12) = 0LL;
    }
  }
  if ( !*((_QWORD *)this + 59) )
    goto LABEL_21;
  if ( !*((_QWORD *)this + 1) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v17);
  }
  v19 = MonitorUnregisterMonitorEventCallback(*((_QWORD *)this + 1), *((_QWORD *)this + 59));
  if ( v19 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v18);
    if ( !*((_QWORD *)this + 1) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v21, v20, v23, v24);
      WdLogEvent5_WdAssertion(v25);
    }
    *(_QWORD *)(v22 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdError(v22);
    *((_DWORD *)this + 14) = v19;
  }
  else
  {
LABEL_21:
    v26 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 63);
    if ( v26 )
      DXGDIAGNOSTICS::`scalar deleting destructor'(v26);
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
