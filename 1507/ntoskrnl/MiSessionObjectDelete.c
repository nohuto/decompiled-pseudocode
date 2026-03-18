/*
 * XREFs of MiSessionObjectDelete @ 0x140569CC8
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveSchedulingGroup @ 0x140120EBC (KeRemoveSchedulingGroup.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14050550C (MiReleaseProcessReferenceToSessionDataPage.c)
 */

void __fastcall MiSessionObjectDelete(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int16 *v3; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(v2 + 4) & 0x40) != 0 )
    MiReleaseProcessReferenceToSessionDataPage(v2);
  v3 = *(unsigned __int16 **)(a1 + 32);
  if ( v3 )
  {
    KeRemoveSchedulingGroup(v3);
    ExFreePoolWithTag(*(PVOID *)(a1 + 32), 0);
  }
}
