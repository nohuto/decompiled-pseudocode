/*
 * XREFs of PspSetBackgroundJobTree @ 0x1404867B0
 * Callers:
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1403EB6A8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetBackgroundJobTree(_QWORD *Object, char a2)
{
  struct _ERESOURCE *v2; // rdi
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v5) = a2;
  v2 = (struct _ERESOURCE *)(Object + 7);
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 7), 1u);
  if ( (_BYTE)v5 )
  {
    if ( (Object[162] & 0x400) == 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)Object + 324, 0xAu);
      goto LABEL_4;
    }
LABEL_9:
    ExReleaseResourceLite(v2);
    return 3221225485LL;
  }
  if ( (Object[162] & 0x400) == 0 )
    goto LABEL_9;
  _interlockedbittestandreset((volatile signed __int32 *)Object + 324, 0xAu);
LABEL_4:
  PspEnumJobsAndProcessesInJobHierarchy(
    Object,
    (int)PspSetJobBackgroundCountCallback,
    0,
    (int)PspSetProcessBackgroundCountCallback,
    (__int64)&v5,
    5u);
  ExReleaseResourceLite(v2);
  if ( !(_BYTE)v5 )
    PspEnumJobsAndProcessesInJobHierarchy(Object, 0, (int)PspBoostJobIoPriorityCallback, 0, 0LL, 0);
  return 0LL;
}
