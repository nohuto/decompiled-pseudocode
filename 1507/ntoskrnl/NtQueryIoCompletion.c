/*
 * XREFs of NtQueryIoCompletion @ 0x140584790
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryIoCompletion(
        HANDLE IoCompletionHandle,
        IO_COMPLETION_INFORMATION_CLASS IoCompletionInformationClass,
        PVOID IoCompletionInformation,
        ULONG IoCompletionInformationLength,
        PULONG ResultLength)
{
  KPROCESSOR_MODE PreviousMode; // di
  _BYTE *v8; // rcx
  PULONG v9; // r14
  _DWORD *v10; // rcx
  int v11; // esi
  int v12; // r15d
  PVOID Object[4]; // [rsp+40h] [rbp-38h] BYREF

  if ( IoCompletionInformationClass )
    return -1073741821;
  if ( IoCompletionInformationLength != 4 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = IoCompletionInformation;
    if ( ((unsigned __int8)IoCompletionInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)IoCompletionInformation >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[3] = v8[3];
    v9 = ResultLength;
    if ( ResultLength )
    {
      v10 = ResultLength;
      if ( (unsigned __int64)ResultLength >= MmUserProbeAddress )
        v10 = (_DWORD *)MmUserProbeAddress;
      *v10 = *v10;
    }
  }
  else
  {
    v9 = ResultLength;
  }
  v11 = ObReferenceObjectByHandle(IoCompletionHandle, 1u, IoCompletionObjectType, PreviousMode, Object, 0LL);
  Object[2] = Object[0];
  if ( v11 >= 0 )
  {
    v12 = *((_DWORD *)Object[0] + 1);
    ObfDereferenceObject(Object[0]);
    if ( PreviousMode )
    {
      *(_DWORD *)IoCompletionInformation = v12;
      if ( v9 )
        *v9 = 4;
    }
    else
    {
      *(_DWORD *)IoCompletionInformation = v12;
      if ( v9 )
        *v9 = 4;
    }
  }
  return v11;
}
