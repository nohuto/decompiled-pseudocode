/*
 * XREFs of GreDxDwmShutdown @ 0x140348AA0
 * Callers:
 *     xxxDwmStopRedirection @ 0x1402CFD60 (xxxDwmStopRedirection.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077104 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007715C (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x14023AA54 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 GreDxDwmShutdown()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 DxgkWin32kInterface; // rax
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rdi
  __int64 i; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF
  __int64 v18; // [rsp+38h] [rbp+10h] BYREF

  result = UserIsWddmConnectedSession();
  if ( (_DWORD)result )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v2, v1, v3, v4);
    (*(void (__fastcall **)(__int64))(DxgkWin32kInterface + 120))(-1LL);
    v7 = Gre::Base::Globals(v6);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v18, v7);
    GrepLockVisRgn(v7);
    for ( i = 0LL; ; i = v16 )
    {
      v15 = hdevEnumerateDisplayOnly(i);
      v16 = v15;
      if ( !v15 )
        break;
      v17 = v15;
      if ( (*(_DWORD *)(v15 + 40) & 0x20401) == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17) )
      {
        GreAcquireSemaphore<8,PDEVOBJ>(v16);
        v13 = DxDdGetDxgkWin32kInterface(v10, v9, v11, v12);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(v13 + 288))(
               *(_QWORD *)(*(_QWORD *)(v17 + 2568) + 232LL),
               *(unsigned int *)(*(_QWORD *)(v17 + 2568) + 248LL)) )
        {
          if ( *(_QWORD *)(v17 + 2720) )
          {
            LOBYTE(v14) = 1;
            DrvDxgkDisplayOnOff(&v17, v14, 3LL);
            (*(void (__fastcall **)(_QWORD, __int64))(v17 + 2720))(*(_QWORD *)(v17 + 1784), 1LL);
          }
        }
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v17);
      }
    }
    GrepUnlockVisRgn(v7);
    return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
             (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
             v18);
  }
  return result;
}
