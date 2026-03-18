/*
 * XREFs of _FreeTouchInputInfo @ 0x1401EE500
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     fnHkINLPMSG @ 0x14003B750 (fnHkINLPMSG.c)
 *     UnlinkSendListSms @ 0x140056568 (UnlinkSendListSms.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1401EDD40 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     ForwardTouchMessage @ 0x1401EDF48 (ForwardTouchMessage.c)
 *     NtUserGetTouchInputInfo @ 0x140232A10 (NtUserGetTouchInputInfo.c)
 * Callees:
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400378B8 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14003A7F0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x14003AB48 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x14003AD08 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall FreeTouchInputInfo(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  _BYTE v7[48]; // [rsp+20h] [rbp-48h] BYREF
  char v8; // [rsp+50h] [rbp-18h]

  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)v7);
  v8 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY(v3, v2) )
  {
    v8 = 1;
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>((__int64)v7);
  }
  v4 = HMValidateHandleNoSecure(a1, 20);
  v5 = v4;
  if ( v4 && *(_BYTE *)(_HMPheFromObject(v4) + 24) == 20 )
  {
    HMDestroyObject(v5);
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v7);
    return 1LL;
  }
  else
  {
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v7);
    return 0LL;
  }
}
