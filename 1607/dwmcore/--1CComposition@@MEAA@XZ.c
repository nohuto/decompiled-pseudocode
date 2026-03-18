/*
 * XREFs of ??1CComposition@@MEAA@XZ @ 0x180116584
 * Callers:
 *     ??_ECCrossThreadComposition@@UEAAPEAXI@Z @ 0x18011A290 (--_ECCrossThreadComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800A3618 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800B71EC (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x18010F754 (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x180116F8C (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x18011AAC0 (--1CMmcssTask@@QEAA@XZ.c)
 *     ??_GCCounterManager@@QEAAPEAXI@Z @ 0x18011AB64 (--_GCCounterManager@@QEAAPEAXI@Z.c)
 *     ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x180172988 (-HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z.c)
 */

void __fastcall CComposition::~CComposition(CComposition *this)
{
  char *v1; // r13
  unsigned int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rsi
  CMILRefCountBase *v6; // rcx
  CD3DDeviceManager *v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rsi
  struct CResource ***v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // edx
  CMILRefCountBase *v14; // rcx
  CMILCOMBase *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  CMILRefCountBase *v18; // rcx
  CMILCOMBase *v19; // rcx
  CMILRefCountBase *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  PVOID v23; // rax
  PVOID RestartKey; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &CComposition::`vftable';
  v1 = (char *)this + 376;
  *((_DWORD *)this + 100) = 0;
  v3 = *((_DWORD *)this + 74);
  if ( v3 )
  {
    v4 = 0LL;
    v5 = v3;
    do
    {
      v6 = *(CMILRefCountBase **)(v4 + *((_QWORD *)this + 34));
      if ( v6 )
        CMILRefCountBase::Release(v6);
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  *((_DWORD *)this + 74) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64 *)this + 34);
  CComposition::ReleaseNotificationChannels(this);
  CD3DDeviceManager::HandleDeleteAssociatedDevices(v7, (const struct _GUID *)((char *)this + 252));
  *((_DWORD *)this + 154) = 0;
  v8 = *((_DWORD *)this + 224);
  if ( v8 )
  {
    v9 = 0LL;
    v10 = v8;
    do
    {
      v11 = *(struct CResource ****)(v9 + *((_QWORD *)this + 109));
      if ( v11 )
        CCursorVisual::`scalar deleting destructor'(v11);
      v9 += 8LL;
      --v10;
    }
    while ( v10 );
  }
  *((_DWORD *)this + 224) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 872, 8u);
  v12 = 0LL;
  for ( *((_DWORD *)this + 232) = 0; (unsigned int)v12 < *((_DWORD *)this + 172); v12 = (unsigned int)(v12 + 1) )
    CMILCOMBase::InternalRelease(*(CMILCOMBase **)(*((_QWORD *)this + 83) + 8 * v12));
  *((_DWORD *)this + 172) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 664, 8u);
  CComposition::UnmapDeferredSharedSectionViews(this);
  v14 = (CMILRefCountBase *)*((_QWORD *)this + 6);
  if ( v14 )
    CMILRefCountBase::Release(v14);
  v15 = (CMILCOMBase *)*((_QWORD *)this + 2);
  if ( v15 )
    CMILCOMBase::InternalRelease(v15);
  v16 = *((_QWORD *)this + 4);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v17 = *((_QWORD *)this + 5);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  v18 = (CMILRefCountBase *)*((_QWORD *)this + 21);
  if ( v18 )
    CMILRefCountBase::Release(v18);
  v19 = (CMILCOMBase *)*((_QWORD *)this + 7);
  if ( v19 )
    CMILCOMBase::InternalRelease(v19);
  v20 = (CMILRefCountBase *)*((_QWORD *)this + 9);
  if ( v20 )
    CMILRefCountBase::Release(v20);
  v21 = *((_QWORD *)this + 8);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v22 = *((_QWORD *)this + 3);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  if ( CCounterManager::s_pGlobalPerFrameCounterManager )
    CCounterManager::`scalar deleting destructor'(CCounterManager::s_pGlobalPerFrameCounterManager, v13);
  CCounterManager::s_pGlobalPerFrameCounterManager = 0LL;
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 141));
  while ( 1 )
  {
    RestartKey = 0LL;
    v23 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 1032), &RestartKey);
    if ( !v23 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 1032), v23);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 1000);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 968);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 936);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 904);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 872);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 712);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 664);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 624);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 592);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 528);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 440);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 408);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v1);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 272);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 216);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 176);
  CMmcssTask::~CMmcssTask((CComposition *)((char *)this + 80));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
