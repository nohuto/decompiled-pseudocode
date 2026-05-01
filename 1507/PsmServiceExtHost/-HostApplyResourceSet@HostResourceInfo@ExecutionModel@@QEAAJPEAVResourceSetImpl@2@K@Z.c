/*
 * XREFs of ?HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z @ 0x18002EBC4
 * Callers:
 *     ?Apply@ResourceSetImpl@ExecutionModel@@UEAAJK@Z @ 0x180047940 (-Apply@ResourceSetImpl@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ?SetAsApplied@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180013EF0 (-SetAsApplied@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z.c)
 *     ?SetApplied@ResourceSetImpl@ExecutionModel@@QEAAJ_N@Z @ 0x180015370 (-SetApplied@ResourceSetImpl@ExecutionModel@@QEAAJ_N@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?TEMP_ApplyBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJK@Z @ 0x18002E874 (-TEMP_ApplyBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJK@Z.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::HostApplyResourceSet(
        ExecutionModel::HostResourceInfo *this,
        struct ExecutionModel::ResourceSetImpl *a2,
        unsigned int a3)
{
  int v7; // ebx

  if ( !a2 )
    __int2c();
  if ( !(*(unsigned __int8 (__fastcall **)(struct ExecutionModel::ResourceSetImpl *))(*(_QWORD *)a2 + 80LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(struct ExecutionModel::ResourceSetImpl *))(*(_QWORD *)a2 + 88LL))(a2)
    || (*((_BYTE *)a2 + 28) & 4) == 0 )
  {
    return 2147500037LL;
  }
  v7 = ExecutionModel::ResourceSetImpl::TEMP_ApplyBackingResourceSet(a2, a3);
  if ( v7 >= 0 )
  {
    v7 = ExecutionModel::ResourceSetImpl::SetApplied(a2, 1);
    if ( v7 >= 0 )
      ExecutionModel::HostResourceInfo::SetAsApplied(this, a2);
  }
  return (unsigned int)v7;
}
