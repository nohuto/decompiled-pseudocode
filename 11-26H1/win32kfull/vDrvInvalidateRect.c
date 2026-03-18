/*
 * XREFs of vDrvInvalidateRect @ 0x1403367D8
 * Callers:
 *     RemoteRedrawRectangle @ 0x1402CB024 (RemoteRedrawRectangle.c)
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

void __fastcall vDrvInvalidateRect(Gre::Base *a1, __int64 a2)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  void (__fastcall *v4)(__int64); // rax
  HSEMAPHORE v5; // rbx
  struct _GRETHREAD *v6; // rax
  bool v7; // zf
  HSEMAPHORE v8; // rbx
  struct _GRETHREAD *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  HSEMAPHORE v15; // [rsp+70h] [rbp+20h] BYREF
  Gre::Base *v16; // [rsp+80h] [rbp+30h] BYREF
  HSEMAPHORE v17; // [rsp+88h] [rbp+38h] BYREF

  if ( a1 )
  {
    v16 = a1;
    if ( (*((_DWORD *)a1 + 10) & 1) != 0 )
    {
      v3 = Gre::Base::Globals(a1);
      SEMOBJ<1>::SEMOBJ<1>(&v14, v3);
      SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v13, v3);
      SEMOBJ<3>::SEMOBJ<3>(&v12, v3);
      SEMOBJ<4>::SEMOBJ<4>((HSEMAPHORE *)&v11, (__int64)&v16);
      SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v10, v3);
      SEMOBJ<8>::SEMOBJ<8>(&v17, (__int64)&v16);
      SEMOBJ<10>::SEMOBJ<10>(&v15, v3);
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v16,
        (struct _SURFOBJ *)((*((_QWORD *)v16 + 318) + 24LL) & -(__int64)(*((_QWORD *)v16 + 318) != 0LL)),
        0LL,
        0);
      v4 = (void (__fastcall *)(__int64))*((_QWORD *)v16 + 417);
      if ( v4 )
        v4(a2);
      v5 = v15;
      if ( v15 )
      {
        EtwTraceGreLockReleaseSemaphore(L"HT", v15);
        v6 = GreGetCurrentThreadCrossSessionCheck();
        if ( v6 )
        {
          v7 = (*((_BYTE *)v6 + 18))-- == 1;
          if ( v7 )
            *(_QWORD *)v6 &= ~0x400uLL;
          if ( !*(_QWORD *)v6 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v5);
      }
      v8 = v17;
      if ( v17 )
      {
        EtwTraceGreLockReleaseSemaphore(L"DevLock", v17);
        v9 = GreGetCurrentThreadCrossSessionCheck();
        if ( v9 )
        {
          v7 = (*((_BYTE *)v9 + 16))-- == 1;
          if ( v7 )
            *(_QWORD *)v9 &= ~0x100uLL;
          if ( !*(_QWORD *)v9 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v8);
      }
      if ( v10 )
        GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v10);
      if ( v11 )
        GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v11);
      if ( v12 )
        GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v12);
      if ( v13 )
        GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v13);
      if ( v14 )
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v14);
    }
  }
}
