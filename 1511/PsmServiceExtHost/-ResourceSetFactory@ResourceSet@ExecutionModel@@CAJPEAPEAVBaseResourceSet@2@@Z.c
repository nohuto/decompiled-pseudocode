/*
 * XREFs of ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJPEAPEAVBaseResourceSet@2@@Z @ 0x18000A140
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 * Callees:
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x18000EE30 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ResourceSetFactory(struct ExecutionModel::BaseResourceSet **a1)
{
  unsigned int v2; // ebx
  ExecutionModel::ResourceSet *v3; // rax
  struct ExecutionModel::BaseResourceSet *v4; // rax

  v2 = 0;
  v3 = (ExecutionModel::ResourceSet *)malloc(0x788uLL);
  if ( v3 )
    v4 = (struct ExecutionModel::BaseResourceSet *)ExecutionModel::ResourceSet::ResourceSet(v3);
  else
    v4 = 0LL;
  *a1 = v4;
  if ( !v4 )
    return (unsigned int)-2147024882;
  return v2;
}
