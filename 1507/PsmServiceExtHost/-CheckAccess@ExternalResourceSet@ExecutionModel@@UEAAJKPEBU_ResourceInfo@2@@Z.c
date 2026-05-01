/*
 * XREFs of ?CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z @ 0x18003F460
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::CheckAccess(
        ExecutionModel::ExternalResourceSet *this,
        unsigned int a2,
        const struct ExecutionModel::_ResourceInfo *a3)
{
  __int64 result; // rax
  unsigned int i; // esi

  result = 0LL;
  for ( i = 0; i < a2; a3 = (const struct ExecutionModel::_ResourceInfo *)((char *)a3 + 24) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 3) + 152LL))(
               *((_QWORD *)this + 3),
               *(unsigned int *)a3,
               *((unsigned int *)this + 2));
    if ( (int)result < 0 )
      break;
    ++i;
  }
  return result;
}
