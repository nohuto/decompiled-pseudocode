/*
 * XREFs of NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00823F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C007E0A0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C0082970 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C0083790 (AcquireCriticalSectionAndCheckState.c)
 *     sub_1C0083884 @ 0x1C0083884 (sub_1C0083884.c)
 */

__int64 __fastcall NtGdiSetOPMSigningKeyAndSequenceNumbers(void *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *PoolWithTag; // rax
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *v7; // rsi
  COPM *v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx

  result = AcquireCriticalSectionAndCheckState();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    PoolWithTag = (struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x4D504F47u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = sub_1C0083884(PoolWithTag, a2);
      if ( v9 >= 0 )
        v9 = COPM::SetSigningKeyAndSequenceNumbers(v8, a1, v7);
    }
    else
    {
      v9 = -1073741801;
    }
    OPMFreeMemory(v7);
    UserSessionSwitchLeaveCrit(v11, v10);
    if ( v9 < 0 )
      return (unsigned int)v9;
    return v5;
  }
  return result;
}
