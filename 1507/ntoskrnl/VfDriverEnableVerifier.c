/*
 * XREFs of VfDriverEnableVerifier @ 0x140738F7C
 * Callers:
 *     MmEnableVerifierForDriver @ 0x140735D38 (MmEnableVerifierForDriver.c)
 *     VfDriverEnableVerifierForAll @ 0x1407390F8 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     VfDriverLoadImage @ 0x140732114 (VfDriverLoadImage.c)
 *     VfDriverLock @ 0x1407326C0 (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x140737970 (VfUtilIsProtectedDriver.c)
 *     ViSuspectDriversLookupEntry @ 0x14074A724 (ViSuspectDriversLookupEntry.c)
 */

__int64 __fastcall VfDriverEnableVerifier(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // r12d
  int v6; // ebp
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  PVOID *v9; // rsi
  __int64 **v10; // rax

  *a3 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  VfDriverLock();
  if ( ViSuspectDriversLookupEntry((PCUNICODE_STRING)(a1 + 24)) )
    goto LABEL_22;
  if ( !a2 )
  {
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    v9 = (PVOID *)PsLoadedModuleList;
    v6 = 1;
    if ( PsLoadedModuleList == &PsLoadedModuleList )
      goto LABEL_7;
    do
    {
      a2 = (__int64)v9;
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 24), (PCUNICODE_STRING)(v9 + 11), 1u) )
        break;
      v9 = (PVOID *)*v9;
      ++v7;
    }
    while ( v9 != &PsLoadedModuleList );
    v8 = 0;
    if ( v9 == &PsLoadedModuleList )
LABEL_7:
      a2 = 0LL;
    if ( !a2 )
      goto LABEL_15;
  }
  if ( (~VerifierModifyableOptions & MmVerifierData) == 0
    && (!v6 || v7 > 1 && !(unsigned int)VfUtilIsProtectedDriver((PCUNICODE_STRING)(a2 + 88))) )
  {
    v5 = 1;
LABEL_15:
    v10 = (__int64 **)qword_14032BB48;
    *(_QWORD *)a1 = &VfSuspectDriversList;
    *(_QWORD *)(a1 + 8) = v10;
    if ( *v10 != &VfSuspectDriversList )
      __fastfail(3u);
    *v10 = (__int64 *)a1;
    qword_14032BB48 = a1;
    *a3 = 1;
    if ( v5 )
      VfDriverLoadImage(a2, a1, 0, 1u);
    ++dword_140331D78;
    goto LABEL_20;
  }
  v8 = -1073741554;
LABEL_20:
  if ( v6 )
    ExReleaseResourceLite(&PsLoadedModuleResource);
LABEL_22:
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v8;
}
