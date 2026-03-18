/*
 * XREFs of MiShowBadMapper @ 0x1401CEA7C
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1400C0CB8 (MiMapContiguousMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140103E00 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x14013BD7C (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1401D35FC (MiMapMdlCommon.c)
 * Callees:
 *     MmUnlockLoadedModuleListExclusive @ 0x14001A804 (MmUnlockLoadedModuleListExclusive.c)
 *     MmLockLoadedModuleListExclusive @ 0x14001A824 (MmLockLoadedModuleListExclusive.c)
 *     RtlCaptureStackBackTrace @ 0x1400243AC (RtlCaptureStackBackTrace.c)
 *     MiLookupDataTableEntry @ 0x140035B30 (MiLookupDataTableEntry.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
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

  v2 = byte_1402FED76;
  if ( !byte_1402FED76 )
  {
    if ( (a2 & 1) != 0 && KdPitchDebugger == byte_1402FED76 && (_BYTE)KdDebuggerNotPresent == byte_1402FED76 )
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
