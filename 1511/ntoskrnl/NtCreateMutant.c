/*
 * XREFs of NtCreateMutant @ 0x14042D830
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutant @ 0x14007CCB8 (KeInitializeMutant.c)
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  char PreviousMode; // si
  _QWORD *v7; // r9
  NTSTATUS result; // eax
  __int64 v9; // [rsp+20h] [rbp-48h]
  PRKMUTANT Mutant; // [rsp+50h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp-10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = MutantHandle;
    if ( (unsigned __int64)MutantHandle >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
  }
  result = ObCreateObjectEx(
             PreviousMode,
             ExMutantObjectType,
             (__int64)ObjectAttributes,
             PreviousMode,
             v9,
             56,
             0,
             0,
             &Mutant,
             0LL);
  if ( result >= 0 )
  {
    KeInitializeMutant(Mutant, InitialOwner);
    result = ObInsertObjectEx(Mutant, 0, 0LL, (__int64)&v11);
    LODWORD(Mutant) = result;
    if ( result >= 0 )
      *MutantHandle = (HANDLE)v11;
  }
  return result;
}
