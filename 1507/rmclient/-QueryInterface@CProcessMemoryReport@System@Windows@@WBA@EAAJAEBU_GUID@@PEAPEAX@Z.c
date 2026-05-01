/*
 * XREFs of ?QueryInterface@CProcessMemoryReport@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CProcessMemoryReport::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return Windows::System::CProcessMemoryReport::QueryInterface(
           (Windows::System::CProcessMemoryReport *)(a1 - 16),
           a2,
           a3);
}
