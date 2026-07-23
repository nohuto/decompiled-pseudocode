/*
 * XREFs of EtwpShutdownPrivateLoggers @ 0x180086034
 * Callers:
 *     RtlExitUserProcess @ 0x180006E50 (RtlExitUserProcess.c)
 * Callees:
 *     EtwpStopUmLogger @ 0x1800533F0 (EtwpStopUmLogger.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void EtwpShutdownPrivateLoggers()
{
  unsigned int v0; // ebx
  __int64 v1; // rdi
  unsigned int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[22]; // [rsp+20h] [rbp-C8h] BYREF

  if ( EtwpLoggerArray )
  {
    memset(v6, 0, sizeof(v6));
    LODWORD(v6[0]) = 176;
    v0 = 0;
    v1 = 0LL;
    HIDWORD(v6[5]) = 0x20000;
    do
    {
      v2 = v0 & 0xFFFF7FFF;
      if ( (v0 & 0xFFFF7FFF) < 0x40 && EtwpLoggerArray )
      {
        _mm_lfence();
        _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v2 + 8));
        v3 = *(_QWORD *)(EtwpLoggerArray + 16LL * v2);
        if ( (v3 & 1) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v2 + 8));
        }
        else
        {
          v4 = *(unsigned int *)(v3 + 324);
          v5 = 2LL * *(unsigned int *)(v3 + 20);
          _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v3 + 20) + 8));
          if ( (v4 & 0x400) == 0 )
          {
            v6[1] = v1;
            EtwpStopUmLogger(v5, v4, v3, (__int64)v6);
          }
        }
      }
      ++v0;
      ++v1;
    }
    while ( v0 < 0x40 );
  }
}
