/*
 * XREFs of ?TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z @ 0x18000E730
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x1800015A0 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::TrySetAppMemoryUsageLimit(
        Windows::System::CMemoryManager *this,
        __int64 a2,
        bool *a3)
{
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !a3 )
    return 2147942487LL;
  result = Windows::System::CMemoryManager::Init();
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(ModernResourceManagerProxy *, __int64, int *))(*(_QWORD *)Windows::System::CMemoryManager::s_pProxy
                                                                                     + 32LL))(
               Windows::System::CMemoryManager::s_pProxy,
               a2,
               &v6);
    if ( (int)result >= 0 )
    {
      *a3 = v6 != 0;
      return 0LL;
    }
  }
  return result;
}
