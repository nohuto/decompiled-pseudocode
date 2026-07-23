/*
 * XREFs of NtQueryTimer @ 0x1406AFE38
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeQueryTimerDueTime @ 0x1401D3604 (KeQueryTimerDueTime.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryTimer(
        HANDLE TimerHandle,
        TIMER_INFORMATION_CLASS TimerInformationClass,
        PVOID TimerInformation,
        ULONG Length,
        PULONG ResultLength)
{
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v9; // rcx
  PULONG v10; // rsi
  __int64 v11; // rcx
  int v12; // r15d
  int v13; // r12d
  __int64 v14; // rbx
  __int64 v15; // rdi
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF

  if ( TimerInformationClass )
    return -1073741821;
  if ( Length != 16 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)TimerInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (__int64)TimerInformation;
    if ( (unsigned __int64)TimerInformation >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 15) = *(_BYTE *)(v9 + 15);
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
  v12 = ObReferenceObjectByHandle(TimerHandle, 1u, ExTimerObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = *((_DWORD *)Object + 1);
    v14 = MEMORY[0xFFFFF78000000008];
    v15 = KeQueryTimerDueTime((__int64)Object) - v14;
    ObfDereferenceObject(Object);
    if ( PreviousMode )
    {
      *((_BYTE *)TimerInformation + 8) = v13;
      *(_QWORD *)TimerInformation = v15;
      if ( v10 )
        *v10 = 16;
    }
    else
    {
      *((_BYTE *)TimerInformation + 8) = v13;
      *(_QWORD *)TimerInformation = v15;
      if ( v10 )
        *v10 = 16;
    }
  }
  return v12;
}
