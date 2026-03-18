/*
 * XREFs of NtReleaseMutant @ 0x1404526D0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutant @ 0x140022C40 (KeReleaseMutant.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtReleaseMutant(HANDLE MutantHandle, PLONG ReleaseCount)
{
  KPROCESSOR_MODE PreviousMode; // r15
  int v5; // edi
  PVOID v6; // rsi
  LONG v7; // r14d
  _DWORD *v9; // rcx
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF
  PVOID v11; // [rsp+A8h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( ReleaseCount && PreviousMode )
  {
    v9 = ReleaseCount;
    if ( (unsigned __int64)ReleaseCount >= MmUserProbeAddress )
      v9 = (_DWORD *)MmUserProbeAddress;
    *v9 = *v9;
  }
  v5 = ObReferenceObjectByHandle(MutantHandle, 0, ExMutantObjectType, PreviousMode, &Object, 0LL);
  v6 = Object;
  v11 = Object;
  if ( v5 >= 0 )
  {
    v7 = KeReleaseMutant((PRKMUTANT)Object, 1, 0, 0);
    ObfDereferenceObject(v6);
    if ( ReleaseCount )
      *ReleaseCount = v7;
  }
  return v5;
}
