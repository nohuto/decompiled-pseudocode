/*
 * XREFs of PspBindProcessSessionToJob @ 0x1403E82EC
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1403E7DD4 (PspEstablishJobHierarchy.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     MmGetSessionId @ 0x140038610 (MmGetSessionId.c)
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
