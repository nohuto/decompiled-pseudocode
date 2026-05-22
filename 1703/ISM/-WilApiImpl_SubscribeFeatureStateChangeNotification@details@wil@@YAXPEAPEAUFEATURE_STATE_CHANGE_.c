/*
 * XREFs of ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18003FDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     memcpy_s_0 @ 0x18003CA8C (memcpy_s_0.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18003E0B8 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18003F79C (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV-$unique_any_t@.c)
 */

void __fastcall wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification(
        wil::details *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  rsize_t v10; // rdx
  unsigned __int64 v11; // rax
  __int128 Source; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  if ( wil::details::g_featureStateManager )
  {
    wil::srwlock::lock_exclusive(&stru_1800D2520, &SRWLock);
    wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
      (__int64 *)&xmmword_1800D2560,
      (const struct __WIL__WNF_TYPE_ID *)0x418A073AA3BC7C75LL,
      &wil::details::g_featureStateManager);
    wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
      (__int64 *)&xmmword_1800D2560 + 1,
      (const struct __WIL__WNF_TYPE_ID *)0x418A073AA3BC88F5LL,
      &wil::details::g_featureStateManager);
    v7 = 0LL;
    v8 = (*(&xmmword_1800D2570 + 1) - xmmword_1800D2570) >> 4;
    if ( v8 )
    {
      v9 = 0LL;
      while ( *(_QWORD *)(v9 + xmmword_1800D2570) )
      {
        ++v7;
        v9 += 16LL;
        if ( v7 >= v8 )
          goto LABEL_6;
      }
      *(_QWORD *)&Source = a2;
      *((_QWORD *)&Source + 1) = a3;
      *(_OWORD *)(xmmword_1800D2570 + 16 * v7) = Source;
      v11 = v7 + 1;
    }
    else
    {
LABEL_6:
      *(_QWORD *)&Source = a2;
      *((_QWORD *)&Source + 1) = a3;
      if ( !wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&xmmword_1800D2570, 0x10uLL) )
        goto LABEL_13;
      if ( *(&xmmword_1800D2570 + 1) < (unsigned __int64)xmmword_1800D2580 )
        v10 = xmmword_1800D2580 - *(&xmmword_1800D2570 + 1);
      else
        v10 = 0LL;
      memcpy_s_0(*(&xmmword_1800D2570 + 1), v10, &Source, 0x10uLL);
      *(&xmmword_1800D2570 + 1) += 16LL;
      v11 = (*(&xmmword_1800D2570 + 1) - xmmword_1800D2570) >> 4;
    }
    *(_QWORD *)this = v11;
LABEL_13:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
}
