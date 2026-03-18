/*
 * XREFs of NtCreateMutant @ 0x1404B02E0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutant @ 0x1400756B0 (KeInitializeMutant.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14048A8A0 (ObCreateObjectEx.c)
 */

NTSTATUS __stdcall NtCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  PHANDLE v6; // rbx
  char PreviousMode; // si
  NTSTATUS inserted; // ecx
  __int64 v10; // [rsp+20h] [rbp-48h]
  PRKMUTANT Mutant; // [rsp+50h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-10h] BYREF

  v6 = MutantHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)MutantHandle >= MmUserProbeAddress )
      MutantHandle = (PHANDLE)MmUserProbeAddress;
    *MutantHandle = *MutantHandle;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExMutantObjectType,
               (int)ObjectAttributes,
               PreviousMode,
               v10,
               56,
               0,
               0,
               &Mutant,
               0LL);
  if ( inserted >= 0 )
  {
    KeInitializeMutant(Mutant, InitialOwner);
    inserted = ObInsertObjectEx(Mutant, 0LL, DesiredAccess, 0LL, 0, 0LL, &v12);
    LODWORD(Mutant) = inserted;
    if ( inserted >= 0 )
      *v6 = (HANDLE)v12;
  }
  return inserted;
}
