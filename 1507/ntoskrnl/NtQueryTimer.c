/*
 * XREFs of NtQueryTimer @ 0x1406F08E8
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeQueryTimerDueTime @ 0x1401FF550 (KeQueryTimerDueTime.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryTimer(
        HANDLE TimerHandle,
        TIMER_INFORMATION_CLASS TimerInformationClass,
        PVOID TimerInformation,
        ULONG Length,
        PULONG ResultLength)
{
  KPROCESSOR_MODE PreviousMode; // r13
  _BYTE *v9; // rcx
  PULONG v10; // rsi
  _DWORD *v11; // rcx
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
    v9 = TimerInformation;
    if ( (unsigned __int64)TimerInformation >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[15] = v9[15];
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
