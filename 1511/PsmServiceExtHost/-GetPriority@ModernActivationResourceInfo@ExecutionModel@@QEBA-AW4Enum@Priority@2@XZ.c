/*
 * XREFs of ?GetPriority@ModernActivationResourceInfo@ExecutionModel@@QEBA?AW4Enum@Priority@2@XZ @ 0x18003CB20
 * Callers:
 *     ?AcquireAdditionalMemoryResources@ModernActivationResourceInfo@ExecutionModel@@QEAAJ_K0PEA_N@Z @ 0x18003B2E4 (-AcquireAdditionalMemoryResources@ModernActivationResourceInfo@ExecutionModel@@QEAAJ_K0PEA_N@Z.c)
 *     ?CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPEAVResourceSet@2@@Z @ 0x18003BF1C (-CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ModernActivationResourceInfo::GetPriority(__int64 a1)
{
  _QWORD *v1; // r9
  int v2; // r8d
  _QWORD *v3; // rax
  __int64 v4; // rcx

  v1 = (_QWORD *)(a1 + 24);
  v2 = 101;
  v3 = *(_QWORD **)(a1 + 24);
  while ( v3 != v1 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( *(_DWORD *)(v4 + 1360) < v2 )
      v2 = *(_DWORD *)(v4 + 1360);
  }
  return (unsigned int)v2;
}
