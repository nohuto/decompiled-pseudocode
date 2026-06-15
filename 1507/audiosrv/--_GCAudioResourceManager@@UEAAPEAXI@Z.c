/*
 * XREFs of ??_GCAudioResourceManager@@UEAAPEAXI@Z @ 0x180091DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180091988 (--1-$RuntimeClass@U-$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Details@WR.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@2@@std@@IEAAXXZ @ 0x180093578 (-_Tidy@-$deque@V-$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V-$allocator@V-$share.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CAudioResourceManager::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  void **p_LockCount; // rbx
  volatile int *v5; // rdx

  p_LockCount = (void **)&this[2].LockCount;
  std::deque<std::shared_ptr<NonDefaultSaDeviceReevaluationContext>>::_Tidy(&this[2].LockCount);
  operator delete(*p_LockCount);
  *p_LockCount = 0LL;
  DeleteCriticalSection(this + 1);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>(
    (__int64)this,
    v5);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
