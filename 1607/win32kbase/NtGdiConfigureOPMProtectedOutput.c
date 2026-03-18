/*
 * XREFs of NtGdiConfigureOPMProtectedOutput @ 0x1C00C1530
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     ?OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C00813D0 (-OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C00819B0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00850F0 (AcquireCriticalSectionAndCheckState.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_ @ 0x1C00C1130 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_.c)
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00C1324 (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 */

__int64 __fastcall NtGdiConfigureOPMProtectedOutput(__int64 a1, _OWORD *a2, unsigned int a3, char *a4)
{
  size_t v5; // r15
  __int64 result; // rax
  unsigned int v9; // edi
  PVOID v10; // rsi
  struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *v11; // r14
  int v12; // ebx
  COPM *v13; // rcx

  v5 = a3;
  result = AcquireCriticalSectionAndCheckState(a1);
  v9 = 0;
  if ( (int)result >= 0 )
  {
    v10 = 0LL;
    v11 = (struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *)OPMAllocateMemory(0x1000uLL, PagedPool);
    if ( v11 && (!(_DWORD)v5 || (v10 = OPMAllocateMemory(v5, PagedPool)) != 0LL) )
    {
      v12 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_(v11, a2);
      if ( v12 >= 0 )
      {
        if ( (_DWORD)v5 )
        {
          if ( (unsigned __int64)&a4[v5] > W32UserProbeAddress || &a4[v5] < a4 )
            *(_BYTE *)W32UserProbeAddress = 0;
          memmove(v10, a4, v5);
        }
        v12 = COPM::ConfigureProtectedOutput(v13, a1, v11, v5, (unsigned __int8 *)v10);
      }
    }
    else
    {
      v12 = -1073741801;
    }
    OPMFreeMemory(v10);
    OPMFreeMemory(v11);
    UserSessionSwitchLeaveCrit();
    if ( v12 < 0 )
      return (unsigned int)v12;
    return v9;
  }
  return result;
}
