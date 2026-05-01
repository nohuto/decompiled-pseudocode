/*
 * XREFs of ?Reapply@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180040BF0
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::Reapply(ExecutionModel::ResourceSet *this)
{
  unsigned int v1; // esi
  __int64 result; // rax

  v1 = *((_DWORD *)this + 2);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 171) + 32LL))((char *)this + 1368, v1);
  return result;
}
