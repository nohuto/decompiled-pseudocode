/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x1800F5680
 * Callers:
 *     RtlpTpInitializeData @ 0x18007CADC (RtlpTpInitializeData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003DA5C (TppPoolpDereferenceGlobalPool.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180073AF0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolMaxThreads @ 0x18007B690 (TpSetPoolMaxThreads.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18007D7D8 (TpPoolReferenceExistingGlobalPool.c)
 */

void __fastcall TpSetDefaultPoolMaxThreads(ULONG a1)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  unsigned int v4; // eax
  ULONG v5; // eax
  ULONG v6; // edi
  _TP_POOL *v7; // rax
  __int64 v8; // rbx

  v2 = 8 * MEMORY[0x7FFE03C0];
  if ( (unsigned int)(8 * MEMORY[0x7FFE03C0]) < 0x300 )
    v2 = 768;
  v3 = 4 * MEMORY[0x7FFE03C0];
  if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x180 )
    v3 = 384;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 <= TppPoolpGlobalPoolMaxThreads )
      return;
    goto LABEL_10;
  }
  if ( a1 <= v3 )
    return;
  v4 = v2;
  if ( a1 > v2 )
LABEL_10:
    v4 = a1;
  if ( !v4 )
    return;
  RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
  v5 = TppPoolpGlobalPoolMaxThreads;
  v6 = 0;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 > TppPoolpGlobalPoolMaxThreads )
      goto LABEL_17;
  }
  else if ( a1 > v3 )
  {
    v6 = v2;
    if ( a1 <= v2 )
    {
LABEL_18:
      if ( v6 )
        v5 = v6;
      TppPoolpGlobalPoolMaxThreads = v5;
      goto LABEL_21;
    }
LABEL_17:
    v6 = a1;
    goto LABEL_18;
  }
LABEL_21:
  RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v6 )
  {
    v7 = (_TP_POOL *)TpPoolReferenceExistingGlobalPool();
    v8 = (__int64)v7;
    if ( v7 )
    {
      TpSetPoolMaxThreads(v7, v6);
      TpSetPoolMaxThreadsSoftLimit(v8, 0LL);
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
  }
}
