/*
 * XREFs of ?_Locinfo_dtor@_Locinfo@std@@SAXPEAV12@@Z @ 0x18006B328
 * Callers:
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x180022F54 (--1_Locinfo@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Locinfo::_Locinfo_dtor(struct std::_Locinfo *a1)
{
  const char *v1; // rdx

  if ( *((_QWORD *)a1 + 9) )
  {
    v1 = (const char *)*((_QWORD *)a1 + 9);
    if ( !v1 )
      v1 = (char *)a1 + 80;
    setlocale(0, v1);
  }
}
