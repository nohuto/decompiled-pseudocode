/*
 * XREFs of ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z @ 0x18000E870
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x1800015A0 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::get_AppMemoryUsageLevel(
        Windows::System::CMemoryManager *this,
        enum Windows::System::AppMemoryUsageLevel *a2)
{
  __int64 result; // rax

  if ( !a2 )
    return 2147942487LL;
  result = Windows::System::CMemoryManager::Init();
  if ( (int)result >= 0 )
  {
    if ( Windows::System::CMemoryManager::s_pProxy )
      return (*(__int64 (__fastcall **)(ModernResourceManagerProxy *, enum Windows::System::AppMemoryUsageLevel *))(*(_QWORD *)Windows::System::CMemoryManager::s_pProxy + 40LL))(
               Windows::System::CMemoryManager::s_pProxy,
               a2);
    else
      return 2147500037LL;
  }
  return result;
}
