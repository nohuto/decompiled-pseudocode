/*
 * XREFs of ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18002A2A0
 * Callers:
 *     ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x180027850 (-RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ.c)
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180027CC0 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029EA0 (-Release@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspectable@.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A0B0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspe.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::WeakReferenceImpl::Resolve(
        Microsoft::WRL::Details::WeakReferenceImpl *this,
        const struct _GUID *a2,
        struct IInspectable **a3)
{
  __int64 result; // rax
  __int64 (__fastcall *v5)(__int64, const struct _GUID *, __int64 *); // rbp
  unsigned int Interface; // eax
  volatile int *v7; // rdx
  __int64 v8; // rbx
  unsigned int v9; // esi
  __int64 (__fastcall *v10)(__int64, volatile int *); // rdi

  *a3 = 0LL;
  while ( 1 )
  {
    result = *((unsigned int *)this + 4);
    if ( !(_DWORD)result )
      break;
    if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)this + 4, result + 1, result) )
    {
      v5 = (__int64 (__fastcall *)(__int64, const struct _GUID *, __int64 *))***((_QWORD ***)this + 3);
      if ( v5 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                      *((_QWORD *)this + 3),
                      a2,
                      (__int64 *)a3);
      else
        Interface = v5(*((_QWORD *)this + 3), a2, (__int64 *)a3);
      v8 = *((_QWORD *)this + 3);
      v9 = Interface;
      v10 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v8 + 16LL);
      if ( v10 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(
          v8,
          v7);
      else
        ((void (__fastcall *)(__int64))v10)(v8);
      return v9;
    }
  }
  return result;
}
