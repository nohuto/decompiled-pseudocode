/*
 * XREFs of ?GetNextPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C0004390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetNextPath(
        DMMVIDPNTOPOLOGY *this,
        const struct DMMVIDPNPRESENTPATH *const a2)
{
  DMMVIDPNTOPOLOGY *v2; // r8

  v2 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)a2 + 1);
  if ( v2 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
    return 0LL;
  else
    return (DMMVIDPNTOPOLOGY *)((char *)v2 - 8);
}
