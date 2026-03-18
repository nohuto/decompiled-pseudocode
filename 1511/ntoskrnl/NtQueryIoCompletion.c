/*
 * XREFs of NtQueryIoCompletion @ 0x1405FA718
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryIoCompletion(
        HANDLE IoCompletionHandle,
        IO_COMPLETION_INFORMATION_CLASS IoCompletionInformationClass,
        PVOID IoCompletionInformation,
        ULONG IoCompletionInformationLength,
        PULONG ResultLength)
{
  KPROCESSOR_MODE PreviousMode; // r15
  _BYTE *v9; // rcx
  PULONG v10; // rbx
  _DWORD *v11; // rcx
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
    v9 = IoCompletionInformation;
    if ( (unsigned __int64)IoCompletionInformation >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[3] = v9[3];
    v10 = ResultLength;
    if ( ResultLength )
    {
      v11 = ResultLength;
      if ( (unsigned __int64)ResultLength >= MmUserProbeAddress )
        v11 = (_DWORD *)MmUserProbeAddress;
      *v11 = *v11;
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
