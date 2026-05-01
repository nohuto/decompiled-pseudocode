/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18001B154
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18000EA14 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18001DFDC (--0ResourceManager@ExecutionModel@@QEAA@XZ.c)
 * Callees:
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18000F060 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(
        ExecutionModel::_ResourceInfo *this,
        __int64 a2,
        __int64 a3,
        ExecutionModel::_ResourceInfo *(__fastcall *a4)(ExecutionModel::_ResourceInfo *this))
{
  __int64 v5; // rdi

  if ( a3 )
  {
    v5 = a3;
    do
    {
      --v5;
      if ( a4 == ExecutionModel::_ResourceInfo::_ResourceInfo )
        ExecutionModel::_ResourceInfo::_ResourceInfo(this);
      else
        a4(this);
      this = (ExecutionModel::_ResourceInfo *)((char *)this + a2);
    }
    while ( v5 );
  }
}
