/*
 * XREFs of RtlTraceDatabaseValidate @ 0x1800EA880
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 */

char __fastcall RtlTraceDatabaseValidate(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( *(_DWORD *)(a1 + 88) )
  {
    v2 = *(_QWORD *)(a1 + 96);
    v3 = *(unsigned int *)(a1 + 88);
    do
    {
      v2 += 8LL;
      --v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  return 1;
}
