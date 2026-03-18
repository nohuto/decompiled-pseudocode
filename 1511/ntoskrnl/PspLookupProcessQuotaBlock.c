/*
 * XREFs of PspLookupProcessQuotaBlock @ 0x1403BD32C
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x1403BD170 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     PspUnlockQuotaListShared @ 0x140003178 (PspUnlockQuotaListShared.c)
 *     PspLockQuotaListShared @ 0x1400031B8 (PspLockQuotaListShared.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     PspLockQuotaListExclusive @ 0x1401422D4 (PspLockQuotaListExclusive.c)
 *     PspUnlockQuotaListExclusive @ 0x140142608 (PspUnlockQuotaListExclusive.c)
 *     PspHashKeyValue @ 0x1403BD418 (PspHashKeyValue.c)
 *     PspSafeReferenceQuotaBlock @ 0x1403BD9F8 (PspSafeReferenceQuotaBlock.c)
 */

__int64 __fastcall PspLookupProcessQuotaBlock(void *a1, __int64 a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // rbx
  unsigned __int64 *v9; // rdi
  unsigned __int64 *i; // rsi
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 **v16; // rdx
  __int64 v17; // rax

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v9 = (unsigned __int64 *)(PspQuotaBlockTable + 24LL * (unsigned int)PspHashKeyValue());
  if ( a4 )
    PspLockQuotaListExclusive((__int64)CurrentThread, v9);
  else
    PspLockQuotaListShared((__int64)CurrentThread, (volatile signed __int64 *)v9);
  if ( a1 )
  {
    for ( i = (unsigned __int64 *)v9[1]; i != v9 + 1; i = (unsigned __int64 *)*i )
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
        v16 = (unsigned __int64 **)v9[2];
        v17 = a4 + 520;
        *(_QWORD *)(a4 + 520) = v9 + 1;
        *(_QWORD *)(a4 + 528) = v16;
        if ( *v16 != v9 + 1 )
          __fastfail(3u);
        *v16 = (unsigned __int64 *)v17;
        v9[2] = v17;
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
