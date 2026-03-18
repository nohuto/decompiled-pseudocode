/*
 * XREFs of ??1CTransformGroup@@MEAA@XZ @ 0x180066A88
 * Callers:
 *     ??_GCTransformGroup@@MEAAPEAXI@Z @ 0x180066680 (--_GCTransformGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x1800669C0 (-UnRegisterNotifiers@CTransformGroup@@UEAAXXZ.c)
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x18006747C (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 */

void __fastcall CTransformGroup::~CTransformGroup(CTransformGroup *this)
{
  *(_QWORD *)this = &CTransformGroup::`vftable'{for `CTransform'};
  *((_QWORD *)this + 15) = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  CTransformGroup::UnRegisterNotifiers(this);
  if ( *((_QWORD *)this + 20) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 20));
    *((_QWORD *)this + 20) = 0LL;
  }
  CCyclicResourceListEntry::~CCyclicResourceListEntry((CTransformGroup *)((char *)this + 120));
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
