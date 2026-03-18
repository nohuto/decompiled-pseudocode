/*
 * XREFs of GreDrvReconnect @ 0x140335C68
 * Callers:
 *     xxxRemoteReconnect @ 0x1402D3988 (xxxRemoteReconnect.c)
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
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400F60B8 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14025549C (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140295EA4 (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140335B2C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140335B70 (--$GreReleaseSemaphoreExclusive@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDrvReconnect(Gre::Base *a1)
{
  int v1; // r12d
  int v2; // r14d
  HSEMAPHORE *v3; // rbx
  __int64 *v4; // rdi
  int v5; // r13d
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // r15
  __int64 *i; // rsi
  bool v9; // al
  int v10; // eax
  __int64 v11; // rdx
  void (__fastcall *v12)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  HSEMAPHORE v13; // rbx
  struct _GRETHREAD *v14; // rax
  bool v15; // zf
  HSEMAPHORE v16; // rbx
  struct _GRETHREAD *v17; // rax
  int v18; // esi
  HSEMAPHORE v19; // rbx
  struct _GRETHREAD *v20; // rax
  HSEMAPHORE v21; // rbx
  struct _GRETHREAD *v22; // rax
  struct Gre::Base::SESSION_GLOBALS *v24; // [rsp+30h] [rbp-49h]
  HSEMAPHORE v25; // [rsp+38h] [rbp-41h] BYREF
  HSEMAPHORE v26; // [rsp+40h] [rbp-39h] BYREF
  __int64 v27; // [rsp+48h] [rbp-31h] BYREF
  __int64 v28; // [rsp+50h] [rbp-29h] BYREF
  HSEMAPHORE v29; // [rsp+58h] [rbp-21h] BYREF
  HSEMAPHORE v30; // [rsp+60h] [rbp-19h] BYREF
  __int64 v31; // [rsp+68h] [rbp-11h] BYREF
  __int64 v32; // [rsp+70h] [rbp-9h] BYREF
  __int64 v33; // [rsp+78h] [rbp-1h] BYREF
  __int64 v34; // [rsp+80h] [rbp+7h] BYREF
  __int64 v35[9]; // [rsp+88h] [rbp+Fh] BYREF
  int v37; // [rsp+F0h] [rbp+77h]
  _QWORD *v38; // [rsp+F8h] [rbp+7Fh] BYREF

  v37 = 1;
  v1 = 0;
  v2 = 0;
  v24 = Gre::Base::Globals(a1);
  v3 = (HSEMAPHORE *)v24;
  SEMOBJ<1>::SEMOBJ<1>(v35, v24);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v34, v24);
  SEMOBJ<3>::SEMOBJ<3>(&v33, v24);
  v4 = (__int64 *)*((_QWORD *)v24 + 227);
  do
  {
    if ( !v4 )
      break;
    v5 = 0;
    if ( v4[2] && *((_DWORD *)v4 + 8) == 1 && *(_QWORD *)(v4[113] + 632) )
    {
      GreAcquireSemaphore<19,>(v3);
      v7 = Gre::Base::Globals(v6);
      for ( i = (__int64 *)*((_QWORD *)v7 + 494); ; i = (__int64 *)*i )
      {
        v9 = 0;
        if ( v2 >= 0 )
        {
          if ( i )
          {
            v1 |= 1u;
            if ( (__int64 *)i[222] == v4 )
              v9 = 1;
          }
        }
        if ( (v1 & 1) != 0 )
          v1 &= ~1u;
        if ( !v9 )
          break;
        v38 = i;
        if ( i && (i[5] & 1) != 0 )
        {
          GreReleaseSemaphoreExclusive<19,>((HSEMAPHORE *)v7);
          SEMOBJ<4>::SEMOBJ<4>((HSEMAPHORE *)&v28, (__int64)&v38);
          SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v27, v7);
          SEMOBJ<10>::SEMOBJ<10>(&v26, v7);
          SEMOBJ<8>::SEMOBJ<8>(&v25, (__int64)&v38);
          PDEVOBJ::vSync((PDEVOBJ *)&v38, (struct _SURFOBJ *)((v38[318] + 24LL) & -(__int64)(v38[318] != 0LL)), 0LL, 0);
          if ( v5 )
          {
            v10 = v37;
          }
          else
          {
            v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v4[113] + 632))(*((_QWORD *)a1 + 3), *((_QWORD *)a1 + 2));
            v37 = v10;
            v5 = 1;
            if ( v10 )
            {
              *((_DWORD *)v4 + 17) = 2;
            }
            else
            {
              *((_DWORD *)v4 + 17) = 5;
              v2 = -2143354874;
            }
          }
          v11 = v38[224];
          v32 = v11;
          if ( v10 == 1 && (*(_DWORD *)(v11 + 24) & 0x800) != 0 )
          {
            v12 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v38[357];
            if ( v12 )
              v12(v38[223], &v32, 0LL, 0LL, *(_DWORD *)(v11 + 28));
          }
          v13 = v25;
          if ( v25 )
          {
            EtwTraceGreLockReleaseSemaphore(L"DevLock", v25);
            v14 = GreGetCurrentThreadCrossSessionCheck();
            if ( v14 )
            {
              v15 = (*((_BYTE *)v14 + 16))-- == 1;
              if ( v15 )
                *(_QWORD *)v14 &= ~0x100uLL;
              if ( !*(_QWORD *)v14 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v13);
            v25 = 0LL;
          }
          v16 = v26;
          if ( v26 )
          {
            EtwTraceGreLockReleaseSemaphore(L"HT", v26);
            v17 = GreGetCurrentThreadCrossSessionCheck();
            if ( v17 )
            {
              v15 = (*((_BYTE *)v17 + 18))-- == 1;
              if ( v15 )
                *(_QWORD *)v17 &= ~0x400uLL;
              if ( !*(_QWORD *)v17 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v16);
            v26 = 0LL;
          }
          if ( v27 )
          {
            GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
              v27);
            v27 = 0LL;
          }
          if ( v28 )
          {
            GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
              v28);
            v28 = 0LL;
          }
          GreAcquireSemaphore<19,>((HSEMAPHORE *)v7);
        }
      }
      GreReleaseSemaphoreExclusive<19,>((HSEMAPHORE *)v7);
      if ( !v5 && v2 >= 0 )
      {
        SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v31, v7);
        SEMOBJ<10>::SEMOBJ<10>(&v30, v7);
        SEMOBJ<19>::SEMOBJ<19>(&v29, (HSEMAPHORE *)v7);
        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v4[113] + 632))(*((_QWORD *)a1 + 3), *((_QWORD *)a1 + 2));
        v37 = v18;
        if ( !v18 )
          v2 = -2143354873;
        *((_DWORD *)v4 + 17) = v18 != 0 ? 2 : 5;
        v19 = v29;
        if ( v29 )
        {
          EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v29);
          v20 = GreGetCurrentThreadCrossSessionCheck();
          if ( v20 )
          {
            v15 = (*((_BYTE *)v20 + 27))-- == 1;
            if ( v15 )
              *(_QWORD *)v20 &= ~0x80000uLL;
            if ( !*(_QWORD *)v20 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v19);
          v29 = 0LL;
        }
        v21 = v30;
        if ( v30 )
        {
          EtwTraceGreLockReleaseSemaphore(L"HT", v30);
          v22 = GreGetCurrentThreadCrossSessionCheck();
          if ( v22 )
          {
            v15 = (*((_BYTE *)v22 + 18))-- == 1;
            if ( v15 )
              *(_QWORD *)v22 &= ~0x400uLL;
            if ( !*(_QWORD *)v22 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v21);
          v30 = 0LL;
        }
        if ( v31 )
        {
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            v31);
          v31 = 0LL;
        }
      }
      v3 = (HSEMAPHORE *)v24;
    }
    v4 = (__int64 *)*v4;
  }
  while ( v2 >= 0 );
  if ( v33 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v33);
  if ( v34 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v34);
  if ( v35[0] )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v35[0]);
  return (unsigned int)v2;
}
