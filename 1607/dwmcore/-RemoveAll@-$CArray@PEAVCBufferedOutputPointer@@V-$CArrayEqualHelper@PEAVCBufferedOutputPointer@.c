/*
 * XREFs of ?RemoveAll@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAXXZ @ 0x1800B52E4
 * Callers:
 *     ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x180021DE0 (-ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 *     ??1CInteractionContextWrapper@@UEAA@XZ @ 0x1800A5488 (--1CInteractionContextWrapper@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
