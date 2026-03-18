/*
 * XREFs of VfDriverUnloadImage @ 0x140732000
 * Callers:
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 * Callees:
 *     VfTargetDriversRemove @ 0x140025684 (VfTargetDriversRemove.c)
 *     VfIsVerifierEnabled @ 0x140025ADC (VfIsVerifierEnabled.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x140737404 (VfFreeMemoryNotification.c)
 *     ViThunkRemoveImportEntry @ 0x140745280 (ViThunkRemoveImportEntry.c)
 *     VfSuspectDriversUnloadCallback @ 0x14074A574 (VfSuspectDriversUnloadCallback.c)
 */

void __fastcall VfDriverUnloadImage(__int64 a1)
{
  __int64 v2; // rcx
  PVOID *v3; // rdi
  PVOID *v4; // rdx
  PVOID **v5; // rax
  PVOID *v6; // rcx

  if ( (unsigned int)VfIsVerifierEnabled() )
    VfFreeMemoryNotification(*(_QWORD *)(v2 + 48), *(unsigned int *)(v2 + 64));
  if ( ViActiveVerifierThunks )
  {
    ViThunkRemoveImportEntry(&ViVerifierDriverAddedThunkListHead, a1);
    v3 = (PVOID *)ViVerifierDriverAddedSpecialThunkListHead;
    while ( v3 != &ViVerifierDriverAddedSpecialThunkListHead )
    {
      ViThunkRemoveImportEntry(v3 + 3, a1);
      if ( v3[3] == v3 + 3 )
      {
        v4 = (PVOID *)*v3;
        v5 = (PVOID **)v3[1];
        if ( *((PVOID **)*v3 + 1) != v3 || *v5 != v3 )
          __fastfail(3u);
        *v5 = v4;
        v6 = v3;
        v4[1] = v5;
        v3 = (PVOID *)*v3;
        ExFreePoolWithTag(v6, 0);
        --ViVerifierSpecialThunkTables;
      }
      else
      {
        v3 = (PVOID *)*v3;
      }
    }
  }
  VfTargetDriversRemove(a1);
  if ( (*(_DWORD *)(a1 + 104) & 0x2000000) != 0 )
    VfSuspectDriversUnloadCallback(a1);
}
