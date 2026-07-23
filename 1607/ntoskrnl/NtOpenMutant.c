/*
 * XREFs of NtOpenMutant @ 0x140462D44
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x140463564 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenMutant(PHANDLE MutantHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  char PreviousMode; // di
  __int64 v7; // rdx
  NTSTATUS v8; // edx
  ACCESS_MASK v10; // [rsp+20h] [rbp-38h]
  void *v11; // [rsp+40h] [rbp-18h] BYREF

  v3 = (int)ObjectAttributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = (__int64)MutantHandle;
    if ( (unsigned __int64)MutantHandle >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v10 = DesiredAccess;
  LOBYTE(DesiredAccess) = PreviousMode;
  v8 = ObOpenObjectByName(v3, (_DWORD)ExMutantObjectType, DesiredAccess, 0, v10, 0LL, (__int64)&v11);
  if ( v8 >= 0 )
    *MutantHandle = v11;
  return v8;
}
