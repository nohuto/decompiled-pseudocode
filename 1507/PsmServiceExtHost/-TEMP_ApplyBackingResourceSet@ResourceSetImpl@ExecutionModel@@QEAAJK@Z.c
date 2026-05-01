/*
 * XREFs of ?TEMP_ApplyBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJK@Z @ 0x18002E874
 * Callers:
 *     ?HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z @ 0x18002EBC4 (-HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::TEMP_ApplyBackingResourceSet(
        ExecutionModel::ResourceSetImpl *this,
        unsigned int a2)
{
  __int64 v2; // rax

  v2 = **((_QWORD **)this + 22);
  if ( *(_DWORD *)(*((_QWORD *)this + 19) + 24LL) )
    return (*(__int64 (__fastcall **)(_QWORD))(v2 + 24))(*((_QWORD *)this + 22));
  else
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v2 + 32))(*((_QWORD *)this + 22), a2);
}
