/*
 * XREFs of ?GetPredecessor@ResourceSet@ExecutionModel@@QEBAPEAV12@XZ @ 0x180011E7C
 * Callers:
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008220 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

struct ExecutionModel::ResourceSet *__fastcall ExecutionModel::ResourceSet::GetPredecessor(
        ExecutionModel::ResourceSet *this)
{
  __int64 v1; // rdx
  struct ExecutionModel::ResourceSet *result; // rax

  v1 = *((_QWORD *)this + 229);
  result = 0LL;
  if ( v1 )
    return (struct ExecutionModel::ResourceSet *)(v1 - 1368);
  return result;
}
