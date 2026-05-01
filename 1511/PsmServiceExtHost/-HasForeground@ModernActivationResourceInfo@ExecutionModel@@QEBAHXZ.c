/*
 * XREFs of ?HasForeground@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ @ 0x18003CD94
 * Callers:
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18003C504 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ModernActivationResourceInfo::HasForeground(
        ExecutionModel::ModernActivationResourceInfo *this)
{
  ExecutionModel::ModernActivationResourceInfo *v1; // rax
  __int64 v2; // r10
  __int64 v3; // rdx
  char *v5; // r8
  char *i; // rax
  __int64 v7; // rcx

  v1 = *(ExecutionModel::ModernActivationResourceInfo **)this;
  v2 = 0x24704100001LL;
  while ( v1 != this )
  {
    v3 = *((_QWORD *)v1 + 2);
    if ( (*(_BYTE *)(v3 + 1434) & 0x40) != 0 || *(_DWORD *)(v3 + 1408) <= 0x29u && _bittest64(&v2, *(int *)(v3 + 1408)) )
      return 1LL;
    v1 = *(ExecutionModel::ModernActivationResourceInfo **)v1;
  }
  v5 = (char *)this + 24;
  for ( i = (char *)*((_QWORD *)this + 3); i != v5; i = *(char **)i )
  {
    v7 = *((_QWORD *)i + 2);
    if ( (*(_BYTE *)(v7 + 1434) & 0x40) != 0 || *(_DWORD *)(v7 + 1408) <= 0x29u && _bittest64(&v2, *(int *)(v7 + 1408)) )
      return 1LL;
  }
  return 0LL;
}
