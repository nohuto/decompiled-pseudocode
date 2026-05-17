/*
 * XREFs of TpSetPoolMinThreads @ 0x180077940
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18003E8AC (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x180095130 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 *     TppETWPoolThreadMin @ 0x1800F5DEC (TppETWPoolThreadMin.c)
 */

__int64 __fastcall TpSetPoolMinThreads(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // edi
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = (unsigned int)Ldr;
  if ( !a1 || (int)Ldr < 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(a1, Ldr, a3);
    return 3221225485LL;
  }
  else
  {
    v4 = NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 4LL, &v7, 4LL);
    v5 = v4;
    if ( MEMORY[0x7FFE0386] )
    {
      if ( v4 >= 0 )
        TppETWPoolThreadMin(a1, v7);
    }
    return v5;
  }
}
