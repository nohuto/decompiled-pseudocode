/*
 * XREFs of GreRemoveDisplayDriverRealizations @ 0x1400F8354
 * Callers:
 *     zzzDecomposeDesktop @ 0x1400F7F10 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C6B4 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C868 (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x14006BD7C (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006FAEC (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140071BDC (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007854C (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A9094 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400C3B0C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x1400C69D0 (--$GrepReleaseLockValidate@$0BE@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0BE@@@YAXXZ @ 0x1400C6AC0 (--$GrepAcquireLockValidate@$0BE@@@YAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1400F6A9C (--$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     ??$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1400F6B9C (--$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FD860 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$09@@YAXXZ @ 0x140182B04 (--$GrepAcquireLockValidate@$09@@YAXXZ.c)
 */

void __fastcall GreRemoveDisplayDriverRealizations(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  Gre::Base *v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rsi
  __int64 v7; // r15
  HSEMAPHORE v8; // r12
  __int64 v9; // r13
  HSEMAPHORE v10; // rdi
  HSEMAPHORE v11; // rbx
  HSEMAPHORE v12; // rbp
  HSEMAPHORE v13; // rsi
  __int64 v14; // rcx
  struct _GRETHREAD *v15; // rax
  bool v16; // zf
  struct _GRETHREAD *v17; // rax
  HSEMAPHORE v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF
  __int64 v21; // [rsp+88h] [rbp+10h]
  HSEMAPHORE v22; // [rsp+90h] [rbp+18h] BYREF
  HSEMAPHORE v23; // [rsp+98h] [rbp+20h] BYREF

  if ( a1 )
  {
    v21 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
    GrepAcquirePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(v4, (struct W32_PUSH_LOCK *)(v21 + 13488));
    v6 = Gre::Base::Globals(v5);
    v7 = *(_QWORD *)v6 + 624LL;
    GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v7);
    v8 = (HSEMAPHORE)(*(_QWORD *)v6 + 1144LL);
    GreAcquireSemaphoreInternal(v8);
    GrepAcquireLockValidate<2>();
    v9 = *(_QWORD *)v6 + 728LL;
    GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v9);
    v10 = *(HSEMAPHORE *)(a1 + 56);
    GreAcquireSemaphoreInternal(v10);
    GrepAcquireLockValidate<4>();
    v19 = *(_QWORD *)v6 + 1040LL;
    GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      v19);
    v18 = (HSEMAPHORE)(*(_QWORD *)v6 + 520LL);
    GreAcquireSemaphoreInternal(v18);
    GrepAcquireLockValidate<7>();
    v11 = *(HSEMAPHORE *)(a1 + 48);
    GreAcquireSemaphoreInternal(v11);
    GrepAcquireLockValidate<8>();
    v12 = (HSEMAPHORE)(*(_QWORD *)v6 + 1352LL);
    GreAcquireSemaphoreInternal(v12);
    GrepAcquireLockValidate<10>();
    SEMOBJ<13>::SEMOBJ<13>(&v23, v6);
    v22 = *(HSEMAPHORE *)(v21 + 20320);
    GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
    v20 = *(_QWORD *)(v21 + 20328);
    GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      v20);
    v13 = (HSEMAPHORE)(*(_QWORD *)v6 + 1512LL);
    GreAcquireSemaphoreInternal(v13);
    GrepAcquireLockValidate<20>();
    bDynamicProcessAllDriverRealizations(a1, 0LL, 1LL);
    if ( v13 )
    {
      EtwTraceGreLockReleaseSemaphore(L"Hmgr", v13);
      GrepReleaseLockValidate<20>();
      GreReleaseSemaphoreExclusiveInternal(v13);
    }
    SEMOBJ<18>::vUnlock((HSEMAPHORE *)&v20);
    SEMOBJ<17>::vUnlock(&v22);
    SEMOBJ<13>::vUnlock(&v23);
    if ( v12 )
    {
      EtwTraceGreLockReleaseSemaphore(L"HT", v12);
      v17 = GreGetCurrentThreadCrossSessionCheck();
      if ( v17 )
      {
        v16 = (*((_BYTE *)v17 + 18))-- == 1;
        if ( v16 )
          *(_QWORD *)v17 &= ~0x400uLL;
        if ( !*(_QWORD *)v17 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v12);
    }
    if ( v11 )
    {
      EtwTraceGreLockReleaseSemaphore(L"DevLock", v11);
      v15 = GreGetCurrentThreadCrossSessionCheck();
      if ( v15 )
      {
        v16 = (*((_BYTE *)v15 + 16))-- == 1;
        if ( v16 )
          *(_QWORD *)v15 &= ~0x100uLL;
        if ( !*(_QWORD *)v15 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v11);
    }
    if ( v18 )
      GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        (__int64)v18);
    if ( v19 )
      GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v19);
    if ( v10 )
      GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        (__int64)v10);
    if ( v9 )
      GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v9);
    if ( v8 )
      GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        (__int64)v8);
    if ( v7 )
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v7);
    GrepReleasePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(v14, (struct W32_PUSH_LOCK *)(v21 + 13488));
  }
}
