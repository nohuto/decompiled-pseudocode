/*
 * XREFs of MiFreePoolPagesLeft @ 0x1400140A8
 * Callers:
 *     MmResourcesAvailable @ 0x140013FD0 (MmResourcesAvailable.c)
 *     MmRaisePoolQuota @ 0x1401257E0 (MmRaisePoolQuota.c)
 *     MiFreeExcessSegments @ 0x140129184 (MiFreeExcessSegments.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14042E030 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x1407CBB28 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_14034E658;
    v2 = MiState;
  }
  else
  {
    v1 = qword_14034FC58;
    v2 = qword_14034FC68;
  }
  return v2 - v1;
}
