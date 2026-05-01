/*
 * XREFs of ?QueryInterface@CProcessMemoryReport@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800090F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CProcessMemoryReport::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return Windows::System::CProcessMemoryReport::QueryInterface(
           (Windows::System::CProcessMemoryReport *)(a1 - 8),
           a2,
           a3);
}
