/*
 * XREFs of PsGetSiloBySessionId @ 0x140503A58
 * Callers:
 *     SessionIsInteractive @ 0x1400F9DE0 (SessionIsInteractive.c)
 *     PsIsServiceSession @ 0x1404873C8 (PsIsServiceSession.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 */

__int64 __fastcall PsGetSiloBySessionId(unsigned int a1, _QWORD *a2, __int64 a3)
{
  __int64 SessionById; // rax
  void *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 result; // rax

  SessionById = MmGetSessionById(a1, (__int64)a2, a3);
  v5 = (void *)SessionById;
  if ( !SessionById )
    return 3221226581LL;
  v6 = *(_QWORD *)(SessionById + 1024);
  v7 = *(_QWORD *)(v6 + 8120);
  if ( v7 )
    ObfReferenceObject(*(PVOID *)(v6 + 8120));
  ObfDereferenceObject(v5);
  result = 0LL;
  *a2 = v7;
  return result;
}
