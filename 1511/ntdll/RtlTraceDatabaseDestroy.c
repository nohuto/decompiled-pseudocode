/*
 * XREFs of RtlTraceDatabaseDestroy @ 0x1800EA650
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlDeleteCriticalSection @ 0x180059D20 (RtlDeleteCriticalSection.c)
 *     RtlpTraceDatabaseFree @ 0x1800EA920 (RtlpTraceDatabaseFree.c)
 */

bool __fastcall RtlTraceDatabaseDestroy(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char v5; // si
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi

  v5 = 0;
  RtlDeleteCriticalSection((__int64 *)(a1 + 48), a2, a3, a4);
  v6 = *(_QWORD **)(a1 + 16);
  if ( !v6 )
    return 1;
  do
  {
    v7 = (_QWORD *)v6[2];
    if ( !v7 )
      v6 -= 24;
    if ( !(unsigned __int8)RtlpTraceDatabaseFree(v6) )
    {
      DbgPrint("Trace database: failed to release segment %p \n", v6);
      v5 = 1;
    }
    v6 = v7;
  }
  while ( v7 );
  return !v5;
}
