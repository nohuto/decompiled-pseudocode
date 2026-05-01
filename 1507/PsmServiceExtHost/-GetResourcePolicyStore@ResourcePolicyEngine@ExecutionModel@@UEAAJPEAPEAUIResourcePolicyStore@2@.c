/*
 * XREFs of ?GetResourcePolicyStore@ResourcePolicyEngine@ExecutionModel@@UEAAJPEAPEAUIResourcePolicyStore@2@@Z @ 0x180047070
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::GetResourcePolicyStore(
        ExecutionModel::ResourcePolicyEngine *this,
        struct ExecutionModel::IResourcePolicyStore **a2)
{
  unsigned int v2; // edi
  __int64 v4; // rsi

  v2 = 0;
  if ( a2 )
  {
    *a2 = 0LL;
    if ( !*((_QWORD *)this + 4) )
      return 2147549183LL;
    *a2 = (struct ExecutionModel::IResourcePolicyStore *)*((_QWORD *)this + 4);
    v4 = *((_QWORD *)this + 4);
    if ( v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)this + 4));
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
