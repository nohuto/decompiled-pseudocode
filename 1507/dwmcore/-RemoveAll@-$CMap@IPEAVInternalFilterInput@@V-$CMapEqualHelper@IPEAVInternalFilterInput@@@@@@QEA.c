/*
 * XREFs of ?RemoveAll@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAXXZ @ 0x1800015B8
 * Callers:
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x180002C40 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180002C8C (--1CFilterEffect@@MEAA@XZ.c)
 *     ??1CCompiledEffect@@MEAA@XZ @ 0x1801122DC (--1CCompiledEffect@@MEAA@XZ.c)
 *     ?EmptyFilterInputMap@CCompiledEffect@@AEAAXXZ @ 0x18011259C (-EmptyFilterInputMap@CCompiledEffect@@AEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveAll(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
               WPF::g_pProcessHeap,
               *(_QWORD *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
               WPF::g_pProcessHeap,
               *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
  return result;
}
