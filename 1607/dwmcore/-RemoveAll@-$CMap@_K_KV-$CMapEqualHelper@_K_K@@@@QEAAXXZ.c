/*
 * XREFs of ?RemoveAll@?$CMap@_K_KV?$CMapEqualHelper@_K_K@@@@QEAAXXZ @ 0x1800BD184
 * Callers:
 *     _dynamic_atexit_destructor_for__CManipulationContext::s_ParticipatingInteractionMap__ @ 0x1800C2F60 (_dynamic_atexit_destructor_for__CManipulationContext--s_ParticipatingInteractionMap__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 CMap<unsigned __int64,unsigned __int64,CMapEqualHelper<unsigned __int64,unsigned __int64>>::RemoveAll()
{
  __int64 result; // rax

  if ( CManipulationContext::s_ParticipatingInteractionMap )
  {
    result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    CManipulationContext::s_ParticipatingInteractionMap = 0LL;
  }
  if ( qword_1801F03D8 )
  {
    result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    qword_1801F03D8 = 0LL;
  }
  dword_1801F03E0 = 0;
  return result;
}
