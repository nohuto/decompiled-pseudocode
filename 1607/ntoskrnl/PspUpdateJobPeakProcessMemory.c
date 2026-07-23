/*
 * XREFs of PspUpdateJobPeakProcessMemory @ 0x140469068
 * Callers:
 *     PspFoldProcessAccountingIntoJob @ 0x140468F4C (PspFoldProcessAccountingIntoJob.c)
 * Callees:
 *     <none>
 */

void __fastcall PspUpdateJobPeakProcessMemory(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx

  if ( a2 > *(_QWORD *)(a1 + 600) )
  {
    _m_prefetchw((const void *)(a1 + 600));
    v3 = *(_QWORD *)(a1 + 600);
    if ( a2 > v3 )
    {
      do
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 600), a2, v3);
      }
      while ( v3 != v4 && a2 > v3 );
    }
  }
}
