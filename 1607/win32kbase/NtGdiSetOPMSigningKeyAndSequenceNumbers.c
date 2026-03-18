/*
 * XREFs of NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C0083E30
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     ?OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C00813D0 (-OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C00819B0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C0084380 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00850F0 (AcquireCriticalSectionAndCheckState.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_ @ 0x1C0085224 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_.c)
 */

__int64 __fastcall NtGdiSetOPMSigningKeyAndSequenceNumbers(void *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *v6; // rax
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *v7; // rsi
  COPM *v8; // rcx
  int v9; // edi

  result = AcquireCriticalSectionAndCheckState();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    v6 = (struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *)OPMAllocateMemory(0x100uLL, PagedPool);
    v7 = v6;
    if ( v6 )
    {
      v9 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_(v6, a2);
      if ( v9 >= 0 )
        v9 = COPM::SetSigningKeyAndSequenceNumbers(v8, a1, v7);
    }
    else
    {
      v9 = -1073741801;
    }
    OPMFreeMemory(v7);
    UserSessionSwitchLeaveCrit();
    if ( v9 < 0 )
      return (unsigned int)v9;
    return v5;
  }
  return result;
}
