/*
 * XREFs of ?GetRuntimeClassName@CProcessMemoryReport@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000DB50
 * Callers:
 *     ?GetRuntimeClassName@CProcessMemoryReport@System@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180009930 (-GetRuntimeClassName@CProcessMemoryReport@System@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::System::CProcessMemoryReport::GetRuntimeClassName(
        Windows::System::CProcessMemoryReport *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.System.ProcessMemoryReport", 0x22u, a2);
}
