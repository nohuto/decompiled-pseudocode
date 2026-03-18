/*
 * XREFs of ??1CBaseExpression@@UEAA@XZ @ 0x180088DA0
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800872CC (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??1CExpression@@UEAA@XZ @ 0x18008B7C0 (--1CExpression@@UEAA@XZ.c)
 *     ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x180146D50 (--_ECBaseExpression@@UEAAPEAXI@Z.c)
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x180148A50 (--1CConditionalExpression@@UEAA@XZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x18015D5A0 (--1CScrollAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18003AE34 (-ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x180087B00 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x1800AC960 (--1CSparseStorage@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x180146EB8 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 */

void __fastcall CBaseExpression::~CBaseExpression(CBaseExpression *this)
{
  bool v1; // zf
  __int64 v3; // rdi
  CComposition *v4; // rcx
  struct CResource *v5; // rsi
  void (__fastcall *v6)(WPF::ProcessHeapImpl *, void *); // rax
  __int64 v7; // rcx
  const unsigned __int16 *DebugInfo; // rax
  __int64 v9; // r10
  __int64 v10; // r11

  v1 = *((_BYTE *)this + 228) == 0;
  *(_QWORD *)this = &CBaseExpression::`vftable';
  if ( !v1 )
    CExpressionManager::UnregisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 168LL), this);
  v3 = *((_QWORD *)this + 29);
  if ( v3 )
  {
    v4 = (CComposition *)*((_QWORD *)this + 2);
    v1 = (*(_DWORD *)(v3 + 16))-- == 1;
    if ( v1 )
    {
      v5 = *(struct CResource **)v3;
      if ( *(_QWORD *)v3 )
      {
        CComposition::ClearWeakReference(v4, *(struct CResource **)v3);
        *((_DWORD *)v5 + 8) &= ~8u;
      }
      v6 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v6 == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, (void *)v3);
      else
        v6(WPF::g_pProcessHeap, (void *)v3);
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 33) + 4LL) & 0x40000000) != 0 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 168LL);
    --*(_DWORD *)(v7 + 176);
    --*(_DWORD *)(v7 + 96);
  }
  if ( *((_QWORD *)this + 31) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 31) = 0LL;
  }
  if ( *(int *)(*((_QWORD *)this + 33) + 4LL) < 0 )
  {
    DebugInfo = CBaseExpression::GetDebugInfo(this);
    (*(void (__fastcall **)(__int64, const unsigned __int16 *))(v9 + 32))(v10, DebugInfo);
  }
  CSparseStorage::~CSparseStorage((CBaseExpression *)((char *)this + 264));
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
