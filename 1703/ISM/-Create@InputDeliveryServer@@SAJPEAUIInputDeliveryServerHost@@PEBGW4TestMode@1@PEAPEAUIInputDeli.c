/*
 * XREFs of ?Create@InputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x1800685FC
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001248C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$MakeAndInitialize@VInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@InputDeliveryServer@@@Z @ 0x18006AA34 (--$MakeAndInitialize@VInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHos.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputDeliveryServer::Create(
        __int64 a1,
        RTL_SRWLOCK *a2,
        __int64 a3,
        struct IInputDeliveryServer **a4)
{
  __int64 v5; // rcx
  struct IInputDeliveryServer *v6; // rax
  int v7; // eax
  int v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  SRWLock = a2;
  v12 = a1;
  v10[1] = -2LL;
  v9 = 0;
  v10[0] = L"System\\InputDelivery";
  wil::srwlock::lock_exclusive(&InputDeliveryServer::s_initLock, &SRWLock);
  v6 = InputDeliveryServer::s_pInputDeliveryServer;
  if ( !InputDeliveryServer::s_pInputDeliveryServer )
  {
    v7 = ((__int64 (__fastcall *)(__int64, __int64 *, _QWORD *, int *))Microsoft::WRL::Details::MakeAndInitialize<InputDeliveryServer,IInputDeliveryServer,IInputDeliveryServerHost * &,unsigned short const * &,enum InputDeliveryServer::TestMode &>)(
           v5,
           &v12,
           v10,
           &v9);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x1E,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v6 = InputDeliveryServer::s_pInputDeliveryServer;
  }
  *a4 = v6;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
