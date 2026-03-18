/*
 * XREFs of ??1CMILFactory@@MEAA@XZ @ 0x18018C234
 * Callers:
 *     ??_ECMILFactory@@MEAAPEAXI@Z @ 0x18018C290 (--_ECMILFactory@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18009EA5C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMILFactory::~CMILFactory(CMILFactory *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CMILFactory::`vftable';
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  CCriticalSection::DeInit((struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
