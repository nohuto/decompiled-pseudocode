/*
 * XREFs of ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x18007BF10
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?ReleaseResources@CCommonRenderingEffect@@UEAAXXZ @ 0x180056540 (-ReleaseResources@CCommonRenderingEffect@@UEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CHWDrawListEntry *__fastcall CHWDrawListEntry::`scalar deleting destructor'(CHWDrawListEntry *this, char a2)
{
  CMILRefCountBase *v4; // rcx
  void (*v5)(void); // rax
  __int64 v6; // rax
  void (__fastcall *v7)(CCommonRenderingEffect *); // rax
  CCommonRenderingEffect *v8; // rcx
  __int64 v9; // rcx
  void (__fastcall *v10)(WPF::ProcessHeapImpl *, void *); // rax

  *(_QWORD *)this = &CHWDrawListEntry::`vftable';
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    if ( (char *)v5 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(v4);
    else
      v5();
    *((_QWORD *)this + 4) = 0LL;
  }
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    v7 = *(void (__fastcall **)(CCommonRenderingEffect *))(v6 + 32);
    v8 = (CHWDrawListEntry *)((char *)this + 48);
    if ( v7 == CCommonRenderingEffect::ReleaseResources )
      CCommonRenderingEffect::ReleaseResources(v8);
    else
      v7(v8);
    *((_QWORD *)this + 6) = 0LL;
  }
  --CHWDrawListEngineMetrics::s_cDrawListEntries;
  v9 = *((_QWORD *)this + 3);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v10 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v10 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v10(WPF::g_pProcessHeap, this);
  }
  return this;
}
