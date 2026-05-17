/*
 * XREFs of RtlpWnfWalkUserSubscriptionList @ 0x180065F08
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x180065D48 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlSetThreadSubProcessTag @ 0x18003B520 (RtlSetThreadSubProcessTag.c)
 *     RtlpDecRefWnfUserSubscription @ 0x1800662F8 (RtlpDecRefWnfUserSubscription.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpWnfETWEventCallback @ 0x1800D9A08 (RtlpWnfETWEventCallback.c)
 *     RtlpWnfMarkFailure @ 0x1800D9C80 (RtlpWnfMarkFailure.c)
 */

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  unsigned int v7; // edi
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // r9
  volatile signed __int32 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r14d
  __int64 v15; // rbx
  void *v16; // r13
  __int64 v17; // r9
  __int64 v18; // rax
  bool v19; // al
  unsigned __int64 v20; // rbx
  int v21; // [rsp+40h] [rbp-88h]
  int v22; // [rsp+44h] [rbp-84h]
  int v23; // [rsp+48h] [rbp-80h]
  volatile signed __int32 *v24; // [rsp+58h] [rbp-70h]
  unsigned __int64 v25; // [rsp+60h] [rbp-68h]
  void *v26; // [rsp+60h] [rbp-68h]
  __int64 v27; // [rsp+68h] [rbp-60h]
  volatile signed __int32 *v28; // [rsp+88h] [rbp-40h]
  int v29; // [rsp+D0h] [rbp+8h]
  int v31; // [rsp+E0h] [rbp+18h]
  unsigned int v32; // [rsp+E8h] [rbp+20h]

  v31 = a3;
  v4 = a3;
  v7 = 0;
  v23 = 0;
  RtlAcquireSRWLockExclusive(a2 + 56, (char *)a2, a3, a4);
  v8 = (volatile signed __int32 *)(a2 + 64);
  v28 = (volatile signed __int32 *)(a2 + 64);
  v9 = *(volatile signed __int32 **)(a2 + 64);
  v24 = v9;
  while ( v9 != v8 )
  {
    v10 = v9 - 2;
    v11 = RtlpFreezeTimeBias;
    v12 = MEMORY[0x7FFE03B0];
    v25 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement(v9 + 18);
    v13 = *(_DWORD *)(a1 + 24) & v9[14];
    if ( !*((_DWORD *)v9 + 22)
      && v13
      && ((v13 & 1) != 0 && (!*((_DWORD *)v10 + 14) || *(_DWORD *)(a1 + 16) - *((_DWORD *)v10 + 14) > 0)
       || (v13 & 0xFFFFFFFE) != 0 && !*((_DWORD *)v10 + 40)
       || (v13 & 0x10) != 0)
      && (!*((_DWORD *)v10 + 30) || v25 >= *((_QWORD *)v10 + 16) || *((_DWORD *)v10 + 37) < *(_DWORD *)(a1 + 16))
      && (!v4 || *((_DWORD *)v10 + 36)) )
    {
      v21 = 0;
      v22 = 0;
      v27 = *((_QWORD *)v10 + 4);
      v15 = *(_QWORD *)(*((_QWORD *)v10 + 3) + 16LL);
      v16 = (void *)*((_QWORD *)v10 + 6);
      *((_QWORD *)v10 + 19) = NtCurrentTeb()->ClientId.UniqueThread;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 56));
      v11 = 0LL;
      v32 = 0;
      v29 = 0;
      v18 = *((_QWORD *)v10 + 9);
      if ( !v18 || (v19 = !_interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0LL), (v29 = v19) != 0) )
      {
LABEL_19:
        if ( !*((_DWORD *)v10 + 24) )
        {
          v22 = 1;
          v26 = RtlSetThreadSubProcessTag(v16);
          if ( (v13 & 1) != 0 )
            v21 = _guard_dispatch_icall_fptr();
          if ( (v13 & 0x10) != 0 && !*((_DWORD *)v10 + 24) && (v21 >= 0 || (v10[15] & 4) == 0) )
          {
            _guard_dispatch_icall_fptr();
            v21 = 0;
          }
          if ( (v13 & 0xFFFFFFEE) != 0 )
          {
            v21 = 0;
            _guard_dispatch_icall_fptr();
          }
          if ( MEMORY[0x7FFE038E] )
            RtlpWnfETWEventCallback(v15, *(_DWORD *)(a1 + 16), (_DWORD)v10, a2, v27, v13, v21);
          RtlSetThreadSubProcessTag(v26);
        }
        if ( v29 )
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*((_QWORD *)v10 + 9) + 24LL));
        v20 = a2 + 56;
        if ( v22 )
        {
          RtlAcquireSRWLockExclusive(a2 + 56, (char *)v11, v12, v17);
          v11 = 1LL;
          v32 = 1;
          if ( v21 != -1073741267 && v21 != -1073741801 )
          {
            if ( !*((_DWORD *)v10 + 14) || *(_DWORD *)(a1 + 16) - *((_DWORD *)v10 + 14) > 0 )
              *((_DWORD *)v10 + 14) = *(_DWORD *)(a1 + 16);
            if ( (v10[15] & 4) != 0 && *((_DWORD *)v10 + 34) )
            {
              *((_DWORD *)v10 + 30) = 0;
              *((_QWORD *)v10 + 17) = 0LL;
              *((_QWORD *)v10 + 16) = 0LL;
              *((_DWORD *)v10 + 37) = 0;
            }
LABEL_45:
            *((_DWORD *)v10 + 36) = 0;
LABEL_46:
            if ( !(_DWORD)v11 )
              RtlAcquireSRWLockExclusive(v20, (char *)v11, v12, v17);
            *((_QWORD *)v10 + 19) = 0LL;
            v9 = v24;
            v4 = v31;
            goto LABEL_10;
          }
          if ( (v10[15] & 4) == 0 )
            goto LABEL_45;
          v23 = 1;
          RtlpWnfMarkFailure(v10, (unsigned int)v21, *(unsigned int *)(a1 + 16));
        }
        v11 = v32;
        goto LABEL_45;
      }
      if ( v31 == 1 )
      {
        RtlAcquireSRWLockExclusive(*((_QWORD *)v10 + 9) + 24LL, 0LL, v12, v17);
        v29 = 1;
        goto LABEL_19;
      }
      *((_DWORD *)v10 + 36) = 1;
      v20 = a2 + 56;
      goto LABEL_46;
    }
LABEL_10:
    v24 = *(volatile signed __int32 **)v9;
    RtlpDecRefWnfUserSubscription(v10, v11, v12);
    v9 = v24;
    v8 = v28;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 56));
  if ( v23 )
    return (unsigned int)-1073741267;
  return v7;
}
