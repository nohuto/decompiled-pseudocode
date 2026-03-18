/*
 * XREFs of NtQueryTimer @ 0x14066CFDC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeQueryTimerDueTime @ 0x1401C35D8 (KeQueryTimerDueTime.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r15d
  int v15; // r12d
  __int64 v16; // rbx
  __int64 v17; // rdi
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
  v14 = ObReferenceObjectByHandle(TimerHandle, 1u, ExTimerObjectType, PreviousMode, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v15 = *((_DWORD *)Object + 1);
    v16 = MEMORY[0xFFFFF78000000008];
    v17 = KeQueryTimerDueTime((__int64)Object, v12, v13) - v16;
    ObfDereferenceObject(Object);
    if ( PreviousMode )
    {
      *((_BYTE *)TimerInformation + 8) = v15;
      *(_QWORD *)TimerInformation = v17;
      if ( v10 )
        *v10 = 16;
    }
    else
    {
      *((_BYTE *)TimerInformation + 8) = v15;
      *(_QWORD *)TimerInformation = v17;
      if ( v10 )
        *v10 = 16;
    }
  }
  return v14;
}
