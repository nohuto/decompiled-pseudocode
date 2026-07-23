/*
 * XREFs of EtwpUpdateEnableMask @ 0x140490A88
 * Callers:
 *     NtTraceEvent @ 0x1400D3400 (NtTraceEvent.c)
 *     EtwpRegisterUMGuid @ 0x14040D4A0 (EtwpRegisterUMGuid.c)
 *     EtwpRegisterProvider @ 0x140492AB4 (EtwpRegisterProvider.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x140490C98 (EtwpCheckLoggerControlAccess.c)
 */

void __fastcall EtwpUpdateEnableMask(__int64 a1, char a2, char a3, _BYTE *a4)
{
  unsigned __int16 *v5; // rdi
  unsigned int i; // ebx
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rbp

  if ( !a2 )
  {
    v5 = (unsigned __int16 *)(a1 + 118);
    for ( i = 0; i < 8; ++i )
    {
      if ( *(_DWORD *)(v5 - 3) )
      {
        v9 = 0;
        v10 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(a1 + 376), *v5, 0LL);
        v11 = v10;
        if ( v10 )
        {
          if ( a3 )
          {
            if ( (*(_DWORD *)(v10 + 12) & 0x80u) != 0 )
              v9 = EtwpCheckLoggerControlAccess(0x200u);
          }
          else if ( (*(_DWORD *)(v10 + 12) & 0x1000000) != 0 )
          {
            v9 = -1073741790;
          }
          EtwpReleaseLoggerContext(v11, 0LL);
          if ( !v9 )
            *a4 |= 1 << i;
        }
      }
      v5 += 16;
    }
  }
}
