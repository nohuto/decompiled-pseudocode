/*
 * XREFs of TppJobpRundownJob @ 0x18007A72C
 * Callers:
 *     TpWaitForJobNotification @ 0x18007A620 (TpWaitForJobNotification.c)
 *     TpReleaseJobNotification @ 0x18007A660 (TpReleaseJobNotification.c)
 *     TppJobpStopCallbackGeneration @ 0x1800F5600 (TppJobpStopCallbackGeneration.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     NtQueryInformationJobObject @ 0x180094C10 (NtQueryInformationJobObject.c)
 *     ZwSetInformationJobObject @ 0x1800950B0 (ZwSetInformationJobObject.c)
 *     TppRaiseHandleStatus @ 0x1800F5BA8 (TppRaiseHandleStatus.c)
 */

void __fastcall TppJobpRundownJob(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v5; // rsi
  __int64 v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // rax
  signed __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 264) )
  {
    v5 = (volatile signed __int64 *)(a1 + 280);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 280), a2, a3, a4);
    v6 = *(_QWORD *)(a1 + 264);
    if ( v6 )
    {
      v11[0] = 0LL;
      v11[1] = 0LL;
      v7 = ZwSetInformationJobObject(v6, 7LL, v11, 16LL);
      if ( v7 < 0 || (v7 = NtQueryInformationJobObject(*(_QWORD *)(a1 + 264), 17LL, &v12), v7 < 0) )
      {
        TppRaiseHandleStatus((unsigned int)v7, *(_QWORD *)(a1 + 264), 0LL);
      }
      else
      {
        v8 = (-2LL * v12) | 1;
        v12 = v8;
        v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 272), v8);
        *(_QWORD *)(a1 + 264) = 0LL;
        v10 = v8 + v9;
        RtlReleaseSRWLockExclusive(v5);
        if ( v10 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64))(a1 + 80))(a1 + 72);
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive(v5);
    }
  }
}
