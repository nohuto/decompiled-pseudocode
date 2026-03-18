/*
 * XREFs of GreDrvDisconnect @ 0x140287F5C
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteDisconnect @ 0x1401B3938 (xxxRemoteDisconnect.c)
 *     xxxRemotePassthruEnable @ 0x1402D3744 (xxxRemotePassthruEnable.c)
 *     xxxRemoteReconnect @ 0x1402D3988 (xxxRemoteReconnect.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C6B4 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006B734 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140072EE8 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007854C (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14009FB50 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A9094 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400F60B8 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FD860 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14025549C (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140335B2C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140335B70 (--$GreReleaseSemaphoreExclusive@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDrvDisconnect(Gre::Base *a1)
{
  int v1; // r12d
  int v2; // r15d
  struct Gre::Base::SESSION_GLOBALS *v3; // rsi
  __int64 *v4; // rdi
  int v5; // r13d
  _QWORD *v6; // rbx
  _QWORD *i; // r14
  bool v8; // al
  HSEMAPHORE v9; // rbx
  struct _GRETHREAD *v10; // rax
  bool v11; // zf
  HSEMAPHORE v12; // rbx
  struct _GRETHREAD *v13; // rax
  int v14; // eax
  HSEMAPHORE v15; // rbx
  struct _GRETHREAD *v16; // rax
  HSEMAPHORE v17; // rbx
  struct _GRETHREAD *v18; // rax
  HSEMAPHORE v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h] BYREF
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  HSEMAPHORE v23; // [rsp+38h] [rbp-40h] BYREF
  HSEMAPHORE v24; // [rsp+40h] [rbp-38h] BYREF
  __int64 v25; // [rsp+48h] [rbp-30h] BYREF
  __int64 v26; // [rsp+50h] [rbp-28h]
  HSEMAPHORE v27; // [rsp+58h] [rbp-20h]
  __int64 v28; // [rsp+60h] [rbp-18h]
  _QWORD *v30; // [rsp+C8h] [rbp+50h] BYREF
  _QWORD *v31; // [rsp+D0h] [rbp+58h] BYREF
  HSEMAPHORE v32; // [rsp+D8h] [rbp+60h] BYREF

  v1 = 0;
  LODWORD(v30) = 0;
  v2 = 0;
  v3 = Gre::Base::Globals(a1);
  v28 = *(_QWORD *)v3 + 624LL;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v28);
  v27 = (HSEMAPHORE)(*(_QWORD *)v3 + 1144LL);
  GreAcquireSemaphoreInternal(v27);
  GrepAcquireLockValidate<2>();
  v26 = *(_QWORD *)v3 + 728LL;
  GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v26);
  v4 = (__int64 *)*((_QWORD *)v3 + 227);
  do
  {
    if ( !v4 )
      break;
    v5 = 0;
    if ( v4[2] && *((_DWORD *)v4 + 8) == 1 && *(_QWORD *)(v4[113] + 624) )
    {
      GreAcquireSemaphore<19,>(v3);
      v6 = 0LL;
      for ( i = (_QWORD *)*((_QWORD *)v3 + 494); ; i = (_QWORD *)*i )
      {
        v8 = 0;
        if ( v2 >= 0 )
        {
          if ( i )
          {
            v1 |= 1u;
            if ( (__int64 *)i[222] == v4 )
              v8 = 1;
          }
        }
        if ( (v1 & 1) != 0 )
          v1 &= ~1u;
        if ( !v8 )
          break;
        v31 = i;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v31, v3);
        GreReleaseSemaphoreExclusive<19,>(v3);
        if ( v6 )
        {
          v30 = v6;
          PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v30, v3);
        }
        if ( v31 && (v31[5] & 1) != 0 )
        {
          SEMOBJ<4>::SEMOBJ<4>((HSEMAPHORE *)&v22, (__int64)&v31);
          SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v21, v3);
          SEMOBJ<10>::SEMOBJ<10>(&v20, v3);
          SEMOBJ<8>::SEMOBJ<8>(&v32, (__int64)&v31);
          PDEVOBJ::vSync((PDEVOBJ *)&v31, (struct _SURFOBJ *)((v31[318] + 24LL) & -(__int64)(v31[318] != 0LL)), 0LL, 0);
          if ( !v5 )
          {
            v5 = 1;
            if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(v4[113] + 624))(
                   *((_QWORD *)a1 + 3),
                   *((_QWORD *)a1 + 2)) )
            {
              *((_DWORD *)v4 + 17) = 3;
            }
            else
            {
              *((_DWORD *)v4 + 17) = 6;
              v2 = -2143354873;
            }
          }
          v9 = v32;
          if ( v32 )
          {
            EtwTraceGreLockReleaseSemaphore(L"DevLock", v32);
            v10 = GreGetCurrentThreadCrossSessionCheck();
            if ( v10 )
            {
              v11 = (*((_BYTE *)v10 + 16))-- == 1;
              if ( v11 )
                *(_QWORD *)v10 &= ~0x100uLL;
              if ( !*(_QWORD *)v10 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v9);
            v32 = 0LL;
          }
          v12 = v20;
          if ( v20 )
          {
            EtwTraceGreLockReleaseSemaphore(L"HT", v20);
            v13 = GreGetCurrentThreadCrossSessionCheck();
            if ( v13 )
            {
              v11 = (*((_BYTE *)v13 + 18))-- == 1;
              if ( v11 )
                *(_QWORD *)v13 &= ~0x400uLL;
              if ( !*(_QWORD *)v13 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v12);
            v20 = 0LL;
          }
          if ( v21 )
          {
            GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
              v21);
            v21 = 0LL;
          }
          if ( v22 )
          {
            GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
              v22);
            v22 = 0LL;
          }
        }
        GreAcquireSemaphore<19,>(v3);
        v6 = i;
      }
      GreReleaseSemaphoreExclusive<19,>(v3);
      if ( v6 )
      {
        v30 = v6;
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v30, v3);
      }
      if ( !v5 && v2 >= 0 )
      {
        SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v25, v3);
        SEMOBJ<10>::SEMOBJ<10>(&v24, v3);
        SEMOBJ<19>::SEMOBJ<19>(&v23, (HSEMAPHORE *)v3);
        v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v4[113] + 624))(*((_QWORD *)a1 + 3), *((_QWORD *)a1 + 2));
        if ( !v14 )
          v2 = -2143354873;
        *((_DWORD *)v4 + 17) = v14 != 0 ? 3 : 6;
        v15 = v23;
        if ( v23 )
        {
          EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v23);
          v16 = GreGetCurrentThreadCrossSessionCheck();
          if ( v16 )
          {
            v11 = (*((_BYTE *)v16 + 27))-- == 1;
            if ( v11 )
              *(_QWORD *)v16 &= ~0x80000uLL;
            if ( !*(_QWORD *)v16 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v15);
          v23 = 0LL;
        }
        v17 = v24;
        if ( v24 )
        {
          EtwTraceGreLockReleaseSemaphore(L"HT", v24);
          v18 = GreGetCurrentThreadCrossSessionCheck();
          if ( v18 )
          {
            v11 = (*((_BYTE *)v18 + 18))-- == 1;
            if ( v11 )
              *(_QWORD *)v18 &= ~0x400uLL;
            if ( !*(_QWORD *)v18 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v17);
          v24 = 0LL;
        }
        if ( v25 )
        {
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            v25);
          v25 = 0LL;
        }
      }
    }
    v4 = (__int64 *)*v4;
  }
  while ( v2 >= 0 );
  if ( v26 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v26);
  if ( v27 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      (__int64)v27);
  if ( v28 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v28);
  return (unsigned int)v2;
}
