/*
 * XREFs of ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJPEAPEAVBaseResourceSet@2@@Z @ 0x18000CED0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180010C70 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ResourceSetFactory(struct ExecutionModel::BaseResourceSet **a1)
{
  unsigned int v2; // ebx
  ExecutionModel::ResourceSet *v3; // rax
  struct ExecutionModel::BaseResourceSet *v4; // rax

  v2 = 0;
  v3 = (ExecutionModel::ResourceSet *)malloc(0x780uLL);
  if ( v3 )
    v4 = (struct ExecutionModel::BaseResourceSet *)ExecutionModel::ResourceSet::ResourceSet(v3);
  else
    v4 = 0LL;
  *a1 = v4;
  if ( !v4 )
    return (unsigned int)-2147024882;
  return v2;
}
