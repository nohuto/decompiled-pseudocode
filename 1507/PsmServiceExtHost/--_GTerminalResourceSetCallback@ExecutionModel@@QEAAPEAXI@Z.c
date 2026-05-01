/*
 * XREFs of ??_GTerminalResourceSetCallback@ExecutionModel@@QEAAPEAXI@Z @ 0x18003DD60
 * Callers:
 *     ?Release@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ @ 0x18003E140 (-Release@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

ExecutionModel::TerminalResourceSetCallback *__fastcall ExecutionModel::TerminalResourceSetCallback::`scalar deleting destructor'(
        ExecutionModel::TerminalResourceSetCallback *this)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(ExecutionModel::ResourceSet *); // rsi

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(*((_QWORD *)this + 3));
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v3 + 16LL);
    if ( v4 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(*((ExecutionModel::ResourceSet **)this + 2));
    else
      v4(*((ExecutionModel::ResourceSet **)this + 2));
  }
  operator delete(this);
  return this;
}
