/*
 * XREFs of VfDriverEnableVerifier @ 0x140704AF8
 * Callers:
 *     MmEnableVerifierForDriver @ 0x1407018BC (MmEnableVerifierForDriver.c)
 *     VfDriverEnableVerifierForAll @ 0x140704C74 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     VfDriverLoadImage @ 0x1406FDD58 (VfDriverLoadImage.c)
 *     VfDriverLock @ 0x1406FE42C (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x140702EA4 (VfUtilIsProtectedDriver.c)
 *     ViSuspectDriversLookupEntry @ 0x1407166C4 (ViSuspectDriversLookupEntry.c)
 */

__int64 __fastcall VfDriverEnableVerifier(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // r12d
  int v6; // ebp
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  PVOID *v9; // rsi
  __int64 *v10; // rax

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
    v10 = (__int64 *)qword_140300B28;
    if ( *(__int64 **)qword_140300B28 != &VfSuspectDriversList )
      __fastfail(3u);
    *(_QWORD *)(a1 + 8) = qword_140300B28;
    *(_QWORD *)a1 = &VfSuspectDriversList;
    *v10 = a1;
    qword_140300B28 = a1;
    *a3 = 1;
    if ( v5 )
      VfDriverLoadImage(a2, a1, 0, 1u);
    ++dword_1403072B8;
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
