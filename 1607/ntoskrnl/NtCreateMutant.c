/*
 * XREFs of NtCreateMutant @ 0x140493EE0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutant @ 0x14008746C (KeInitializeMutant.c)
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  char PreviousMode; // si
  __int64 v8; // r9
  NTSTATUS result; // eax
  __int64 v10; // [rsp+20h] [rbp-48h]
  PRKMUTANT Mutant; // [rsp+50h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = (__int64)MutantHandle;
    if ( (unsigned __int64)MutantHandle >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  result = ObCreateObjectEx(
             PreviousMode,
             ExMutantObjectType,
             (__int64)ObjectAttributes,
             PreviousMode,
             v10,
             56,
             0,
             0,
             &Mutant,
             0LL);
  if ( result >= 0 )
  {
    KeInitializeMutant(Mutant, InitialOwner);
    result = ObInsertObjectEx(Mutant, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v12);
    LODWORD(Mutant) = result;
    if ( result >= 0 )
      *MutantHandle = (HANDLE)v12;
  }
  return result;
}
