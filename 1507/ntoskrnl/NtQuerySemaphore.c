/*
 * XREFs of NtQuerySemaphore @ 0x140408574
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySemaphore(
        HANDLE SemaphoreHandle,
        SEMAPHORE_INFORMATION_CLASS SemaphoreInformationClass,
        PVOID SemaphoreInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r12
  _BYTE *v8; // rcx
  PULONG v9; // rbx
  _DWORD *v10; // rcx
  int v11; // esi
  int v12; // r14d
  int v13; // r15d
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)SemaphoreInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = SemaphoreInformation;
    if ( (unsigned __int64)SemaphoreInformation >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[7] = v8[7];
    v9 = ReturnLength;
    if ( ReturnLength )
    {
      v10 = ReturnLength;
      if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
        v10 = (_DWORD *)MmUserProbeAddress;
      *v10 = *v10;
    }
  }
  else
  {
    v9 = ReturnLength;
  }
  if ( SemaphoreInformationClass )
    return -1073741821;
  if ( Length != 8 )
    return -1073741820;
  v11 = ObReferenceObjectByHandle(SemaphoreHandle, 1u, (POBJECT_TYPE)ExSemaphoreObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = *((_DWORD *)Object + 1);
    v13 = *((_DWORD *)Object + 6);
    ObfDereferenceObject(Object);
    if ( PreviousMode )
    {
      *(_DWORD *)SemaphoreInformation = v12;
      *((_DWORD *)SemaphoreInformation + 1) = v13;
      if ( v9 )
        *v9 = 8;
    }
    else
    {
      *(_DWORD *)SemaphoreInformation = v12;
      *((_DWORD *)SemaphoreInformation + 1) = v13;
      if ( v9 )
        *v9 = 8;
    }
  }
  return v11;
}
