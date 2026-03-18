/*
 * XREFs of ?GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z @ 0x1C0007B30
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00891AC (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ @ 0x1C00CC220 (-RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C017C590 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCESET::GetNextSource(
        DMMVIDPNSOURCESET *this,
        const struct DMMVIDPNSOURCE *const a2)
{
  __int64 v2; // rbx
  DMMVIDPNSOURCESET *v5; // rdx
  __int64 v7; // rax

  v2 = 0LL;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v7);
  }
  v5 = (DMMVIDPNSOURCESET *)*((_QWORD *)a2 + 1);
  if ( v5 != (DMMVIDPNSOURCESET *)((char *)this + 24) )
    return (DMMVIDPNSOURCESET *)((char *)v5 - 8);
  return (struct DMMVIDPNSOURCE *)v2;
}
