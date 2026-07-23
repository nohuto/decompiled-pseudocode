/*
 * XREFs of ViKeObjectAcquired @ 0x140713078
 * Callers:
 *     VerifierKeWaitForMultipleObjects @ 0x140712874 (VerifierKeWaitForMultipleObjects.c)
 *     VerifierKeWaitForSingleObject @ 0x14071295C (VerifierKeWaitForSingleObject.c)
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 */

char __fastcall ViKeObjectAcquired(unsigned int a1, _BYTE **a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  bool v7; // bp
  char result; // al

  if ( a1 )
  {
    v4 = a1;
    v7 = a3 != 0;
    do
    {
      result = **a2 & 0x7F;
      if ( result == 2 )
        result = VfDeadlockAcquireResource((unsigned int)*a2, 1, (unsigned int)KeGetCurrentThread(), v7, a4);
      ++a2;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
