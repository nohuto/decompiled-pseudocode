/*
 * XREFs of RtlpWnfWalkUserSubscriptionList @ 0x180065EF8
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x180065D38 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlSetThreadSubProcessTag @ 0x18003B510 (RtlSetThreadSubProcessTag.c)
 *     RtlpDecRefWnfUserSubscription @ 0x1800662E8 (RtlpDecRefWnfUserSubscription.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpWnfETWEventCallback @ 0x1800D9AC8 (RtlpWnfETWEventCallback.c)
 *     RtlpWnfMarkFailure @ 0x1800D9D40 (RtlpWnfMarkFailure.c)
 */

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(__int64 a1, _RTL_SRWLOCK *a2, int a3)
{
  int v3; // r13d
  unsigned int v6; // edi
  _RTL_SRWLOCK *v7; // rax
  volatile signed __int32 *Value; // r9
  volatile signed __int32 *v9; // rsi
  int v10; // r14d
  __int64 v12; // rbx
  void *v13; // r13
  int v14; // edx
  __int64 v15; // rax
  bool v16; // al
  _RTL_SRWLOCK *v17; // rbx
  int v18; // [rsp+40h] [rbp-88h]
  int v19; // [rsp+44h] [rbp-84h]
  int v20; // [rsp+48h] [rbp-80h]
  volatile signed __int32 *v21; // [rsp+58h] [rbp-70h]
  PVOID SubProcessTag; // [rsp+60h] [rbp-68h]
  PVOID SubProcessTaga; // [rsp+60h] [rbp-68h]
  __int64 v24; // [rsp+68h] [rbp-60h]
  _RTL_SRWLOCK *v25; // [rsp+88h] [rbp-40h]
  int v26; // [rsp+D0h] [rbp+8h]
  int v29; // [rsp+E8h] [rbp+20h]

  v3 = a3;
  v6 = 0;
  v20 = 0;
  RtlAcquireSRWLockExclusive(a2 + 7);
  v7 = a2 + 8;
  v25 = a2 + 8;
  Value = (volatile signed __int32 *)a2[8].Value;
  v21 = Value;
  while ( Value != (volatile signed __int32 *)v7 )
  {
    v9 = Value - 2;
    SubProcessTag = (PVOID)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000);
    _InterlockedIncrement(Value + 18);
    v10 = *(_DWORD *)(a1 + 24) & Value[14];
    if ( !*((_DWORD *)Value + 22)
      && v10
      && ((v10 & 1) != 0 && (!*((_DWORD *)v9 + 14) || *(_DWORD *)(a1 + 16) - *((_DWORD *)v9 + 14) > 0)
       || (v10 & 0xFFFFFFFE) != 0 && !*((_DWORD *)v9 + 40)
       || (v10 & 0x10) != 0)
      && (!*((_DWORD *)v9 + 30)
       || (unsigned __int64)SubProcessTag >= *((_QWORD *)v9 + 16)
       || *((_DWORD *)v9 + 37) < *(_DWORD *)(a1 + 16))
      && (!v3 || *((_DWORD *)v9 + 36)) )
    {
      v18 = 0;
      v19 = 0;
      v24 = *((_QWORD *)v9 + 4);
      v12 = *(_QWORD *)(*((_QWORD *)v9 + 3) + 16LL);
      v13 = (void *)*((_QWORD *)v9 + 6);
      *((_QWORD *)v9 + 19) = NtCurrentTeb()->ClientId.UniqueThread;
      RtlReleaseSRWLockExclusive(a2 + 7);
      v14 = 0;
      v29 = 0;
      v26 = 0;
      v15 = *((_QWORD *)v9 + 9);
      if ( !v15 || (v16 = !_interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0LL), (v26 = v16) != 0) )
      {
LABEL_19:
        if ( !*((_DWORD *)v9 + 24) )
        {
          v19 = 1;
          SubProcessTaga = RtlSetThreadSubProcessTag(v13);
          if ( (v10 & 1) != 0 )
            v18 = _guard_dispatch_icall_fptr();
          if ( (v10 & 0x10) != 0 && !*((_DWORD *)v9 + 24) && (v18 >= 0 || (v9[15] & 4) == 0) )
          {
            _guard_dispatch_icall_fptr();
            v18 = 0;
          }
          if ( (v10 & 0xFFFFFFEE) != 0 )
          {
            v18 = 0;
            _guard_dispatch_icall_fptr();
          }
          if ( MEMORY[0x7FFE038E] )
            RtlpWnfETWEventCallback(v12, *(_DWORD *)(a1 + 16), (_DWORD)v9, (_DWORD)a2, v24, v10, v18);
          RtlSetThreadSubProcessTag(SubProcessTaga);
        }
        if ( v26 )
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)v9 + 9) + 24LL));
        v17 = a2 + 7;
        if ( v19 )
        {
          RtlAcquireSRWLockExclusive(a2 + 7);
          v14 = 1;
          v29 = 1;
          if ( v18 != -1073741267 && v18 != -1073741801 )
          {
            if ( !*((_DWORD *)v9 + 14) || *(_DWORD *)(a1 + 16) - *((_DWORD *)v9 + 14) > 0 )
              *((_DWORD *)v9 + 14) = *(_DWORD *)(a1 + 16);
            if ( (v9[15] & 4) != 0 && *((_DWORD *)v9 + 34) )
            {
              *((_DWORD *)v9 + 30) = 0;
              *((_QWORD *)v9 + 17) = 0LL;
              *((_QWORD *)v9 + 16) = 0LL;
              *((_DWORD *)v9 + 37) = 0;
            }
LABEL_45:
            *((_DWORD *)v9 + 36) = 0;
LABEL_46:
            if ( !v14 )
              RtlAcquireSRWLockExclusive(v17);
            *((_QWORD *)v9 + 19) = 0LL;
            Value = v21;
            v3 = a3;
            goto LABEL_10;
          }
          if ( (v9[15] & 4) == 0 )
            goto LABEL_45;
          v20 = 1;
          RtlpWnfMarkFailure(v9, (unsigned int)v18, *(unsigned int *)(a1 + 16));
        }
        v14 = v29;
        goto LABEL_45;
      }
      if ( a3 == 1 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)v9 + 9) + 24LL));
        v26 = 1;
        goto LABEL_19;
      }
      *((_DWORD *)v9 + 36) = 1;
      v17 = a2 + 7;
      goto LABEL_46;
    }
LABEL_10:
    v21 = *(volatile signed __int32 **)Value;
    RtlpDecRefWnfUserSubscription((PVOID)v9);
    Value = v21;
    v7 = v25;
  }
  RtlReleaseSRWLockExclusive(a2 + 7);
  if ( v20 )
    return (unsigned int)-1073741267;
  return v6;
}
