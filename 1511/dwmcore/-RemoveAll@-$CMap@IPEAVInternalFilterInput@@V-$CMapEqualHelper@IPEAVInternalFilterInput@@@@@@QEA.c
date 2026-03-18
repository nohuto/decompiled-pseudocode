/*
 * XREFs of ?RemoveAll@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAXXZ @ 0x18001AE64
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x18001A834 (--1CFilterEffect@@MEAA@XZ.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x18001A880 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
