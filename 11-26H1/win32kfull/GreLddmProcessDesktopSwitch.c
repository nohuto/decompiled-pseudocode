/*
 * XREFs of GreLddmProcessDesktopSwitch @ 0x14023E5C8
 * Callers:
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreLddmProcessDesktopSwitch(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rax
  int v2; // edi
  __int64 i; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 DxgkWin32kInterface; // rax
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v1 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v17, v1);
  v2 = UserRemoteConnectedSessionUsingXddm();
  for ( i = 0LL; ; i = v7 )
  {
    v4 = hdevEnumerateDisplayOnly(i);
    v7 = v4;
    if ( !v4 )
      break;
    v8 = *(_DWORD *)(v4 + 40) & 0x20401;
    if ( (_DWORD)v8 == 1
      && ((v9 = *(_QWORD *)(v4 + 2568)) != 0 && v9 != -4 && (*(_DWORD *)(v9 + 160) & 0x800000) != 0 || v2) )
    {
      GreLockVisRgn(v8, v5, v6);
      GreAcquireSemaphore<8,PDEVOBJ>(v7);
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v11, v10, v12, v13);
      (*(void (__fastcall **)(_QWORD, _QWORD))(DxgkWin32kInterface + 408))(
        *(_QWORD *)(*(_QWORD *)(v7 + 2568) + 232LL),
        *(unsigned int *)(*(_QWORD *)(v7 + 2568) + 248LL));
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v7);
      GreUnlockVisRgn(v15);
    }
  }
  return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
           (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
           v17);
}
