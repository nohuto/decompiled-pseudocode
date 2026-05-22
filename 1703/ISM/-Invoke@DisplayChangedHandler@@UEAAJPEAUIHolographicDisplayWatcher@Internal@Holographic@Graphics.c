/*
 * XREFs of ?Invoke@DisplayChangedHandler@@UEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x1800774D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003CB54 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x1800798C4 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 */

__int64 __fastcall DisplayChangedHandler::Invoke(
        DisplayChangedHandler *this,
        struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *a2,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a3)
{
  __int64 v5; // rsi
  char v6; // bl
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v7; // rdx
  int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  wil::critical_section::lock((struct _RTL_CRITICAL_SECTION *)((char *)this + 48), &lpCriticalSection);
  v5 = *((_QWORD *)this + 4);
  if ( !v5 )
    goto LABEL_6;
  v6 = *((_BYTE *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 2832));
  v8 = SpatialInputControllerCollection::OnDisplayChanged((SpatialInputControllerCollection *)v5, v7, a3, v6);
  if ( v5 != -2832 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 2832));
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xE6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v8);
  else
LABEL_6:
    v8 = 0;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
