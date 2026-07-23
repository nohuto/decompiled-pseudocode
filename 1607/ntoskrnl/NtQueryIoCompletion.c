/*
 * XREFs of NtQueryIoCompletion @ 0x1406241F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryIoCompletion(
        HANDLE IoCompletionHandle,
        IO_COMPLETION_INFORMATION_CLASS IoCompletionInformationClass,
        PVOID IoCompletionInformation,
        ULONG IoCompletionInformationLength,
        PULONG ResultLength)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v9; // rcx
  PULONG v10; // rbx
  __int64 v11; // rcx
  int v12; // esi
  int v13; // r14d
  PVOID Object[4]; // [rsp+40h] [rbp-38h] BYREF

  if ( IoCompletionInformationClass )
    return -1073741821;
  if ( IoCompletionInformationLength != 4 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)IoCompletionInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (__int64)IoCompletionInformation;
    if ( (unsigned __int64)IoCompletionInformation >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 3) = *(_BYTE *)(v9 + 3);
    v10 = ResultLength;
    if ( ResultLength )
    {
      v11 = (__int64)ResultLength;
      if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
  }
  else
  {
    v10 = ResultLength;
  }
  v12 = ObReferenceObjectByHandle(IoCompletionHandle, 1u, IoCompletionObjectType, PreviousMode, Object, 0LL);
  Object[2] = Object[0];
  if ( v12 >= 0 )
  {
    v13 = *((_DWORD *)Object[0] + 1);
    ObfDereferenceObject(Object[0]);
    if ( PreviousMode )
    {
      *(_DWORD *)IoCompletionInformation = v13;
      if ( v10 )
        *v10 = 4;
    }
    else
    {
      *(_DWORD *)IoCompletionInformation = v13;
      if ( v10 )
        *v10 = 4;
    }
  }
  return v12;
}
