/*
 * XREFs of bDrvDisconnect @ 0x140336124
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteConsoleShadowStop @ 0x1402D3334 (xxxRemoteConsoleShadowStop.c)
 *     xxxRemotePassthruEnable @ 0x1402D3744 (xxxRemotePassthruEnable.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C6B4 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006B734 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140072EE8 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FA80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14009FB50 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB84 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A9094 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14025549C (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140295EA4 (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bDrvDisconnect(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  struct Gre::Base::SESSION_GLOBALS *v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  HSEMAPHORE v8; // rbx
  struct _GRETHREAD *v9; // rax
  bool v10; // zf
  HSEMAPHORE v11; // rbx
  struct _GRETHREAD *v12; // rax
  HSEMAPHORE v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h] BYREF
  HSEMAPHORE v20; // [rsp+70h] [rbp+20h] BYREF
  _QWORD *v21; // [rsp+88h] [rbp+38h] BYREF

  v21 = a1;
  if ( !a1 )
    return 0LL;
  v5 = 1;
  if ( (a1[10] & 1) == 0 )
    return 0LL;
  v6 = Gre::Base::Globals((Gre::Base *)a1);
  SEMOBJ<1>::SEMOBJ<1>(&v19, v6);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v18, v6);
  SEMOBJ<3>::SEMOBJ<3>(&v17, v6);
  SEMOBJ<4>::SEMOBJ<4>((HSEMAPHORE *)&v16, (__int64)&v21);
  SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v15, v6);
  SEMOBJ<10>::SEMOBJ<10>(&v14, v6);
  SEMOBJ<8>::SEMOBJ<8>(&v20, (__int64)&v21);
  PDEVOBJ::vSync((PDEVOBJ *)&v21, (struct _SURFOBJ *)((v21[318] + 24LL) & -(__int64)(v21[318] != 0LL)), 0LL, 0);
  v7 = (__int64 (__fastcall *)(__int64, __int64))v21[413];
  if ( v7 )
  {
    v5 = v7(a2, a3);
    if ( v5 )
      *(_DWORD *)(v21[222] + 68LL) = 3;
  }
  v8 = v20;
  if ( v20 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DevLock", v20);
    v9 = GreGetCurrentThreadCrossSessionCheck();
    if ( v9 )
    {
      v10 = (*((_BYTE *)v9 + 16))-- == 1;
      if ( v10 )
        *(_QWORD *)v9 &= ~0x100uLL;
      if ( !*(_QWORD *)v9 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v8);
  }
  v11 = v14;
  if ( v14 )
  {
    EtwTraceGreLockReleaseSemaphore(L"HT", v14);
    v12 = GreGetCurrentThreadCrossSessionCheck();
    if ( v12 )
    {
      v10 = (*((_BYTE *)v12 + 18))-- == 1;
      if ( v10 )
        *(_QWORD *)v12 &= ~0x400uLL;
      if ( !*(_QWORD *)v12 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v11);
  }
  if ( v15 )
    GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v15);
  if ( v16 )
    GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v16);
  if ( v17 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v17);
  if ( v18 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v18);
  if ( v19 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v19);
  return v5;
}
