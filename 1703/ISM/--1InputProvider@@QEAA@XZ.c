/*
 * XREFs of ??1InputProvider@@QEAA@XZ @ 0x18000552C
 * Callers:
 *     _InputProviderManager::CreateAndInitialize_::_1_::dtor$0 @ 0x1800A0C67 (_InputProviderManager--CreateAndInitialize_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputProvider::~InputProvider(InputProvider *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
