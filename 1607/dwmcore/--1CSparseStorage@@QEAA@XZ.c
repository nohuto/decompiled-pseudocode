/*
 * XREFs of ??1CSparseStorage@@QEAA@XZ @ 0x1800AC960
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180054360 (--1CVisual@@MEAA@XZ.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x180088DA0 (--1CBaseExpression@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSparseStorage::~CSparseStorage(CSparseStorage *this)
{
  _DWORD *v1; // rax
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rax
  _DWORD *v4; // rdx

  v1 = *(_DWORD **)this;
  if ( *(_UNKNOWN **)this != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    if ( v1[1] && *((_BYTE *)v1 + 8) )
      RaiseFailFastException(0LL, 0LL, 0);
    v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    v4 = *(_DWORD **)this;
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v4);
    else
      v3(WPF::g_pProcessHeap, v4);
  }
}
