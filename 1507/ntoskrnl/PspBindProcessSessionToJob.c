/*
 * XREFs of PspBindProcessSessionToJob @ 0x14041BBAC
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 * Callees:
 *     MmGetSessionId @ 0x140050140 (MmGetSessionId.c)
 */

__int64 __fastcall PspBindProcessSessionToJob(__int64 a1, struct _KPROCESS *a2)
{
  signed __int32 SessionId; // ecx
  __int64 v3; // r8
  int v4; // r9d
  signed __int32 v6; // eax

  SessionId = MmGetSessionId(a2);
  if ( v4 == SessionId )
    return 0LL;
  if ( v4 == -1
    && ((v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 480), SessionId, -1), v6 == -1)
     || v6 == SessionId) )
  {
    return 0LL;
  }
  else
  {
    return PspConvertJobToMixed(v3);
  }
}
