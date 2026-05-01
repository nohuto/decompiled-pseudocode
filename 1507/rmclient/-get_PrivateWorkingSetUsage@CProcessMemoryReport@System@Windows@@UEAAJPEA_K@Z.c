/*
 * XREFs of ?get_PrivateWorkingSetUsage@CProcessMemoryReport@System@Windows@@UEAAJPEA_K@Z @ 0x1800091E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CProcessMemoryReport::get_PrivateWorkingSetUsage(
        Windows::System::CProcessMemoryReport *this,
        unsigned __int64 *a2)
{
  *a2 = *((_QWORD *)this + 5);
  return 0LL;
}
