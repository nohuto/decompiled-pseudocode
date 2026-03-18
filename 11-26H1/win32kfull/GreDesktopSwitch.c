/*
 * XREFs of GreDesktopSwitch @ 0x140230AF8
 * Callers:
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x14006BD7C (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400725E4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140072EE8 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x14009E784 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FA80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FAB8 (--0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FAF8 (--$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB18 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB84 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x1400A8A5C (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB3D8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreDesktopSwitch(__int64 a1, int a2, int a3, __int64 a4)
{
  struct Gre::Base::SESSION_GLOBALS *v8; // rdi
  char v9; // si
  Gre::Base *v10; // rcx
  _QWORD *i; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  _BYTE v15[16]; // [rsp+20h] [rbp-58h] BYREF
  HSEMAPHORE v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  HSEMAPHORE v18; // [rsp+40h] [rbp-38h]
  HSEMAPHORE v19; // [rsp+48h] [rbp-30h] BYREF
  HSEMAPHORE v20; // [rsp+50h] [rbp-28h] BYREF
  HSEMAPHORE v21; // [rsp+58h] [rbp-20h]
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF

  v22 = a1;
  if ( !a1 )
    return 3221225480LL;
  v8 = Gre::Base::Globals((Gre::Base *)a1);
  if ( GrepIsLockOwnedByCurrentThread<1,Gre::Base::SESSION_GLOBALS>(v8) )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    GreAcquireSemaphoreShared<1,>(v8);
  }
  GreAcquireUnownedDMCLockShared::GreAcquireUnownedDMCLockShared((GreAcquireUnownedDMCLockShared *)v15, v8);
  SEMOBJ<2>::SEMOBJ<2>(&v16, v8);
  SEMOBJ<3>::SEMOBJ<3>(&v17, v8);
  v18 = *(HSEMAPHORE *)(a1 + 56);
  GreAcquireSemaphoreInternal(v18);
  GrepAcquireLockValidate<4>();
  SEMOBJ<6>::SEMOBJ<6>(&v19, v8);
  SEMOBJ<7>::SEMOBJ<7>(&v20, v8);
  v21 = *(HSEMAPHORE *)(a1 + 48);
  GreAcquireSemaphoreInternal(v21);
  GrepAcquireLockValidate<8>();
  if ( IsDwmActive(v10) && !a3 )
    SpRenderHint((struct PDEVOBJ *)&v22, 65539 - (a2 != 0), 0LL, 0LL);
  ENTER_GRE_DWM_CRIT::~ENTER_GRE_DWM_CRIT((ENTER_GRE_DWM_CRIT *)v15);
  if ( (*(_DWORD *)(a1 + 40) & 0x20000) != 0 )
  {
    for ( i = **(_QWORD ***)(a1 + 1784); i; i = (_QWORD *)*i )
    {
      v13 = i[6];
      if ( v13 )
      {
        if ( (*(_DWORD *)(v13 + 40) & 1) != 0 )
        {
          v14 = *(_QWORD *)(v13 + 2544);
          if ( v14 )
            *(_QWORD *)(v14 + 648) = a4;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 2544) + 648LL) = a4;
  }
  if ( v9 )
    GreReleaseSemaphoreShared<1,>((__int64 *)v8);
  return 0LL;
}
