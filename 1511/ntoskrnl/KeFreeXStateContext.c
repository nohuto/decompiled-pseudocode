/*
 * XREFs of KeFreeXStateContext @ 0x1400EACD0
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x1400EAB70 (KeRestoreExtendedAndSupervisorState.c)
 *     VfCtxInit @ 0x1406CB1DC (VfCtxInit.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall KeFreeXStateContext(__int64 a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 24);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x76615358u);
      *(_QWORD *)a1 = 0LL;
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
}
