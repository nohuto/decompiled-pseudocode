/*
 * XREFs of PopDispatchNotificationsToList @ 0x1405464FC
 * Callers:
 *     PopDispatchNotifications @ 0x1405464BC (PopDispatchNotifications.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     PopMarshalSettingValues @ 0x1404E5454 (PopMarshalSettingValues.c)
 *     PopFreeRegistration @ 0x140568E5C (PopFreeRegistration.c)
 */

struct _KTHREAD *__fastcall PopDispatchNotificationsToList(WNF_STATE_NAME **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int8 v8; // cf
  WNF_STATE_NAME *v9; // rbx
  WNF_STATE_NAME *v10; // rsi
  unsigned int *v11; // rdi
  unsigned __int8 v12; // bl
  signed __int32 v13; // eax
  struct _KTHREAD *result; // rax
  int v15; // eax
  unsigned __int8 v16; // r15
  int v17; // ebp
  signed __int32 v18; // eax
  ULONG v19; // r8d
  __int64 v20; // r9
  NTSTATUS updated; // r12d
  __int64 v22; // rax
  __int64 v23; // rbp
  unsigned __int8 v24; // r15
  WNF_STATE_NAME v25; // rcx
  WNF_STATE_NAME **v26; // rax
  ULONG v27; // [rsp+40h] [rbp-68h] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-60h] BYREF
  _DWORD Buffer[10]; // [rsp+50h] [rbp-58h] BYREF

  v5 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v8 = _interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0);
  if ( !v8 )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  qword_14032EFE8 = (__int64)KeGetCurrentThread();
  dword_14032F010 = CurrentIrql;
  v9 = *a1;
  while ( v9 != (WNF_STATE_NAME *)a1 )
  {
    v10 = v9;
    v11 = (unsigned int *)&v9[6] + 1;
    while ( (*v11 & 1) != 0 && (*v11 & 2) == 0 )
    {
      StateName = v9[7];
      *v11 = *v11 & 0xFFFFFFFC | 2;
      v15 = PopMarshalSettingValues((__int64)v9, Buffer, 0x24u, &v27);
      v16 = dword_14032F010;
      v17 = v15;
      qword_14032EFE8 = 0LL;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
      if ( v18 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v18);
      __writecr8(v16);
      KeAbPostRelease((ULONG_PTR)&PopSettingLock);
      v19 = v27;
      if ( v17 < 0 )
        v19 = 0;
      v27 = v19;
      updated = ZwUpdateWnfStateData(&StateName, Buffer, v19, 0LL, 0LL, 0, 0);
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        __fastfail(0x20u);
      v22 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, v20);
      v23 = v22;
      v24 = KeGetCurrentIrql();
      __writecr8(1uLL);
      v8 = _interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0);
      if ( !v8 )
        ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v22);
      if ( v23 )
        *(_BYTE *)(v23 + 26) |= 1u;
      qword_14032EFE8 = (__int64)KeGetCurrentThread();
      dword_14032F010 = v24;
      *v11 &= ~2u;
      if ( updated < 0 )
      {
        *v11 |= 1u;
        break;
      }
    }
    v9 = (WNF_STATE_NAME *)*v9;
    if ( (*v11 & 2) == 0 && (*v11 & 4) != 0 )
    {
      v25 = *v10;
      v26 = (WNF_STATE_NAME **)v10[1];
      if ( *(WNF_STATE_NAME **)(*(_QWORD *)v10 + 8LL) != v10 || *v26 != v10 )
        __fastfail(3u);
      *v26 = (WNF_STATE_NAME *)v25;
      *(_QWORD *)(*(_QWORD *)&v25 + 8LL) = v26;
      PopFreeRegistration(v10);
    }
  }
  v12 = dword_14032F010;
  qword_14032EFE8 = 0LL;
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v13);
  __writecr8(v12);
  KeAbPostRelease((ULONG_PTR)&PopSettingLock);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
