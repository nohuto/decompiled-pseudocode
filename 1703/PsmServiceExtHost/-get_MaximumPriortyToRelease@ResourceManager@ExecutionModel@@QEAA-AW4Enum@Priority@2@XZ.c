/*
 * XREFs of ?get_MaximumPriortyToRelease@ResourceManager@ExecutionModel@@QEAA?AW4Enum@Priority@2@XZ @ 0x18000C2F0
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000DF50 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010460 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::get_MaximumPriortyToRelease(__int64 a1)
{
  _QWORD *v2; // r8
  _QWORD *i; // rax
  __int64 v4; // rdx
  int v5; // ecx

  v2 = (_QWORD *)(*(_QWORD *)(a1 + 104) + 160LL);
  for ( i = (_QWORD *)*v2; ; i = (_QWORD *)*i )
  {
    if ( i == v2 )
      return 0LL;
    v4 = i[2];
    if ( (*(_BYTE *)(v4 + 1450) & 0x10) != 0 )
      break;
    v5 = *(_DWORD *)(v4 + 1408);
    if ( v5 == 11 || v5 == 55 )
      break;
  }
  return *(unsigned int *)(a1 + 64);
}
