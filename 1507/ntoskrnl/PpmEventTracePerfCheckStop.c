/*
 * XREFs of PpmEventTracePerfCheckStop @ 0x1400E8490
 * Callers:
 *     PpmCheckStart @ 0x1400E71A0 (PpmCheckStart.c)
 *     PpmCheckRun @ 0x1400E7D30 (PpmCheckRun.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void PpmEventTracePerfCheckStop()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PpmEtwRegistered && PpmEtwHandle )
  {
    if ( (v0 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v0 + 80))
      && (unsigned __int8)(*(_BYTE *)(v0 + 84) - 1) > 3u
      && (*(_BYTE *)(v0 + 96) & 2) != 0
      && (*(_QWORD *)(v0 + 104) & 2LL) == *(_QWORD *)(v0 + 104)
      || *(_BYTE *)(PpmEtwHandle + 100)
      && (v1 = *(_QWORD *)(PpmEtwHandle + 40), *(_DWORD *)(v1 + 80))
      && (unsigned __int8)(*(_BYTE *)(v1 + 84) - 1) > 3u
      && (*(_BYTE *)(v1 + 96) & 2) != 0
      && (*(_QWORD *)(v1 + 104) & 2LL) == *(_QWORD *)(v1 + 104) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PERF_CHECK_STOP, 0LL, 1u, &UserData);
    }
  }
}
