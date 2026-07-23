/*
 * XREFs of PpmResetPerfEngineForProcessor @ 0x140114968
 * Callers:
 *     PopHandleNextState @ 0x1403CC8F0 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmResetPerfEngineForProcessor(__int64 a1)
{
  __int64 i; // rbx
  __int64 j; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  void (__fastcall *v6)(_QWORD); // rax
  __int64 k; // rsi
  __int64 v8; // rcx

  if ( !*(_DWORD *)(a1 + 36) )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 199) )
      {
        if ( *(_QWORD *)(i + 264) )
        {
          for ( j = 0LL; (unsigned int)j < *(_DWORD *)(i + 192); j = (unsigned int)(j + 1) )
            (*(void (__fastcall **)(_QWORD))(i + 264))(*(_QWORD *)(96 * j + *(_QWORD *)(i + 200) + 8));
        }
      }
    }
  }
  v4 = *(_QWORD *)(a1 + 24176);
  v5 = *(_QWORD *)(a1 + 24184);
  if ( v4 )
  {
    if ( v5 )
    {
      v6 = *(void (__fastcall **)(_QWORD))(v4 + 264);
      if ( v6 )
      {
        v6(*(_QWORD *)(v5 + 8));
        if ( a1 == *(_QWORD *)(v4 + 16) )
        {
          for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v4 + 192); k = (unsigned int)(k + 1) )
          {
            v8 = *(_QWORD *)(v4 + 200) + 96 * k;
            if ( *(_BYTE *)(v8 + 16) )
              (*(void (__fastcall **)(_QWORD))(v4 + 264))(*(_QWORD *)(v8 + 8));
          }
        }
      }
    }
  }
  return PpmResetPerfTimes(a1);
}
