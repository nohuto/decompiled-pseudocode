/*
 * XREFs of NtExtendSection @ 0x1406A48DC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     MmExtendSection @ 0x1404B096C (MmExtendSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewMaximumSize)
{
  KPROCESSOR_MODE PreviousMode; // r9
  _BYTE *v5; // rcx
  NTSTATUS result; // eax
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  NTSTATUS v8; // [rsp+60h] [rbp+18h]
  LARGE_INTEGER v9; // [rsp+68h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)NewMaximumSize & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = NewMaximumSize;
    if ( (unsigned __int64)NewMaximumSize >= MmUserProbeAddress )
      v5 = (_BYTE *)MmUserProbeAddress;
    *v5 = *v5;
    v5[7] = v5[7];
    v9 = *NewMaximumSize;
  }
  else
  {
    v9 = *NewMaximumSize;
  }
  result = ObReferenceObjectByHandle(SectionHandle, 0x10u, MmSectionObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = MmExtendSection((__int64)Object, &v9, 0);
    ObfDereferenceObject(Object);
    *NewMaximumSize = v9;
    return v8;
  }
  return result;
}
