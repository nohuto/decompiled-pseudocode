/*
 * XREFs of ?get_MaximumPriortyToRelease@ResourceManager@ExecutionModel@@QEAA?AW4Enum@Priority@2@XZ @ 0x18000E400
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001A274 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV-$list@V-$CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::get_MaximumPriortyToRelease(__int64 a1)
{
  _QWORD *v2; // rdx
  _QWORD *i; // rax
  __int64 v4; // r8
  int v5; // ecx

  v2 = (_QWORD *)(*(_QWORD *)(a1 + 120) + 160LL);
  for ( i = (_QWORD *)*v2; ; i = (_QWORD *)*i )
  {
    if ( i == v2 )
      return 0LL;
    v4 = i[2];
    if ( (*(_BYTE *)(v4 + 1458) & 8) != 0 )
      break;
    v5 = *(_DWORD *)(v4 + 1416);
    if ( v5 == 11 || v5 == 55 )
      break;
  }
  return *(unsigned int *)(a1 + 80);
}
