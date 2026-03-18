/*
 * XREFs of EtwpUpdateEnableMask @ 0x1404D315C
 * Callers:
 *     NtTraceEvent @ 0x140016980 (NtTraceEvent.c)
 *     EtwpRegisterUMGuid @ 0x1404CDCF0 (EtwpRegisterUMGuid.c)
 *     EtwpRegisterProvider @ 0x14054C6A8 (EtwpRegisterProvider.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404D3244 (EtwpCheckLoggerControlAccess.c)
 */

void __fastcall EtwpUpdateEnableMask(__int64 a1, char a2, char a3, _BYTE *a4)
{
  unsigned __int16 *v5; // rdi
  unsigned int i; // ebx
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rbp
  int v11; // eax

  if ( !a2 )
  {
    v5 = (unsigned __int16 *)(a1 + 118);
    for ( i = 0; i < 8; ++i )
    {
      if ( *(_DWORD *)(v5 - 3) )
      {
        v8 = 0;
        v9 = EtwpAcquireLoggerContextByLoggerId(*v5, 0);
        v10 = v9;
        if ( v9 )
        {
          v11 = *(_DWORD *)(v9 + 12);
          if ( a3 )
          {
            if ( (v11 & 0x80u) != 0 )
              v8 = EtwpCheckLoggerControlAccess(0x200u);
          }
          else if ( (v11 & 0x1000000) != 0 )
          {
            v8 = -1073741790;
          }
          EtwpReleaseLoggerContext(v10, 0LL);
          if ( !v8 )
            *a4 |= 1 << i;
        }
      }
      v5 += 16;
    }
  }
}
