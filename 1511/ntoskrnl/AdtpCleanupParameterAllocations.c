/*
 * XREFs of AdtpCleanupParameterAllocations @ 0x14013B194
 * Callers:
 *     AdtpWriteToEtwEx @ 0x14021D4CC (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14053A414 (AdtpWriteToEtw.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall AdtpCleanupParameterAllocations(_BYTE *a1, PVOID *a2, unsigned int a3)
{
  __int64 v4; // rsi

  if ( a3 )
  {
    v4 = a3;
    do
    {
      if ( *a1 )
        ExFreePoolWithTag(*a2, 0);
      ++a1;
      a2 += 2;
      --v4;
    }
    while ( v4 );
  }
}
