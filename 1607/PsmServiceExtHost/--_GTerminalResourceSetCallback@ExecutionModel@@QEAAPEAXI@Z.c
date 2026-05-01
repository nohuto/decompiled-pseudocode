/*
 * XREFs of ??_GTerminalResourceSetCallback@ExecutionModel@@QEAAPEAXI@Z @ 0x180001ECC
 * Callers:
 *     ?Release@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ @ 0x180001EA0 (-Release@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001FB04 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

ExecutionModel::TerminalResourceSetCallback *__fastcall ExecutionModel::TerminalResourceSetCallback::`scalar deleting destructor'(
        ExecutionModel::TerminalResourceSetCallback *this)
{
  ExecutionModel::ResourceSet *v2; // rcx
  void (*v3)(void); // rax

  *(_QWORD *)this = &ExecutionModel::TerminalResourceSetCallback::`vftable';
  if ( *((_QWORD *)this + 2) )
    TpReleaseWork();
  v2 = (ExecutionModel::ResourceSet *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v2);
    else
      v3();
  }
  operator delete(this);
  return this;
}
