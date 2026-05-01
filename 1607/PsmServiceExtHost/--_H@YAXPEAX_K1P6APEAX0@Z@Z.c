/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18001C988
 * Callers:
 *     ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18001BF6C (--0ResourceManager@ExecutionModel@@QEAA@XZ.c)
 *     ??0_RM_POLICY_REQUEST_BUFFER@@QEAA@XZ @ 0x18001C93C (--0_RM_POLICY_REQUEST_BUFFER@@QEAA@XZ.c)
 * Callees:
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180011660 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
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
