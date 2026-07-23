/*
 * XREFs of MiInitializeCombining @ 0x14013B7E4
 * Callers:
 *     MiInitializePartition @ 0x14054F230 (MiInitializePartition.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiInitializeCombining(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx
  _QWORD *result; // rax
  _DWORD *v5; // rdx

  *a2 = a1;
  v2 = (_QWORD *)(a1 + 5864);
  if ( !*v2 )
  {
    v2[1] = v2;
    *v2 = v2;
  }
  v3 = 16LL;
  a2[10] = a2 + 9;
  a2[9] = a2 + 9;
  result = a2 + 12;
  a2[11] = 0LL;
  v5 = a2 + 13;
  do
  {
    *result = 0LL;
    result += 2;
    *v5 = 0;
    v5 += 4;
    --v3;
  }
  while ( v3 );
  return result;
}
