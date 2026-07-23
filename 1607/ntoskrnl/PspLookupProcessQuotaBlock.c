/*
 * XREFs of PspLookupProcessQuotaBlock @ 0x1404BB054
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x1404BAE98 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     PspUnlockQuotaListShared @ 0x1400A8B50 (PspUnlockQuotaListShared.c)
 *     PspLockQuotaListShared @ 0x1400A8B8C (PspLockQuotaListShared.c)
 *     PspUnlockQuotaListExclusive @ 0x14014C90C (PspUnlockQuotaListExclusive.c)
 *     PspLockQuotaListExclusive @ 0x14014CD74 (PspLockQuotaListExclusive.c)
 *     PspHashKeyValue @ 0x1404BB140 (PspHashKeyValue.c)
 *     PspSafeReferenceQuotaBlock @ 0x1404BB2C8 (PspSafeReferenceQuotaBlock.c)
 */

__int64 __fastcall PspLookupProcessQuotaBlock(void *a1, __int64 a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // rbx
  ULONG_PTR v9; // rdi
  _QWORD *i; // rsi
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rax

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v9 = PspQuotaBlockTable + 24LL * (unsigned int)PspHashKeyValue();
  if ( a4 )
    PspLockQuotaListExclusive((__int64)CurrentThread, v9);
  else
    PspLockQuotaListShared((__int64)CurrentThread, (volatile signed __int64 *)v9);
  if ( a1 )
  {
    for ( i = *(_QWORD **)(v9 + 8); i != (_QWORD *)(v9 + 8); i = (_QWORD *)*i )
    {
      if ( RtlEqualSid(a1, i + 7) )
      {
        v8 = (__int64)(i - 65);
        goto LABEL_12;
      }
    }
  }
  else if ( a3 )
  {
    v8 = PspDefaultQuotaBlock;
LABEL_12:
    if ( v8 )
    {
      if ( (unsigned int)PspSafeReferenceQuotaBlock(v8) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 516));
      }
      else
      {
        if ( a4 && !a3 )
        {
          v13 = (_QWORD *)(v8 + 520);
          v14 = *v13;
          v15 = (_QWORD *)v13[1];
          if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v15 != v13 )
            __fastfail(3u);
          *v15 = v14;
          *(_QWORD *)(v14 + 8) = v15;
          *v13 = 0LL;
        }
        v8 = 0LL;
      }
    }
  }
  if ( a4 )
  {
    if ( !v8 )
    {
      if ( a3 )
      {
        PspDefaultQuotaBlock = a4;
        *(_QWORD *)(a4 + 520) = 1LL;
      }
      else
      {
        v16 = *(_QWORD **)(v9 + 16);
        v17 = (_QWORD *)(a4 + 520);
        if ( *v16 != v9 + 8 )
          __fastfail(3u);
        *v17 = v9 + 8;
        *(_QWORD *)(a4 + 528) = v16;
        *v16 = v17;
        *(_QWORD *)(v9 + 16) = v17;
      }
    }
    PspUnlockQuotaListExclusive((__int64)CurrentThread, (volatile signed __int64 *)v9);
  }
  else
  {
    PspUnlockQuotaListShared((__int64)CurrentThread, (volatile signed __int64 *)v9);
  }
  return v8;
}
