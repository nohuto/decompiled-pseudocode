/*
 * XREFs of VfDriverUnloadImage @ 0x1406B2000
 * Callers:
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140001FF0 (VfIsVerifierEnabled.c)
 *     VfTargetDriversRemove @ 0x140001FF8 (VfTargetDriversRemove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x1406B709C (VfFreeMemoryNotification.c)
 *     ViThunkRemoveImportEntry @ 0x1406C39E0 (ViThunkRemoveImportEntry.c)
 *     VfSuspectDriversUnloadCallback @ 0x1406C7B70 (VfSuspectDriversUnloadCallback.c)
 */

__int64 __fastcall VfDriverUnloadImage(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  PVOID *v4; // rdi
  PVOID *v5; // rdx
  PVOID **v6; // rax
  PVOID *v7; // rcx

  if ( (unsigned int)VfIsVerifierEnabled() )
    VfFreeMemoryNotification(*(_QWORD *)(v2 + 48), *(unsigned int *)(v2 + 64));
  if ( ViActiveVerifierThunks )
  {
    ViThunkRemoveImportEntry(&ViVerifierDriverAddedThunkListHead, a1);
    v4 = (PVOID *)ViVerifierDriverAddedSpecialThunkListHead;
    while ( v4 != &ViVerifierDriverAddedSpecialThunkListHead )
    {
      ViThunkRemoveImportEntry(v4 + 3, a1);
      if ( v4[3] == v4 + 3 )
      {
        v5 = (PVOID *)*v4;
        v6 = (PVOID **)v4[1];
        if ( *((PVOID **)*v4 + 1) != v4 || *v6 != v4 )
          __fastfail(3u);
        *v6 = v5;
        v7 = v4;
        v5[1] = v6;
        v4 = (PVOID *)*v4;
        ExFreePoolWithTag(v7, 0);
        --ViVerifierSpecialThunkTables;
      }
      else
      {
        v4 = (PVOID *)*v4;
      }
    }
  }
  result = VfTargetDriversRemove(a1);
  if ( (*(_DWORD *)(a1 + 104) & 0x2000000) != 0 )
    return VfSuspectDriversUnloadCallback(a1);
  return result;
}
