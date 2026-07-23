/*
 * XREFs of TppJobpRundownJob @ 0x18008156C
 * Callers:
 *     TpWaitForJobNotification @ 0x1800814C0 (TpWaitForJobNotification.c)
 *     TpReleaseJobNotification @ 0x180081500 (TpReleaseJobNotification.c)
 *     TppJobpStopCallbackGeneration @ 0x1800F5000 (TppJobpStopCallbackGeneration.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     NtQueryInformationJobObject @ 0x1800A7730 (NtQueryInformationJobObject.c)
 *     ZwSetInformationJobObject @ 0x1800A8070 (ZwSetInformationJobObject.c)
 *     TppRaiseHandleStatus @ 0x1800F55A8 (TppRaiseHandleStatus.c)
 */

void __fastcall TppJobpRundownJob(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rsi
  void *v3; // rcx
  NTSTATUS v4; // eax
  unsigned __int64 v5; // rax
  signed __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  _QWORD JobObjectInformation[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 264) )
  {
    v2 = (_RTL_SRWLOCK *)(a1 + 280);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 280));
    v3 = *(void **)(a1 + 264);
    if ( v3 )
    {
      JobObjectInformation[0] = 0LL;
      JobObjectInformation[1] = 0LL;
      v4 = ZwSetInformationJobObject(v3, JobObjectAssociateCompletionPortInformation, JobObjectInformation, 0x10u);
      if ( v4 < 0
        || (v4 = NtQueryInformationJobObject(*(HANDLE *)(a1 + 264), JobObjectCompletionCounter, &v9, 8u, 0LL), v4 < 0) )
      {
        TppRaiseHandleStatus((unsigned int)v4, *(_QWORD *)(a1 + 264), 0LL);
      }
      else
      {
        v5 = (-2LL * v9) | 1;
        v9 = v5;
        v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 272), v5);
        *(_QWORD *)(a1 + 264) = 0LL;
        v7 = v5 + v6;
        RtlReleaseSRWLockExclusive(v2);
        if ( v7 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64))(a1 + 80))(a1 + 72);
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive(v2);
    }
  }
}
