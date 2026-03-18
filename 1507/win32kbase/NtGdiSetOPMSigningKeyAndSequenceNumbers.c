/*
 * XREFs of NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C0067730
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C0067CB0 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00688C0 (AcquireCriticalSectionAndCheckState.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_ @ 0x1C0068BA8 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C0069F28 (-OPMFreeMemory@@YAXPEAX@Z.c)
 */

__int64 __fastcall NtGdiSetOPMSigningKeyAndSequenceNumbers(void *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *PoolWithTag; // rax
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *v7; // rsi
  COPM *v8; // rcx
  int v9; // edi

  result = AcquireCriticalSectionAndCheckState();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    PoolWithTag = (struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x4D504F47u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_(PoolWithTag, a2);
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
