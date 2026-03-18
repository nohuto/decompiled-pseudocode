/*
 * XREFs of ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800A7E44
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18003B424 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?Run@CDWMInputThread@@AEAAKXZ @ 0x1800A7C30 (-Run@CDWMInputThread@@AEAAKXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800A7F80 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800A804C (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     _lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_ @ 0x1800B7C20 (_lambda_f3dd36a108fc8d7388aafb7b286089e3_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMmcssTask::Revert(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // rax
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  EnterCriticalSection(this);
  v2 = *(_QWORD *)&this[1].LockCount;
  if ( v2 && *(_QWORD *)(v2 + 136) )
  {
    ((void (*)(void))this[1].SpinCount)();
    *(_QWORD *)(*(_QWORD *)&this[1].LockCount + 136LL) = 0LL;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v3);
}
