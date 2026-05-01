/*
 * XREFs of ?Init@TerminalResourceSetCallback@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x180001F30
 * Callers:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x180001C7C (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIV.c)
 * Callees:
 *     ?AddRef@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011680 (-AddRef@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

int __fastcall ExecutionModel::TerminalResourceSetCallback::Init(
        ExecutionModel::TerminalResourceSetCallback *this,
        struct ExecutionModel::ResourceSet *a2)
{
  __int64 v3; // rcx
  unsigned int (__fastcall *v5)(ExecutionModel::ResourceSet *__hidden); // rax
  int v6; // eax

  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *((_QWORD *)this + 1) = a2;
  v5 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)a2 + 8LL);
  if ( v5 == ExecutionModel::ResourceSet::AddRef )
    ExecutionModel::ResourceSet::AddRef(a2);
  else
    v5(a2);
  v6 = TpAllocWork((char *)this + 16, ExecutionModel::TerminalResourceSetCallback::RevokeWorkerCallback, this, 0LL);
  if ( v6 >= 0 )
    v6 = 0;
  return v6 | 0x10000000;
}
