/*
 * XREFs of MiFreePoolPagesLeft @ 0x140014424
 * Callers:
 *     MmRaisePoolQuota @ 0x140013140 (MmRaisePoolQuota.c)
 *     MiFreeExcessSegments @ 0x140015B78 (MiFreeExcessSegments.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1403CB0D0 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x14074D8B0 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_1402FE198;
    v2 = MiState;
  }
  else
  {
    v1 = qword_1402FF798;
    v2 = qword_1402FF7A8;
  }
  return v2 - v1;
}
