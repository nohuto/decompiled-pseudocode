/*
 * XREFs of ?RegisterWinSqmProvider@@YAKXZ @ 0x1C007B6FC
 * Callers:
 *     WinSqmStartSession @ 0x1C007B558 (WinSqmStartSession.c)
 * Callees:
 *     ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C007B77C (-IsSessionDisabled@@YAHPEBU_GUID@@K@Z.c)
 */

__int64 RegisterWinSqmProvider(void)
{
  int v0; // edi
  signed __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  Interval.QuadPart = 0LL;
  v1 = _InterlockedCompareExchange64(&qword_1C0104230, 255LL, 0LL);
  if ( v1 )
  {
    switch ( v1 )
    {
      case 221LL:
        return 0;
      case 238LL:
        return 1359;
      case 255LL:
        Interval.QuadPart = -1000000LL;
        do
        {
          KeDelayExecutionThread(1, 0, &Interval);
          v4 = _InterlockedExchange64(&qword_1C0104230, qword_1C0104230);
          if ( v4 != 255 )
            break;
          ++v0;
        }
        while ( v0 < 10 );
        if ( v0 == 10 )
          v4 = _InterlockedCompareExchange64(&qword_1C0104230, 204LL, 255LL);
        return v4 != 221 ? 0x5B4 : 0;
      default:
        return 1460;
    }
  }
  else
  {
    v2 = EtwRegister(&Microsoft_Windows_SQM_Provider, 0LL, 0LL, &RegHandle);
    if ( (unsigned int)IsSessionDisabled(0LL, 0) )
      dword_1C01001A0 |= 1u;
    _InterlockedExchange64(&qword_1C0104230, v2 != 0 ? 238LL : 221LL);
  }
  return v2;
}
