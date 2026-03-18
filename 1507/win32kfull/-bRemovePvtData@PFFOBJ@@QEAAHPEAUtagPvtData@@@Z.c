/*
 * XREFs of ?bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z @ 0x1C02B4754
 * Callers:
 *     ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1C0129F5C (-bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C013EA0C (--1PFFMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFFOBJ::bRemovePvtData(PFFOBJ *this, struct tagPvtData *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 i; // rax

  v6 = *(_QWORD *)(*(_QWORD *)this + 160LL);
  if ( !v6 )
    return 0LL;
  if ( (struct tagPvtData *)v6 != a2 )
  {
    for ( i = *(_QWORD *)(v6 + 16); i; i = *(_QWORD *)(i + 16) )
    {
      if ( (struct tagPvtData *)i == a2 )
      {
        if ( (*((_DWORD *)a2 + 2) & 4) != 0 )
          PopThreadGuardedObject((char *)a2 + 24, a2, a3, a4);
        *(_QWORD *)(v6 + 16) = *((_QWORD *)a2 + 2);
        goto LABEL_6;
      }
      v6 = i;
    }
    return 0LL;
  }
  if ( (*((_DWORD *)a2 + 2) & 4) != 0 )
    PopThreadGuardedObject((char *)a2 + 24, a2, a3, a4);
  *(_QWORD *)(*(_QWORD *)this + 160LL) = *((_QWORD *)a2 + 2);
LABEL_6:
  Win32FreePool(a2);
  return 1LL;
}
