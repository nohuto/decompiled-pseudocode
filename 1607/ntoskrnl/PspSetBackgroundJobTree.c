/*
 * XREFs of PspSetBackgroundJobTree @ 0x1404CB7B0
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetBackgroundJobTree(__int64 a1, char a2)
{
  struct _ERESOURCE *v2; // rdi
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (struct _ERESOURCE *)(a1 + 56);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( !v5 )
  {
    if ( (*(_DWORD *)(a1 + 1304) & 0x400) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1304), 0xAu);
      goto LABEL_4;
    }
LABEL_9:
    ExReleaseResourceLite(v2);
    return 3221225485LL;
  }
  if ( (*(_DWORD *)(a1 + 1304) & 0x400) != 0 )
    goto LABEL_9;
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 1304), 0xAu);
LABEL_4:
  PspEnumJobsAndProcessesInJobHierarchy(
    (_QWORD *)a1,
    (int)PspSetJobBackgroundCountCallback,
    0,
    (int)PspSetProcessBackgroundCountCallback,
    (__int64)&v5,
    5);
  ExReleaseResourceLite(v2);
  if ( !v5 )
    PspEnumJobsAndProcessesInJobHierarchy((_QWORD *)a1, 0, (int)PspBoostJobIoPriorityCallback, 0, 0LL, 0);
  return 0LL;
}
