/*
 * XREFs of ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1402A65C8
 * Callers:
 *     xxxProcessTSFEvent @ 0x140044AA0 (xxxProcessTSFEvent.c)
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x140044B4C (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x14013CB18 (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_CLIENTLIB@@@-$UnlockDomainShared@$$V@@QEA.c)
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_WINEVENT@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x1401AADE8 (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_WINEVENT@@@-$UnlockDomainShared@$$V@@QEAA.c)
 *     fnHkINLPNOTIFYSTRUCT @ 0x1402D7AA4 (fnHkINLPNOTIFYSTRUCT.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxCallTSFNotifyHook(struct tagNOTIFY *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  int v5; // r9d
  int v6; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v7[48]; // [rsp+38h] [rbp-40h] BYREF

  v6 = 0;
  UnlockDomainShared<>::UnlockDomainExclusive<DLT_WINEVENT>::UnlockObjectLock<>::UnlockObjectLock<>((__int64)v7);
  UserSessionState = W32GetUserSessionState(v3, v2);
  fnHkINLPNOTIFYSTRUCT(
    *((_DWORD *)a1 + 7),
    *(_QWORD *)(UserSessionState + 19904),
    (_DWORD)a1,
    v5,
    *(_QWORD *)(*(_QWORD *)(UserSessionState + 19904) + 856LL),
    (__int64)&v6);
  UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::~UnlockObjectLock<>((__int64)v7);
}
