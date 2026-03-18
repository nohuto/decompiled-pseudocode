/*
 * XREFs of ??1CTransform3DGroup@@MEAA@XZ @ 0x180068848
 * Callers:
 *     ??_ECTransform3DGroup@@MEAAPEAXI@Z @ 0x1800685E0 (--_ECTransform3DGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x18006747C (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 *     ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x1800687A0 (-UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ.c)
 */

void __fastcall CTransform3DGroup::~CTransform3DGroup(CTransform3DGroup *this)
{
  *(_QWORD *)this = &CTransform3DGroup::`vftable'{for `CTransform3D'};
  *((_QWORD *)this + 15) = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  CTransform3DGroup::UnRegisterNotifiers(this);
  if ( *((_QWORD *)this + 20) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 20));
    *((_QWORD *)this + 20) = 0LL;
  }
  CCyclicResourceListEntry::~CCyclicResourceListEntry((CTransform3DGroup *)((char *)this + 120));
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
