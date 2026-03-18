/*
 * XREFs of ttfdSemFree @ 0x1C012D0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ttfdSemFree(__int64 a1, _DWORD *a2)
{
  EngAcquireSemaphore(ghsemTTFD);
  if ( a2 )
  {
    if ( !*a2 && a2[1]-- == 1 )
    {
      *(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL) = 0LL;
      EngFreeMem(a2);
    }
  }
  EngReleaseSemaphore(ghsemTTFD);
}
