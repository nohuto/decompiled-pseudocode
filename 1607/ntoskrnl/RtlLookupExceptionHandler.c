/*
 * XREFs of RtlLookupExceptionHandler @ 0x14014B634
 * Callers:
 *     KiLockServiceTable @ 0x14012E004 (KiLockServiceTable.c)
 *     KiFatalExceptionFilter @ 0x1407BA49C (KiFatalExceptionFilter.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlLookupExceptionHandler(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // rdx
  __int64 v7; // r8

  v6 = 0x140000000LL + *(unsigned int *)(a1 + 8);
  if ( 0x140000000LL <= 0x7FFFFFFEFFFFuLL && (v6 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( ((*(_BYTE *)v6 >> 3) & a3) != 0 )
  {
    v7 = *(unsigned __int8 *)(0x140000002LL + *(unsigned int *)(a1 + 8));
    if ( (v7 & 1) != 0 )
      v7 = (unsigned int)(v7 + 1);
    if ( a6 )
      *a6 = v6 + 2 * ((unsigned int)(v7 + 2) + 2LL);
    if ( a5 )
      *a5 = 0x140000000LL + *(unsigned int *)(v6 + 2 * v7 + 4);
  }
  return 0LL;
}
