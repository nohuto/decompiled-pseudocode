/*
 * XREFs of ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x180010514
 * Callers:
 *     ??_GContentManagementService@ContentManagement@@UEAAPEAXI@Z @ 0x180006630 (--_GContentManagementService@ContentManagement@@UEAAPEAXI@Z.c)
 *     ?Invoke@?$InvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@V_lambda_56d50dfc534731ff4c42e8df5d1b2182_@@$01@Details@WRL@Microsoft@@UEAAJPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@PEAUIAppServiceClosedEventArgs@678@@Z @ 0x18001A870 (-Invoke@-$InvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandl.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000839C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180008440 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ContentManagement::ContentManagementService::CloseConnection(RTL_SRWLOCK *this)
{
  PVOID Ptr; // rsi
  int v3; // eax
  __int64 v4; // r8
  PVOID v5; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(this + 11, &SRWLock);
  Ptr = this[12].Ptr;
  if ( Ptr )
  {
    if ( this[13].Ptr )
    {
      v3 = (*(__int64 (__fastcall **)(PVOID, PVOID))(*(_QWORD *)Ptr + 120LL))(this[12].Ptr, this[13].Ptr);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(retaddr, 492LL, v4, (const char *)(unsigned int)v3);
      this[13].Ptr = 0LL;
    }
    v5 = this[12].Ptr;
    if ( v5 )
    {
      this[12].Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
