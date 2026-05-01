/*
 * XREFs of ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAVBaseResourceSet@2@@Z @ 0x180001120
 * Callers:
 *     <none>
 * Callees:
 *     ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x18000305C (--0ExternalResourceSet@ExecutionModel@@AEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::ResourceSetFactory(struct ExecutionModel::BaseResourceSet **a1)
{
  unsigned int v2; // ebx
  ExecutionModel::ExternalResourceSet *v3; // rax
  struct ExecutionModel::BaseResourceSet *v4; // rax

  v2 = 0;
  v3 = (ExecutionModel::ExternalResourceSet *)malloc(0x5C8uLL);
  if ( v3 )
    v4 = (struct ExecutionModel::BaseResourceSet *)ExecutionModel::ExternalResourceSet::ExternalResourceSet(v3);
  else
    v4 = 0LL;
  *a1 = v4;
  if ( !v4 )
    return (unsigned int)-2147024882;
  return v2;
}
