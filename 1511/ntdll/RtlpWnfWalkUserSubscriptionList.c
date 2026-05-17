/*
 * XREFs of RtlpWnfWalkUserSubscriptionList @ 0x18000840C
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x180007370 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlpDecRefWnfUserSubscription @ 0x180008808 (RtlpDecRefWnfUserSubscription.c)
 *     RtlSetThreadSubProcessTag @ 0x180009FC0 (RtlSetThreadSubProcessTag.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpWnfETWEventCallback @ 0x1800D1658 (RtlpWnfETWEventCallback.c)
 *     RtlpWnfMarkFailure @ 0x1800D18D0 (RtlpWnfMarkFailure.c)
 */

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(unsigned int *a1, __int64 a2, int a3)
{
  int v3; // r13d
  unsigned int v6; // edi
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // r9
  volatile signed __int32 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r14d
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64, __int64, char *, unsigned int); // r13
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  bool v18; // al
  __int64 v19; // r12
  __int64 v20; // rbx
  int v21; // [rsp+40h] [rbp-88h]
  int v22; // [rsp+44h] [rbp-84h]
  int v23; // [rsp+48h] [rbp-80h]
  volatile signed __int32 *v24; // [rsp+58h] [rbp-70h]
  __int64 v25; // [rsp+60h] [rbp-68h]
  __int64 v26; // [rsp+60h] [rbp-68h]
  __int64 v27; // [rsp+68h] [rbp-60h]
  __int64 v28; // [rsp+70h] [rbp-58h]
  char *v29; // [rsp+78h] [rbp-50h]
  unsigned __int64 v30; // [rsp+80h] [rbp-48h]
  volatile signed __int32 *v31; // [rsp+88h] [rbp-40h]
  int v32; // [rsp+D0h] [rbp+8h]
  unsigned int v35; // [rsp+E8h] [rbp+20h]

  v3 = a3;
  v6 = 0;
  v22 = 0;
  v29 = (char *)a1 + a1[11];
  RtlAcquireSRWLockExclusive(a2 + 56);
  v7 = (volatile signed __int32 *)(a2 + 64);
  v31 = (volatile signed __int32 *)(a2 + 64);
  v8 = *(volatile signed __int32 **)(a2 + 64);
  v24 = v8;
  while ( v8 != v7 )
  {
    v9 = v8 - 2;
    v10 = RtlpFreezeTimeBias;
    v11 = MEMORY[0x7FFE03B0];
    v30 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement(v8 + 18);
    v12 = a1[6] & v8[14];
    if ( !*((_DWORD *)v8 + 22)
      && v12
      && ((v12 & 1) != 0 && (!*((_DWORD *)v9 + 14) || (int)(a1[4] - *((_DWORD *)v9 + 14)) > 0)
       || (v12 & 0xFFFFFFFE) != 0 && !*((_DWORD *)v9 + 40)
       || (v12 & 0x10) != 0)
      && (!*((_DWORD *)v9 + 30) || v30 >= *((_QWORD *)v9 + 16) || *((_DWORD *)v9 + 37) < a1[4])
      && (!v3 || *((_DWORD *)v9 + 36)) )
    {
      v21 = 0;
      v23 = 0;
      v14 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, char *, unsigned int))*((_QWORD *)v9 + 4);
      v15 = *((_QWORD *)v9 + 3);
      v16 = *(_QWORD *)(v15 + 16);
      v28 = *(_QWORD *)(v15 + 48);
      v27 = *((_QWORD *)v9 + 5);
      v25 = *((_QWORD *)v9 + 6);
      *((_QWORD *)v9 + 19) = NtCurrentTeb()->ClientId.UniqueThread;
      RtlReleaseSRWLockExclusive(a2 + 56);
      v10 = 0LL;
      v35 = 0;
      v32 = 0;
      v17 = *((_QWORD *)v9 + 9);
      if ( !v17 || (v18 = !_interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0LL), (v32 = v18) != 0) )
      {
LABEL_19:
        if ( !*((_DWORD *)v9 + 24) )
        {
          v23 = 1;
          v26 = RtlSetThreadSubProcessTag(v25);
          if ( (v12 & 1) != 0 )
          {
            _guard_check_icall_fptr();
            v19 = v27;
            v21 = v14(v16, a1[4], v28, v27, v29, a1[5]);
          }
          else
          {
            v19 = v27;
          }
          if ( (v12 & 0x10) != 0 && !*((_DWORD *)v9 + 24) && (v21 >= 0 || (v9[15] & 4) == 0) )
          {
            _guard_check_icall_fptr();
            v14(v16, 0LL, v28, v19, 0LL, 0);
            v21 = 0;
          }
          if ( (v12 & 0xFFFFFFEE) != 0 )
          {
            v21 = 0;
            _guard_check_icall_fptr();
            ((void (__fastcall *)(__int64, __int64, _QWORD))v14)(v16, v19, v12);
          }
          if ( MEMORY[0x7FFE038E] )
            RtlpWnfETWEventCallback(v16, a1[4], (_DWORD)v9, a2, (__int64)v14, v12, v21);
          RtlSetThreadSubProcessTag(v26);
        }
        if ( v32 )
          RtlReleaseSRWLockExclusive(*((_QWORD *)v9 + 9) + 24LL);
        v20 = a2 + 56;
        if ( v23 )
        {
          RtlAcquireSRWLockExclusive(a2 + 56);
          v10 = 1LL;
          v35 = 1;
          if ( v21 != -1073741267 && v21 != -1073741801 )
          {
            if ( !*((_DWORD *)v9 + 14) || (int)(a1[4] - *((_DWORD *)v9 + 14)) > 0 )
              *((_DWORD *)v9 + 14) = a1[4];
            if ( (v9[15] & 4) != 0 && *((_DWORD *)v9 + 34) )
            {
              *((_DWORD *)v9 + 30) = 0;
              *((_QWORD *)v9 + 17) = 0LL;
              *((_QWORD *)v9 + 16) = 0LL;
              *((_DWORD *)v9 + 37) = 0;
            }
LABEL_46:
            *((_DWORD *)v9 + 36) = 0;
LABEL_47:
            if ( !(_DWORD)v10 )
              RtlAcquireSRWLockExclusive(v20);
            *((_QWORD *)v9 + 19) = 0LL;
            v8 = v24;
            v3 = a3;
            goto LABEL_10;
          }
          if ( (v9[15] & 4) == 0 )
            goto LABEL_46;
          v22 = 1;
          RtlpWnfMarkFailure(v9, (unsigned int)v21, a1[4]);
        }
        v10 = v35;
        goto LABEL_46;
      }
      if ( a3 == 1 )
      {
        RtlAcquireSRWLockExclusive(*((_QWORD *)v9 + 9) + 24LL);
        v32 = 1;
        goto LABEL_19;
      }
      *((_DWORD *)v9 + 36) = 1;
      v20 = a2 + 56;
      goto LABEL_47;
    }
LABEL_10:
    v24 = *(volatile signed __int32 **)v8;
    RtlpDecRefWnfUserSubscription(v9, v10, v11);
    v8 = v24;
    v7 = v31;
  }
  RtlReleaseSRWLockExclusive(a2 + 56);
  if ( v22 )
    return (unsigned int)-1073741267;
  return v6;
}
