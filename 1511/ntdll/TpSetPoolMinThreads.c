/*
 * XREFs of TpSetPoolMinThreads @ 0x1800839D0
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18000DE5C (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A8170 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 *     TppETWPoolThreadMin @ 0x1800F57EC (TppETWPoolThreadMin.c)
 */

__int64 __fastcall TpSetPoolMinThreads(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = (unsigned int)Ldr;
  if ( !a1 || (int)Ldr < 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(a1, Ldr, a3, a4);
    return 3221225485LL;
  }
  else
  {
    v5 = NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 4LL, &v8);
    v6 = v5;
    if ( MEMORY[0x7FFE0386] )
    {
      if ( v5 >= 0 )
        TppETWPoolThreadMin(a1, v8);
    }
    return v6;
  }
}
