/*
 * XREFs of RtlTraceDatabaseDestroy @ 0x1800F33C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x1800523A0 (RtlDeleteCriticalSection.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpTraceDatabaseFree @ 0x1800F3690 (RtlpTraceDatabaseFree.c)
 */

bool __fastcall RtlTraceDatabaseDestroy(__int64 a1)
{
  char v2; // si
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi

  v2 = 0;
  RtlDeleteCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  v3 = *(_QWORD **)(a1 + 16);
  if ( !v3 )
    return 1;
  do
  {
    v4 = (_QWORD *)v3[2];
    if ( !v4 )
      v3 -= 24;
    if ( !(unsigned __int8)RtlpTraceDatabaseFree(v3) )
    {
      DbgPrint("Trace database: failed to release segment %p \n", v3);
      v2 = 1;
    }
    v3 = v4;
  }
  while ( v4 );
  return !v2;
}
