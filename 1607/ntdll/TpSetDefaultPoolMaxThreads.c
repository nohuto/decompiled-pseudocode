/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x1800FE070
 * Callers:
 *     RtlpTpInitializeData @ 0x180064D04 (RtlpTpInitializeData.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003B81C (TppPoolpDereferenceGlobalPool.c)
 *     TpSetPoolMaxThreads @ 0x180072D60 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180082FA0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x180085EEC (TpPoolReferenceExistingGlobalPool.c)
 */

__int64 __fastcall TpSetDefaultPoolMaxThreads(unsigned int a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  unsigned int v6; // ebp
  __int64 result; // rax
  int v8; // eax
  unsigned int v9; // edi
  char *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9

  v5 = 8 * MEMORY[0x7FFE03C0];
  if ( (unsigned int)(8 * MEMORY[0x7FFE03C0]) < 0x300 )
    v5 = 768;
  v6 = 4 * MEMORY[0x7FFE03C0];
  if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x180 )
    v6 = 384;
  result = (unsigned int)TppPoolpGlobalPoolMaxThreads;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 <= TppPoolpGlobalPoolMaxThreads )
      return result;
    goto LABEL_10;
  }
  if ( a1 <= v6 )
    return result;
  result = v5;
  if ( a1 > v5 )
LABEL_10:
    result = a1;
  if ( !(_DWORD)result )
    return result;
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpGlobalPoolLock, a2, a3, a4);
  v8 = TppPoolpGlobalPoolMaxThreads;
  v9 = 0;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 > TppPoolpGlobalPoolMaxThreads )
      goto LABEL_17;
  }
  else if ( a1 > v6 )
  {
    v9 = v5;
    if ( a1 <= v5 )
    {
LABEL_18:
      if ( v9 )
        v8 = v9;
      TppPoolpGlobalPoolMaxThreads = v8;
      goto LABEL_21;
    }
LABEL_17:
    v9 = a1;
    goto LABEL_18;
  }
LABEL_21:
  result = RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v9 )
  {
    result = TpPoolReferenceExistingGlobalPool(v11, v10, v12, v13);
    v16 = result;
    if ( result )
    {
      TpSetPoolMaxThreads(result, (_PEB_LDR_DATA *)v9, v14, v15);
      TpSetPoolMaxThreadsSoftLimit(v16, 0LL, v17, v18);
      return TppPoolpDereferenceGlobalPool(
               (const void **)&TppPoolpGlobalPool,
               (char *)&TppPoolpGlobalPoolLock,
               v19,
               v20);
    }
  }
  return result;
}
