/*
 * XREFs of ??1CComposition@@MEAA@XZ @ 0x1801006C8
 * Callers:
 *     ??_ECCrossThreadComposition@@UEAAPEAXI@Z @ 0x1801042C0 (--_ECCrossThreadComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800A1918 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x1800FACE0 (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801009F4 (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x180101494 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x1801045A0 (--1CMmcssTask@@QEAA@XZ.c)
 *     ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x180144B30 (-HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z.c)
 */

void __fastcall CComposition::~CComposition(CComposition *this)
{
  void **v1; // r12
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdi
  CMILRefCountBase *v6; // rcx
  CD3DDeviceManager *v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rdi
  CCursorVisual *v12; // rcx
  unsigned int v13; // ebx
  CMILRefCountBase *v14; // rcx
  CMILCOMBase *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdi
  CMILRefCountBase *v18; // rcx
  CMILCOMBase *v19; // rcx
  CMILRefCountBase *v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdi
  PVOID v23; // rax
  PVOID RestartKey; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &CComposition::`vftable';
  v1 = (void **)((char *)this + 376);
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
  *((_DWORD *)this + 152) = 0;
  v9 = *((_DWORD *)this + 222);
  if ( v9 )
  {
    v10 = 0LL;
    v11 = v9;
    do
    {
      v12 = *(CCursorVisual **)(v10 + *((_QWORD *)this + 108));
      if ( v12 )
        CCursorVisual::`scalar deleting destructor'(v12, v8);
      v10 += 8LL;
      --v11;
    }
    while ( v11 );
  }
  *((_DWORD *)this + 222) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 108, 8u);
  v13 = 0;
  for ( *((_DWORD *)this + 230) = 0; v13 < *((_DWORD *)this + 170); ++v13 )
    CMILCOMBase::InternalRelease(*(CMILCOMBase **)(*((_QWORD *)this + 82) + 8LL * v13));
  *((_DWORD *)this + 170) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 82, 8u);
  CComposition::UnmapDeferredSharedSectionViews(this);
  v14 = (CMILRefCountBase *)*((_QWORD *)this + 6);
  if ( v14 )
    CMILRefCountBase::Release(v14);
  v15 = (CMILCOMBase *)*((_QWORD *)this + 2);
  if ( v15 )
    CMILCOMBase::InternalRelease(v15);
  v16 = *((_QWORD *)this + 4);
  if ( v16 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 8LL))(*((_QWORD *)this + 4));
  v17 = *((_QWORD *)this + 5);
  if ( v17 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 8LL))(*((_QWORD *)this + 5));
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
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 16LL))(*((_QWORD *)this + 8));
  v22 = *((_QWORD *)this + 3);
  if ( v22 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 8LL))(*((_QWORD *)this + 3));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 128));
  while ( 1 )
  {
    RestartKey = 0LL;
    v23 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 928), &RestartKey);
    if ( !v23 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 928), v23);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 112);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 108);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 88);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 82);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 77);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 73);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 65);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 55);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 51);
  DynArrayImpl<1>::~DynArrayImpl<1>(v1);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 34);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 27);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 22);
  CMmcssTask::~CMmcssTask((CComposition *)((char *)this + 80));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
