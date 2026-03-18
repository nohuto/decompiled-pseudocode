/*
 * XREFs of ?RemoveAll@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAXXZ @ 0x180021F78
 * Callers:
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x180014DF4 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180014E3C (--1CFilterEffect@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveAll(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *(_QWORD *)a1 = 0LL;
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
  return result;
}
