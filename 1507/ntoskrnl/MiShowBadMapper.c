/*
 * XREFs of MiShowBadMapper @ 0x14020DDF0
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1401159C0 (MiMapContiguousMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1401356DC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x14016A030 (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x140214A44 (MiMapMdlCommon.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140010760 (MiLookupDataTableEntry.c)
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x1400254F0 (MmUnlockLoadedModuleListExclusive.c)
 *     MmLockLoadedModuleListExclusive @ 0x14002551C (MmLockLoadedModuleListExclusive.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall MiShowBadMapper(ULONG_PTR BugCheckParameter2, char a2)
{
  char v2; // bl
  unsigned int v4; // edi
  unsigned __int64 *v5; // rsi
  PVOID *v6; // rax
  unsigned __int8 v7[4]; // [rsp+30h] [rbp-68h] BYREF
  ULONG BackTraceHash[3]; // [rsp+34h] [rbp-64h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-58h] BYREF

  v2 = byte_14034F21A;
  if ( !byte_14034F21A )
  {
    if ( (a2 & 1) != 0 && KdPitchDebugger == byte_14034F21A && (_BYTE)KdDebuggerNotPresent == byte_14034F21A )
LABEL_14:
      KeBugCheckEx(0x1Au, 0x1233uLL, BugCheckParameter2, 0LL, 0LL);
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(1u, 8u, BackTrace, BackTraceHash);
    MmLockLoadedModuleListExclusive(v7);
    v4 = 0;
    v5 = (unsigned __int64 *)BackTrace;
    while ( *v5 > (unsigned __int64)MmHighestUserAddress )
    {
      v6 = MiLookupDataTableEntry(*v5, 1);
      if ( v6 && ((_DWORD)v6[13] & 0x2000000) != 0 )
      {
        v2 = 1;
        break;
      }
      ++v4;
      ++v5;
      if ( v4 >= 8 )
        break;
    }
    MmUnlockLoadedModuleListExclusive(v7[0]);
  }
  if ( v2 == 1 )
    goto LABEL_14;
}
