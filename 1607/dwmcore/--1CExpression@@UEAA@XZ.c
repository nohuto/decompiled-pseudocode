/*
 * XREFs of ??1CExpression@@UEAA@XZ @ 0x18008B7C0
 * Callers:
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x180089FA0 (--_ECExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18003AE34 (-ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?UnregisterSourcesForAnimation@CExpression@@QEAAXPEAVCBaseExpression@@@Z @ 0x18008B520 (-UnregisterSourcesForAnimation@CExpression@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CExpression::~CExpression(CExpression *this)
{
  CMILCOMBase *v2; // rcx
  CMILCOMBase *v3; // rcx
  unsigned int v4; // esi
  __int64 v5; // rdi
  CComposition *v6; // rcx
  struct CResource *v8; // rbp
  void (__fastcall *v9)(WPF::ProcessHeapImpl *, void *); // rax

  *(_QWORD *)this = &CExpression::`vftable';
  v2 = (CMILCOMBase *)*((_QWORD *)this + 36);
  if ( v2 )
  {
    CMILCOMBase::InternalRelease(v2);
    *((_QWORD *)this + 36) = 0LL;
  }
  v3 = (CMILCOMBase *)*((_QWORD *)this + 39);
  if ( v3 )
  {
    CMILCOMBase::InternalRelease(v3);
    *((_QWORD *)this + 39) = 0LL;
  }
  if ( *((_BYTE *)this + 276) )
  {
    CExpression::UnregisterSourcesForAnimation(this, this);
    *((_BYTE *)this + 276) = 0;
  }
  if ( *((_DWORD *)this + 100) )
  {
    v4 = 0;
    do
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 47) + 16LL * v4 + 8);
      if ( v5 )
      {
        v6 = (CComposition *)*((_QWORD *)this + 2);
        if ( (*(_DWORD *)(v5 + 16))-- == 1 )
        {
          v8 = *(struct CResource **)v5;
          if ( *(_QWORD *)v5 )
          {
            CComposition::ClearWeakReference(v6, *(struct CResource **)v5);
            *((_DWORD *)v8 + 8) &= ~8u;
          }
          v9 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
          if ( v9 == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, (void *)v5);
          else
            v9(WPF::g_pProcessHeap, (void *)v5);
        }
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 100) );
    *((_DWORD *)this + 100) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 376, 16LL);
  }
  *((_DWORD *)this + 124) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 472, 32LL);
  if ( *((_QWORD *)this + 59) != *((_QWORD *)this + 60) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 59) = 0LL;
  }
  if ( *((_QWORD *)this + 47) != *((_QWORD *)this + 48) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 47) = 0LL;
  }
  if ( *((_QWORD *)this + 43) != *((_QWORD *)this + 44) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 43) = 0LL;
  }
  CBaseExpression::~CBaseExpression(this);
}
