/*
 * XREFs of NtGdiConfigureOPMProtectedOutput @ 0x1C00C0330
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00688C0 (AcquireCriticalSectionAndCheckState.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C0069F28 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_ @ 0x1C00C000C (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_.c)
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00C01AC (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 */

__int64 __fastcall NtGdiConfigureOPMProtectedOutput(__int64 a1, _OWORD *a2, unsigned int a3, char *a4)
{
  size_t v5; // r15
  __int64 result; // rax
  unsigned int v9; // edi
  PVOID v10; // rsi
  struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *PoolWithTag; // r14
  int v12; // ebx
  COPM *v13; // rcx

  v5 = a3;
  result = AcquireCriticalSectionAndCheckState(a1);
  v9 = 0;
  if ( (int)result >= 0 )
  {
    v10 = 0LL;
    PoolWithTag = (struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x4D504F47u);
    if ( PoolWithTag && (!(_DWORD)v5 || (v10 = ExAllocatePoolWithTag(PagedPool, v5, 0x4D504F47u)) != 0LL) )
    {
      v12 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_(PoolWithTag, a2);
      if ( v12 >= 0 )
      {
        if ( (_DWORD)v5 )
        {
          if ( &a4[v5] > W32UserProbeAddress || &a4[v5] < a4 )
            *(_BYTE *)W32UserProbeAddress = 0;
          memmove(v10, a4, v5);
        }
        v12 = COPM::ConfigureProtectedOutput(v13, a1, PoolWithTag, v5, (unsigned __int8 *)v10);
      }
    }
    else
    {
      v12 = -1073741801;
    }
    OPMFreeMemory(v10);
    OPMFreeMemory(PoolWithTag);
    UserSessionSwitchLeaveCrit();
    if ( v12 < 0 )
      return (unsigned int)v12;
    return v9;
  }
  return result;
}
