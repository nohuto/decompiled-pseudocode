/*
 * XREFs of PpmResetPerfEngineForProcessor @ 0x140119D38
 * Callers:
 *     PopHandleNextState @ 0x1403A0B10 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmResetPerfEngineForProcessor(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebx
  __int64 v3; // rcx
  void (__fastcall *v4)(_QWORD); // rax

  v1 = *(_QWORD *)(a1 + 24176);
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 24184);
  if ( v1 )
  {
    if ( v3 )
    {
      v4 = *(void (__fastcall **)(_QWORD))(v1 + 264);
      if ( v4 )
        v4(*(_QWORD *)(v3 + 8));
    }
  }
  return PpmResetPerfTimes(v2);
}
