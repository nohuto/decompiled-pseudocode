/*
 * XREFs of ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1800038C0
 * Callers:
 *     CreateResourceManagerProxy @ 0x180001474 (CreateResourceManagerProxy.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180002124 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x180007DDC (--0ResourceManagerClientProxy@@IEAA@XZ.c)
 *     ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x180014AB0 (-ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180004630 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??0?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180005FE0 (--0-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(
        ExecutionModel::_ResourceSetInfo *this,
        __int64 a2,
        int a3,
        void (__fastcall *a4)(ExecutionModel::_ResourceSetInfo *))
{
  int i; // edi

  for ( i = a3 - 1; i >= 0; --i )
  {
    if ( (char *)a4 == (char *)ExecutionModel::_ResourceSetInfo::_ResourceSetInfo )
    {
      ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(this);
    }
    else if ( (char *)a4 == (char *)Microsoft::WRL::ComPtr<IUnknown>::ComPtr<IUnknown> )
    {
      Microsoft::WRL::ComPtr<IUnknown>::ComPtr<IUnknown>(this);
    }
    else
    {
      a4(this);
    }
    this = (ExecutionModel::_ResourceSetInfo *)((char *)this + a2);
  }
}
