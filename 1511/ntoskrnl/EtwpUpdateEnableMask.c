/*
 * XREFs of EtwpUpdateEnableMask @ 0x14046D0E0
 * Callers:
 *     NtTraceEvent @ 0x1400741D0 (NtTraceEvent.c)
 *     EtwpRegisterUMGuid @ 0x140435640 (EtwpRegisterUMGuid.c)
 *     EtwpRegisterProvider @ 0x1404CC76C (EtwpRegisterProvider.c)
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckLoggerControlAccess @ 0x14046D32C (EtwpCheckLoggerControlAccess.c)
 */

void __fastcall EtwpUpdateEnableMask(__int64 a1, char a2, char a3, _BYTE *a4)
{
  unsigned int v7; // ebx
  __int64 SiloDriverState; // r14
  unsigned __int16 *v9; // rdi
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rbp

  if ( !a2 )
  {
    v7 = 0;
    SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
    v9 = (unsigned __int16 *)(a1 + 118);
    do
    {
      if ( *(_DWORD *)(v9 - 3) )
      {
        v10 = 0;
        v11 = EtwpAcquireLoggerContextByLoggerId(SiloDriverState, *v9, 0LL);
        v12 = v11;
        if ( v11 )
        {
          if ( a3 )
          {
            if ( (*(_DWORD *)(v11 + 12) & 0x80u) != 0 )
              v10 = EtwpCheckLoggerControlAccess(0x200u);
          }
          else if ( (*(_DWORD *)(v11 + 12) & 0x1000000) != 0 )
          {
            v10 = -1073741790;
          }
          EtwpReleaseLoggerContext(SiloDriverState, v12, 0LL);
          if ( !v10 )
            *a4 |= 1 << v7;
        }
      }
      ++v7;
      v9 += 16;
    }
    while ( v7 < 8 );
    PsDereferenceMonitorContextServerSilo(SiloDriverState);
  }
}
