/*
 * XREFs of ??1CComposition@@MEAA@XZ @ 0x1800E243C
 * Callers:
 *     ??_ECCrossThreadComposition@@UEAAPEAXI@Z @ 0x1800E8230 (--_ECCrossThreadComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800519D4 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x180051E24 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x1800DE56C (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x1800E3A54 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x1800E8548 (--1CMmcssTask@@QEAA@XZ.c)
 *     ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x1801332F0 (-HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z.c)
 */

void __fastcall CComposition::~CComposition(CComposition *this)
{
  void **v2; // r15
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdi
  CMILRefCountBase *v6; // rcx
  CD3DDeviceManager *v7; // rcx
  __int64 v8; // rbx
  CMILRefCountBase *v9; // rcx
  CMILCOMBase *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  CMILRefCountBase *v13; // rcx
  CMILCOMBase *v14; // rcx
  CMILRefCountBase *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdi
  PVOID v18; // rax
  PVOID RestartKey; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &CComposition::`vftable';
  v2 = (void **)((char *)this + 376);
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
  v8 = 0LL;
  for ( *((_DWORD *)this + 152) = 0; (unsigned int)v8 < *((_DWORD *)this + 170); v8 = (unsigned int)(v8 + 1) )
    CMILCOMBase::InternalRelease(*(CMILCOMBase **)(*((_QWORD *)this + 82) + 8 * v8));
  *((_DWORD *)this + 170) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 82, 8u);
  CComposition::UnmapDeferredSharedSectionViews(this);
  v9 = (CMILRefCountBase *)*((_QWORD *)this + 6);
  if ( v9 )
    CMILRefCountBase::Release(v9);
  v10 = (CMILCOMBase *)*((_QWORD *)this + 2);
  if ( v10 )
    CMILCOMBase::InternalRelease(v10);
  v11 = *((_QWORD *)this + 4);
  if ( v11 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*((_QWORD *)this + 4));
  v12 = *((_QWORD *)this + 5);
  if ( v12 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*((_QWORD *)this + 5));
  v13 = (CMILRefCountBase *)*((_QWORD *)this + 21);
  if ( v13 )
    CMILRefCountBase::Release(v13);
  v14 = (CMILCOMBase *)*((_QWORD *)this + 7);
  if ( v14 )
    CMILCOMBase::InternalRelease(v14);
  v15 = (CMILRefCountBase *)*((_QWORD *)this + 9);
  if ( v15 )
    CMILRefCountBase::Release(v15);
  v16 = *((_QWORD *)this + 8);
  if ( v16 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 16LL))(*((_QWORD *)this + 8));
  v17 = *((_QWORD *)this + 3);
  if ( v17 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 8LL))(*((_QWORD *)this + 3));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 132));
  while ( 1 )
  {
    RestartKey = 0LL;
    v18 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 960), &RestartKey);
    if ( !v18 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 960), v18);
  }
  `vector destructor iterator'(
    (char *)this + 864,
    32LL,
    3,
    (void (__fastcall *)(char *))CWatermarkStack<MilVisualRenderParameter *,8,2,4>::~CWatermarkStack<MilVisualRenderParameter *,8,2,4>);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 88);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 82);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 77);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 73);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 65);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 55);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 51);
  DynArrayImpl<1>::~DynArrayImpl<1>(v2);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 34);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 27);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 22);
  CMmcssTask::~CMmcssTask((CComposition *)((char *)this + 80));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
